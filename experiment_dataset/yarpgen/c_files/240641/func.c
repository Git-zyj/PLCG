/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240641
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240641 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240641
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 1; i_1 < 18; i_1 += 2) 
        {
            {
                var_13 = ((/* implicit */unsigned short) max((var_13), (((/* implicit */unsigned short) (~(max(((+(((/* implicit */int) (short)32764)))), (((/* implicit */int) ((unsigned char) arr_2 [i_0]))))))))));
                var_14 = ((/* implicit */int) max((var_14), (((/* implicit */int) ((_Bool) arr_0 [9ULL])))));
            }
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_2 = 1; i_2 < 16; i_2 += 2) 
    {
        var_15 -= ((/* implicit */unsigned int) ((unsigned short) -34991864815768423LL));
        var_16 -= (~(arr_2 [i_2 + 2]));
        var_17 |= ((/* implicit */unsigned short) ((arr_4 [i_2 + 2] [i_2 + 3]) ? (2982741493U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_2 + 3])))));
    }
    var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) (+(var_12))))));
}
