/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22761
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22761 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22761
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        var_16 = ((/* implicit */unsigned long long int) (~(-376807139)));
        var_17 -= ((/* implicit */int) var_12);
        /* LoopNest 2 */
        for (long long int i_1 = 2; i_1 < 23; i_1 += 4) 
        {
            for (int i_2 = 1; i_2 < 23; i_2 += 4) 
            {
                {
                    var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)59680)) ? (((/* implicit */int) (unsigned short)12367)) : (((/* implicit */int) (signed char)48)))))));
                    arr_7 [i_0] [i_0] [i_0] = ((/* implicit */int) ((short) var_1));
                    var_19 |= ((/* implicit */_Bool) ((signed char) var_12));
                    /* LoopSeq 2 */
                    for (short i_3 = 1; i_3 < 21; i_3 += 4) 
                    {
                        var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)5845)) + (arr_8 [i_1 + 1] [i_1 - 2] [i_1 - 2]))))));
                        arr_12 [i_0] [i_1] [i_2 - 1] [i_3] = ((((/* implicit */int) arr_9 [i_1 - 1] [i_1 + 1] [i_1 + 1] [i_2 + 1])) << (((((/* implicit */int) (unsigned short)59672)) - (59661))));
                    }
                    for (unsigned long long int i_4 = 0; i_4 < 24; i_4 += 3) 
                    {
                        arr_15 [i_0] [i_0] [i_2] [i_4] [i_4] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)27)) ? (((((/* implicit */_Bool) arr_5 [i_4] [i_1] [i_4] [23])) ? (arr_5 [i_4] [23LL] [i_1 - 2] [15ULL]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)59695))))) : (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_1 - 2] [i_1] [i_1 - 1] [i_1] [i_1 - 1] [i_1 + 1])))));
                        arr_16 [i_0] [i_1] [i_2] [i_2] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_0] [(_Bool)1] [i_2] [i_4] [i_0])) ? (((/* implicit */unsigned long long int) 8954055998649980257LL)) : (7120403792935354793ULL)))) ? ((~(12993030345167340110ULL))) : (((((/* implicit */_Bool) arr_9 [(signed char)21] [15] [i_1] [15])) ? (((/* implicit */unsigned long long int) arr_4 [i_0] [i_0] [i_0])) : (var_15)))));
                    }
                }
            } 
        } 
        var_21 = ((/* implicit */unsigned long long int) (-(arr_4 [i_0] [i_0] [i_0])));
    }
    var_22 = ((/* implicit */int) var_4);
    var_23 = ((/* implicit */unsigned long long int) (unsigned short)59681);
    var_24 = ((/* implicit */unsigned short) var_0);
}
