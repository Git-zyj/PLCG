/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42242
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42242 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42242
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
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (unsigned char i_1 = 4; i_1 < 13; i_1 += 1) 
        {
            {
                var_10 = ((/* implicit */signed char) max(((_Bool)0), (var_5)));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 14; i_2 += 1) 
                {
                    for (unsigned short i_3 = 1; i_3 < 12; i_3 += 1) 
                    {
                        {
                            var_11 = ((/* implicit */short) (+((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-20492))))));
                            var_12 = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */int) var_5)) > (((/* implicit */int) var_8))))) != (((/* implicit */int) var_1))));
                            var_13 ^= var_3;
                        }
                    } 
                } 
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned short) var_8);
}
