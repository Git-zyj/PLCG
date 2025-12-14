/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43584
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43584 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43584
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
    var_19 = ((/* implicit */short) var_3);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 13; i_0 += 4) 
    {
        for (unsigned char i_1 = 3; i_1 < 13; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */unsigned long long int) min((arr_2 [i_1] [i_0 + 1]), (((/* implicit */long long int) (+(((/* implicit */int) var_1)))))));
                /* LoopSeq 3 */
                for (unsigned char i_2 = 0; i_2 < 14; i_2 += 4) 
                {
                    var_21 ^= ((/* implicit */int) var_7);
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 3; i_3 < 12; i_3 += 2) 
                    {
                        var_22 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0]))))) : (1757292318)))), (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)75)) ? (arr_2 [i_0] [i_2]) : (arr_2 [i_1] [i_2])))), (((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) arr_2 [i_0] [i_0])) : (arr_7 [i_0])))))));
                        /* LoopSeq 3 */
                        for (long long int i_4 = 1; i_4 < 11; i_4 += 1) 
                        {
                            arr_12 [i_0] [i_1] [i_2] [i_0] [6ULL] [i_3] [i_4] = ((/* implicit */_Bool) arr_8 [i_0]);
                            var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) (-(((((/* implicit */_Bool) arr_7 [i_2])) ? (arr_0 [i_0 - 1]) : (arr_0 [i_0]))))))));
                        }
                        for (short i_5 = 1; i_5 < 10; i_5 += 4) 
                        {
                            arr_15 [i_0] = ((/* implicit */signed char) arr_9 [i_0] [i_1] [i_0] [i_1] [(unsigned char)9]);
                            var_24 = ((/* implicit */long long int) max((var_24), (((/* implicit */long long int) arr_8 [i_2]))));
                            var_25 = ((/* implicit */unsigned int) arr_10 [i_0 + 1] [i_1 - 2] [i_2] [i_3 + 2] [i_5]);
                        }
                        for (int i_6 = 0; i_6 < 14; i_6 += 3) 
                        {
                            var_26 = ((/* implicit */signed char) 8571594912965269215LL);
                            var_27 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_2 [i_0] [1])) ? (min((((((/* implicit */_Bool) arr_8 [i_0])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_1)))), (((/* implicit */int) arr_14 [i_3] [i_3] [i_3 - 1] [i_3 + 1] [i_3 + 2] [i_3 + 2])))) : (((((/* implicit */int) var_4)) - (((((/* implicit */int) (_Bool)0)) / (((/* implicit */int) var_0))))))));
                        }
                    }
                    arr_18 [i_0 + 1] [i_1] [i_0] = ((/* implicit */unsigned char) (~(11412981536746415643ULL)));
                    arr_19 [i_0] [0LL] [i_2] [i_0 + 1] &= ((/* implicit */unsigned short) (~(arr_7 [i_2])));
                }
                for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) /* same iter space */
                {
                    var_28 = ((/* implicit */short) arr_17 [i_0] [(signed char)0] [i_0] [i_1 - 2] [i_0] [i_7]);
                    var_29 = ((/* implicit */unsigned char) arr_14 [i_0] [i_1] [i_1] [i_7 - 1] [i_7] [i_7]);
                }
                for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) /* same iter space */
                {
                    var_30 *= ((/* implicit */short) arr_25 [i_1 - 3]);
                    var_31 *= ((/* implicit */unsigned char) (((((_Bool)1) ? (max((((/* implicit */unsigned long long int) arr_22 [i_0])), (11412981536746415643ULL))) : (((arr_17 [i_1] [i_1 - 3] [12LL] [i_1] [i_1 - 3] [2ULL]) ? (arr_7 [(unsigned char)10]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [(unsigned char)10]))))))) / (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_23 [i_0] [i_1]))) & (var_3))))));
                }
            }
        } 
    } 
}
