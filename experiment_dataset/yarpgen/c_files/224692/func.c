/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224692
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224692 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224692
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            {
                arr_7 [i_0] [i_0] [i_1] = ((/* implicit */unsigned long long int) (((+(((/* implicit */int) arr_5 [(unsigned short)1])))) ^ (((/* implicit */int) var_7))));
                arr_8 [i_0] [i_1] [i_1] = ((/* implicit */unsigned int) (unsigned char)156);
                arr_9 [(_Bool)1] |= ((/* implicit */signed char) var_0);
                arr_10 [i_1] = ((/* implicit */unsigned int) arr_1 [i_0]);
            }
        } 
    } 
    var_18 = ((/* implicit */long long int) min((((unsigned short) (((_Bool)0) && (var_5)))), ((unsigned short)42008)));
    var_19 = ((/* implicit */unsigned char) var_9);
    var_20 = ((/* implicit */signed char) 1002497998U);
}
