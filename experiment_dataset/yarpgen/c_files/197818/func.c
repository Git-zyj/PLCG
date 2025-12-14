/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197818
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197818 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197818
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
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            {
                var_12 -= ((/* implicit */long long int) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_4 [i_0]))))), (((((/* implicit */_Bool) arr_4 [i_1])) ? (1981679547U) : (((/* implicit */unsigned int) arr_4 [i_1]))))));
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 12; i_2 += 3) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            arr_13 [i_0] [6ULL] [(unsigned char)7] [(unsigned char)8] = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) ((arr_12 [i_0] [(short)9] [i_2] [i_3]) ? (((/* implicit */int) (unsigned short)639)) : (var_5)))) ? (((/* implicit */int) arr_0 [i_0] [i_1])) : (((/* implicit */int) ((unsigned short) var_1))))), ((-(((/* implicit */int) arr_8 [i_0] [i_1]))))));
                            var_13 &= ((/* implicit */signed char) max(((~(arr_11 [i_0] [7]))), ((~(arr_11 [i_0] [i_3])))));
                            var_14 = ((/* implicit */unsigned short) ((_Bool) ((short) arr_12 [(short)8] [7U] [i_1] [i_0])));
                            arr_14 [(signed char)5] [(short)6] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)29031))))) ? (((/* implicit */int) arr_0 [(unsigned short)10] [i_1])) : (((/* implicit */int) arr_12 [i_3] [i_2] [(unsigned short)7] [i_0]))))) > (arr_11 [4LL] [(signed char)1])));
                            arr_15 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */signed char) arr_10 [i_0])), (arr_2 [i_1])))) ? (((((/* implicit */_Bool) arr_2 [i_1])) ? (arr_3 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_2]))))) : ((~(arr_3 [(unsigned char)5])))));
                        }
                    } 
                } 
                var_15 = ((/* implicit */long long int) (unsigned short)1);
                /* LoopSeq 1 */
                for (unsigned int i_4 = 0; i_4 < 12; i_4 += 1) 
                {
                    var_16 = ((/* implicit */unsigned long long int) ((0) - (((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)12))) + (3104451088U)))) ? (((/* implicit */int) max((arr_6 [i_0] [i_1] [i_4]), (((/* implicit */short) (unsigned char)252))))) : ((+(((/* implicit */int) var_11))))))));
                    var_17 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_10 [i_0])) >> (((((((/* implicit */int) arr_8 [i_0] [i_1])) & (((/* implicit */int) arr_0 [i_4] [i_1])))) - (65)))));
                    var_18 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_4])) ? (((/* implicit */unsigned int) ((arr_12 [i_0] [(short)8] [i_0] [i_0]) ? (((/* implicit */int) (unsigned char)240)) : (((/* implicit */int) (unsigned char)0))))) : ((~(arr_3 [i_0])))))) ? (max(((-(((/* implicit */int) arr_7 [i_1] [(unsigned char)11])))), (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) max((max((((/* implicit */short) arr_8 [i_4] [10U])), (var_2))), (((/* implicit */short) arr_12 [i_0] [(short)1] [i_4] [i_4])))))));
                    /* LoopSeq 3 */
                    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) /* same iter space */
                    {
                        arr_21 [i_0] [7ULL] [i_4] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_7 [i_4] [i_5]))))) ? (((((/* implicit */_Bool) ((unsigned long long int) arr_8 [i_0] [(signed char)10]))) ? (20) : ((~(((/* implicit */int) arr_6 [i_5 - 1] [i_4] [i_1])))))) : (((((/* implicit */_Bool) (+(arr_4 [i_0])))) ? (arr_4 [i_5 - 1]) : ((+(((/* implicit */int) (unsigned char)64))))))));
                        arr_22 [i_0] [8ULL] [i_5] [i_5] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) 0)) ? (((/* implicit */int) arr_8 [i_0] [(short)3])) : (((/* implicit */int) arr_0 [i_0] [i_1]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_5 - 1] [i_1] [i_0]))) : (arr_3 [i_5]))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_7 [i_5 - 1] [(unsigned short)9])))))));
                        arr_23 [i_0] [i_1] [i_5] [i_5] = ((/* implicit */unsigned char) (~(((/* implicit */int) ((unsigned short) arr_12 [i_5 - 1] [i_5 - 1] [i_5] [i_5 - 1])))));
                    }
                    for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) /* same iter space */
                    {
                        var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) ((0ULL) - (((/* implicit */unsigned long long int) ((unsigned int) 4599301419510680502LL))))))));
                        arr_27 [i_6] [i_4] [i_1] [2ULL] = ((/* implicit */signed char) max((min((((/* implicit */int) arr_12 [i_6 - 1] [i_6 - 1] [i_6 - 1] [i_6 - 1])), (((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) arr_2 [i_0])))))), ((-(((/* implicit */int) arr_6 [(signed char)9] [i_1] [i_6]))))));
                        var_20 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned short)42120))));
                    }
                    for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) /* same iter space */
                    {
                        arr_32 [i_0] [i_0] [i_1] [i_4] [i_4] [i_7] = ((/* implicit */short) ((((/* implicit */_Bool) (((_Bool)1) ? (arr_18 [i_0] [i_0] [i_4] [i_7] [i_7 - 1] [i_7]) : (arr_18 [(_Bool)1] [3U] [i_4] [0] [i_7 - 1] [i_7 - 1])))) ? (((/* implicit */int) min((((((/* implicit */_Bool) arr_1 [i_1])) && ((_Bool)1))), ((!(((/* implicit */_Bool) var_4))))))) : (max((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)41))))), (var_3)))));
                        var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_26 [(_Bool)1] [i_4] [i_1] [(unsigned short)8])) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned char) arr_10 [i_7])), ((unsigned char)12)))) ? ((~(((/* implicit */int) arr_29 [i_7] [i_7])))) : (((arr_10 [i_0]) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (unsigned char)255))))))) : (min((arr_25 [i_7 - 1] [(short)6] [i_7 - 1] [i_7]), (arr_25 [(unsigned short)11] [i_0] [i_7 - 1] [i_7])))));
                        arr_33 [i_0] [i_7] [i_4] [11ULL] = ((/* implicit */signed char) max(((-(((((/* implicit */_Bool) arr_20 [(_Bool)1] [i_1] [4U] [i_7])) ? (3) : (((/* implicit */int) arr_0 [(unsigned char)6] [i_4])))))), (((/* implicit */int) max((arr_20 [i_7] [i_7 - 1] [i_7] [i_7]), (arr_8 [i_1] [i_4]))))));
                        var_22 += ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) (unsigned short)64880)) : (((/* implicit */int) (short)(-32767 - 1)))));
                        arr_34 [i_0] [2ULL] [i_7] [i_4] [i_7] = ((/* implicit */signed char) arr_16 [i_4] [i_7 - 1]);
                    }
                    arr_35 [i_0] [(unsigned char)2] [i_4] [7ULL] = ((int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 18ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [(signed char)3] [i_1]))) : (var_1)))) ? (((/* implicit */int) (!(var_8)))) : (((/* implicit */int) ((unsigned char) arr_17 [i_1])))));
                }
            }
        } 
    } 
    var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) min((((var_11) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (var_0))), (((/* implicit */unsigned long long int) (unsigned char)255)))))));
    var_24 = ((/* implicit */short) var_7);
    var_25 = ((/* implicit */unsigned char) var_11);
}
