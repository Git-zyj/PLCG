/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192
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
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 11; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            for (int i_2 = 1; i_2 < 14; i_2 += 2) 
            {
                {
                    arr_8 [i_1] [i_1] [i_1] = max((((/* implicit */int) max(((unsigned char)0), ((unsigned char)0)))), ((+(((((/* implicit */int) (unsigned char)240)) - (((/* implicit */int) (unsigned char)9)))))));
                    arr_9 [i_0] [i_1] [i_1] = ((/* implicit */int) (~(((((/* implicit */long long int) ((((/* implicit */int) (unsigned char)22)) - (((/* implicit */int) (_Bool)1))))) - (max((6480395510124568552LL), (((/* implicit */long long int) (unsigned char)0))))))));
                }
            } 
        } 
    } 
    var_10 = ((/* implicit */signed char) (-((+(((((/* implicit */int) (unsigned char)240)) * (((/* implicit */int) (short)(-32767 - 1)))))))));
}
