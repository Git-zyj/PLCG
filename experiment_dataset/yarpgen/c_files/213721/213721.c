/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213721
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213721 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213721
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 ^= var_1;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 13;i_1 += 1)
        {
            {
                var_17 = ((9792103377604148072 ? 246 : 2969845127));
                arr_6 [i_1 - 3] = (((((((1080863910568919040 ? 8654640696105403544 : 586913218346461323)) ^ 0))) ? (((~((var_7 << (((arr_0 [i_0]) - 121))))))) : 9792103377604148072));
                var_18 = var_14;
            }
        }
    }
    #pragma endscop
}
