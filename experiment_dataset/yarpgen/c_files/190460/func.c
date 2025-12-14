/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190460
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190460 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190460
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
    var_10 = ((/* implicit */int) var_4);
    var_11 = ((/* implicit */long long int) (-((+((-(18446744073709551615ULL)))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 20; i_2 += 2) 
            {
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (signed char i_3 = 0; i_3 < 20; i_3 += 1) 
                    {
                        var_12 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_11 [i_1] [i_1] [i_2])) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) (_Bool)0))));
                        /* LoopSeq 1 */
                        for (long long int i_4 = 1; i_4 < 19; i_4 += 4) 
                        {
                            var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_14 [i_4] [(short)0] [(short)0] [i_3] [i_4] [i_4 - 1])) ? (491520LL) : (((/* implicit */long long int) ((/* implicit */int) var_0)))));
                            var_14 |= ((/* implicit */short) arr_10 [i_0] [i_1] [i_4 - 1] [i_3] [i_2] [10U]);
                            var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_3] [i_2] [i_1]))) : (arr_13 [i_3] [i_1] [i_4 - 1] [(signed char)11] [i_4] [i_0])));
                        }
                        /* LoopSeq 2 */
                        for (short i_5 = 2; i_5 < 18; i_5 += 3) 
                        {
                            var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) ((((/* implicit */_Bool) (~(var_6)))) ? (arr_15 [i_5 + 2] [i_2]) : (((/* implicit */int) (short)-32321)))))));
                            var_17 = ((/* implicit */int) (-(((((/* implicit */_Bool) arr_1 [(_Bool)0] [(_Bool)0])) ? (((/* implicit */long long int) var_1)) : (var_4)))));
                        }
                        for (long long int i_6 = 0; i_6 < 20; i_6 += 2) 
                        {
                            var_18 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_15 [i_0] [i_3])) ? (((/* implicit */int) arr_0 [i_6])) : (((/* implicit */int) arr_0 [i_6]))));
                            arr_23 [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) 1099511627775ULL)) ? (((/* implicit */int) arr_1 [i_3] [i_3])) : (((/* implicit */int) arr_1 [i_0] [i_1]))));
                        }
                    }
                    for (int i_7 = 0; i_7 < 20; i_7 += 1) 
                    {
                        var_19 ^= ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) (~(var_5))))))), ((~(18446742974197923848ULL)))));
                        var_20 &= ((/* implicit */int) ((((/* implicit */long long int) min(((~(((/* implicit */int) (signed char)40)))), (((int) arr_21 [i_0] [i_1] [(_Bool)1] [9LL]))))) % (((((/* implicit */_Bool) (~(((/* implicit */int) arr_22 [i_0] [10] [8] [i_1]))))) ? (min((var_4), (((/* implicit */long long int) var_5)))) : (((/* implicit */long long int) var_6))))));
                        var_21 = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) (signed char)-127)), (min((((var_5) % (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0] [i_0] [(signed char)11]))))), (((/* implicit */unsigned int) arr_22 [i_7] [i_2] [i_2] [i_1]))))));
                    }
                    var_22 = min((((/* implicit */unsigned long long int) max((((/* implicit */long long int) min((var_5), (((/* implicit */unsigned int) (signed char)16))))), (arr_16 [i_2] [i_1])))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 491496LL)) ? (((/* implicit */int) (short)23621)) : (((/* implicit */int) arr_20 [i_0] [i_0] [i_0] [18] [i_2] [18]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : ((((_Bool)0) ? (7ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [i_1]))))))));
                    var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) min((min((min((((/* implicit */long long int) arr_14 [i_1] [i_1] [i_2] [i_2] [i_1] [i_2])), (arr_16 [i_1] [10ULL]))), (((/* implicit */long long int) ((arr_2 [i_2]) ? (arr_7 [(short)2] [(short)2] [(short)2]) : (((/* implicit */int) arr_0 [i_0]))))))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) ((short) arr_10 [i_2] [18U] [18U] [i_1] [(short)5] [i_0]))) : (((/* implicit */int) (!(((/* implicit */_Bool) 18446742974197923858ULL)))))))))))));
                }
            } 
        } 
    } 
}
