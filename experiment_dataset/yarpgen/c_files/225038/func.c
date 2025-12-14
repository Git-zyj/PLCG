/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225038
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225038 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225038
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
    var_10 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) & (max((2243836928608154734ULL), (((/* implicit */unsigned long long int) var_2))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 12; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 1; i_4 < 10; i_4 += 3) 
                        {
                            {
                                var_11 *= ((/* implicit */unsigned short) 1810000024U);
                                var_12 -= ((/* implicit */_Bool) var_1);
                            }
                        } 
                    } 
                } 
                var_13 = ((/* implicit */long long int) ((unsigned int) min((16202907145101396881ULL), (((/* implicit */unsigned long long int) arr_7 [i_0] [i_0] [i_0] [i_0])))));
            }
        } 
    } 
}
