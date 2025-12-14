/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25094
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25094 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25094
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
    var_10 = ((/* implicit */short) (unsigned char)99);
    var_11 = ((/* implicit */short) ((min((var_7), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_4))))))) % (((/* implicit */long long int) (((_Bool)0) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)3)))))));
    var_12 = ((/* implicit */signed char) var_9);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (short i_1 = 3; i_1 < 11; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned short i_3 = 2; i_3 < 10; i_3 += 2) 
                    {
                        {
                            var_13 = ((/* implicit */long long int) 843205138);
                            arr_10 [i_0] [i_0] [i_3 - 2] [i_3 - 2] = ((/* implicit */short) var_3);
                            var_14 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32754))) < (((((/* implicit */unsigned long long int) ((unsigned int) -1786601556))) / (arr_5 [i_3 + 2] [i_1 - 2] [i_1] [i_1 - 3])))));
                        }
                    } 
                } 
                var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)48)) | (((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_1 - 1] [i_0] [i_0]))))) ? (((((/* implicit */_Bool) min((var_6), ((unsigned char)92)))) ? (((/* implicit */int) min((((/* implicit */unsigned short) (short)-13782)), (var_1)))) : (-1786601544))) : (((/* implicit */int) (unsigned short)34139))));
                /* LoopSeq 2 */
                for (signed char i_4 = 0; i_4 < 12; i_4 += 3) /* same iter space */
                {
                    arr_13 [i_0] [i_1] [i_4] = ((/* implicit */unsigned int) 137438953408ULL);
                    arr_14 [i_0] [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) -843205127)) ? (4661080504534355982LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)10644)))))))) ? (((unsigned int) var_5)) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) arr_3 [i_1 + 1] [i_1] [i_1 - 3])) > (arr_1 [i_1 + 1] [i_1 - 2])))))));
                }
                for (signed char i_5 = 0; i_5 < 12; i_5 += 3) /* same iter space */
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (long long int i_6 = 0; i_6 < 12; i_6 += 3) 
                    {
                        /* LoopSeq 3 */
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            arr_23 [i_0] [i_5] [i_5] [i_1 - 1] [i_5] [i_0] = ((/* implicit */short) ((arr_7 [i_7] [i_5] [i_5] [i_1 - 2] [i_1 - 1] [i_0]) ? (arr_19 [i_0] [i_5] [i_5] [i_6]) : (((unsigned long long int) (short)7002))));
                            arr_24 [i_5] = arr_22 [i_5] [i_6] [i_5] [i_6] [i_5];
                            arr_25 [i_5] [i_6] [i_1 + 1] [i_1 + 1] [i_5] [i_5] = ((/* implicit */int) arr_17 [i_5] [i_1 - 1]);
                            var_16 = ((/* implicit */signed char) arr_9 [i_0] [i_1 + 1] [i_0]);
                        }
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            arr_30 [i_1 - 2] [i_1 - 2] [i_5] [i_1 - 1] [i_1 - 1] [i_5] = (!(((/* implicit */_Bool) arr_19 [i_0] [i_5] [i_6] [i_5])));
                            arr_31 [i_0] [i_0] [i_5] [i_6] [i_8] [i_5] = ((/* implicit */unsigned char) ((arr_1 [i_1 - 1] [i_1 - 3]) | (((/* implicit */unsigned long long int) var_7))));
                        }
                        for (long long int i_9 = 0; i_9 < 12; i_9 += 3) 
                        {
                            arr_35 [i_0] [i_0] [i_5] [i_6] [i_9] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_16 [i_0] [i_0] [i_1] [i_1 - 3]))));
                            arr_36 [i_5] [i_5] [i_5] = ((/* implicit */unsigned long long int) ((long long int) (signed char)127));
                            arr_37 [i_9] [i_5] [i_5] [i_0] [i_0] [i_5] [i_0] = ((/* implicit */long long int) -381230810);
                            arr_38 [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 2906918492U)) ? (arr_1 [i_1 - 1] [i_1 - 2]) : (((/* implicit */unsigned long long int) 2906918492U))));
                            var_17 = ((/* implicit */unsigned short) ((var_7) ^ (((/* implicit */long long int) ((/* implicit */int) (unsigned short)32890)))));
                        }
                        var_18 = ((/* implicit */unsigned short) (+(16ULL)));
                    }
                    arr_39 [i_5] [i_5] [i_5] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) (-(-4661080504534355982LL)))) && (((/* implicit */_Bool) arr_21 [i_1] [i_1 - 2] [i_1 - 2] [i_1 + 1] [i_1 - 1])))) ? ((+(arr_28 [i_5] [i_5] [i_5] [i_5] [i_1 + 1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_7))))));
                    var_19 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) max((arr_16 [i_0] [i_5] [i_1 - 2] [i_0]), (((/* implicit */unsigned short) (unsigned char)249)))))) | ((-(2888927927672743758LL)))));
                }
                arr_40 [i_0] [i_0] [i_1 + 1] = ((/* implicit */unsigned int) (~((~(arr_3 [i_1 + 1] [i_1 + 1] [i_1 + 1])))));
            }
        } 
    } 
}
