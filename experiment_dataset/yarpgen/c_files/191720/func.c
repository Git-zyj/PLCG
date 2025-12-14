/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191720
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191720 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191720
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
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 12; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 13; i_2 += 4) 
            {
                {
                    arr_7 [3U] [(unsigned char)11] [(_Bool)1] [i_2] = ((/* implicit */unsigned short) max(((+(((((/* implicit */int) var_5)) ^ (((/* implicit */int) arr_3 [11U] [i_0])))))), (((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))));
                    var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1 + 1] [i_1 + 1])) ? (((/* implicit */int) arr_3 [i_1 + 1] [i_1 - 1])) : (((/* implicit */int) arr_3 [i_1 + 1] [i_1 + 1]))))) ? (((/* implicit */int) max((arr_3 [i_1 - 1] [i_1 - 1]), (arr_3 [i_1 - 1] [i_1 + 1])))) : (((/* implicit */int) arr_3 [i_1 + 1] [i_1 + 1]))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */_Bool) var_11);
    /* LoopNest 2 */
    for (short i_3 = 0; i_3 < 14; i_3 += 3) 
    {
        for (signed char i_4 = 1; i_4 < 10; i_4 += 3) 
        {
            {
                /* LoopNest 3 */
                for (unsigned char i_5 = 0; i_5 < 14; i_5 += 4) 
                {
                    for (unsigned short i_6 = 2; i_6 < 13; i_6 += 4) 
                    {
                        for (int i_7 = 2; i_7 < 11; i_7 += 2) 
                        {
                            {
                                arr_23 [i_7 + 1] [i_3] [i_5] [i_3] [i_3] = (((+(((arr_9 [i_4 - 1] [i_7]) ? (((/* implicit */int) arr_10 [i_3])) : (((/* implicit */int) var_16)))))) | (((/* implicit */int) ((arr_8 [i_5]) < (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_16) || (((/* implicit */_Bool) var_17))))))))));
                                arr_24 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] [(_Bool)1] = (i_3 % 2 == zero) ? (((/* implicit */int) max(((+(var_7))), (((max((var_7), (((/* implicit */unsigned long long int) var_5)))) >> (((min((((/* implicit */unsigned long long int) arr_10 [i_6 + 1])), (arr_13 [i_3] [i_3] [i_3] [i_7]))) - (14945292493510411195ULL)))))))) : (((/* implicit */int) max(((+(var_7))), (((max((var_7), (((/* implicit */unsigned long long int) var_5)))) >> (((((min((((/* implicit */unsigned long long int) arr_10 [i_6 + 1])), (arr_13 [i_3] [i_3] [i_3] [i_7]))) - (14945292493510411195ULL))) - (3892467146551640748ULL))))))));
                                var_20 = ((/* implicit */short) var_10);
                                arr_25 [i_3] [i_4] [i_4] [i_4] [i_3] [8] [8] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_3] [i_4] [i_5] [i_3])) ? (arr_15 [i_3] [i_6]) : (var_12)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [(unsigned char)8] [i_6] [i_6 - 2] [i_6 + 1] [i_3] [i_6]))) : (min((((/* implicit */unsigned long long int) var_10)), (var_12))))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_4] [i_6])))));
                            }
                        } 
                    } 
                } 
                var_21 -= (!(min((((((/* implicit */int) arr_14 [i_3] [2])) < (var_13))), ((!(var_15))))));
            }
        } 
    } 
    var_22 |= ((/* implicit */_Bool) var_11);
}
