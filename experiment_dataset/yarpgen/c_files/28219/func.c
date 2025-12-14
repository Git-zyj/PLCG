/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28219
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28219 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28219
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 24; i_2 += 2) 
            {
                {
                    arr_11 [i_0] [i_0] [i_0] = (!(((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0])));
                    /* LoopSeq 3 */
                    for (unsigned long long int i_3 = 0; i_3 < 24; i_3 += 3) 
                    {
                        var_12 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)0)) >> (((/* implicit */int) (_Bool)1))));
                        arr_15 [(signed char)14] [9ULL] [i_1] [i_1] [i_0] [i_0] = ((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : ((~((~(var_2))))));
                        var_13 = ((/* implicit */unsigned short) arr_0 [i_0] [i_1]);
                        arr_16 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) (_Bool)0);
                    }
                    /* vectorizable */
                    for (unsigned long long int i_4 = 0; i_4 < 24; i_4 += 3) /* same iter space */
                    {
                        var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)0)) >= (arr_0 [i_1] [i_1])));
                        var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) (~(arr_5 [i_0]))))));
                        arr_19 [i_0] [i_0] [i_0] [(signed char)18] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0])) ? (((/* implicit */unsigned int) arr_10 [i_0] [i_0] [i_0] [i_0])) : (arr_5 [i_0])));
                        arr_20 [(signed char)14] [i_0] [i_4] [i_0] [i_0] = ((/* implicit */_Bool) ((((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) arr_3 [i_1])))) - (((/* implicit */int) var_3))));
                    }
                    for (unsigned long long int i_5 = 0; i_5 < 24; i_5 += 3) /* same iter space */
                    {
                        var_16 |= ((/* implicit */unsigned int) min((((/* implicit */unsigned char) ((arr_2 [i_0]) != (arr_2 [i_0])))), (var_1)));
                        var_17 += ((((/* implicit */unsigned int) ((/* implicit */int) var_6))) & (((var_2) & (((((/* implicit */_Bool) 268419072U)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))))))));
                        var_18 += ((/* implicit */short) ((((((/* implicit */int) (short)(-32767 - 1))) + (2147483647))) >> (min((var_4), (((/* implicit */unsigned int) var_10))))));
                    }
                    arr_23 [i_0] [i_0] = ((/* implicit */int) arr_22 [i_0] [i_0] [i_0] [i_0]);
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */short) var_2);
}
