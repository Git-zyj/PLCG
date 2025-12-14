/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245579
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245579 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245579
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((((1 ? (-54 * 54) : ((1 ? 13095923229186276918 : -8293417346771553504))))) ? -20053 : -93215193));
    var_15 = (((((16 ? ((31 ? 0 : -93215193)) : -20052))) ? (((74 / -859676999) + -19)) : (((((16519392316217168244 ? -126 : 0)) <= 84)))));
    var_16 = ((8293417346771553489 ? 206023305 : -92));
    var_17 = (-2602198989889829266 / (-32767 - 1));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_18 += 123;
                var_19 = (((+-92) ? (-5308071678084094704 || -1) : 54));
            }
        }
    }
    #pragma endscop
}
