/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229336
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229336 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229336
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
    var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned long long int) (short)-26629))) ? (max((((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (0ULL))), ((((_Bool)0) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (11398594471859951190ULL))))) : (((/* implicit */unsigned long long int) (((-(1211974995))) + (((/* implicit */int) var_11)))))));
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 7; i_0 += 3) 
    {
        for (unsigned short i_1 = 4; i_1 < 9; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 3; i_2 < 9; i_2 += 1) 
                {
                    for (signed char i_3 = 1; i_3 < 9; i_3 += 4) 
                    {
                        {
                            arr_8 [i_0] [i_1] [i_0] [i_1] [i_1] [i_1] = ((/* implicit */_Bool) 9223372036854775807LL);
                            arr_9 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_3 [i_1] [i_1]) ? (((/* implicit */int) min((var_7), ((short)8704)))) : (((((/* implicit */_Bool) (short)-8704)) ? (((/* implicit */int) arr_2 [i_1 - 1])) : (((/* implicit */int) (_Bool)1))))))) ? (min((((/* implicit */unsigned int) (short)17777)), (4120122237U))) : (((/* implicit */unsigned int) (+(((/* implicit */int) arr_4 [i_2 + 1] [1ULL])))))));
                        }
                    } 
                } 
                var_15 = ((/* implicit */_Bool) arr_0 [i_1]);
                var_16 |= ((((/* implicit */int) arr_2 [i_0])) ^ (((/* implicit */int) arr_2 [i_0])));
                /* LoopNest 2 */
                for (int i_4 = 2; i_4 < 8; i_4 += 2) 
                {
                    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                    {
                        {
                            var_17 = ((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-31317))) < (arr_0 [i_1 - 1]))));
                            var_18 = ((/* implicit */short) max((((((/* implicit */_Bool) 2139095040U)) ? (arr_13 [i_1] [i_4 + 1] [i_4] [i_5]) : (((/* implicit */unsigned long long int) -1211974998)))), (((/* implicit */unsigned long long int) ((unsigned int) min((arr_1 [i_0]), (arr_1 [i_5 - 1])))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned short) ((((/* implicit */int) var_7)) != (max((((((/* implicit */_Bool) (unsigned char)109)) ? (((/* implicit */int) (short)-10288)) : (((/* implicit */int) var_11)))), (((/* implicit */int) var_8))))));
    var_20 = ((/* implicit */long long int) var_7);
}
