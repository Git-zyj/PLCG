/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190711
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190711 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190711
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
    var_11 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_6)) ? (var_5) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_6))))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((var_10), (((/* implicit */unsigned short) var_3)))))) : (((unsigned int) var_8))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 1; i_0 < 11; i_0 += 4) 
    {
        for (signed char i_1 = 1; i_1 < 11; i_1 += 4) 
        {
            for (long long int i_2 = 3; i_2 < 11; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 2; i_3 < 9; i_3 += 4) 
                    {
                        for (long long int i_4 = 0; i_4 < 12; i_4 += 4) 
                        {
                            {
                                var_12 = ((/* implicit */short) max((var_12), (((/* implicit */short) ((unsigned short) max((arr_7 [i_2 + 1] [i_3] [i_2 + 1] [i_3 - 1]), (((/* implicit */unsigned short) (signed char)67))))))));
                                var_13 += ((/* implicit */unsigned short) arr_3 [i_0]);
                                var_14 = ((/* implicit */unsigned long long int) var_10);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_5 = 0; i_5 < 12; i_5 += 4) 
                    {
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            {
                                var_15 *= ((/* implicit */unsigned long long int) arr_7 [i_0] [i_5] [i_0] [i_0]);
                                var_16 = ((/* implicit */short) ((unsigned int) ((((/* implicit */int) max((((/* implicit */unsigned char) arr_15 [i_0 + 1] [i_1] [i_2] [i_5] [6U])), (arr_4 [i_0 - 1] [i_0])))) ^ (((((/* implicit */int) arr_0 [i_0] [i_0])) * (((/* implicit */int) var_7)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
