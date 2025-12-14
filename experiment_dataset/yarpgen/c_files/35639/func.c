/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35639
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35639 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35639
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
    for (int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((((/* implicit */int) (unsigned short)13383)) >= (((/* implicit */int) var_7))))))) / (((/* implicit */int) max((arr_1 [i_0]), (arr_1 [i_0]))))));
        var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) ((((((/* implicit */int) (short)8)) * (((/* implicit */int) arr_1 [i_0])))) & (((/* implicit */int) arr_1 [i_0])))))));
        arr_3 [i_0] = ((((/* implicit */_Bool) min((arr_0 [i_0]), (((/* implicit */long long int) (unsigned short)22))))) ? (arr_0 [i_0]) : ((-(arr_0 [i_0]))));
        arr_4 [i_0] = arr_1 [i_0];
    }
    /* LoopSeq 4 */
    for (int i_1 = 0; i_1 < 21; i_1 += 1) 
    {
        var_19 = ((/* implicit */short) max((max((((unsigned int) arr_6 [i_1])), (((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned int) arr_5 [i_1])) : (arr_6 [i_1]))))), (((/* implicit */unsigned int) var_0))));
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 19; i_2 += 2) 
        {
            for (unsigned short i_3 = 0; i_3 < 21; i_3 += 1) 
            {
                {
                    var_20 = ((/* implicit */unsigned int) var_9);
                    var_21 = min(((-(max((((/* implicit */int) (short)-5)), (1372548533))))), (((/* implicit */int) (short)4)));
                }
            } 
        } 
    }
    for (unsigned short i_4 = 0; i_4 < 13; i_4 += 2) 
    {
        var_22 = ((/* implicit */unsigned short) max((min((max((((/* implicit */long long int) arr_11 [i_4] [i_4] [i_4])), (arr_0 [i_4]))), (((/* implicit */long long int) ((((/* implicit */int) (short)7)) / (((/* implicit */int) (short)-15))))))), (((/* implicit */long long int) ((int) arr_10 [i_4] [i_4] [i_4])))));
        var_23 = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) ((arr_6 [i_4]) / (((/* implicit */unsigned int) arr_14 [i_4])))))))) & (((/* implicit */int) (!(((/* implicit */_Bool) 10862155690616641574ULL)))))));
    }
    for (short i_5 = 0; i_5 < 22; i_5 += 3) 
    {
        var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) max((((((/* implicit */_Bool) arr_17 [i_5] [i_5])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_16 [i_5])) ? (((/* implicit */int) arr_17 [i_5] [i_5])) : (((/* implicit */int) arr_17 [i_5] [i_5]))))) : ((~(-493896052423429999LL))))), (((/* implicit */long long int) ((unsigned short) (short)15))))))));
        arr_18 [i_5] = ((/* implicit */unsigned short) ((((/* implicit */int) max((arr_17 [i_5] [i_5]), (arr_17 [i_5] [i_5])))) | (((/* implicit */int) max((arr_17 [i_5] [i_5]), (arr_17 [i_5] [i_5]))))));
        var_25 = ((/* implicit */short) max((arr_16 [i_5]), (min(((+(3001313875U))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-8)) ? (((/* implicit */int) (unsigned short)22105)) : (724428289))))))));
        /* LoopNest 2 */
        for (unsigned short i_6 = 0; i_6 < 22; i_6 += 3) 
        {
            for (short i_7 = 0; i_7 < 22; i_7 += 1) 
            {
                {
                    arr_24 [i_5] [i_5] [i_5] = ((/* implicit */unsigned short) arr_23 [i_5] [i_5] [i_7]);
                    var_26 = ((/* implicit */unsigned short) max((((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)32768))) >= (arr_16 [i_5]))) ? (((/* implicit */int) (short)-20929)) : (((((/* implicit */int) arr_19 [i_7] [i_6])) / (((/* implicit */int) arr_19 [i_5] [i_5])))))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_20 [i_5])))))));
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 22; i_8 += 2) 
                    {
                        for (unsigned short i_9 = 0; i_9 < 22; i_9 += 2) 
                        {
                            {
                                var_27 = ((/* implicit */unsigned short) min((var_27), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) ((10862155690616641576ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-16403)))))) * (((/* implicit */int) ((((/* implicit */_Bool) arr_20 [i_9])) || (((/* implicit */_Bool) arr_16 [i_9])))))))) ? (((/* implicit */int) ((unsigned short) (unsigned short)43430))) : (((/* implicit */int) ((unsigned short) max((-21), (((/* implicit */int) arr_22 [i_8])))))))))));
                                arr_30 [i_5] [i_6] [i_6] [i_8] [i_9] = ((/* implicit */signed char) arr_27 [i_5] [i_5] [i_5] [i_5] [i_5]);
                                arr_31 [i_5] [1U] [i_5] [i_8] [i_9] = ((((((/* implicit */int) (signed char)-122)) + (2147483647))) >> (((((/* implicit */int) (unsigned short)22098)) - (22067))));
                                var_28 += ((/* implicit */int) ((min((((arr_20 [i_8]) / (((/* implicit */unsigned long long int) arr_27 [i_5] [i_6] [i_7] [i_9] [i_9])))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_26 [i_5] [i_5] [i_6] [i_7] [i_8] [i_9])) ? (-3832339322566100316LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-29)))))))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) ((long long int) (short)-30023)))))));
                            }
                        } 
                    } 
                    arr_32 [i_5] = ((/* implicit */unsigned short) 3001313899U);
                }
            } 
        } 
    }
    for (short i_10 = 0; i_10 < 14; i_10 += 4) 
    {
        arr_35 [i_10] [i_10] = ((/* implicit */unsigned short) ((short) ((((/* implicit */int) arr_10 [i_10] [i_10] [i_10])) > (((/* implicit */int) arr_10 [i_10] [i_10] [i_10])))));
        arr_36 [(unsigned short)6] [(unsigned short)6] = ((/* implicit */signed char) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_25 [i_10] [i_10] [i_10] [i_10] [i_10])), (arr_11 [i_10] [i_10] [i_10]))))));
    }
}
