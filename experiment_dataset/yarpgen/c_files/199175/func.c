/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199175
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199175 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199175
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
    for (unsigned char i_0 = 1; i_0 < 18; i_0 += 1) 
    {
        for (int i_1 = 2; i_1 < 19; i_1 += 1) 
        {
            for (unsigned char i_2 = 1; i_2 < 17; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_3 = 0; i_3 < 20; i_3 += 1) 
                    {
                        var_10 = ((/* implicit */int) (_Bool)1);
                        /* LoopSeq 2 */
                        for (unsigned long long int i_4 = 0; i_4 < 20; i_4 += 4) 
                        {
                            arr_14 [i_0] [i_0] [i_2] [i_0 + 1] = min((max((4105642969U), (((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1))))))), (var_8));
                            arr_15 [i_4] [i_0] [i_2] [i_3] [i_4] = ((/* implicit */unsigned char) max((((/* implicit */int) ((unsigned char) (_Bool)0))), (arr_11 [i_0 - 1] [i_2] [i_2 + 1] [i_0 - 1] [i_3] [i_4])));
                        }
                        for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                        {
                            var_11 = ((/* implicit */_Bool) max((var_11), (min((((((/* implicit */_Bool) arr_1 [i_2])) || (((/* implicit */_Bool) arr_18 [i_1] [(short)0] [i_5] [(short)0] [6LL])))), ((((~(4194303ULL))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) (unsigned char)74))))))))))));
                            var_12 += ((/* implicit */signed char) ((max((((/* implicit */unsigned long long int) (_Bool)1)), (arr_16 [i_0] [i_1 + 1] [i_2] [i_2] [i_0] [i_5 - 1] [i_5 - 1]))) != (((/* implicit */unsigned long long int) (~(var_1))))));
                        }
                    }
                    arr_19 [(unsigned char)18] [i_1 - 1] &= ((/* implicit */long long int) ((var_1) / (var_3)));
                    /* LoopSeq 3 */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        arr_23 [i_2] = ((/* implicit */short) max((((((/* implicit */int) arr_5 [i_1 - 2] [i_1 - 2])) % (1044480))), (((int) min((9223372036854775807LL), (((/* implicit */long long int) (unsigned char)197)))))));
                        /* LoopSeq 3 */
                        for (unsigned char i_7 = 0; i_7 < 20; i_7 += 1) /* same iter space */
                        {
                            arr_28 [i_0] [(short)11] [i_0] [i_2] [(_Bool)1] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */short) (unsigned char)193)), (arr_21 [i_0 + 2] [i_2 + 1] [i_7])))) ? ((~(((/* implicit */int) (_Bool)1)))) : (((((/* implicit */int) arr_21 [i_0 + 2] [i_2 + 2] [(unsigned char)18])) * (((/* implicit */int) (signed char)69))))));
                            arr_29 [(short)9] [i_6] [i_2] [i_1] [i_0] = ((/* implicit */long long int) (+(((((/* implicit */_Bool) arr_4 [i_1 - 1] [i_2 + 1])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_4 [i_1 + 1] [i_2 + 1]))))));
                        }
                        for (unsigned char i_8 = 0; i_8 < 20; i_8 += 1) /* same iter space */
                        {
                            var_13 = ((/* implicit */unsigned short) (_Bool)1);
                            var_14 = ((/* implicit */short) min((var_14), (((/* implicit */short) (_Bool)1))));
                            arr_32 [i_2] [i_2] [i_2] [15LL] = (+(((((/* implicit */unsigned int) (~(((/* implicit */int) arr_18 [i_0 + 1] [i_2] [i_2] [i_6] [i_8]))))) + (((((/* implicit */_Bool) (unsigned char)198)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))));
                            arr_33 [i_0] [i_1] [(short)14] [i_2] [(_Bool)1] [(_Bool)1] [i_2 - 1] = ((/* implicit */unsigned int) (_Bool)1);
                        }
                        for (_Bool i_9 = 0; i_9 < 0; i_9 += 1) 
                        {
                            var_15 = ((/* implicit */_Bool) (((+(((/* implicit */int) arr_9 [i_0 + 1] [i_1 + 1] [i_6] [11LL])))) * (((((/* implicit */int) arr_20 [i_1 + 1] [i_0 + 1] [i_0])) % (((/* implicit */int) (_Bool)1))))));
                            var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) min((((((/* implicit */_Bool) 7359177858538583659ULL)) ? ((((_Bool)1) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)46348))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_0] [14] [i_2 - 1] [(unsigned char)4] [i_9 + 1]))))), (((/* implicit */unsigned int) arr_18 [10U] [12LL] [10U] [i_6] [i_9 + 1])))))));
                            var_17 = ((/* implicit */int) 4850774235104934554ULL);
                            var_18 = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */int) max(((_Bool)1), (arr_31 [i_2] [i_2] [i_2] [i_6] [i_9])))), (((((/* implicit */int) arr_13 [14LL] [14LL] [19] [14LL] [i_9])) | (((/* implicit */int) arr_9 [i_0] [i_1 + 1] [i_1 + 1] [i_6]))))))) ? (((/* implicit */int) ((unsigned char) max((1012915656U), (((/* implicit */unsigned int) (_Bool)1)))))) : (((((/* implicit */int) var_0)) & (((/* implicit */int) (_Bool)1))))));
                        }
                    }
                    for (short i_10 = 3; i_10 < 17; i_10 += 1) /* same iter space */
                    {
                        var_19 = ((/* implicit */unsigned char) (+(13595969838604617061ULL)));
                        arr_39 [i_2] [i_1] [i_1 + 1] [i_1] [(unsigned char)12] [i_1] = ((/* implicit */unsigned short) arr_9 [i_0] [i_1] [(signed char)11] [i_10]);
                    }
                    /* vectorizable */
                    for (short i_11 = 3; i_11 < 17; i_11 += 1) /* same iter space */
                    {
                        arr_43 [i_0] [(_Bool)1] [i_2] [(_Bool)1] [(_Bool)1] [8U] = ((/* implicit */short) arr_5 [i_11 - 1] [i_11 - 2]);
                        var_20 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_17 [i_0 + 1] [i_0 + 1] [i_1 - 2] [i_0 + 1] [i_11 - 1] [(unsigned short)7])) <= (((/* implicit */int) arr_17 [i_0 + 2] [i_0] [i_1 - 2] [i_1 - 2] [i_11 + 2] [(unsigned char)15]))));
                    }
                }
            } 
        } 
    } 
    var_21 = ((((/* implicit */_Bool) (~(max((var_8), (((/* implicit */unsigned int) (unsigned char)29))))))) ? (((((/* implicit */_Bool) (unsigned char)249)) ? ((-(((/* implicit */int) var_9)))) : (((((/* implicit */int) var_0)) >> (((((/* implicit */int) (unsigned char)164)) - (164))))))) : (((/* implicit */int) max(((signed char)16), (((signed char) (unsigned short)4283))))));
    var_22 -= ((/* implicit */short) max((max((((10602863392002114267ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))), (((/* implicit */unsigned long long int) ((int) (signed char)-1))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)127))))))))));
    var_23 = ((/* implicit */int) ((unsigned short) (((((~(((/* implicit */int) (unsigned char)135)))) + (2147483647))) >> ((((((_Bool)1) ? (var_1) : (var_1))) - (230872433U))))));
}
