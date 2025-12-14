/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241911
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241911 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241911
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
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            {
                arr_5 [i_0] [i_0] = ((/* implicit */signed char) min((((long long int) ((_Bool) arr_2 [i_0] [i_1]))), (((/* implicit */long long int) (_Bool)0))));
                var_20 = ((/* implicit */signed char) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) -1044257579)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) (unsigned char)4))))) ? (min((1044257579), (((/* implicit */int) var_5)))) : (((/* implicit */int) arr_3 [i_1] [i_1] [i_1])))), (((/* implicit */int) (unsigned char)255))));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned char) (unsigned short)50563);
    var_22 = ((/* implicit */unsigned short) var_8);
}
