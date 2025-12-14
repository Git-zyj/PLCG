/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220302
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220302 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220302
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
    var_18 = ((((/* implicit */_Bool) var_16)) ? (((((/* implicit */_Bool) ((signed char) 0ULL))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)6544))))) : (((unsigned long long int) (unsigned char)72)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((((unsigned short) var_10)), ((unsigned short)57531))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 15; i_1 += 1) 
        {
            {
                var_19 |= ((/* implicit */long long int) (+(0ULL)));
                /* LoopSeq 1 */
                for (int i_2 = 1; i_2 < 16; i_2 += 4) 
                {
                    var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) (((((_Bool)0) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_10)) > (((/* implicit */int) var_12)))))) : (8ULL))) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))))));
                    var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) (+(((/* implicit */int) arr_1 [i_0] [i_2])))))));
                    arr_8 [i_2] = ((/* implicit */unsigned int) min((min((((/* implicit */unsigned long long int) var_8)), (arr_7 [i_2] [i_0] [i_2] [i_0]))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_10)))))));
                }
                var_22 = ((/* implicit */short) var_9);
            }
        } 
    } 
    var_23 *= ((/* implicit */long long int) (_Bool)1);
}
