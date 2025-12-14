/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244560
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244560 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244560
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
    var_11 = ((/* implicit */long long int) var_3);
    var_12 = ((/* implicit */int) (unsigned char)81);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 2; i_1 < 6; i_1 += 4) 
        {
            {
                arr_8 [i_0] [i_0] = min((((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)0))) : (arr_4 [i_0] [i_1] [i_1 - 1]))), (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)245))))));
                arr_9 [i_0] &= ((/* implicit */unsigned short) (+(min((0), (((((/* implicit */_Bool) 3001911450U)) ? (((/* implicit */int) (short)-9966)) : (((/* implicit */int) var_5))))))));
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 8; i_2 += 4) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 10; i_4 += 2) 
                        {
                            {
                                var_13 = ((/* implicit */_Bool) min((max((((/* implicit */unsigned int) arr_6 [i_0] [i_1 - 1])), (arr_4 [i_0] [i_1 - 1] [i_0]))), (((/* implicit */unsigned int) ((((/* implicit */int) min((var_10), (((/* implicit */unsigned short) var_7))))) - (((/* implicit */int) var_8)))))));
                                var_14 -= ((/* implicit */short) ((((/* implicit */_Bool) min((arr_2 [i_1 + 2]), (((/* implicit */int) var_9))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_0 [i_2 - 1]))))) : (268304384ULL)));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (int i_5 = 1; i_5 < 9; i_5 += 2) 
                {
                    for (unsigned int i_6 = 1; i_6 < 9; i_6 += 4) 
                    {
                        {
                            arr_20 [i_0] [i_1 + 2] [i_5 - 1] [i_6] = arr_13 [i_1 - 1] [i_1] [i_5 + 1] [i_5 - 1] [i_6 - 1];
                            var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) (+(((/* implicit */int) (_Bool)0)))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned short) 4134854644225559792LL);
}
