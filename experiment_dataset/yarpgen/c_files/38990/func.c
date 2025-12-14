/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38990
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38990 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38990
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
    var_20 = ((/* implicit */short) var_3);
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            for (signed char i_2 = 1; i_2 < 21; i_2 += 2) 
            {
                {
                    arr_8 [i_1] [i_0] [i_2] = ((/* implicit */signed char) arr_5 [i_1]);
                    /* LoopSeq 3 */
                    for (unsigned int i_3 = 0; i_3 < 22; i_3 += 1) 
                    {
                        var_21 -= ((/* implicit */unsigned int) (+((-(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)0)))))))));
                        /* LoopSeq 3 */
                        for (unsigned char i_4 = 3; i_4 < 20; i_4 += 2) 
                        {
                            var_22 = ((/* implicit */long long int) arr_13 [i_0] [i_1] [i_1] [i_3] [i_1]);
                            var_23 = ((/* implicit */unsigned int) arr_5 [(unsigned char)7]);
                            var_24 = ((/* implicit */short) ((int) var_13));
                            var_25 -= ((/* implicit */short) arr_5 [i_1]);
                            arr_16 [i_1] [(signed char)11] [i_2] [i_3] [i_4] = min(((unsigned char)161), (((/* implicit */unsigned char) arr_4 [i_0])));
                        }
                        for (unsigned long long int i_5 = 0; i_5 < 22; i_5 += 2) 
                        {
                            var_26 = ((short) ((4176104698151782733ULL) - (((/* implicit */unsigned long long int) var_17))));
                            arr_19 [7U] [i_0] [i_1] [16ULL] [i_1] [i_3] [i_5] = ((/* implicit */int) ((_Bool) (signed char)-115));
                        }
                        /* vectorizable */
                        for (signed char i_6 = 2; i_6 < 21; i_6 += 3) 
                        {
                            var_27 = ((/* implicit */unsigned long long int) arr_4 [i_1]);
                            var_28 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_5 [i_0]))));
                            arr_22 [i_1] [i_2] [i_1] = ((/* implicit */long long int) ((unsigned int) arr_20 [i_0] [i_1] [20] [i_2 - 1] [i_6 + 1] [i_6 + 1] [i_2]));
                        }
                    }
                    for (long long int i_7 = 1; i_7 < 21; i_7 += 4) 
                    {
                        var_29 = ((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_3)))) == (arr_24 [i_0] [i_0] [i_0] [i_1] [10LL] [i_0]))))));
                        var_30 = ((/* implicit */short) var_10);
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned char i_8 = 2; i_8 < 20; i_8 += 1) /* same iter space */
                        {
                            var_31 |= ((/* implicit */signed char) ((short) var_3));
                            arr_29 [i_0] [i_0] [(signed char)10] [i_2] [i_1] [i_0] [i_0] |= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-8))) / (((unsigned int) 3192868541537043349LL))));
                            var_32 = ((/* implicit */unsigned int) var_13);
                            var_33 = ((/* implicit */signed char) ((unsigned long long int) var_7));
                            arr_30 [i_1] [i_7] [i_2] [i_1] [i_1] = ((/* implicit */signed char) ((((var_12) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))) ? (((/* implicit */unsigned long long int) arr_26 [i_0] [i_1] [i_0] [i_0])) : (var_0)));
                        }
                        for (unsigned char i_9 = 2; i_9 < 20; i_9 += 1) /* same iter space */
                        {
                            var_34 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) arr_32 [i_0] [(signed char)3] [i_2] [i_1] [i_9 - 1])) || (((/* implicit */_Bool) arr_9 [i_7] [i_7] [i_2 - 1] [i_0] [i_0]))))) / (((/* implicit */int) min((arr_3 [i_0]), (((/* implicit */unsigned char) var_4)))))))) || (((/* implicit */_Bool) max((((/* implicit */unsigned int) var_2)), (3164686483U))))));
                            arr_33 [i_0] [i_0] |= ((/* implicit */signed char) var_2);
                        }
                    }
                    for (unsigned char i_10 = 3; i_10 < 21; i_10 += 1) 
                    {
                        arr_36 [i_0] [i_2] |= ((/* implicit */unsigned long long int) ((_Bool) arr_18 [i_0] [i_0] [(short)1] [i_0]));
                        var_35 -= ((/* implicit */unsigned long long int) ((((-1768534891) + (2147483647))) << (((((((((/* implicit */int) (signed char)114)) | (arr_28 [i_0] [i_0] [i_2] [i_10] [i_1] [i_10 - 2] [i_2 - 1]))) + (291679503))) - (4)))));
                    }
                    var_36 |= min((((/* implicit */unsigned long long int) (-(((int) (unsigned char)214))))), (var_12));
                    arr_37 [i_0] [i_2] [i_1] = ((((/* implicit */int) (signed char)8)) / (((((/* implicit */_Bool) ((unsigned int) (signed char)-8))) ? (((/* implicit */int) var_13)) : ((+(((/* implicit */int) var_5)))))));
                    arr_38 [(unsigned char)13] [i_2] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) min((17179869183ULL), (((/* implicit */unsigned long long int) var_16))))) ? (max((((/* implicit */unsigned long long int) var_5)), (var_1))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1])))));
                }
            } 
        } 
    } 
    var_37 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((min((var_14), (((/* implicit */unsigned long long int) var_10)))) == ((-(var_14)))))), (var_0)));
}
