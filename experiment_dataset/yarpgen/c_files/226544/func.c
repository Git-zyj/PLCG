/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226544
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226544 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226544
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
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            for (signed char i_2 = 1; i_2 < 12; i_2 += 4) 
            {
                {
                    arr_6 [1U] [1U] [i_0] = ((/* implicit */unsigned short) ((-7280448823244715726LL) - (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) > (var_9)))))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 15; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 1; i_4 < 14; i_4 += 2) 
                        {
                            {
                                arr_12 [i_4] [i_0] [i_2] [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_10 [i_4 + 1] [i_4] [i_4 - 1] [i_4] [i_4] [i_0]);
                                var_16 = ((/* implicit */_Bool) min((((((/* implicit */int) ((-1626344076) > (((/* implicit */int) (unsigned char)144))))) >> ((((-(((/* implicit */int) (unsigned short)9953)))) + (9968))))), ((-(((/* implicit */int) (unsigned short)55573))))));
                                arr_13 [i_0] [i_1] [i_1] [i_3] [i_4] &= ((/* implicit */short) (!(((/* implicit */_Bool) var_14))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_17 *= ((/* implicit */signed char) (unsigned short)9953);
    var_18 = var_2;
}
