/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5394
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5394 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5394
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
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            {
                var_20 = ((/* implicit */unsigned char) (+(max((((var_6) / (((/* implicit */long long int) 2147483647)))), (((/* implicit */long long int) min(((unsigned short)40118), (((/* implicit */unsigned short) (unsigned char)254)))))))));
                arr_4 [i_0] |= ((((unsigned long long int) ((unsigned short) var_7))) % (((/* implicit */unsigned long long int) ((((/* implicit */int) max(((short)(-32767 - 1)), (((/* implicit */short) (unsigned char)255))))) - ((+(((/* implicit */int) (short)4096))))))));
            }
        } 
    } 
    var_21 |= ((/* implicit */long long int) ((((/* implicit */_Bool) ((max((33030144), (((/* implicit */int) var_2)))) << (((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))))) && (((/* implicit */_Bool) ((min((var_14), (((/* implicit */unsigned int) var_0)))) + (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */short) var_4)), (var_1))))))))));
}
