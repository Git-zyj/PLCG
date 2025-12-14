/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54291
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54291 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54291
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 3; i_0 < 14; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            for (int i_2 = 3; i_2 < 15; i_2 += 3) 
            {
                {
                    var_17 = ((unsigned int) arr_4 [i_0 + 1]);
                    arr_7 [i_0] [i_0] [(unsigned char)14] [i_1] = ((/* implicit */unsigned short) ((((_Bool) arr_6 [i_0 + 2] [i_1])) ? (((((/* implicit */int) arr_1 [i_0 + 1] [i_2 - 1])) & (((/* implicit */int) var_2)))) : (((((/* implicit */int) arr_1 [i_0 - 3] [i_0 - 3])) & (((((/* implicit */int) var_15)) & (((/* implicit */int) (signed char)-90))))))));
                    var_18 += ((/* implicit */unsigned long long int) (signed char)-90);
                    /* LoopSeq 3 */
                    for (signed char i_3 = 0; i_3 < 16; i_3 += 3) 
                    {
                        arr_10 [i_3] [i_1] [i_1] [(signed char)9] = ((/* implicit */signed char) (((-(((/* implicit */int) (signed char)-86)))) >= (((/* implicit */int) ((((/* implicit */_Bool) (signed char)-90)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (arr_4 [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))))))));
                        /* LoopSeq 2 */
                        for (unsigned char i_4 = 1; i_4 < 13; i_4 += 3) /* same iter space */
                        {
                            arr_15 [i_0] [i_1] [i_2] [i_1] [i_4] [i_2] [i_1] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_2 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)2))) : (var_11)))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), ((signed char)-86))))) : (722993096U))) & (((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(3852931382U)))) ? (((var_4) + (var_4))) : ((+(((/* implicit */int) arr_5 [i_3] [i_4 + 1] [i_1])))))))));
                            var_19 = ((/* implicit */signed char) min(((unsigned char)4), ((unsigned char)134)));
                        }
                        for (unsigned char i_5 = 1; i_5 < 13; i_5 += 3) /* same iter space */
                        {
                            var_20 = ((arr_8 [i_0] [i_2] [i_3] [i_5]) ? (((arr_8 [i_5 + 3] [i_5] [i_5] [i_5]) ? (arr_14 [i_0 + 2] [i_0 - 2]) : (((/* implicit */int) min((((/* implicit */signed char) var_7)), ((signed char)-86)))))) : (((var_7) ? (((((/* implicit */_Bool) 2285243701U)) ? (((/* implicit */int) (unsigned short)824)) : (arr_14 [i_2] [i_2]))) : (((/* implicit */int) var_7)))));
                            var_21 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1460719939355842984LL)) ? (-6848314399650971101LL) : (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)238))) ^ (((((/* implicit */_Bool) (signed char)-54)) ? (3852931382U) : (2285243701U))))))));
                            arr_20 [11] [i_1] [i_1] [i_3] [i_5] = ((/* implicit */long long int) max((((var_7) ? (arr_14 [i_1] [i_5 + 2]) : (arr_14 [i_0 + 1] [i_1]))), (((((/* implicit */_Bool) 2510549842U)) ? (((/* implicit */int) arr_0 [i_1] [i_1])) : (((/* implicit */int) var_6))))));
                            var_22 = ((/* implicit */_Bool) min((arr_16 [i_0] [i_1] [i_5] [i_1] [i_5 - 1]), (((/* implicit */unsigned long long int) (~(arr_4 [i_3]))))));
                        }
                    }
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
                    {
                        var_23 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)65534)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)0))) : (0U)))), (-6306335458404901847LL)));
                        var_24 = ((/* implicit */short) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (3195237688U) : (((/* implicit */unsigned int) var_4))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (((~(((/* implicit */int) var_7)))) >= (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)86)))))))) : (min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_16 [i_0] [i_0] [i_2] [i_1] [i_1]))))), (((unsigned long long int) arr_13 [i_1] [i_1] [i_2] [i_1] [i_1] [i_6] [i_2]))))));
                        var_25 = ((/* implicit */_Bool) min(((~(((/* implicit */int) arr_17 [i_0 + 1] [i_0] [i_0] [i_0] [i_0] [i_0])))), (((/* implicit */int) arr_2 [i_0]))));
                    }
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
                    {
                        var_26 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_21 [i_0] [i_7])))))) < (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_2] [i_1]))) : (14102630854999400257ULL)))));
                        var_27 = ((/* implicit */unsigned char) ((var_16) ? (min((((/* implicit */int) arr_8 [i_2 - 2] [i_1] [i_0 + 2] [i_0])), (var_3))) : ((-(arr_3 [i_1] [i_1])))));
                        arr_26 [i_1] [i_1] [i_2] [i_7] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */int) ((unsigned short) arr_14 [i_2] [4LL]))), (arr_24 [i_1])))) ? (((/* implicit */long long int) (~(max((((/* implicit */unsigned int) arr_17 [i_0] [8] [i_2] [(unsigned char)14] [i_7] [i_7])), (1784417438U)))))) : (max((((/* implicit */long long int) arr_4 [i_0])), (arr_12 [(signed char)12] [(unsigned char)7] [i_0 - 1] [i_0] [(unsigned char)7] [i_2 + 1] [i_1])))));
                    }
                }
            } 
        } 
    } 
    var_28 = ((/* implicit */signed char) var_14);
    var_29 = ((/* implicit */long long int) ((_Bool) (~(((/* implicit */int) var_6)))));
}
