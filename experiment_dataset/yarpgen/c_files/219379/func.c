/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219379
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219379 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219379
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
    var_19 = ((/* implicit */int) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (-4617423490321617068LL) : (((/* implicit */long long int) 2147483634))));
    var_20 = ((/* implicit */int) min((var_0), (var_6)));
    var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_10)) ? (((int) -1LL)) : (min((((/* implicit */int) (signed char)127)), (469762048)))));
    /* LoopSeq 2 */
    for (signed char i_0 = 1; i_0 < 24; i_0 += 4) 
    {
        arr_3 [i_0] [i_0 + 1] = ((/* implicit */signed char) (~(((int) (signed char)-41))));
        var_22 = arr_2 [i_0];
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 17; i_1 += 1) 
    {
        var_23 ^= ((/* implicit */int) ((((int) arr_1 [i_1 - 2])) == (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_1]))) <= (var_2))))));
        var_24 = ((/* implicit */long long int) min((var_24), (((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_1 [i_1]) & (var_18)))) ? (((/* implicit */int) ((((/* implicit */_Bool) -1LL)) || (((/* implicit */_Bool) var_18))))) : (-1505278707))))));
        /* LoopSeq 1 */
        for (signed char i_2 = 0; i_2 < 19; i_2 += 1) 
        {
            /* LoopSeq 2 */
            for (int i_3 = 2; i_3 < 17; i_3 += 2) 
            {
                var_25 = ((/* implicit */long long int) ((signed char) arr_6 [i_1] [i_2] [i_3 + 2]));
                var_26 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 586262356)) ? (-6241064531898792891LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-33)))))) && (((/* implicit */_Bool) (-(((/* implicit */int) (signed char)127)))))));
                arr_13 [i_1] [i_2] [4LL] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_12 [i_1 + 2] [i_1 + 1] [i_3 - 1] [i_1])) ? (2147483634) : ((-(-2147483634)))));
                var_27 = (-(arr_1 [i_1 + 1]));
            }
            for (int i_4 = 0; i_4 < 19; i_4 += 1) 
            {
                /* LoopNest 2 */
                for (int i_5 = 1; i_5 < 17; i_5 += 1) 
                {
                    for (int i_6 = 2; i_6 < 16; i_6 += 3) 
                    {
                        {
                            arr_23 [i_1] [i_1] [i_2] [i_1] [i_2] [i_1] = ((/* implicit */int) var_18);
                            arr_24 [i_1] [i_2] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((signed char) var_1)))) == (((((/* implicit */long long int) arr_21 [i_1] [i_2] [i_4] [i_5] [i_6] [i_6])) / (arr_6 [i_1] [i_1] [i_1])))));
                            var_28 = ((/* implicit */int) max((var_28), (var_11)));
                        }
                    } 
                } 
                var_29 = ((/* implicit */signed char) min((var_29), (((/* implicit */signed char) (((-(var_13))) + (((((/* implicit */_Bool) -2147483634)) ? (3560622451584166034LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-97))))))))));
            }
            var_30 = ((signed char) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_15)) : (var_16)));
            var_31 = ((/* implicit */int) min((var_31), ((-(((/* implicit */int) arr_14 [4LL] [i_1 - 2] [4LL]))))));
        }
    }
    var_32 = ((/* implicit */int) ((((var_2) + (9223372036854775807LL))) << (((((((((var_8) ^ (((/* implicit */long long int) var_10)))) | (((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (var_12))))) + (33LL))) - (28LL)))));
}
