/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35232
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35232 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35232
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
    /* LoopSeq 3 */
    for (unsigned int i_0 = 1; i_0 < 9; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            for (short i_2 = 3; i_2 < 9; i_2 += 2) 
            {
                {
                    arr_7 [i_0] [i_1] [i_1] [i_2] = ((/* implicit */signed char) arr_3 [i_0]);
                    arr_8 [i_1] = ((/* implicit */_Bool) (+(var_4)));
                    arr_9 [i_1] = ((((/* implicit */long long int) ((0) - (((/* implicit */int) (signed char)-2))))) % (max((((/* implicit */long long int) arr_5 [i_2 - 1] [i_1] [i_0 + 1])), (var_13))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned int i_3 = 0; i_3 < 10; i_3 += 2) 
        {
            for (unsigned char i_4 = 0; i_4 < 10; i_4 += 4) 
            {
                {
                    arr_16 [i_0] [i_0] [i_0] [(unsigned short)8] = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) arr_1 [i_0 - 1] [i_0 - 1])) ? (((/* implicit */int) arr_1 [i_0 + 1] [i_3])) : (((/* implicit */int) var_9))))));
                    /* LoopSeq 1 */
                    for (unsigned short i_5 = 2; i_5 < 7; i_5 += 3) 
                    {
                        var_17 = ((/* implicit */unsigned short) 5U);
                        /* LoopSeq 4 */
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            arr_23 [i_0] [i_0] [i_0] [i_0] [i_6] [i_0 + 1] = ((/* implicit */short) ((((/* implicit */unsigned long long int) max((arr_15 [i_0] [i_0] [i_0 + 1] [i_5 - 1]), (((/* implicit */unsigned int) arr_12 [i_5 - 1] [i_4] [i_0]))))) & (15679187171654266613ULL)));
                            arr_24 [i_0] [i_0] [(unsigned char)9] [i_6] [i_3] [(signed char)2] [i_6] = ((/* implicit */unsigned int) (+(((/* implicit */int) (short)16417))));
                        }
                        /* vectorizable */
                        for (long long int i_7 = 0; i_7 < 10; i_7 += 1) 
                        {
                            arr_28 [i_7] [(short)0] [i_0] = ((/* implicit */_Bool) arr_14 [i_5 + 1] [i_0 + 1] [i_0 - 1]);
                            var_18 = ((/* implicit */int) 15679187171654266613ULL);
                            arr_29 [i_0] [i_0] [i_4] [i_5] [i_3] [i_5] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) (unsigned short)49221)) : (((/* implicit */int) (unsigned char)32))))) || (((/* implicit */_Bool) arr_25 [i_0 + 1] [i_0 + 1] [i_0] [i_0 + 1] [i_0 + 1]))));
                        }
                        for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
                        {
                            var_19 = ((/* implicit */long long int) min((((/* implicit */int) ((unsigned short) (unsigned char)150))), (((((/* implicit */int) arr_4 [i_5 + 2])) / (arr_27 [i_0 - 1])))));
                            var_20 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) ((var_5) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))))) ? (((((/* implicit */_Bool) (signed char)-44)) ? (15679187171654266611ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_25 [4LL] [4LL] [i_4] [4LL] [i_8])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_2 [i_4]))))))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_0 [i_0 + 1] [i_5 - 2])))))));
                        }
                        /* vectorizable */
                        for (signed char i_9 = 0; i_9 < 10; i_9 += 3) 
                        {
                            arr_35 [i_0] [i_4] [i_4] [i_5] [i_0] = ((/* implicit */short) var_10);
                            var_21 = ((/* implicit */signed char) -760558397315997470LL);
                            arr_36 [i_0] [i_0] [i_0] [i_5] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)-50)) ? (((/* implicit */int) arr_2 [i_3])) : (arr_27 [i_0 - 1])));
                        }
                        arr_37 [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((signed char) ((((/* implicit */long long int) ((/* implicit */int) arr_13 [i_5 + 3]))) != (-100638700085096650LL))));
                    }
                    arr_38 [i_0] [i_3] = ((/* implicit */signed char) 8108893604613042348LL);
                }
            } 
        } 
        var_22 = -6083453572867928010LL;
    }
    for (signed char i_10 = 0; i_10 < 21; i_10 += 4) /* same iter space */
    {
        arr_41 [i_10] = ((/* implicit */long long int) arr_39 [i_10]);
        var_23 = ((/* implicit */short) max((((((/* implicit */_Bool) arr_39 [i_10])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) arr_40 [i_10])), (var_3))))) : (((unsigned long long int) arr_39 [i_10])))), (((/* implicit */unsigned long long int) var_0))));
        var_24 = ((/* implicit */unsigned int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (short)27842))) | (arr_39 [i_10]))) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4284856904581290044LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (1653973212U))))));
    }
    for (signed char i_11 = 0; i_11 < 21; i_11 += 4) /* same iter space */
    {
        arr_45 [i_11] = ((/* implicit */unsigned char) ((((((((/* implicit */_Bool) (unsigned short)44559)) || (((/* implicit */_Bool) -6083453572867928022LL)))) ? (((long long int) (signed char)-44)) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-10))))) != (((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned short) arr_42 [i_11]))) ? (((/* implicit */int) arr_40 [i_11])) : (((/* implicit */int) ((((/* implicit */int) arr_40 [i_11])) < (((/* implicit */int) arr_43 [i_11] [i_11]))))))))));
        var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_42 [i_11])) ? (((/* implicit */unsigned long long int) 5499012953185805498LL)) : (arr_39 [i_11])))) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : ((((~(arr_44 [16LL] [i_11]))) >> (((((/* implicit */int) ((unsigned char) 33554431LL))) - (222)))))));
    }
    var_26 -= ((/* implicit */unsigned char) var_1);
}
