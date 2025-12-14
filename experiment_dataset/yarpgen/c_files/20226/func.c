/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20226
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20226 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20226
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
    var_11 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) 9223372036854775807LL)), (14613859079678482748ULL)));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            {
                var_12 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) min((arr_4 [i_0] [(unsigned char)17] [i_0]), (arr_2 [i_0] [i_1]))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [(signed char)12]))) : (min((min((((/* implicit */long long int) arr_2 [i_0] [i_1])), (arr_0 [i_1]))), (((/* implicit */long long int) arr_2 [i_0] [i_0]))))));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 18; i_2 += 2) 
                {
                    for (unsigned char i_3 = 0; i_3 < 18; i_3 += 1) 
                    {
                        {
                            arr_12 [i_3] [i_2] [i_3] [i_3] [i_0] [i_0] = ((((/* implicit */_Bool) var_9)) ? (max((((/* implicit */long long int) ((unsigned int) arr_3 [i_0] [(unsigned short)1]))), (min((((/* implicit */long long int) var_10)), (arr_0 [11ULL]))))) : (((/* implicit */long long int) max((max((arr_8 [i_0] [i_1] [i_2] [i_2]), (((/* implicit */unsigned int) var_10)))), (((/* implicit */unsigned int) min((var_3), (((/* implicit */unsigned char) arr_11 [i_0] [i_0] [8U] [i_0] [(signed char)16])))))))));
                            var_13 = (((!(((/* implicit */_Bool) var_2)))) ? (min((((/* implicit */unsigned long long int) ((unsigned int) arr_0 [13LL]))), (max((((/* implicit */unsigned long long int) arr_3 [7] [i_2])), (var_6))))) : (((/* implicit */unsigned long long int) ((int) ((int) arr_3 [i_0] [i_0])))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned int i_4 = 0; i_4 < 18; i_4 += 3) 
                {
                    for (unsigned char i_5 = 0; i_5 < 18; i_5 += 3) 
                    {
                        {
                            /* LoopSeq 4 */
                            /* vectorizable */
                            for (unsigned int i_6 = 0; i_6 < 18; i_6 += 2) 
                            {
                                arr_21 [i_0] [i_1] [i_0] [(unsigned char)8] [i_6] = (~(((/* implicit */int) arr_16 [i_0] [i_1])));
                                arr_22 [i_0] [i_1] [i_4] [i_6] [i_5] [i_6] = ((/* implicit */unsigned int) arr_9 [i_0] [(_Bool)1] [i_0]);
                                arr_23 [i_0] [i_0] [i_4] [i_5] [i_4] = ((/* implicit */long long int) ((unsigned long long int) arr_4 [i_5] [i_4] [i_0]));
                            }
                            for (short i_7 = 0; i_7 < 18; i_7 += 4) 
                            {
                                arr_26 [i_0] [(unsigned char)2] = ((/* implicit */unsigned int) max((((/* implicit */int) (!(((/* implicit */_Bool) min((var_7), (((/* implicit */unsigned long long int) arr_11 [i_7] [i_7] [i_7] [i_7] [i_7])))))))), (max((((/* implicit */int) var_1)), (((int) arr_16 [i_0] [i_7]))))));
                                arr_27 [i_1] [i_5] [i_1] [i_1] [i_1] [i_0] = ((/* implicit */int) arr_3 [i_4] [i_1]);
                                arr_28 [i_5] = ((/* implicit */unsigned short) (-(arr_6 [i_0] [(_Bool)1])));
                            }
                            for (unsigned short i_8 = 0; i_8 < 18; i_8 += 1) 
                            {
                                var_14 = ((/* implicit */int) (+(min((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) arr_17 [i_8] [i_5] [i_0] [i_0] [i_1] [i_0])), (arr_8 [i_8] [(unsigned char)11] [(unsigned char)11] [i_0])))), (min((var_6), (((/* implicit */unsigned long long int) arr_18 [7] [7] [i_1] [i_1]))))))));
                                arr_31 [i_8] [i_0] [i_0] [1ULL] [i_0] [i_0] = ((/* implicit */unsigned int) min((min((((/* implicit */short) (unsigned char)250)), ((short)28057))), (((/* implicit */short) max((((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) > (arr_1 [i_1])))), (arr_17 [(signed char)4] [i_1] [i_5] [i_4] [i_1] [i_0]))))));
                            }
                            for (short i_9 = 1; i_9 < 16; i_9 += 1) 
                            {
                                arr_34 [i_0] [i_1] [i_4] = min((((((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_7 [i_5] [i_5] [i_4] [i_1]))))) % (max((2549232246353995650LL), (((/* implicit */long long int) (short)3413)))))), (((/* implicit */long long int) min((((/* implicit */unsigned char) var_1)), (((unsigned char) arr_3 [i_0] [i_1]))))));
                                arr_35 [i_9] = ((/* implicit */short) ((((/* implicit */_Bool) max((min((arr_6 [i_5] [i_4]), (((/* implicit */unsigned int) var_5)))), (((/* implicit */unsigned int) (-(((/* implicit */int) arr_13 [i_5] [i_5] [i_1] [i_1])))))))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [i_0] [i_1] [i_5])))))));
                                arr_36 [9] [i_1] [i_4] [i_5] [(_Bool)1] [i_5] [i_1] = ((/* implicit */_Bool) ((short) (+(max((arr_9 [i_0] [5U] [i_0]), (((/* implicit */int) arr_17 [i_0] [i_1] [17LL] [(unsigned char)3] [i_5] [i_9])))))));
                                arr_37 [i_4] = ((/* implicit */_Bool) var_9);
                            }
                            var_15 = ((/* implicit */_Bool) min((arr_0 [i_0]), (((/* implicit */long long int) arr_17 [i_0] [i_1] [(signed char)0] [i_5] [(signed char)0] [i_4]))));
                            arr_38 [i_0] [13U] [i_4] [i_0] = ((/* implicit */int) min((max((min((arr_1 [i_1]), (((/* implicit */unsigned long long int) arr_16 [i_1] [i_5])))), (min((var_7), (((/* implicit */unsigned long long int) var_4)))))), (((((/* implicit */_Bool) arr_7 [i_1] [i_0] [12ULL] [(unsigned short)1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))) : (((((/* implicit */_Bool) arr_29 [i_4] [13ULL] [13ULL])) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_5] [i_5])))))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
