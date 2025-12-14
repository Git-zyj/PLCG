/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221279
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221279 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221279
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
    for (int i_0 = 4; i_0 < 21; i_0 += 4) 
    {
        for (unsigned int i_1 = 1; i_1 < 21; i_1 += 3) 
        {
            {
                var_16 += ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) ((828876698757965125ULL) >= (((((/* implicit */_Bool) arr_0 [i_1])) ? (17617867374951586490ULL) : (((/* implicit */unsigned long long int) 1125993971U)))))))) <= (((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_5))) % (-1098234384178394974LL)))) ? (((long long int) var_4)) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0 - 4] [i_1])) ? (var_12) : (((/* implicit */int) arr_3 [(unsigned short)12] [i_0])))))))));
                /* LoopSeq 2 */
                for (unsigned int i_2 = 0; i_2 < 22; i_2 += 1) 
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 0; i_3 < 22; i_3 += 4) 
                    {
                        /* LoopSeq 4 */
                        for (long long int i_4 = 0; i_4 < 22; i_4 += 4) /* same iter space */
                        {
                            arr_13 [i_1] = ((/* implicit */int) ((((((((/* implicit */unsigned int) arr_7 [i_1] [i_2] [(unsigned char)2] [i_4])) + (var_7))) + (((/* implicit */unsigned int) (+(((/* implicit */int) arr_6 [i_0 + 1] [i_1 + 1] [i_2]))))))) - (((/* implicit */unsigned int) (+(min((((/* implicit */int) arr_3 [(_Bool)1] [i_3])), (arr_7 [i_1] [(unsigned char)4] [(unsigned char)4] [(unsigned char)4]))))))));
                            var_17 += ((/* implicit */unsigned char) arr_10 [i_2] [i_2] [i_0] [i_2]);
                            var_18 = ((/* implicit */signed char) ((int) (-(arr_11 [i_0 + 1] [i_0 + 1] [i_1 - 1] [i_3] [i_1]))));
                        }
                        /* vectorizable */
                        for (long long int i_5 = 0; i_5 < 22; i_5 += 4) /* same iter space */
                        {
                            var_19 = ((/* implicit */short) (-(((/* implicit */int) ((unsigned char) 1297971111)))));
                            arr_16 [i_1] [i_1] [i_1] [i_3] [(unsigned char)19] [i_3] [i_1] = ((/* implicit */signed char) var_5);
                            arr_17 [i_1] [i_3] [i_2] [i_1] [i_1] = ((/* implicit */unsigned long long int) 6024800514162302100LL);
                        }
                        for (long long int i_6 = 0; i_6 < 22; i_6 += 4) /* same iter space */
                        {
                            var_20 += min((((/* implicit */unsigned long long int) arr_3 [(signed char)17] [20LL])), (((((/* implicit */_Bool) arr_5 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0] [i_0 - 3] [(_Bool)1]))) : ((~(arr_4 [i_2] [i_6]))))));
                            arr_20 [i_1] [i_1 + 1] = ((unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_3 [i_6] [i_1])) + (((/* implicit */int) var_13))))) - (((9315391571623907464ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))));
                        }
                        for (int i_7 = 1; i_7 < 19; i_7 += 3) 
                        {
                            var_21 = ((unsigned int) ((arr_10 [i_0 - 3] [i_0 - 1] [i_1] [i_7 + 2]) - (arr_10 [10] [i_0 - 2] [i_1] [i_7 + 3])));
                            var_22 = ((/* implicit */signed char) ((unsigned char) (!(((/* implicit */_Bool) ((1324574240903638016ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_2])))))))));
                        }
                        var_23 |= ((/* implicit */unsigned long long int) (((-(((var_7) << (((((/* implicit */int) arr_12 [i_0] [i_0 + 1] [i_0 - 3] [i_0])) - (15))))))) / (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) ((unsigned int) (_Bool)1)))))));
                        arr_23 [2LL] [i_1 - 1] [i_2] [i_1] = ((/* implicit */signed char) (!((_Bool)1)));
                        arr_24 [i_0] [i_0] [i_1] [i_0] = arr_9 [i_3] [8U] [i_0] [i_0];
                    }
                    var_24 |= ((/* implicit */signed char) 17);
                }
                /* vectorizable */
                for (unsigned long long int i_8 = 0; i_8 < 22; i_8 += 4) 
                {
                    var_25 = ((/* implicit */int) ((arr_19 [i_1] [i_0 + 1] [i_0] [i_0] [i_0 - 1]) * (arr_19 [i_1] [i_0 - 4] [i_0 - 4] [(unsigned char)8] [(unsigned char)3])));
                    /* LoopNest 2 */
                    for (signed char i_9 = 0; i_9 < 22; i_9 += 1) 
                    {
                        for (unsigned long long int i_10 = 3; i_10 < 20; i_10 += 4) 
                        {
                            {
                                var_26 = ((/* implicit */signed char) min((var_26), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_22 [i_0])) ? ((-(((/* implicit */int) arr_25 [i_0] [i_0 - 3] [i_0] [(_Bool)1])))) : (((/* implicit */int) ((((/* implicit */int) var_14)) < (var_2)))))))));
                                var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((var_14) ? (var_6) : (((/* implicit */int) arr_22 [i_1]))))) ? (((((/* implicit */_Bool) 8322272989524723777LL)) ? (arr_21 [i_0] [i_0] [i_0] [i_1] [9U] [i_10 + 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_30 [i_8] [i_1] [4ULL] [i_9] [i_8]))))) : (((/* implicit */unsigned long long int) (-(var_2))))));
                                arr_31 [i_0] [i_1] [i_1] [i_9] [i_10] = var_4;
                                arr_32 [i_1] [i_9] [i_9] = ((769435299919858312ULL) * (arr_8 [2] [i_1]));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    var_28 += ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_11)) >= (((/* implicit */int) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) -938450148))))))))) & (((unsigned long long int) min((var_10), (17))))));
}
