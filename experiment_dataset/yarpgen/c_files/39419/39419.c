/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39419
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39419 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39419
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 -= ((var_6 | ((-var_7 ? (~1910) : -230))));
    var_11 = var_1;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_12 |= (((63608 & 4384387812554517907) / (arr_0 [0] [i_0])));

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_13 = ((((217 & (arr_0 [i_0] [i_1])))) && 230);
            var_14 = (arr_0 [i_0] [i_1]);
        }
        arr_4 [i_0] = -6299;
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 15;i_4 += 1)
                {
                    {
                        var_15 = ((+((min((arr_2 [i_4] [i_0]), (arr_2 [i_0] [i_2]))))));
                        arr_15 [i_0] [i_2] [i_0] [i_4] = ((~(arr_6 [i_3])));
                        arr_16 [i_0] [i_4] [i_0] [i_2] [i_0] = ((~((~(arr_0 [i_0] [i_2])))));
                        arr_17 [i_0] [i_0] [i_3] [i_3] [i_4] [i_0] = (((arr_6 [i_3]) ? (arr_2 [i_0] [i_4]) : (~217)));
                    }
                }
            }
        }
    }
    #pragma endscop
}
