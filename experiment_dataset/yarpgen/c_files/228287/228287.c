/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228287
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228287 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228287
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = -100;
    var_21 = max(var_17, 524288);

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_22 = (32271 * 140);
        var_23 = (-26602 * -3775);

        for (int i_1 = 2; i_1 < 22;i_1 += 1) /* same iter space */
        {
            arr_5 [i_1] = (arr_2 [i_1]);
            var_24 = (min(var_24, (arr_3 [i_1 - 2])));
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 21;i_3 += 1)
                {
                    for (int i_4 = 1; i_4 < 22;i_4 += 1)
                    {
                        {
                            var_25 -= ((2097151 % (arr_0 [i_0])));
                            var_26 = (((~94) * 1));
                            var_27 = ((!(10515576820411761644 >= -31826)));
                            var_28 = (arr_2 [i_1]);
                        }
                    }
                }
            }
        }
        for (int i_5 = 2; i_5 < 22;i_5 += 1) /* same iter space */
        {
            var_29 = -2296835809958952960;
            var_30 ^= ((-((~(arr_8 [i_5])))));
            var_31 ^= -26602;
        }
    }
    var_32 = (max(((~((12284385249884476717 ? var_16 : 15146508053794820766)))), (((-3775 % ((1565268630 ? 26599 : -101)))))));
    var_33 = 0;
    #pragma endscop
}
