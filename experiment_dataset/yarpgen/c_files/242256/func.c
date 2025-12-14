/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242256
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242256 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242256
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
    for (short i_0 = 2; i_0 < 16; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 17; i_2 += 2) 
            {
                {
                    var_11 = min((((unsigned long long int) var_1)), (((/* implicit */unsigned long long int) (((_Bool)1) ? (4515133) : (((/* implicit */int) (short)-32758))))));
                    var_12 = ((/* implicit */_Bool) (-((-(((/* implicit */int) (unsigned char)139))))));
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */_Bool) var_9);
    var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) var_5))));
}
