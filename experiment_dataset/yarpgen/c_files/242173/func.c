/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242173
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242173 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242173
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
    var_10 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((short) (!((_Bool)1))))) ? ((~(((((/* implicit */int) var_8)) << (((((/* implicit */int) var_5)) - (131))))))) : (min((((((/* implicit */int) var_4)) >> (((-1984347144149113022LL) + (1984347144149113025LL))))), (((/* implicit */int) ((((/* implicit */_Bool) 2160312135U)) || (var_4))))))));
    var_11 = ((/* implicit */unsigned short) var_5);
    /* LoopSeq 1 */
    for (signed char i_0 = 2; i_0 < 10; i_0 += 3) 
    {
        var_12 = ((/* implicit */unsigned short) (+(((/* implicit */int) min((arr_1 [i_0] [i_0 - 1]), (arr_1 [i_0] [i_0 - 2]))))));
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            for (signed char i_2 = 2; i_2 < 11; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 3; i_3 < 9; i_3 += 3) 
                    {
                        for (long long int i_4 = 3; i_4 < 12; i_4 += 3) 
                        {
                            {
                                arr_15 [i_0] [i_0] = (i_0 % 2 == zero) ? (((/* implicit */_Bool) ((((((/* implicit */int) (signed char)-111)) + (2147483647))) << (((((/* implicit */int) arr_2 [i_2 + 2] [i_0] [i_4])) - (60252)))))) : (((/* implicit */_Bool) ((((((/* implicit */int) (signed char)-111)) + (2147483647))) << (((((((/* implicit */int) arr_2 [i_2 + 2] [i_0] [i_4])) - (60252))) - (1521))))));
                                var_13 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_2 - 1]))));
                                arr_16 [i_4] [i_1] [i_0] |= ((/* implicit */signed char) min((((((/* implicit */_Bool) min((((/* implicit */unsigned short) (unsigned char)188)), ((unsigned short)39960)))) ? (min((4294967295U), (((/* implicit */unsigned int) var_0)))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(arr_10 [i_0] [i_1] [i_2] [i_3]))))))), (((/* implicit */unsigned int) ((((((/* implicit */int) var_8)) / (((/* implicit */int) var_7)))) <= (((int) var_1)))))));
                            }
                        } 
                    } 
                    arr_17 [i_0] [i_0] [i_0] [(unsigned char)1] = ((signed char) ((((/* implicit */_Bool) (unsigned short)23790)) ? (arr_8 [9U] [i_1] [i_1] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)61917)))));
                }
            } 
        } 
    }
    var_14 = ((/* implicit */int) var_9);
}
