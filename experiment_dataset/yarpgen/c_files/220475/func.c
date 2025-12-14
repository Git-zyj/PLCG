/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220475
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220475 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220475
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
    for (short i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (unsigned int i_1 = 2; i_1 < 11; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    for (short i_3 = 4; i_3 < 14; i_3 += 1) 
                    {
                        {
                            /* LoopSeq 2 */
                            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                            {
                                arr_14 [i_1] = var_1;
                                arr_15 [i_0] [i_1 + 4] [i_1] [i_1 + 4] [i_4] = ((/* implicit */long long int) ((short) max((arr_2 [i_0]), (arr_2 [i_0]))));
                            }
                            /* vectorizable */
                            for (short i_5 = 3; i_5 < 14; i_5 += 4) 
                            {
                                arr_19 [i_0] [i_1] [i_2] [i_1] [i_5 - 2] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) (~(var_0)))) * (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-11))) - (arr_10 [i_1] [i_1 - 1] [i_2] [i_2] [i_3] [i_5])))));
                                var_10 -= ((/* implicit */short) (((~(2458544897U))) >= (((unsigned int) var_2))));
                            }
                            /* LoopSeq 4 */
                            for (unsigned long long int i_6 = 3; i_6 < 14; i_6 += 4) 
                            {
                                arr_23 [i_0] [i_1 - 2] [i_2 - 1] [i_1] [i_6 - 1] = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (signed char)37)), (24U)));
                                arr_24 [i_0] [i_1] [i_1 + 3] [i_2 - 1] [6U] [i_6 - 3] = ((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) (signed char)-17))));
                            }
                            for (int i_7 = 1; i_7 < 13; i_7 += 2) /* same iter space */
                            {
                                arr_27 [i_0] [i_0] [i_1] [4] [i_0] [(signed char)14] [i_0] &= ((/* implicit */int) (short)-28252);
                                arr_28 [i_0] [i_1] = ((/* implicit */unsigned short) ((unsigned char) 18303258053989595607ULL));
                            }
                            for (int i_8 = 1; i_8 < 13; i_8 += 2) /* same iter space */
                            {
                                var_11 = ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */unsigned long long int) 4028575593U)) != (18446744073709551612ULL)))) - (((/* implicit */int) (short)-28269))));
                                arr_31 [i_0] [i_1] [i_1] [i_8 - 1] = ((/* implicit */unsigned int) (~((~(((/* implicit */int) (unsigned char)8))))));
                            }
                            for (int i_9 = 1; i_9 < 13; i_9 += 2) /* same iter space */
                            {
                                var_12 = ((((/* implicit */int) ((((/* implicit */int) arr_18 [i_1 + 4] [i_1 + 1] [i_1])) <= (((/* implicit */int) arr_25 [i_9 + 1] [i_3 + 1] [i_2 - 1] [i_1 + 3] [i_0]))))) << (((((/* implicit */int) (!(((/* implicit */_Bool) var_2))))) & (((/* implicit */int) (short)32746)))));
                                arr_35 [i_0] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((((/* implicit */int) (_Bool)1)) & (1786930744)))))) ? (arr_8 [i_9 + 1] [i_3 - 4] [i_2] [i_1 + 3]) : (2147483647)));
                                arr_36 [i_0] [i_0] [i_2 - 1] [i_1] [i_2 - 1] = ((/* implicit */unsigned int) (((~(arr_30 [i_1 + 2] [i_2 - 1] [i_3 - 1]))) & (((/* implicit */long long int) ((/* implicit */int) ((short) ((4294967295U) << (((4294967295U) - (4294967274U))))))))));
                                arr_37 [i_0] [i_1] [i_2] [i_3 - 4] [i_0] = ((/* implicit */int) arr_18 [i_1] [i_2] [i_1]);
                            }
                            /* LoopSeq 3 */
                            for (unsigned long long int i_10 = 0; i_10 < 15; i_10 += 2) /* same iter space */
                            {
                                var_13 = ((/* implicit */int) (-(((((/* implicit */_Bool) arr_39 [i_2 - 1] [i_3 - 4] [i_2 - 1] [i_3] [i_1 + 3] [10ULL])) ? (((/* implicit */unsigned long long int) arr_8 [i_2 - 1] [i_3 - 3] [i_2 - 1] [i_3 + 1])) : (arr_10 [i_1] [i_3 - 3] [i_2 - 1] [i_1] [i_1 + 4] [i_1 + 4])))));
                                arr_41 [i_1] [i_3 - 4] [i_2 - 1] [i_1] [i_1 + 1] [i_0] [i_1] = ((/* implicit */long long int) (-((-(arr_39 [i_3 - 2] [i_1] [i_2] [i_3] [i_2 - 1] [i_1 - 2])))));
                                arr_42 [i_0] [i_1] [i_0] [i_0] [i_3 - 2] [i_10] = ((/* implicit */long long int) max((((/* implicit */short) var_7)), (min((((/* implicit */short) (_Bool)1)), ((short)5323)))));
                            }
                            for (unsigned long long int i_11 = 0; i_11 < 15; i_11 += 2) /* same iter space */
                            {
                                arr_47 [i_1] [i_2] [i_1] = ((/* implicit */_Bool) min((max((((/* implicit */unsigned int) (-(arr_6 [i_0] [i_1 + 3] [i_1 + 3] [i_11])))), (min((var_0), (((/* implicit */unsigned int) arr_34 [i_0] [i_3] [i_3 + 1] [i_2] [i_1 + 2] [i_1] [i_0])))))), (((/* implicit */unsigned int) ((-2147483646) > (1130654466))))));
                                arr_48 [i_1] [i_3 - 4] [i_3 - 4] [i_2] [i_1 - 2] [i_1] = ((/* implicit */short) (-((~(((/* implicit */int) var_7))))));
                            }
                            for (unsigned long long int i_12 = 0; i_12 < 15; i_12 += 2) /* same iter space */
                            {
                                var_14 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) max((arr_29 [i_1 + 4] [i_1 + 4] [i_2 - 1] [i_1 + 4] [i_0] [i_0]), (((/* implicit */unsigned short) arr_22 [i_0] [i_1] [i_2] [i_3] [i_12]))))), (2471204153496601013ULL)));
                                arr_51 [i_12] [2] [i_1] [i_1] [i_0] [i_0] = (!(((/* implicit */_Bool) arr_44 [i_1] [i_1] [i_2] [i_1] [0LL])));
                                var_15 -= ((/* implicit */unsigned char) max((((/* implicit */long long int) 2962330307U)), (((((/* implicit */_Bool) 1332636988U)) ? (((((/* implicit */long long int) 781212779U)) % (-6384853716873539386LL))) : (((/* implicit */long long int) 1130654466))))));
                                arr_52 [i_12] [i_3 - 4] [i_1] [i_1] [i_0] = ((/* implicit */unsigned char) (~(((/* implicit */int) ((unsigned short) (!(((/* implicit */_Bool) var_3))))))));
                            }
                        }
                    } 
                } 
                arr_53 [(signed char)12] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) (~(((/* implicit */int) ((unsigned short) arr_33 [i_0] [i_1] [i_0] [i_0] [(short)10])))))) ^ (max((((0U) - (((/* implicit */unsigned int) ((/* implicit */int) var_9))))), (((/* implicit */unsigned int) ((((/* implicit */int) var_5)) < (((/* implicit */int) (short)-1)))))))));
            }
        } 
    } 
    var_16 += ((/* implicit */unsigned long long int) ((_Bool) 1934237383U));
}
