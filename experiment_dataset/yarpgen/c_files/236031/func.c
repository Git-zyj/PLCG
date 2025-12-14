/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236031
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236031 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236031
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 2; i_0 < 23; i_0 += 1) 
    {
        for (unsigned int i_1 = 2; i_1 < 22; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_0] [i_1] = min((((/* implicit */long long int) (~(arr_3 [i_1 + 1] [i_1 - 2])))), (min((((((/* implicit */_Bool) (unsigned char)197)) ? (((/* implicit */long long int) arr_1 [i_0])) : (604428973405667856LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)75)) ? (arr_1 [i_0]) : (4096405176U)))))));
                var_12 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((var_1), (arr_0 [i_0 - 2])))) ? (((((/* implicit */_Bool) 4096405161U)) ? (((/* implicit */long long int) 198562135U)) : (-1LL))) : (((/* implicit */long long int) ((arr_0 [i_0 - 2]) - (arr_0 [i_0 - 2]))))));
                /* LoopSeq 2 */
                for (long long int i_2 = 0; i_2 < 25; i_2 += 2) 
                {
                    arr_9 [i_0] [i_1 + 2] [i_0] = min((((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_4 [i_0] [i_0])) <= (((/* implicit */int) arr_4 [i_0] [i_0])))))) & (var_11))), (((/* implicit */long long int) arr_2 [i_2])));
                    var_13 &= ((/* implicit */unsigned char) 6097283250978002897LL);
                    var_14 = ((/* implicit */long long int) max((var_14), (((/* implicit */long long int) ((var_3) != (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_2])) && (((/* implicit */_Bool) 3767977557U)))))))))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 25; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 3; i_4 < 24; i_4 += 1) 
                        {
                            {
                                arr_15 [i_0] [i_0] = arr_3 [i_3] [i_3];
                                var_15 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) arr_7 [i_4] [9U]))))) >= (((/* implicit */int) (!(((/* implicit */_Bool) 1724112644U))))))))) != (min((((/* implicit */long long int) (!(((/* implicit */_Bool) var_0))))), (var_4)))));
                            }
                        } 
                    } 
                    var_16 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [i_0] [i_1 + 3] [i_1 + 1]))))) || (((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_0] [i_0 - 2] [24LL]))));
                }
                for (long long int i_5 = 0; i_5 < 25; i_5 += 1) 
                {
                    /* LoopNest 2 */
                    for (long long int i_6 = 3; i_6 < 21; i_6 += 4) 
                    {
                        for (long long int i_7 = 2; i_7 < 21; i_7 += 4) 
                        {
                            {
                                var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [1LL] [i_0 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_1] [i_0 + 2] [i_0 + 1] [i_0]))) : (((((/* implicit */_Bool) arr_19 [i_5] [i_0 - 1] [18LL] [18LL])) ? (var_6) : (arr_7 [8LL] [i_0])))));
                                arr_23 [i_0] [i_0] [i_0] [i_5] [i_5] [i_5] [i_7 + 3] = ((/* implicit */unsigned int) var_3);
                                var_18 ^= ((/* implicit */long long int) arr_17 [i_0 - 2] [4U] [6LL]);
                            }
                        } 
                    } 
                    arr_24 [i_0 + 2] [i_1] [i_1 + 3] [i_0] = (~(((((/* implicit */_Bool) max((((/* implicit */long long int) arr_16 [i_0] [i_1] [i_1] [i_5])), (-2442634956647588709LL)))) ? (arr_20 [i_0] [i_0] [i_0] [(unsigned char)24] [i_5]) : (arr_7 [i_5] [i_1 - 2]))));
                    var_19 = ((/* implicit */long long int) 2570854650U);
                }
                arr_25 [12LL] [i_1 + 3] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_14 [i_0] [i_0] [i_0 + 1])) >> (((68719476735LL) - (68719476729LL)))));
                var_20 ^= min((((/* implicit */long long int) arr_4 [16U] [16U])), (((((/* implicit */_Bool) arr_1 [i_0 + 1])) ? (max((var_2), (((/* implicit */long long int) arr_3 [i_0] [19LL])))) : (((/* implicit */long long int) ((/* implicit */int) ((var_1) > (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_0] [i_0] [i_0 + 1] [i_0]))))))))));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned char) var_2);
    var_22 |= ((/* implicit */unsigned char) 766917880U);
    var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) 4096405166U))));
}
