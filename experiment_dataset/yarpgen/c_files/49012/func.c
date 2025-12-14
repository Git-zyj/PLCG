/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49012
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49012 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49012
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
    var_17 &= ((/* implicit */long long int) (-(min((max((((/* implicit */unsigned long long int) var_13)), (var_11))), (((/* implicit */unsigned long long int) max(((short)-31366), (var_10))))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            for (signed char i_2 = 4; i_2 < 15; i_2 += 3) 
            {
                {
                    /* LoopSeq 4 */
                    for (long long int i_3 = 0; i_3 < 17; i_3 += 1) 
                    {
                        arr_13 [i_0] [i_0] [i_1] [i_1] [i_2] [i_0] = ((/* implicit */signed char) min((min((((/* implicit */long long int) min((1476253011), (((/* implicit */int) arr_5 [i_3]))))), (var_3))), (((((/* implicit */_Bool) ((int) var_2))) ? (min((var_12), (var_6))) : (((/* implicit */long long int) ((/* implicit */int) var_14)))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (short i_4 = 0; i_4 < 17; i_4 += 2) 
                        {
                            var_18 = ((/* implicit */short) (!(((/* implicit */_Bool) (+(var_12))))));
                            var_19 = arr_6 [i_3];
                        }
                        arr_16 [i_1] = ((/* implicit */short) (+((~(var_6)))));
                    }
                    for (unsigned long long int i_5 = 0; i_5 < 17; i_5 += 3) 
                    {
                        arr_19 [i_1] [i_1] [i_2] [i_5] = ((/* implicit */short) var_7);
                        arr_20 [i_0] [i_1] [i_0] [i_2] [i_5] [i_5] = ((/* implicit */signed char) arr_7 [i_2 - 1] [i_1] [i_2 + 2] [i_2]);
                    }
                    for (long long int i_6 = 0; i_6 < 17; i_6 += 3) 
                    {
                        arr_23 [i_1] = ((/* implicit */long long int) var_1);
                        var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) arr_7 [i_6] [(signed char)12] [(signed char)12] [(short)12]))));
                        var_21 *= min((max((((/* implicit */unsigned long long int) var_16)), (11367452930438063551ULL))), (((/* implicit */unsigned long long int) min(((short)-19835), (arr_8 [i_2] [i_2 - 3] [i_2 + 2])))));
                    }
                    /* vectorizable */
                    for (unsigned int i_7 = 0; i_7 < 17; i_7 += 1) 
                    {
                        var_22 = ((/* implicit */_Bool) min((var_22), (var_14)));
                        arr_27 [i_0] [i_1] [i_2] [i_1] = ((/* implicit */signed char) ((((/* implicit */int) (short)4088)) < (arr_1 [i_2 - 2] [i_1])));
                        var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) ((int) arr_2 [i_0] [i_7])))));
                    }
                    var_24 = ((/* implicit */short) min((((/* implicit */unsigned long long int) ((long long int) min((((/* implicit */int) arr_17 [i_1] [i_1])), (arr_2 [i_0] [i_0]))))), (min((((/* implicit */unsigned long long int) min((((/* implicit */short) (_Bool)1)), (arr_8 [i_0] [i_1] [i_2])))), (18446744073709551615ULL)))));
                    arr_28 [i_0] [i_0] [i_1] = ((/* implicit */signed char) max((((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) | (-8935145527781255363LL)))) ? (var_12) : (((/* implicit */long long int) (~(((/* implicit */int) arr_9 [i_0] [i_0] [i_1] [i_2]))))))), (((/* implicit */long long int) var_14))));
                    var_25 *= ((/* implicit */long long int) min(((-(((/* implicit */int) arr_21 [i_0] [i_1] [i_2 + 1] [i_1])))), (((((var_8) + (2147483647))) >> (((((/* implicit */int) (unsigned char)103)) - (89)))))));
                }
            } 
        } 
    } 
}
