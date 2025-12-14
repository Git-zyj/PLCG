/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45298
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45298 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45298
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((((var_8 + 2147483647) << (var_11 - 396))));
    var_16 = (((max(((max(var_6, 4))), 1)) <= ((((var_11 ? var_4 : var_8))))));
    var_17 = (max(var_17, ((((8388607 * 3638) / (min(var_1, ((var_14 ? 25 : var_13)))))))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                arr_5 [10] |= 6899767395257818163;
                arr_6 [i_0] [i_0] [i_1] = 1022;

                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    var_18 = (min(var_18, (((1022 == ((-(arr_3 [i_2] [i_0 - 3]))))))));
                    var_19 = (max(var_19, (((36213 % (arr_2 [1] [i_1] [i_1]))))));
                }
            }
        }
    }
    var_20 = ((!(((var_11 ? (!var_4) : var_10)))));
    #pragma endscop
}
