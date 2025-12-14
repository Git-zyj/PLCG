/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54413
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54413 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54413
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (1305960048 >= 23);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 24;i_2 += 1)
            {
                {
                    arr_10 [21] [i_2] [24] = ((((((743985907 >= 7414555745359694147) % (((arr_4 [i_0]) << 1))))) | ((((3943824555 ^ (arr_2 [24] [i_1]))) % (0 | var_1)))));
                    arr_11 [i_2 - 2] [i_2] [i_0] = (((((743985907 > (0 > 2989007248))))) + 9);
                    arr_12 [i_0] [i_2] [12] = ((((((0 && 1) || (((var_10 * (arr_0 [i_0]))))))) << (((1 << 0) << ((0 << (3399532772 - 3399532745)))))));
                }
            }
        }
    }
    var_13 = (((((((((var_8 << (var_5 - 1667839697463938545)))) && (1 >= var_6))))) < ((4294967295 | (1 / 2796964451)))));
    #pragma endscop
}
