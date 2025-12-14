/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31727
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31727 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31727
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
    var_20 = max((((long long int) (~(1789699092354491045ULL)))), ((((+(var_7))) + (((/* implicit */long long int) ((((/* implicit */int) var_10)) << (((/* implicit */int) (unsigned char)0))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 11; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 1; i_2 < 12; i_2 += 1) 
                {
                    for (long long int i_3 = 0; i_3 < 14; i_3 += 3) 
                    {
                        {
                            var_21 = ((/* implicit */_Bool) 108817166U);
                            var_22 = ((/* implicit */long long int) (+(min((max((var_4), (((/* implicit */unsigned long long int) 1467850940)))), (((/* implicit */unsigned long long int) var_17))))));
                            var_23 *= ((/* implicit */unsigned char) arr_2 [i_0 + 1]);
                        }
                    } 
                } 
                var_24 = ((/* implicit */unsigned char) (+(((/* implicit */int) ((unsigned short) arr_4 [i_1])))));
                var_25 ^= ((/* implicit */unsigned int) ((16657044981355060570ULL) != (((((/* implicit */_Bool) ((((/* implicit */_Bool) -790270469)) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_15)))))) ? ((-(var_3))) : (((/* implicit */unsigned long long int) arr_8 [i_0 - 1] [i_0 + 2] [i_0 + 2] [i_0] [i_0] [i_0 + 2]))))));
            }
        } 
    } 
    var_26 = ((/* implicit */long long int) max((var_26), (((/* implicit */long long int) var_5))));
}
