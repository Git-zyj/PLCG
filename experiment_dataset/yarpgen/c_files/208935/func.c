/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208935
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208935 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208935
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    var_17 = ((/* implicit */_Bool) max((min((((/* implicit */unsigned long long int) var_3)), (((9953490298290035286ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))))), (((/* implicit */unsigned long long int) var_15))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)65533))))) < (((/* implicit */int) var_16))));
        /* LoopNest 2 */
        for (unsigned short i_1 = 3; i_1 < 12; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 13; i_2 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    for (long long int i_3 = 2; i_3 < 12; i_3 += 3) 
                    {
                        var_19 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) var_7))));
                        arr_11 [i_3] [i_2] [i_1 - 2] [i_0] = ((/* implicit */signed char) var_14);
                    }
                    for (unsigned long long int i_4 = 0; i_4 < 13; i_4 += 2) 
                    {
                        var_20 ^= ((/* implicit */unsigned short) ((8493253775419516346ULL) < (((/* implicit */unsigned long long int) 0LL))));
                        arr_16 [i_0] [(signed char)12] [i_0] [(unsigned short)4] = ((/* implicit */int) (!(((/* implicit */_Bool) var_3))));
                        var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) ((((((/* implicit */int) var_8)) + (2147483647))) << (((((/* implicit */int) (unsigned short)8513)) - (8513))))))));
                        arr_17 [i_0] [i_2] [i_2] [(signed char)3] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_0))));
                    }
                    arr_18 [i_0] [i_2] |= ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_16)) || (((/* implicit */_Bool) var_13)))))) + (var_4));
                }
            } 
        } 
        arr_19 [i_0] = (~(var_4));
    }
    var_22 = ((/* implicit */long long int) var_5);
    var_23 = ((/* implicit */long long int) max((((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (var_6) : (((/* implicit */int) var_5))))) & (var_1))), (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (_Bool)1)) : (var_11))), (var_6))))));
}
