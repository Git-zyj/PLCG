/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219898
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219898 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219898
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
    var_14 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (var_0))) + (var_6)))) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) var_9)))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            for (unsigned short i_2 = 1; i_2 < 10; i_2 += 1) 
            {
                {
                    var_15 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((((/* implicit */int) var_8)) + (((/* implicit */int) var_11)))) < (((((/* implicit */int) var_5)) / (((/* implicit */int) (unsigned char)51))))))) * (((/* implicit */int) ((unsigned char) max((var_10), (var_8)))))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 1; i_3 < 8; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 1; i_4 < 9; i_4 += 2) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) arr_9 [i_0] [i_2] [i_1] [i_3 + 1])) ? (((/* implicit */int) (short)30817)) : (((/* implicit */int) var_10))))));
                                var_17 += ((/* implicit */short) var_4);
                                var_18 = ((/* implicit */long long int) min((arr_5 [i_1] [i_2] [i_1]), (((/* implicit */unsigned long long int) (unsigned char)70))));
                                var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) ((((/* implicit */_Bool) (-(9220220489689365155ULL)))) ? (((((/* implicit */_Bool) arr_0 [i_3 - 1] [i_4 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (arr_0 [i_3 + 3] [i_4 + 1]))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_2 - 1] [i_2 - 1])) ? (arr_3 [i_2 - 1] [i_2 - 1]) : (arr_3 [i_2 + 1] [i_2 - 1])))))))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (long long int i_5 = 2; i_5 < 7; i_5 += 2) 
                    {
                        var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_2 + 1] [i_0] [i_0] [i_5 + 3])) ? (((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_2])) : (((/* implicit */int) arr_10 [i_0] [i_5] [i_0] [i_0])))))));
                        var_21 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_10 [i_5] [i_0] [i_0] [i_0])) : (((/* implicit */int) (unsigned char)229))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)206))) : (arr_1 [i_0] [i_2])));
                        var_22 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_2 [i_2] [i_1])) * (((/* implicit */int) var_2)))) / ((-(((/* implicit */int) arr_4 [i_0] [i_1]))))));
                        var_23 |= ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) var_8))) > (arr_14 [i_5 + 1] [i_2] [i_2 - 1] [i_2] [i_2 + 1])));
                    }
                    for (short i_6 = 1; i_6 < 9; i_6 += 1) 
                    {
                        var_24 = ((/* implicit */unsigned long long int) var_4);
                        var_25 &= ((/* implicit */unsigned short) ((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)42821))) ^ (arr_12 [i_6 - 1] [i_6] [i_6 + 2] [i_6 + 1] [i_6 + 1]))) >> (((arr_12 [i_6 + 2] [i_6] [i_6 + 2] [i_6 - 1] [i_6 + 1]) - (3067797374U)))));
                    }
                }
            } 
        } 
    } 
}
