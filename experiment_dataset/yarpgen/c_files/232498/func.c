/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232498
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232498 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232498
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
    var_15 = var_12;
    /* LoopNest 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (unsigned char i_2 = 1; i_2 < 18; i_2 += 1) 
            {
                {
                    arr_6 [i_0 - 1] [i_2] [i_0] [i_0 - 1] = ((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0])))))));
                    /* LoopSeq 3 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (short i_4 = 0; i_4 < 19; i_4 += 2) 
                        {
                            var_16 = ((/* implicit */long long int) (((+(((/* implicit */int) (unsigned char)244)))) + (((/* implicit */int) (!(arr_5 [i_2]))))));
                            arr_12 [i_2] [i_1] [i_2] = ((long long int) arr_4 [i_0] [i_0 - 1] [i_2 + 1] [i_4]);
                        }
                        /* LoopSeq 2 */
                        for (short i_5 = 2; i_5 < 17; i_5 += 2) 
                        {
                            var_17 = ((/* implicit */short) max((((/* implicit */long long int) ((short) -579556235288401228LL))), (((long long int) max((((/* implicit */long long int) var_1)), (var_9))))));
                            arr_17 [i_0] [i_1] [i_2] [i_3] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_16 [i_0 - 1] [i_1] [i_2] [i_3] [i_5 - 2] [i_0] [i_5]), (((/* implicit */long long int) arr_11 [i_5] [i_3] [i_2] [(short)10] [(short)10]))))) ? (((/* implicit */int) (unsigned char)12)) : ((~(((/* implicit */int) (unsigned char)18))))))) ? (((((/* implicit */long long int) ((/* implicit */int) (!((_Bool)1))))) | (arr_2 [i_2]))) : (max((min((var_13), (var_7))), (((/* implicit */long long int) ((short) (_Bool)1)))))));
                            arr_18 [i_5] [i_5] [i_2] [i_5] [i_0] &= (unsigned char)39;
                            var_18 -= ((/* implicit */short) (+(((/* implicit */int) (unsigned char)16))));
                        }
                        for (unsigned char i_6 = 1; i_6 < 17; i_6 += 4) 
                        {
                            var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) max((((arr_20 [i_2 - 1] [i_2 - 1] [i_2 + 1] [i_6] [(short)2] [i_6 + 1] [i_6 - 1]) | (-2993399952526891600LL))), (((((/* implicit */_Bool) (~(arr_19 [i_0] [i_1] [2LL] [18LL])))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_11 [i_0 - 1] [i_1] [i_2] [i_3] [i_6])) && ((_Bool)1))))) : (arr_2 [i_0]))))))));
                            var_20 &= min((((/* implicit */long long int) (~(((((/* implicit */int) arr_1 [i_0])) & (((/* implicit */int) (unsigned char)255))))))), ((-(4947065367900009137LL))));
                            var_21 += ((/* implicit */long long int) min((((((/* implicit */_Bool) min((((/* implicit */long long int) (unsigned char)11)), (-3055616007645313419LL)))) && (((/* implicit */_Bool) ((-624630692016400779LL) / (arr_3 [i_0 - 1])))))), (((((/* implicit */_Bool) arr_0 [i_1 - 1])) || (((/* implicit */_Bool) arr_0 [i_6 + 2]))))));
                            arr_21 [i_0] [i_1] [i_2] [i_3] [i_6] = ((/* implicit */unsigned char) min((((/* implicit */int) (unsigned char)244)), ((+(((/* implicit */int) arr_11 [i_0] [i_1] [i_1] [i_3] [i_6]))))));
                        }
                        arr_22 [i_0 - 1] [i_0 - 1] [i_2] = ((/* implicit */_Bool) (-(((/* implicit */int) ((unsigned char) 5963781190073111458LL)))));
                        var_22 += ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)205))) ^ (((((/* implicit */_Bool) min((-4731611674679683503LL), (4731611674679683512LL)))) ? (((/* implicit */long long int) ((/* implicit */int) max(((short)31161), ((short)5955))))) : (((((/* implicit */_Bool) var_13)) ? (arr_2 [i_2]) : (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_3] [i_3] [i_2] [i_1] [i_1] [i_1 - 1] [i_0])))))))));
                    }
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
                    {
                        arr_26 [i_0] [i_1 - 1] [i_2] = ((/* implicit */short) ((long long int) ((var_8) / (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_0] [i_0] [i_0 - 1] [i_1 - 1] [i_2] [i_7] [i_7]))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned char i_8 = 0; i_8 < 19; i_8 += 4) 
                        {
                            arr_30 [i_2] [i_1] [i_2 - 1] = ((/* implicit */long long int) (-(((((/* implicit */int) arr_4 [i_8] [i_2 + 1] [i_1 - 1] [i_0])) | (((/* implicit */int) (_Bool)1))))));
                            var_23 = arr_16 [i_8] [i_7] [i_7] [i_0] [i_1] [i_0] [i_0];
                            var_24 = ((/* implicit */_Bool) ((7179872484888841402LL) ^ (((((/* implicit */_Bool) arr_19 [i_0] [i_7] [i_2] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0] [i_2] [i_0] [i_0 - 1]))) : (1988553705248758456LL)))));
                        }
                    }
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) /* same iter space */
                    {
                        var_25 = ((/* implicit */unsigned char) max((var_25), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)247)) ? (-7179872484888841403LL) : (-2016206370138949714LL))))));
                        var_26 = ((/* implicit */short) (-(((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)-9539))))) && (((/* implicit */_Bool) ((arr_9 [i_9] [i_2 + 1] [i_1] [i_0]) << (((arr_3 [i_0]) - (8338759496223026588LL)))))))))));
                        arr_34 [i_9] [i_2] [i_2] [i_0] = ((/* implicit */unsigned char) (-(((/* implicit */int) (!(((/* implicit */_Bool) ((long long int) 5650636358708554024LL))))))));
                    }
                }
            } 
        } 
    } 
    var_27 = ((/* implicit */_Bool) 4410246263468724725LL);
}
