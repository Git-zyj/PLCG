/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203825
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203825 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203825
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
    for (long long int i_0 = 4; i_0 < 14; i_0 += 1) 
    {
        for (long long int i_1 = 3; i_1 < 13; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 1; i_2 < 13; i_2 += 1) 
                {
                    for (signed char i_3 = 0; i_3 < 17; i_3 += 3) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 17; i_4 += 4) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) (-(((((/* implicit */_Bool) max((var_14), (((/* implicit */unsigned short) arr_11 [i_0] [i_2]))))) ? (((((/* implicit */_Bool) var_10)) ? (arr_3 [i_0]) : (arr_8 [i_2] [i_1] [i_2] [i_4]))) : (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_0] [i_1 - 2]))))))))));
                                var_18 = ((/* implicit */int) ((((/* implicit */_Bool) ((int) (!(((/* implicit */_Bool) var_6)))))) ? (((((/* implicit */_Bool) (+(948179105)))) ? (((/* implicit */long long int) (-(948179108)))) : (((((/* implicit */_Bool) arr_3 [i_1])) ? (arr_3 [i_0 - 3]) : (((/* implicit */long long int) ((/* implicit */int) var_7))))))) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_5 [i_1] [i_2]))))));
                            }
                        } 
                    } 
                } 
                var_19 += ((((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) -948179102)) ? (((/* implicit */int) (unsigned short)65512)) : (((/* implicit */int) (unsigned short)37224)))) % (min((-948179116), (((/* implicit */int) var_7))))))) * (((((/* implicit */_Bool) arr_2 [i_1 + 1] [i_0 + 3])) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [(short)16] [(short)16] [i_0] [i_0]))) / (arr_9 [i_0] [i_0] [i_0] [i_0]))) : (((/* implicit */unsigned long long int) arr_13 [(short)6] [i_1] [i_1] [i_1] [i_1])))));
                var_20 = (-((-(((/* implicit */int) (unsigned short)65529)))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_5 = 1; i_5 < 22; i_5 += 1) 
    {
        for (short i_6 = 1; i_6 < 20; i_6 += 2) 
        {
            {
                var_21 |= ((/* implicit */signed char) arr_17 [i_5] [(signed char)6]);
                var_22 = ((/* implicit */unsigned long long int) (~(max((arr_14 [i_5 - 1]), (arr_14 [i_5 - 1])))));
            }
        } 
    } 
    var_23 += ((/* implicit */signed char) var_16);
    /* LoopNest 2 */
    for (unsigned int i_7 = 0; i_7 < 12; i_7 += 2) 
    {
        for (long long int i_8 = 2; i_8 < 10; i_8 += 4) 
        {
            {
                /* LoopNest 2 */
                for (short i_9 = 0; i_9 < 12; i_9 += 4) 
                {
                    for (unsigned int i_10 = 0; i_10 < 12; i_10 += 1) 
                    {
                        {
                            var_24 = ((/* implicit */int) ((((/* implicit */_Bool) 948179100)) && (((/* implicit */_Bool) (short)-32753))));
                            var_25 = ((/* implicit */unsigned int) (~(arr_6 [i_8] [3ULL])));
                            var_26 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_5)) ? (arr_8 [14] [14] [14] [i_10]) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_7] [i_8 - 2]))))) % (((/* implicit */long long int) arr_6 [i_7] [i_8]))))) ? (((/* implicit */unsigned long long int) ((arr_1 [i_9]) ? (((arr_20 [i_7] [i_9]) & (((/* implicit */long long int) ((/* implicit */int) var_2))))) : (((/* implicit */long long int) ((((/* implicit */int) var_3)) * (((/* implicit */int) arr_10 [i_9] [i_8 + 2] [i_9] [i_10])))))))) : (((var_5) >> (((((/* implicit */int) max((var_9), (((/* implicit */unsigned short) var_2))))) - (33847)))))));
                            var_27 = ((((/* implicit */_Bool) arr_22 [i_7] [i_7])) ? (arr_13 [i_9] [i_9] [i_8] [i_9] [i_9]) : (((/* implicit */unsigned int) var_6)));
                        }
                    } 
                } 
                var_28 = ((/* implicit */short) max((var_28), (((/* implicit */short) ((long long int) var_8)))));
                /* LoopNest 2 */
                for (signed char i_11 = 0; i_11 < 12; i_11 += 3) 
                {
                    for (long long int i_12 = 0; i_12 < 12; i_12 += 1) 
                    {
                        {
                            arr_33 [i_7] [i_12] [i_11] [i_11] = ((/* implicit */unsigned int) (+(min(((+(var_5))), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) + (var_5)))))));
                            var_29 = ((/* implicit */int) ((unsigned char) min((((/* implicit */unsigned long long int) arr_18 [i_8 - 1] [i_8 - 2])), (min((arr_19 [i_7] [i_7]), (((/* implicit */unsigned long long int) arr_16 [i_12] [i_12])))))));
                            var_30 = ((/* implicit */int) ((((((/* implicit */_Bool) (short)28753)) ? (((var_10) | (((/* implicit */long long int) ((/* implicit */int) var_7))))) : (((/* implicit */long long int) ((/* implicit */int) ((-948179095) <= (((/* implicit */int) (unsigned short)37303)))))))) % (((/* implicit */long long int) (~(min((arr_0 [i_8] [i_8]), (((/* implicit */unsigned int) (unsigned short)39183)))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_31 = max((((/* implicit */int) (unsigned short)3)), (var_0));
}
