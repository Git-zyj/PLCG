/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211553
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211553 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211553
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_10 = var_1;
                    arr_7 [i_2] = (min((((~((var_3 >> (32747 - 32742)))))), (((4294967295 & 1) & ((var_4 << (108 - 107)))))));
                    var_11 = (min(var_11, 51));

                    /* vectorizable */
                    for (int i_3 = 1; i_3 < 12;i_3 += 1)
                    {
                        var_12 = -51;
                        var_13 += ((473238729 ? -52 : (((var_5 + 2147483647) << (1 - 1)))));
                    }
                }
            }
        }
    }
    var_14 = (min(((((min(var_2, var_2))) ? 29 : ((65535 ? 5345147985537017925 : 1)))), ((5345147985537017906 << (4294967242 - 4294967242)))));
    #pragma endscop
}
