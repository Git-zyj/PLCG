/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22386
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22386 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22386
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_20 = ((((((35 == -1097321637) != ((1091611806046653501 >> (81 - 38)))))) <= var_5));
                var_21 = (-1091611806046653498 + -1);
            }
        }
    }
    var_22 = var_2;
    var_23 = (min(var_23, ((((((max(1, 3552372583704486778)) ^ ((var_18 ? 14894371490005064813 : -1091611806046653489)))) > ((((((15 >> (1091611806046653486 - 1091611806046653443)))) ? (2047 >= var_6) : (~-12)))))))));
    var_24 = 268435455;
    #pragma endscop
}
