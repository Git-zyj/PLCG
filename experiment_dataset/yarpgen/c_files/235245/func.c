/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235245
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235245 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235245
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
    var_19 = ((/* implicit */_Bool) var_9);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                arr_4 [2ULL] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(max((((/* implicit */unsigned int) (signed char)-32)), (2195976270U)))))) ? (((max((((/* implicit */unsigned int) arr_1 [i_1] [i_0])), (var_3))) << (((max((var_14), (((/* implicit */unsigned int) arr_3 [i_0] [i_0] [i_1])))) - (2866646877U))))) : (((/* implicit */unsigned int) (~(((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_1 [i_0] [i_1])) : (((/* implicit */int) (unsigned char)21)))))))));
                /* LoopNest 2 */
                for (signed char i_2 = 2; i_2 < 11; i_2 += 2) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) (_Bool)1))));
                            var_21 = ((/* implicit */unsigned int) min((var_21), (((((/* implicit */_Bool) (unsigned char)37)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-16))) : (954188028U)))));
                        }
                    } 
                } 
            }
        } 
    } 
}
