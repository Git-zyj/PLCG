/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48028
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48028 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48028
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
    var_10 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) min((min((((/* implicit */unsigned int) (unsigned char)168)), (2965282269U))), (((/* implicit */unsigned int) var_3))))) % (((min((((/* implicit */unsigned long long int) (short)-7961)), (18161910816911292369ULL))) << (((min((412824201U), (643381394U))) - (412824147U)))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 2; i_0 < 9; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            {
                arr_4 [i_1] [i_0] = ((/* implicit */unsigned int) 14604922337144730965ULL);
                arr_5 [i_0] [i_1] [i_1] = ((/* implicit */unsigned int) ((short) 1266027067));
                var_11 &= ((/* implicit */long long int) ((unsigned long long int) var_3));
            }
        } 
    } 
}
