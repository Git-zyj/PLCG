/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19690
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19690 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19690
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
    for (int i_0 = 3; i_0 < 11; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 4; i_1 < 10; i_1 += 1) 
        {
            {
                var_11 = ((unsigned long long int) ((_Bool) arr_2 [i_1 - 2]));
                /* LoopSeq 3 */
                for (unsigned long long int i_2 = 2; i_2 < 11; i_2 += 3) 
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 12; i_3 += 3) 
                    {
                        for (int i_4 = 0; i_4 < 12; i_4 += 3) 
                        {
                            {
                                var_12 = ((/* implicit */_Bool) min((var_12), (((/* implicit */_Bool) max((9029778359909032185ULL), (((/* implicit */unsigned long long int) -1)))))));
                                arr_13 [1ULL] [i_1] [i_2 - 2] [i_0] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned char) ((887360175) & (-1))))) & (((/* implicit */int) ((_Bool) arr_2 [i_1 - 4])))));
                                arr_14 [i_3] [i_0] [i_3] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */short) ((long long int) 0));
                                var_13 -= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (((((~(((/* implicit */int) (_Bool)1)))) + (2147483647))) << (((((/* implicit */int) (_Bool)1)) - (1))))))));
                            }
                        } 
                    } 
                    var_14 = ((/* implicit */long long int) arr_7 [i_1 + 2]);
                    var_15 = ((((/* implicit */_Bool) ((((/* implicit */int) max((arr_2 [i_0 - 2]), (arr_8 [i_0] [i_1] [i_0])))) - (((/* implicit */int) arr_11 [i_0] [i_2] [i_2 - 1] [i_2]))))) ? (((max((((/* implicit */unsigned long long int) (_Bool)1)), (0ULL))) - (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)213))))) : (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 8159280333259109151LL)) ? (0) : (arr_1 [i_0 + 1] [(_Bool)1])))), (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) + (arr_12 [i_0] [i_1] [i_2] [i_2] [i_2] [i_2 - 2]))))));
                }
                for (unsigned char i_5 = 0; i_5 < 12; i_5 += 3) /* same iter space */
                {
                    arr_19 [i_0] [(short)4] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((int) arr_0 [i_1 - 2]))) && (((/* implicit */_Bool) ((unsigned int) (_Bool)1)))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_6 = 0; i_6 < 12; i_6 += 3) 
                    {
                        for (unsigned int i_7 = 0; i_7 < 12; i_7 += 4) 
                        {
                            {
                                var_16 *= ((/* implicit */_Bool) max((((/* implicit */unsigned int) 4064)), (((((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-59)) & (-4079)))) & (max((0U), (arr_9 [i_0] [i_1] [i_5] [i_7])))))));
                                var_17 = ((/* implicit */int) ((((_Bool) ((unsigned long long int) (_Bool)1))) ? (((max((0U), (((/* implicit */unsigned int) (unsigned char)255)))) * (((/* implicit */unsigned int) ((/* implicit */int) (!((_Bool)1))))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) -295321843169513188LL))))));
                            }
                        } 
                    } 
                    var_18 = ((/* implicit */long long int) ((((_Bool) ((((/* implicit */int) (_Bool)1)) << (((/* implicit */int) arr_0 [i_0 + 1]))))) ? (((/* implicit */int) ((((/* implicit */_Bool) ((arr_18 [i_1] [i_5]) / (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_5])) ? (((/* implicit */int) arr_4 [i_1] [i_0])) : (-1642995))))))) : (((/* implicit */int) ((unsigned char) ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (_Bool)1))))))));
                }
                /* vectorizable */
                for (unsigned char i_8 = 0; i_8 < 12; i_8 += 3) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_9 = 0; i_9 < 12; i_9 += 3) 
                    {
                        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */int) min((var_19), (((((/* implicit */_Bool) -1248668314)) ? (((/* implicit */int) ((unsigned short) arr_6 [(short)0] [(short)0]))) : (((((/* implicit */_Bool) 18446744073709551609ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))))));
                                var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)51)) ? (((/* implicit */int) ((signed char) 0))) : (((/* implicit */int) (unsigned char)227))));
                            }
                        } 
                    } 
                    arr_35 [6U] [6U] |= ((/* implicit */unsigned int) (unsigned char)21);
                    var_21 += ((/* implicit */unsigned long long int) ((arr_30 [i_1 - 2] [i_0 - 2] [i_0 - 2]) | (arr_30 [i_1 - 2] [i_0 - 2] [i_0 - 2])));
                    var_22 = ((/* implicit */unsigned char) (+(arr_12 [3] [i_8] [i_1] [i_1] [i_0] [i_0 - 3])));
                }
            }
        } 
    } 
    var_23 = ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_5)) + (var_4)))) && (((/* implicit */_Bool) ((int) var_4))))));
    var_24 = ((/* implicit */unsigned long long int) ((int) var_8));
}
