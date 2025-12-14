/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195265
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195265 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195265
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
    for (short i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 15; i_1 += 2) 
        {
            {
                var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2147483639)) ? (-2147483640) : (((/* implicit */int) (unsigned short)0))))) || (((arr_3 [i_1 - 1] [i_1 + 1]) != (((/* implicit */int) arr_4 [i_0] [i_1]))))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 16; i_2 += 2) 
                {
                    for (unsigned int i_3 = 4; i_3 < 13; i_3 += 3) 
                    {
                        for (int i_4 = 0; i_4 < 16; i_4 += 2) 
                        {
                            {
                                var_14 -= ((/* implicit */int) var_5);
                                arr_17 [i_0] [i_0] [i_2] [i_3] [i_4] = ((/* implicit */unsigned short) var_9);
                                var_15 -= ((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) arr_14 [i_1 - 1] [i_1 - 1] [i_3 - 1])) ? (((/* implicit */unsigned long long int) arr_14 [i_1 + 1] [i_1] [i_3 + 3])) : (var_4))));
                                var_16 = ((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */int) arr_4 [i_0] [i_3 - 2])) >= (arr_11 [i_0] [i_0] [i_0] [i_1 - 1]))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_17 -= ((/* implicit */unsigned int) var_4);
    /* LoopNest 3 */
    for (unsigned int i_5 = 2; i_5 < 9; i_5 += 2) 
    {
        for (short i_6 = 0; i_6 < 11; i_6 += 1) 
        {
            for (int i_7 = 1; i_7 < 9; i_7 += 4) 
            {
                {
                    var_18 -= ((/* implicit */unsigned short) (~(((int) ((((/* implicit */_Bool) 739218400U)) ? (((/* implicit */int) arr_8 [i_7 - 1] [i_6] [i_5] [i_5])) : (((/* implicit */int) (unsigned short)65535)))))));
                    var_19 -= ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) (unsigned short)0)))) ? (max((arr_5 [i_5 + 2] [i_7 + 1]), (arr_5 [i_6] [i_7 - 1]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_5 - 2] [i_7 + 2])) || (((/* implicit */_Bool) arr_5 [i_6] [i_7 + 2]))))))));
                }
            } 
        } 
    } 
}
