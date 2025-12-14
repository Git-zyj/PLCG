/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190961
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190961 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190961
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
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 1; i_0 < 18; i_0 += 2) 
    {
        var_12 -= ((/* implicit */long long int) ((unsigned short) (+(((/* implicit */int) (_Bool)0)))));
        var_13 = ((/* implicit */unsigned short) ((int) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) == (3690630576U)))) != (((/* implicit */int) (unsigned char)39)))));
        var_14 = ((/* implicit */int) max((((((/* implicit */_Bool) (-(-371725051)))) ? (3LL) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_0 + 1] [i_0])) && (((/* implicit */_Bool) var_9)))))))), (((/* implicit */long long int) min((((((/* implicit */int) arr_0 [i_0])) & (((/* implicit */int) var_3)))), (((((/* implicit */int) (unsigned short)8128)) & (((/* implicit */int) arr_1 [i_0])))))))));
    }
    /* LoopNest 2 */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        for (long long int i_2 = 0; i_2 < 24; i_2 += 4) 
        {
            {
                arr_7 [i_1] [i_1] [i_1] = ((/* implicit */long long int) ((((((/* implicit */int) arr_4 [i_1])) << (((max((((/* implicit */int) (short)32766)), (-951234561))) - (32764))))) << (((((((/* implicit */int) max((((/* implicit */unsigned char) (signed char)-28)), ((unsigned char)59)))) >> (((/* implicit */int) (_Bool)1)))) - (112)))));
                var_15 = ((/* implicit */long long int) max((var_15), (((/* implicit */long long int) ((unsigned short) ((unsigned int) arr_4 [i_2]))))));
            }
        } 
    } 
}
