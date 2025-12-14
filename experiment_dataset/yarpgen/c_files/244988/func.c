/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244988
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244988 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244988
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
    var_10 = ((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)32406)));
    var_11 = ((/* implicit */short) ((((/* implicit */_Bool) min(((short)-9474), (((/* implicit */short) (unsigned char)15))))) ? ((-(((/* implicit */int) var_2)))) : (((int) ((((/* implicit */_Bool) -1)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)7))) : (-1LL))))));
    var_12 = ((/* implicit */int) min((var_12), (((/* implicit */int) var_6))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            {
                arr_8 [i_0] = ((/* implicit */unsigned short) ((long long int) max((-6276177313156042929LL), (((/* implicit */long long int) (unsigned short)65535)))));
                arr_9 [i_0] [i_1] [i_1] = (-(((int) -1)));
                arr_10 [i_0] = 31LL;
                var_13 ^= ((/* implicit */long long int) (~(((/* implicit */int) ((((((/* implicit */_Bool) (unsigned short)65535)) && (((/* implicit */_Bool) -1574438001)))) && ((!(((/* implicit */_Bool) (unsigned short)35223)))))))));
            }
        } 
    } 
}
