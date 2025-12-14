/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224937
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224937 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224937
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
    var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) var_9))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 4; i_0 < 21; i_0 += 3) 
    {
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 1; i_1 < 22; i_1 += 3) 
        {
            for (long long int i_2 = 2; i_2 < 23; i_2 += 3) 
            {
                for (long long int i_3 = 4; i_3 < 20; i_3 += 3) 
                {
                    {
                        /* LoopSeq 2 */
                        for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                        {
                            var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) ((unsigned short) 3847635906U)))));
                            var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) var_11))));
                            var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) (-(arr_10 [i_3 + 1] [i_0] [i_0 - 2] [(signed char)9] [i_4]))))));
                            var_18 = ((/* implicit */int) arr_1 [i_0]);
                        }
                        for (unsigned short i_5 = 1; i_5 < 22; i_5 += 3) 
                        {
                            var_19 = var_10;
                            arr_14 [i_0] [i_1] [i_2] [i_3] [i_2] [i_5] [i_5] = ((/* implicit */unsigned short) ((long long int) arr_3 [i_0 - 1] [i_0 + 1]));
                            arr_15 [12U] [12U] |= 0U;
                            var_20 = ((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)196))));
                        }
                        var_21 ^= ((/* implicit */long long int) (-(var_6)));
                        arr_16 [i_0] [i_2] [16LL] [i_2] = ((/* implicit */unsigned long long int) arr_4 [i_2]);
                    }
                } 
            } 
        } 
        var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) arr_5 [(unsigned short)0] [10LL] [i_0] [i_0]))));
        /* LoopSeq 2 */
        for (long long int i_6 = 4; i_6 < 23; i_6 += 4) 
        {
            var_23 = ((/* implicit */unsigned char) (~(arr_5 [i_0 - 1] [i_6] [i_6 + 1] [i_0])));
            /* LoopSeq 2 */
            for (unsigned short i_7 = 1; i_7 < 22; i_7 += 4) /* same iter space */
            {
                arr_23 [i_0] [i_0] [i_0] [i_6] = ((/* implicit */int) (~((+(var_2)))));
                arr_24 [i_0] [i_6] [i_7 + 2] |= (+(((/* implicit */int) (unsigned char)202)));
                arr_25 [i_0] [i_6] [i_7] [(unsigned short)9] = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)170)) % (((/* implicit */int) (short)13424))));
            }
            for (unsigned short i_8 = 1; i_8 < 22; i_8 += 4) /* same iter space */
            {
                arr_28 [i_8] [i_6] [i_0 - 4] = ((/* implicit */short) (-((~(-2109416695)))));
                /* LoopSeq 2 */
                for (int i_9 = 1; i_9 < 22; i_9 += 4) 
                {
                    arr_32 [i_0] [i_0] [i_0] [i_8] [i_9] = ((/* implicit */long long int) arr_17 [i_9] [i_0] [i_0]);
                    arr_33 [i_8] [(unsigned char)8] = ((/* implicit */unsigned char) (-(-1860567482719114330LL)));
                }
                for (long long int i_10 = 2; i_10 < 21; i_10 += 1) 
                {
                    var_24 = ((/* implicit */int) (unsigned char)85);
                    var_25 = 5304845305992784327LL;
                    var_26 = ((/* implicit */unsigned char) min((var_26), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_13 [8U] [8U] [i_6 + 1] [i_10 - 2] [i_10])) ? (((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) arr_3 [i_0] [i_6])) : (((/* implicit */int) (short)-12063)))) : (arr_36 [i_10 + 3] [i_8 + 1] [i_6 - 2]))))));
                    arr_37 [i_8] [(unsigned char)18] [i_8] [i_6] [i_0 - 2] [i_0 - 2] = ((/* implicit */long long int) (~(((int) arr_36 [i_6] [i_8] [i_8]))));
                }
            }
        }
        for (int i_11 = 2; i_11 < 22; i_11 += 1) 
        {
            var_27 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1329946293486223297LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)6))) : (arr_22 [i_0] [i_11 + 1] [i_11])))) ? (((/* implicit */long long int) arr_31 [i_0 + 3])) : (7250961608610424418LL)));
            var_28 = ((/* implicit */unsigned int) (signed char)93);
        }
        arr_41 [i_0] [i_0] = ((/* implicit */signed char) ((var_7) / (((/* implicit */unsigned int) ((/* implicit */int) arr_27 [i_0 - 1] [i_0 + 2] [i_0 + 1])))));
        arr_42 [i_0] = ((/* implicit */unsigned char) (+(((/* implicit */int) (signed char)-5))));
    }
    var_29 ^= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((((/* implicit */long long int) var_12)), (max((((/* implicit */long long int) (_Bool)1)), (5839599058661730900LL))))))));
    var_30 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (var_10) : (((/* implicit */unsigned long long int) var_8))));
}
