/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243521
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243521 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243521
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
    var_12 = ((/* implicit */unsigned int) ((unsigned long long int) var_1));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 9; i_0 += 1) 
    {
        for (unsigned char i_1 = 3; i_1 < 8; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 4) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned short i_3 = 3; i_3 < 8; i_3 += 4) 
                    {
                        arr_11 [i_2] = ((/* implicit */unsigned long long int) var_11);
                        arr_12 [i_0] [i_1 - 2] [i_2] [i_0] [i_1] = ((/* implicit */short) var_9);
                    }
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        arr_16 [i_0] [i_2] [i_0] [i_4] [i_1] &= ((((/* implicit */int) arr_7 [i_0 + 1] [i_0] [i_0 - 1] [i_0])) == (((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)25))))) ? (((/* implicit */int) arr_6 [i_2])) : ((-(((/* implicit */int) arr_3 [i_0] [i_0] [i_2])))))));
                        arr_17 [(unsigned char)2] [i_1] [i_2] [i_0] [i_4] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((var_11) ? (((/* implicit */long long int) ((int) var_4))) : (((long long int) arr_7 [i_0] [i_0 - 1] [i_0 - 1] [i_0 - 1]))))), (((((/* implicit */_Bool) arr_3 [i_1 - 2] [i_1 - 2] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)25))) : (14899476135172949923ULL)))));
                    }
                    for (short i_5 = 1; i_5 < 9; i_5 += 3) 
                    {
                        arr_22 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) var_7);
                        arr_23 [i_5] [i_5] [i_5 + 1] [i_2] = ((/* implicit */long long int) (-(((/* implicit */int) var_11))));
                        arr_24 [i_0] [i_2] [i_1 - 1] [i_0] = ((/* implicit */int) ((((/* implicit */int) (signed char)28)) != ((~(((/* implicit */int) arr_6 [i_0]))))));
                    }
                    /* LoopSeq 3 */
                    for (unsigned long long int i_6 = 0; i_6 < 10; i_6 += 2) /* same iter space */
                    {
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (short i_7 = 0; i_7 < 10; i_7 += 4) /* same iter space */
                        {
                            arr_30 [i_0] [i_0] [2ULL] [i_0] [i_6] [2ULL] = ((/* implicit */unsigned long long int) ((_Bool) arr_15 [i_0 + 1]));
                            arr_31 [i_0] [i_0 - 1] [i_6] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) (-(((/* implicit */int) ((unsigned short) (unsigned char)25)))));
                            arr_32 [i_0] [i_0] [i_0] [i_7] [i_0] [i_0] = ((/* implicit */short) ((arr_19 [i_0 + 1] [i_7] [i_7] [i_0 + 1] [i_7]) % (((/* implicit */int) arr_8 [i_2]))));
                            arr_33 [i_1] [i_1] [i_0] [i_0] [i_1] [i_7] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) 2188518001U)) ? (((((/* implicit */long long int) var_5)) + (867066682042488233LL))) : (((/* implicit */long long int) ((unsigned int) arr_15 [i_0])))));
                        }
                        /* vectorizable */
                        for (short i_8 = 0; i_8 < 10; i_8 += 4) /* same iter space */
                        {
                            arr_36 [i_8] [i_0] [i_0] [i_6] [i_8] [i_6] [i_6] = ((/* implicit */unsigned long long int) arr_20 [i_0]);
                            arr_37 [i_0] [i_1] [i_0] [i_1] [i_1] = ((/* implicit */long long int) 7375124324531606267ULL);
                            arr_38 [i_0] [(unsigned char)3] [i_2] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((int) ((((/* implicit */int) var_4)) == (arr_21 [i_0] [i_0] [i_0] [i_0] [i_0]))));
                            arr_39 [i_8] [i_0] [i_2] [i_1 - 2] [i_2] [i_0] [i_0] = ((/* implicit */_Bool) (~(((/* implicit */int) var_11))));
                        }
                        for (short i_9 = 0; i_9 < 10; i_9 += 4) /* same iter space */
                        {
                            arr_43 [i_0] = ((/* implicit */short) (~(arr_19 [i_0] [i_0] [i_2] [i_6] [i_9])));
                            arr_44 [i_0 - 1] [i_0] [i_2] [i_2] [i_0 - 1] = ((/* implicit */signed char) 820352911U);
                        }
                        arr_45 [i_0] [i_6] [i_2] [i_6] = ((/* implicit */int) (unsigned char)175);
                        arr_46 [i_0] [i_0] [i_2] [i_2] = ((/* implicit */unsigned short) arr_13 [i_6] [1] [i_0] [i_1] [i_0]);
                        arr_47 [i_0] = ((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) max(((signed char)-47), (((/* implicit */signed char) arr_27 [i_0 + 1] [i_0 - 1] [i_0] [i_0] [i_0]))))))))));
                    }
                    for (unsigned long long int i_10 = 0; i_10 < 10; i_10 += 2) /* same iter space */
                    {
                        arr_50 [i_2] = ((/* implicit */short) ((var_1) < (((/* implicit */unsigned long long int) arr_42 [i_0 - 1] [i_1 - 2] [i_1 - 2] [i_2] [i_2] [i_1 - 2] [i_10]))));
                        arr_51 [i_0] [i_0] [i_0] [i_10] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)172))) > (3463775940U))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) var_2))))) : (((((/* implicit */_Bool) arr_8 [i_0])) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)128)))))))) ? (((((/* implicit */long long int) ((/* implicit */int) var_6))) % ((~(var_3))))) : (((/* implicit */long long int) ((((/* implicit */int) arr_5 [i_0] [i_0] [i_0])) & (((/* implicit */int) (signed char)-83)))))));
                    }
                    /* vectorizable */
                    for (int i_11 = 0; i_11 < 10; i_11 += 2) 
                    {
                        arr_54 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) var_0);
                        arr_55 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */long long int) 2106449299U)) ^ (var_3)));
                        arr_56 [i_0] [i_0] [i_11] [i_11] = ((/* implicit */unsigned int) var_3);
                    }
                }
            } 
        } 
    } 
}
