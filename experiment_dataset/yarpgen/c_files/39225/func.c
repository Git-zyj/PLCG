/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39225
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39225 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39225
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
    for (int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            {
                var_18 = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) arr_3 [i_0])))) ? (((((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_1])) ? (arr_4 [(_Bool)1] [(signed char)20] [i_0]) : (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (arr_0 [19U] [i_1]) : (arr_4 [i_0] [i_0] [i_0]))))) : (max((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_0])))));
                /* LoopSeq 2 */
                for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 3) 
                {
                    var_19 = ((/* implicit */int) ((((/* implicit */_Bool) min((arr_1 [i_1] [i_0]), (((/* implicit */short) min(((signed char)100), (((/* implicit */signed char) (_Bool)1)))))))) ? (var_17) : (((/* implicit */unsigned long long int) (+(arr_7 [i_0] [(signed char)20] [i_2] [i_1]))))));
                    var_20 = ((/* implicit */unsigned char) (~(((((/* implicit */int) var_14)) & (-1402847460)))));
                    var_21 = ((short) 268435455);
                    var_22 = ((/* implicit */unsigned int) arr_8 [i_2] [i_0] [i_0]);
                }
                for (short i_3 = 0; i_3 < 21; i_3 += 3) 
                {
                    arr_11 [i_3] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) var_13);
                    var_23 = (+(((/* implicit */int) min((arr_8 [i_0] [i_0] [i_0]), (arr_8 [i_0] [i_0] [i_0])))));
                    /* LoopSeq 2 */
                    for (signed char i_4 = 0; i_4 < 21; i_4 += 1) 
                    {
                        var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (unsigned char)31)) : (((/* implicit */int) (unsigned char)255))))))) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) > (arr_9 [i_0] [i_0] [i_0])))) : (((/* implicit */int) ((signed char) ((((/* implicit */int) arr_13 [i_0] [i_1])) ^ (268435455))))))))));
                        var_25 ^= ((/* implicit */_Bool) (~(((((/* implicit */_Bool) (+(((/* implicit */int) var_13))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_3 [i_0]))))) : (((20ULL) % (((/* implicit */unsigned long long int) var_11))))))));
                    }
                    for (int i_5 = 0; i_5 < 21; i_5 += 2) 
                    {
                        arr_18 [i_3] = ((/* implicit */signed char) max((((/* implicit */short) arr_16 [i_0] [i_1] [i_3] [i_3])), (max(((short)-32767), (arr_3 [i_0])))));
                        var_26 = ((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)31))));
                        var_27 = ((((/* implicit */_Bool) (+((-(var_16)))))) ? (arr_0 [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */short) arr_10 [i_3] [i_1] [i_1])), (arr_1 [i_0] [i_0]))))));
                    }
                    /* LoopSeq 3 */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        var_28 -= ((/* implicit */short) arr_13 [i_1] [i_1]);
                        var_29 = ((/* implicit */short) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [i_0] [i_0] [i_0] [i_3])))))));
                        var_30 = ((/* implicit */unsigned char) (~(((/* implicit */int) (short)32755))));
                    }
                    for (unsigned char i_7 = 3; i_7 < 19; i_7 += 4) 
                    {
                        var_31 = ((/* implicit */short) (~(((((/* implicit */long long int) (+(((/* implicit */int) arr_3 [i_7]))))) / ((+(arr_2 [i_3])))))));
                        /* LoopSeq 3 */
                        for (_Bool i_8 = 0; i_8 < 0; i_8 += 1) /* same iter space */
                        {
                            arr_27 [i_3] [i_3] [i_3] = ((/* implicit */unsigned long long int) min((((/* implicit */int) (!(((/* implicit */_Bool) arr_19 [i_0] [i_1] [(short)15] [i_1] [i_7 - 2] [i_7]))))), (arr_19 [i_0] [(signed char)18] [(signed char)18] [i_1] [i_1] [i_0])));
                            var_32 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_0] [(short)17] [i_3] [i_0])) ? (((/* implicit */int) (signed char)101)) : (((/* implicit */int) arr_15 [i_0] [i_1] [i_3] [i_3])))))));
                        }
                        for (_Bool i_9 = 0; i_9 < 0; i_9 += 1) /* same iter space */
                        {
                            var_33 = ((/* implicit */unsigned int) arr_13 [i_7 + 1] [i_3]);
                            var_34 = ((((/* implicit */_Bool) ((((/* implicit */int) arr_8 [i_1] [i_3] [i_9 + 1])) * (((/* implicit */int) min((arr_14 [14] [i_1] [i_3] [14]), (arr_10 [i_3] [i_3] [8U]))))))) ? (((unsigned long long int) (-(((/* implicit */int) arr_8 [(unsigned short)14] [i_9] [i_3]))))) : (((/* implicit */unsigned long long int) (~((~(arr_20 [i_3] [i_3] [i_3])))))));
                            var_35 = ((((/* implicit */_Bool) (~(1987851924U)))) ? (min((((arr_5 [i_0] [i_0] [i_0] [i_7]) | (((/* implicit */unsigned long long int) arr_7 [i_0] [i_0] [i_0] [i_0])))), (((/* implicit */unsigned long long int) (signed char)-117)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_28 [i_0] [i_3]))));
                            var_36 = (!(((/* implicit */_Bool) min((((/* implicit */long long int) var_13)), ((+((-9223372036854775807LL - 1LL))))))));
                            var_37 = ((/* implicit */int) ((long long int) arr_1 [i_7 + 2] [i_7 - 3]));
                        }
                        for (unsigned int i_10 = 0; i_10 < 21; i_10 += 4) 
                        {
                            var_38 = ((/* implicit */_Bool) max(((unsigned char)205), (((/* implicit */unsigned char) (signed char)-111))));
                            arr_34 [i_0] [i_3] [i_3] [i_7 - 2] [i_10] [13] = ((/* implicit */int) (~(13775456348495445829ULL)));
                            arr_35 [i_0] [i_3] [i_1] [i_3] [i_7] [i_10] = ((((/* implicit */unsigned long long int) ((/* implicit */int) min((min((arr_1 [i_0] [i_0]), (((/* implicit */short) (unsigned char)204)))), (((/* implicit */short) var_0)))))) - (max((arr_4 [(unsigned short)1] [i_1] [i_0]), (((/* implicit */unsigned long long int) ((unsigned char) (signed char)110))))));
                        }
                        var_39 = ((/* implicit */signed char) min((var_39), (((/* implicit */signed char) ((short) ((unsigned char) var_10))))));
                    }
                    for (short i_11 = 0; i_11 < 21; i_11 += 2) 
                    {
                        var_40 = ((/* implicit */unsigned char) max((((arr_2 [i_0]) % (arr_2 [i_0]))), (((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_9)), (arr_6 [9LL] [i_1] [i_1])))) ? (((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (2558979424U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) arr_13 [i_0] [i_3])))))))));
                        var_41 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_0] [2U] [i_3])) ? (((/* implicit */unsigned long long int) arr_9 [i_11] [10ULL] [i_1])) : (arr_5 [i_0] [i_1] [i_3] [i_11])))));
                        var_42 += ((/* implicit */short) max((((/* implicit */int) ((unsigned char) arr_22 [i_0] [i_1] [i_1] [i_11]))), ((~(((/* implicit */int) arr_22 [i_0] [i_0] [i_0] [i_0]))))));
                    }
                }
            }
        } 
    } 
    var_43 = var_5;
}
