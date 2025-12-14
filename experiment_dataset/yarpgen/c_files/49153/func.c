/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49153
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49153 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49153
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
    for (unsigned short i_0 = 2; i_0 < 19; i_0 += 2) 
    {
        for (int i_1 = 1; i_1 < 18; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 20; i_2 += 1) 
            {
                {
                    arr_6 [i_0] [i_2] = ((/* implicit */long long int) (-(((arr_1 [i_0 - 2] [i_1 + 1]) ? (((/* implicit */int) arr_1 [i_0 + 1] [i_1 + 1])) : (((/* implicit */int) arr_1 [i_0 + 1] [i_1 + 2]))))));
                    /* LoopNest 2 */
                    for (short i_3 = 2; i_3 < 18; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 20; i_4 += 2) 
                        {
                            {
                                arr_11 [i_3] [i_3] [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) max((max((((/* implicit */unsigned long long int) arr_10 [i_1 + 1] [i_1] [i_0 + 1] [i_1 + 1] [i_0 + 1])), (456586783412193034ULL))), (max((arr_7 [i_1 + 2] [i_1]), (((/* implicit */unsigned long long int) (unsigned short)19152))))));
                                arr_12 [i_4] [i_3] [2LL] [i_0] [2LL] [i_0] = ((/* implicit */unsigned char) var_6);
                            }
                        } 
                    } 
                    arr_13 [i_0] [i_0] [i_2] [i_0] = ((/* implicit */short) (+(((arr_7 [i_0 + 1] [i_1]) * (arr_7 [i_0 - 2] [i_0])))));
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 19; i_5 += 2) 
                    {
                        for (unsigned long long int i_6 = 0; i_6 < 20; i_6 += 3) 
                        {
                            {
                                var_18 |= ((((/* implicit */_Bool) min((((/* implicit */int) (short)-4730)), (1826596823)))) ? (((var_4) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)0)))))));
                                var_19 = ((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) (-2147483647 - 1)))))));
                                var_20 |= ((/* implicit */int) max(((+(((((/* implicit */unsigned long long int) 2147483647)) / (10831242423087173936ULL))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) 10831242423087173936ULL))))) != (((/* implicit */int) ((((/* implicit */int) (short)10)) < (((/* implicit */int) var_10))))))))));
                                var_21 = ((/* implicit */int) max((var_21), ((((~(((/* implicit */int) var_9)))) % (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (1218522869) : (-397031579)))) ? (((-891976369) / (((/* implicit */int) var_7)))) : (arr_4 [i_5 - 1] [i_5] [i_1 - 1])))))));
                                var_22 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_16 [(_Bool)0] [i_6] [i_5 + 1] [i_2] [i_1 + 2] [i_0] [14LL]) - ((-2147483647 - 1))))) ? (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_2))))), ((+(var_4))))) : (((/* implicit */unsigned long long int) (-(arr_16 [i_0] [i_0 - 2] [i_1] [i_2] [i_2] [i_5] [i_6]))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */unsigned char) var_8);
}
