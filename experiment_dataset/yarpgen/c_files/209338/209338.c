/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209338
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209338 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209338
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (((((var_2 ? var_6 : (-2147483647 - 1))))) ? 7307814693823270860 : (max((max(7336024780110057888, 7336024780110057865)), (min(131071, var_7)))));
        var_18 = (min((((((min(var_9, 1))) && (!7336024780110057888)))), (~7336024780110057888)));
    }
    for (int i_1 = 1; i_1 < 1;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            /* LoopNest 3 */
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                for (int i_4 = 3; i_4 < 24;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 21;i_5 += 1)
                    {
                        {
                            arr_16 [24] [i_1 - 1] [i_1 - 1] [24] [24] [i_1] [i_1 - 1] &= (~(min(349242202, 448942364)));
                            var_19 = ((((min(4294967295, 150)) ^ 91)));
                            var_20 |= (((((((var_6 ? 11110719293599493728 : 1)) * 103))) ? (((((min(111, 104)))) % (min(var_11, 2251799813685240)))) : (((0 ^ (var_0 < 280979261))))));
                        }
                    }
                }
            }
            arr_17 [i_1] [i_2] = 9855424570758558581;
            var_21 = 4294967295;
        }
        var_22 *= ((((0 ? ((min(var_8, var_1))) : (-1090296687 / -9096341395372702340))) / 6));
        var_23 -= ((((min((1 || var_2), ((105 ? var_9 : -2129168060))))) ? var_12 : (min(-721247460, 234))));
        var_24 = (max(var_24, 1612998366));
    }
    var_25 = ((-((~(max(65, 216619073))))));
    #pragma endscop
}
