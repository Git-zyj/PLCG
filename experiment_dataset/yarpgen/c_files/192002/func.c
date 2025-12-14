/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192002
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192002 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192002
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
    for (long long int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                for (signed char i_2 = 0; i_2 < 22; i_2 += 2) 
                {
                    var_11 ^= ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1))))), (((((/* implicit */unsigned long long int) var_9)) - (min((((/* implicit */unsigned long long int) 1633372239U)), (12526576494598957759ULL)))))));
                    arr_7 [i_0] [i_1] [12ULL] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((unsigned short) (~(5496804128810094361ULL)))))));
                    /* LoopSeq 3 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_12 = ((/* implicit */unsigned int) -1363907329);
                        var_13 = ((/* implicit */unsigned short) ((int) ((unsigned int) (~(5496804128810094361ULL)))));
                    }
                    for (unsigned char i_4 = 0; i_4 < 22; i_4 += 4) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned int i_5 = 2; i_5 < 18; i_5 += 4) 
                        {
                            var_14 = ((/* implicit */unsigned int) var_1);
                            arr_15 [16ULL] [i_1] [i_4] [i_4] [i_5] = ((/* implicit */long long int) ((int) ((unsigned char) arr_11 [i_5 + 3] [i_5 + 1] [i_5 + 2] [i_5 - 1] [i_5])));
                        }
                        arr_16 [i_4] [i_2] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) (~(((/* implicit */int) arr_0 [i_0]))))) == (var_9)));
                        arr_17 [i_4] = ((/* implicit */_Bool) var_3);
                    }
                    /* vectorizable */
                    for (long long int i_6 = 0; i_6 < 22; i_6 += 4) 
                    {
                        var_15 = ((/* implicit */short) (-(var_4)));
                        var_16 = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) > (((long long int) var_3))));
                        /* LoopSeq 1 */
                        for (signed char i_7 = 0; i_7 < 22; i_7 += 2) 
                        {
                            var_17 = ((/* implicit */signed char) (+(arr_21 [i_7] [i_2] [i_1])));
                            arr_23 [i_0] [i_7] = ((/* implicit */long long int) ((((/* implicit */int) arr_4 [i_2])) < (((/* implicit */int) arr_4 [i_2]))));
                        }
                        var_18 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_9 [i_6] [9U] [i_2] [i_1] [i_0]))));
                    }
                }
                for (int i_8 = 0; i_8 < 22; i_8 += 1) 
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (signed char i_9 = 1; i_9 < 21; i_9 += 4) 
                    {
                        var_19 = ((/* implicit */unsigned short) 5496804128810094361ULL);
                        arr_30 [i_8] [i_8] [i_8] = ((/* implicit */unsigned long long int) var_2);
                    }
                    var_20 = ((/* implicit */unsigned short) max((min((var_10), (((/* implicit */long long int) ((unsigned int) var_4))))), (((/* implicit */long long int) 2984134703U))));
                    arr_31 [10ULL] [i_1] [i_8] = ((/* implicit */_Bool) arr_21 [i_0] [i_1] [i_8]);
                    var_21 = ((/* implicit */unsigned char) (-((-(2979414308U)))));
                }
                var_22 = ((/* implicit */int) (-(max((arr_26 [i_0] [i_0]), (((/* implicit */unsigned int) arr_3 [i_0] [i_0]))))));
                arr_32 [i_0] = ((/* implicit */int) (-(var_8)));
                arr_33 [i_0] [8U] = ((/* implicit */unsigned char) arr_19 [i_1]);
            }
        } 
    } 
    var_23 = ((/* implicit */short) var_0);
    var_24 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((unsigned short) (!(((/* implicit */_Bool) var_4)))))), (5496804128810094361ULL)));
    var_25 |= var_8;
    /* LoopSeq 1 */
    for (unsigned short i_10 = 1; i_10 < 18; i_10 += 3) 
    {
        arr_36 [i_10 - 1] [i_10] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (min((arr_34 [i_10]), (((/* implicit */long long int) (_Bool)0)))) : (((/* implicit */long long int) arr_2 [i_10] [i_10]))))) ? (((/* implicit */unsigned long long int) min((max((var_4), (((/* implicit */unsigned int) (unsigned char)16)))), (((/* implicit */unsigned int) arr_28 [i_10] [i_10] [6U] [i_10 - 1] [i_10]))))) : (min((arr_19 [i_10]), (((/* implicit */unsigned long long int) arr_12 [(short)1] [6U] [i_10 + 1] [i_10] [i_10] [i_10] [i_10]))))));
        arr_37 [i_10] = ((/* implicit */unsigned long long int) var_3);
    }
}
