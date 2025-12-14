/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242105
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242105 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242105
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            arr_5 [12U] [(short)9] = ((/* implicit */unsigned long long int) var_8);
            var_18 = ((/* implicit */short) ((var_3) & (((/* implicit */long long int) arr_4 [i_0]))));
            /* LoopNest 2 */
            for (short i_2 = 3; i_2 < 21; i_2 += 2) 
            {
                for (unsigned long long int i_3 = 3; i_3 < 19; i_3 += 1) 
                {
                    {
                        /* LoopSeq 4 */
                        for (unsigned short i_4 = 0; i_4 < 22; i_4 += 1) 
                        {
                            arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */unsigned long long int) ((unsigned short) arr_12 [i_2 - 1] [i_2 - 1] [i_2 + 1] [i_2 + 1]));
                            var_19 = ((/* implicit */long long int) arr_4 [i_4]);
                            var_20 = ((/* implicit */signed char) arr_13 [i_0] [i_1] [i_1] [i_2] [i_3] [i_4] [i_4]);
                        }
                        for (long long int i_5 = 0; i_5 < 22; i_5 += 2) 
                        {
                            var_21 = ((((/* implicit */int) ((var_3) >= (((/* implicit */long long int) ((/* implicit */int) (signed char)-110)))))) <= (((/* implicit */int) arr_6 [i_2 + 1])));
                            var_22 = ((/* implicit */unsigned short) var_5);
                            var_23 = ((/* implicit */short) var_10);
                            arr_20 [i_0] [i_0] [i_0] = ((/* implicit */int) ((short) arr_4 [i_3 + 2]));
                        }
                        for (unsigned long long int i_6 = 1; i_6 < 18; i_6 += 1) /* same iter space */
                        {
                            var_24 |= ((/* implicit */unsigned long long int) 0U);
                            var_25 &= ((/* implicit */short) ((((((/* implicit */_Bool) arr_19 [i_0] [i_0] [i_2] [i_3 + 2] [i_6 + 1] [i_6 + 1] [i_6])) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-25450))))) >> (((((var_6) ^ (((/* implicit */int) arr_22 [i_0] [i_0] [(unsigned short)7] [i_0] [9U] [i_0])))) + (1029958140)))));
                        }
                        for (unsigned long long int i_7 = 1; i_7 < 18; i_7 += 1) /* same iter space */
                        {
                            arr_26 [i_1] [i_3 + 2] [i_3 + 3] [i_0] [i_1] [i_1] [i_0] = ((/* implicit */unsigned char) var_12);
                            var_26 &= ((/* implicit */unsigned long long int) var_17);
                            var_27 = ((/* implicit */short) ((((/* implicit */_Bool) arr_18 [i_0] [i_0] [i_2 - 3] [i_3 - 2])) ? (((/* implicit */int) arr_25 [(signed char)18] [i_0] [i_2 - 3] [i_2] [i_3 - 3] [i_7 + 3] [i_7])) : (((/* implicit */int) (signed char)-29))));
                            var_28 = ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) arr_24 [i_0] [10U] [(signed char)2] [i_2] [(unsigned short)19] [i_0])) || (((/* implicit */_Bool) var_12))))) * (((/* implicit */int) (!(((/* implicit */_Bool) var_17)))))));
                        }
                        var_29 = ((/* implicit */long long int) (-2147483647 - 1));
                        var_30 = ((/* implicit */int) ((arr_13 [8] [i_1] [8] [8] [i_1] [i_1] [i_1]) && (((/* implicit */_Bool) (unsigned char)179))));
                        arr_27 [i_0] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)-26)) * (((/* implicit */int) (short)255))));
                        /* LoopSeq 2 */
                        for (unsigned char i_8 = 0; i_8 < 22; i_8 += 2) 
                        {
                            arr_30 [i_0] [i_0] [i_2 - 3] [i_3] [i_1] = ((/* implicit */signed char) (-(var_13)));
                            arr_31 [i_0] [i_1] [i_2] [i_3] [i_0] [i_2] [i_3] |= ((/* implicit */long long int) (~(arr_17 [i_2 - 3] [i_2 - 3] [i_3] [i_3 - 3] [(unsigned char)0] [4LL] [i_8])));
                            arr_32 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) (unsigned short)696);
                            var_31 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)696)) ? (((/* implicit */long long int) 3834383163U)) : (arr_24 [i_0] [i_0] [i_2] [i_3] [i_3] [15U])))) ? (var_17) : (((/* implicit */long long int) ((((/* implicit */_Bool) 3834383163U)) ? (((/* implicit */int) arr_19 [11ULL] [11ULL] [11ULL] [i_8] [i_8] [i_8] [i_8])) : (var_6)))));
                        }
                        for (long long int i_9 = 0; i_9 < 22; i_9 += 2) 
                        {
                            arr_35 [i_0] [i_0] [(short)12] [i_3] [i_9] = ((/* implicit */unsigned long long int) var_6);
                            arr_36 [i_0] [(signed char)6] = ((/* implicit */long long int) arr_12 [i_9] [i_3] [i_2 - 1] [i_0]);
                            arr_37 [i_0] [i_1] [i_2 + 1] [i_3] [i_9] = ((/* implicit */short) (~(var_4)));
                            arr_38 [i_0] [i_0] = ((/* implicit */int) ((arr_28 [i_2 - 2] [i_3 + 1] [i_2] [i_3] [i_0]) / (((/* implicit */long long int) ((/* implicit */int) var_12)))));
                        }
                    }
                } 
            } 
            var_32 = ((/* implicit */unsigned long long int) min((var_32), (((/* implicit */unsigned long long int) arr_8 [i_0]))));
        }
        var_33 = ((/* implicit */unsigned int) ((((var_9) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_0] [i_0] [i_0] [i_0] [i_0] [18ULL]))))) ? (((((/* implicit */_Bool) (short)-1)) ? (var_6) : (((/* implicit */int) var_15)))) : (((/* implicit */int) arr_6 [i_0]))));
        var_34 = arr_11 [i_0] [i_0] [i_0] [i_0];
    }
    var_35 = ((/* implicit */long long int) ((signed char) (unsigned short)64840));
    var_36 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned short) var_5))) ? (17573932145109743763ULL) : (((/* implicit */unsigned long long int) min((var_7), (max((((/* implicit */unsigned int) var_15)), (var_2))))))));
    var_37 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */int) var_12)), (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) (short)244))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)699))) : (var_8)));
}
