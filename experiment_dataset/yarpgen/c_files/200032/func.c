/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200032
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200032 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200032
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
    var_12 = (unsigned short)4384;
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (signed char i_1 = 1; i_1 < 15; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 18; i_2 += 2) 
            {
                {
                    arr_6 [i_0] [i_0] [i_2] = ((/* implicit */unsigned short) min((((/* implicit */long long int) (unsigned short)4384)), (4398046511088LL)));
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 18; i_3 += 1) 
                    {
                        for (short i_4 = 1; i_4 < 15; i_4 += 4) 
                        {
                            {
                                arr_13 [i_0] [i_4] [(short)6] [13] [i_0] = ((/* implicit */long long int) (~(((/* implicit */int) arr_5 [15ULL] [15ULL] [i_0]))));
                                var_13 = ((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned short)61151))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_14 = var_2;
}
