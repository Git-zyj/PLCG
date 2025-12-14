/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241644
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241644 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241644
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
    var_12 = ((/* implicit */unsigned short) min((((((/* implicit */int) ((262143) != (((/* implicit */int) (signed char)127))))) ^ (((((/* implicit */_Bool) (signed char)126)) ? (((/* implicit */int) (unsigned short)22082)) : (((/* implicit */int) var_6)))))), (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)43470)))))));
    var_13 = ((/* implicit */unsigned char) min((var_13), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) var_8))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_3)) * (((/* implicit */int) (unsigned short)0))))))))) : (((unsigned int) (~(((/* implicit */int) (unsigned short)15152))))))))));
    var_14 = ((/* implicit */short) (+(((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)7)), ((unsigned short)65528))))));
    var_15 = min((((min((0U), (((/* implicit */unsigned int) var_2)))) / (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) (unsigned short)65532)))))), (((/* implicit */unsigned int) var_1)));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            {
                arr_6 [i_0] [i_0] = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_2 [i_1]))));
                arr_7 [i_1] [i_1] = ((/* implicit */unsigned short) (short)11);
            }
        } 
    } 
}
