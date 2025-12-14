/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41753
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41753 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41753
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = max(var_4, ((-((var_5 ? var_2 : var_2)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_18 *= ((min(12, 13957869259518624445)));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 17;i_3 += 1)
                    {
                        {
                            var_19 = ((((((((var_1 ? var_11 : (arr_5 [i_3])))) ^ (max(var_10, 134217712))))) ? (max((min(151, (arr_0 [i_0] [i_0]))), (~var_4))) : (max(((min(var_2, 24229))), (~var_16)))));
                            arr_12 [i_2] = var_8;
                            arr_13 [i_2] = ((4102161522554361123 ? ((((-49 > (arr_9 [i_3] [i_0]))))) : 551614899));
                            arr_14 [i_2] [i_2] [i_2] [i_2] [i_1] [i_2] = 21762;
                            arr_15 [i_0] [i_2] [i_2] [i_3 + 3] = (((max((((arr_4 [i_0] [i_1]) ^ -529513470)), (!49))) <= 1));
                        }
                    }
                }
                var_20 = (max(((min(-698417452, var_4))), (min(var_13, (arr_4 [i_0] [i_1])))));
                arr_16 [i_0] [i_1] [i_0] = (max(var_6, 10864461917454253112));
            }
        }
    }
    #pragma endscop
}
