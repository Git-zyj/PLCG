/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34387
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34387 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34387
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
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            {
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */int) ((max(((+(var_8))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0] [i_1])) ? (((/* implicit */int) (unsigned short)27257)) : (((/* implicit */int) (unsigned short)65524))))))) > (((/* implicit */long long int) var_9))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 19; i_2 += 1) 
                {
                    for (signed char i_3 = 0; i_3 < 19; i_3 += 2) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 19; i_4 += 3) 
                        {
                            {
                                arr_13 [i_2] [i_2] = arr_1 [i_0] [i_3];
                                arr_14 [i_0] [i_0] [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) max((4294967295U), (((/* implicit */unsigned int) max((((/* implicit */unsigned char) arr_11 [i_3])), (var_11))))))) && (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (unsigned char)22)), (var_3)))) && (((/* implicit */_Bool) var_11))))));
                                arr_15 [i_0] [i_2] [i_2] [i_3] [i_4] [i_2] = ((/* implicit */unsigned int) (+(max((arr_1 [i_2] [i_2]), (arr_9 [i_1] [i_1] [i_2] [i_1] [i_1] [i_0])))));
                            }
                        } 
                    } 
                } 
                arr_16 [i_1] [i_1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) var_2)) & (min((((/* implicit */int) min((((/* implicit */unsigned char) arr_8 [i_0] [i_1])), (var_11)))), (max((((/* implicit */int) (short)32765)), (16383)))))));
                arr_17 [i_0] [i_0] = ((/* implicit */unsigned char) max((17399337380435535894ULL), (((/* implicit */unsigned long long int) (+(1258445190U))))));
                arr_18 [i_0] [i_1] = ((/* implicit */unsigned int) (+(arr_9 [i_0] [(unsigned short)12] [i_0] [i_1] [7] [i_1])));
            }
        } 
    } 
    var_14 = ((/* implicit */short) max((((/* implicit */unsigned long long int) (short)32765)), (17230426951939369093ULL)));
    var_15 = ((/* implicit */_Bool) var_7);
    /* LoopNest 3 */
    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
    {
        for (long long int i_6 = 0; i_6 < 25; i_6 += 4) 
        {
            for (long long int i_7 = 0; i_7 < 25; i_7 += 2) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned long long int i_8 = 0; i_8 < 25; i_8 += 1) 
                    {
                        arr_32 [i_5] &= ((/* implicit */unsigned int) ((((((/* implicit */int) arr_25 [(signed char)23])) <= (((/* implicit */int) var_7)))) ? ((-(((/* implicit */int) (short)-16633)))) : (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) arr_23 [(short)6] [i_7] [i_6])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_6]))) : (18446744073709551615ULL)))))));
                        arr_33 [8U] [i_8] [i_7] [i_8] [i_6] = ((/* implicit */_Bool) arr_28 [i_8] [i_7] [11] [i_6] [i_6] [i_5 - 1]);
                    }
                    for (long long int i_9 = 0; i_9 < 25; i_9 += 4) /* same iter space */
                    {
                        arr_36 [i_9] [i_7] [i_6] [12] = ((max((((/* implicit */unsigned int) (unsigned short)61625)), (min((((/* implicit */unsigned int) (short)-17553)), (2165958296U))))) + (((/* implicit */unsigned int) ((/* implicit */int) var_1))));
                        arr_37 [i_5] [i_7] [i_7] [i_5] [i_7] = ((/* implicit */int) (+(725146061U)));
                    }
                    for (long long int i_10 = 0; i_10 < 25; i_10 += 4) /* same iter space */
                    {
                        arr_40 [1] [(unsigned short)24] [i_7] [i_7] = ((/* implicit */long long int) (+(((/* implicit */int) max((arr_26 [1] [i_5 - 1]), (arr_26 [i_6] [i_5 - 1]))))));
                        arr_41 [i_5] [i_5] [i_7] [(short)9] [i_5] [i_10] &= ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) arr_29 [i_5 - 1] [i_5] [i_5] [i_5] [i_5 - 1])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_34 [i_5 - 1] [i_5 - 1] [i_5 - 1] [i_5 - 1] [i_5 - 1]))))));
                        arr_42 [(short)9] [i_7] [i_6] = ((/* implicit */unsigned short) -9LL);
                    }
                    arr_43 [i_5 - 1] [(short)22] [i_7] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (+(((/* implicit */int) ((arr_28 [i_7] [i_7] [i_5] [(signed char)9] [i_5] [i_5]) <= (((/* implicit */long long int) ((/* implicit */int) arr_34 [i_7] [20LL] [i_6] [i_5] [(_Bool)1])))))))))));
                    arr_44 [i_5] [i_5] [i_7] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */int) var_5)) >> (((((/* implicit */int) (unsigned short)41243)) - (41223)))));
                    arr_45 [i_5] [i_5] = ((/* implicit */signed char) arr_35 [i_5] [i_5] [i_5] [i_7]);
                }
            } 
        } 
    } 
}
