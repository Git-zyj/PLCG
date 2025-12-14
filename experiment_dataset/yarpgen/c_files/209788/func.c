/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209788
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209788 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209788
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
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (signed char i_1 = 4; i_1 < 12; i_1 += 4) 
        {
            {
                var_16 = ((/* implicit */unsigned int) (-(max((min((arr_2 [i_0] [i_1] [i_1]), (((/* implicit */int) var_0)))), (var_12)))));
                var_17 -= ((/* implicit */unsigned short) min(((-(((/* implicit */int) min((var_9), ((signed char)43)))))), (((((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) (signed char)-93)))) ? (((/* implicit */int) min((var_0), (((/* implicit */unsigned char) var_9))))) : (((/* implicit */int) ((signed char) arr_1 [i_0])))))));
                arr_5 [i_0] [(signed char)8] [13U] = (-(((/* implicit */int) var_10)));
                var_18 ^= ((/* implicit */signed char) ((unsigned long long int) ((arr_0 [i_1] [i_1 - 1]) - (((/* implicit */int) var_0)))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) var_9))));
    var_20 = ((/* implicit */int) var_5);
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_2 = 1; i_2 < 11; i_2 += 4) 
    {
        var_21 = ((/* implicit */unsigned char) var_9);
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 12; i_3 += 1) 
        {
            for (short i_4 = 1; i_4 < 9; i_4 += 1) 
            {
                {
                    arr_15 [i_4] [7U] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [i_2 - 1])) ? (var_13) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))));
                    var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_4] [(short)2] [i_4 + 2])) ? (((/* implicit */int) var_1)) : (arr_2 [i_2] [i_3] [i_4 + 1])));
                }
            } 
        } 
        /* LoopNest 2 */
        for (signed char i_5 = 0; i_5 < 12; i_5 += 4) 
        {
            for (unsigned long long int i_6 = 0; i_6 < 12; i_6 += 4) 
            {
                {
                    var_23 = ((/* implicit */short) min((var_23), (((short) var_7))));
                    var_24 = ((/* implicit */short) ((((/* implicit */_Bool) -259190145)) ? (((/* implicit */int) var_8)) : (((((/* implicit */_Bool) arr_6 [i_6])) ? (((/* implicit */int) (unsigned short)21941)) : (((/* implicit */int) var_14))))));
                    var_25 = ((/* implicit */_Bool) ((unsigned long long int) arr_17 [9ULL] [9ULL] [9ULL]));
                }
            } 
        } 
        arr_21 [i_2 - 1] = ((/* implicit */_Bool) var_14);
    }
    /* vectorizable */
    for (unsigned char i_7 = 0; i_7 < 22; i_7 += 1) 
    {
        var_26 = var_2;
        var_27 = ((/* implicit */signed char) max((var_27), (((/* implicit */signed char) var_13))));
        var_28 |= ((/* implicit */short) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_11)) : (((var_12) + (65333162)))));
    }
    var_29 = ((/* implicit */unsigned char) var_10);
}
