/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20657
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20657 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20657
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((((var_3 || (var_9 || var_17)))) | (((((-17761 ^ 17761) + 2147483647)) << (((((11062 * -17762) + 196483263)) - 19))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            {

                for (int i_2 = 3; i_2 < 23;i_2 += 1)
                {
                    arr_7 [i_0] [i_0] [i_2] = var_10;
                    arr_8 [i_0] [i_0] = -var_6;
                    var_20 = (max(var_20, (((696028735 ^ (((~(22347 / 1793841080)))))))));
                    var_21 = (max(var_21, 47620));
                }
                arr_9 [6] [6] = (((-17761 + 2147483647) << (var_16 - 1008662026229208859)));
            }
        }
    }
    #pragma endscop
}
