/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46985
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46985 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46985
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
    var_17 = ((/* implicit */long long int) ((var_15) >> (((max((((((/* implicit */_Bool) var_14)) ? (5877685975200685491LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)81))))), (((/* implicit */long long int) var_13)))) - (5877685975200685430LL)))));
    /* LoopSeq 1 */
    for (long long int i_0 = 1; i_0 < 11; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_3 = 0; i_3 < 14; i_3 += 1) 
                    {
                        var_18 = ((/* implicit */int) arr_4 [i_0 + 3]);
                        arr_10 [i_3] [i_3] [i_2] [i_3] = ((3689609981U) * (((/* implicit */unsigned int) (+(((/* implicit */int) (short)252))))));
                    }
                    /* LoopSeq 3 */
                    for (signed char i_4 = 0; i_4 < 14; i_4 += 3) 
                    {
                        var_19 *= ((/* implicit */_Bool) min((((((/* implicit */int) arr_13 [9LL] [i_0 + 2] [i_4] [i_4])) | (((/* implicit */int) arr_13 [(unsigned short)8] [i_0 + 3] [(unsigned short)8] [(unsigned short)8])))), ((((_Bool)1) ? (-1752510552) : (1084556167)))));
                        var_20 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_14)) && ((!(((/* implicit */_Bool) arr_7 [i_2] [(_Bool)1] [i_2] [i_2]))))));
                    }
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
                    {
                        var_21 = ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned char) (signed char)48)), (arr_9 [i_1] [i_1]))))))) * (((/* implicit */int) (!(((/* implicit */_Bool) min((arr_7 [i_0] [i_0] [i_2] [i_0]), (((/* implicit */unsigned long long int) (unsigned short)19009))))))))));
                        var_22 |= ((((/* implicit */int) arr_14 [i_0 + 2] [i_0 + 2] [i_0 + 2])) <= (((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_2] [i_5])) || (((/* implicit */_Bool) arr_3 [i_0] [i_5]))))));
                    }
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (int i_7 = 0; i_7 < 14; i_7 += 3) /* same iter space */
                        {
                            var_23 = ((/* implicit */unsigned int) arr_12 [i_0] [i_1] [i_2] [i_6] [i_0] [(short)2]);
                            var_24 = (~(((/* implicit */int) ((_Bool) 3346117766U))));
                        }
                        for (int i_8 = 0; i_8 < 14; i_8 += 3) /* same iter space */
                        {
                            arr_29 [i_0 + 3] [i_0 + 3] [i_1] [i_1] [i_2] [i_6] [i_1] = ((/* implicit */unsigned long long int) 67108864);
                            var_25 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_7 [i_0] [i_2] [i_0] [i_0]))));
                        }
                        var_26 = ((/* implicit */unsigned int) 16846006816991551489ULL);
                    }
                    var_27 |= ((/* implicit */long long int) arr_2 [i_0]);
                    var_28 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))) < (arr_11 [i_1] [i_0 + 2])))), ((+((+(var_15)))))));
                }
            } 
        } 
        var_29 |= ((/* implicit */unsigned short) arr_7 [i_0] [i_0] [i_0 + 3] [i_0]);
        var_30 ^= ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_8)), (1355910404U)))) > (min((((/* implicit */unsigned long long int) arr_9 [i_0] [i_0])), (var_11)))))), (((((17908145104775028210ULL) >= (((/* implicit */unsigned long long int) var_6)))) ? (((var_11) * (((/* implicit */unsigned long long int) var_9)))) : (min((arr_3 [i_0 - 1] [i_0 - 1]), (((/* implicit */unsigned long long int) arr_2 [i_0]))))))));
    }
}
