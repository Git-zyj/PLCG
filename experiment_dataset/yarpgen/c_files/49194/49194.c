/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49194
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49194 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49194
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            {
                arr_4 [i_1] = (((((0 >> (1048575 - 1048566)))) ? 13989272703654395494 : (arr_1 [i_0])));
                var_17 = (((+(min((arr_3 [i_1] [i_1]), (arr_2 [i_0] [i_0] [i_1]))))) <= 278754018);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        {
                            var_18 = (min(0, 762427198));
                            arr_13 [i_3] [i_3] = (((((max(4294967292, (arr_5 [i_2] [i_1]))))) / -434));
                        }
                    }
                }
            }
        }
    }
    var_19 = (var_4 | var_2);
    var_20 = (min((min(((-109 ? 4294967290 : 4294967295)), var_11)), (((0 == (((max(12515, var_11)))))))));
    #pragma endscop
}
