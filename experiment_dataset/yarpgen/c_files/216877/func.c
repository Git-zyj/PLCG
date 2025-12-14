/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216877
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216877 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216877
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
    var_18 = ((/* implicit */short) var_13);
    var_19 -= var_3;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_20 += max((arr_5 [i_1 + 1]), (arr_5 [i_1 + 1]));
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 16; i_3 += 2) 
                    {
                        for (short i_4 = 3; i_4 < 13; i_4 += 4) 
                        {
                            {
                                var_21 = ((/* implicit */signed char) arr_4 [(signed char)0] [i_2] [i_4]);
                                var_22 *= max((arr_8 [i_1] [i_2] [i_3] [i_4]), (min((9007199253692416LL), (((/* implicit */long long int) (unsigned short)16383)))));
                                var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) max((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_5 [i_1 + 1]))) / (max((((/* implicit */long long int) arr_13 [i_0] [i_0] [i_2] [i_3] [i_4])), (arr_8 [i_0] [i_0] [i_0] [i_0])))))), (((arr_3 [i_1 + 1]) * (arr_3 [i_1 + 1]))))))));
                                var_24 = ((/* implicit */long long int) min((max((((arr_12 [i_0] [i_0] [i_0]) - (arr_3 [i_1]))), (((/* implicit */unsigned long long int) arr_7 [i_1 + 1])))), (((/* implicit */unsigned long long int) arr_10 [i_1] [i_1 + 1]))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (signed char i_5 = 0; i_5 < 16; i_5 += 4) /* same iter space */
                    {
                        arr_17 [i_1] [i_2] [i_1] [i_1] [2LL] [(unsigned short)2] = ((/* implicit */unsigned long long int) ((max((arr_0 [i_1 + 1]), (((/* implicit */unsigned int) (signed char)-49)))) << (((((/* implicit */int) arr_13 [i_1] [i_1 + 1] [i_1] [i_1] [i_1])) ^ (((/* implicit */int) arr_13 [i_1] [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1]))))));
                        arr_18 [i_0] = ((/* implicit */short) arr_9 [i_1 + 1] [i_1 + 1] [i_2]);
                    }
                    for (signed char i_6 = 0; i_6 < 16; i_6 += 4) /* same iter space */
                    {
                        arr_21 [i_6] [i_2] [i_1] [i_0] = ((/* implicit */short) max((((/* implicit */unsigned long long int) ((unsigned int) arr_1 [i_2]))), (arr_1 [i_0])));
                        arr_22 [i_0] [i_1] [i_0] [i_1] [i_6] = ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) max((arr_4 [i_0] [i_0] [i_0]), (arr_8 [i_0] [i_6] [i_2] [i_6])))), (max((((/* implicit */unsigned long long int) arr_14 [i_0])), (arr_12 [i_0] [i_0] [(signed char)11])))))) && (((/* implicit */_Bool) ((((/* implicit */int) arr_15 [i_1 + 1] [i_1] [i_1])) % (arr_2 [i_1 + 1] [i_1] [i_1])))));
                    }
                    /* LoopNest 2 */
                    for (long long int i_7 = 1; i_7 < 12; i_7 += 2) 
                    {
                        for (unsigned short i_8 = 0; i_8 < 16; i_8 += 4) 
                        {
                            {
                                var_25 = ((/* implicit */long long int) min((arr_26 [i_0] [i_1 + 1]), (min((arr_26 [i_1] [i_1 + 1]), (arr_26 [i_0] [i_1 + 1])))));
                                arr_29 [i_0] [10] [10] [i_7] [i_8] = ((/* implicit */int) max((((/* implicit */long long int) min(((short)-25881), (((/* implicit */short) (unsigned char)76))))), (max((((((/* implicit */_Bool) 15880810914727949666ULL)) ? (-1225653671837379867LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)49))))), (((/* implicit */long long int) (signed char)-9))))));
                                var_26 = ((/* implicit */unsigned short) min((var_26), (((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) (_Bool)1)), (min((((/* implicit */unsigned long long int) (unsigned char)194)), (472887979893949845ULL))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
