/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227429
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227429 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227429
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 12;i_0 += 1)
    {
        var_16 = ((var_12 & (((min(31, (arr_0 [11] [i_0])))))));
        var_17 ^= (((((((max(var_15, (arr_1 [i_0 - 1] [0])))) ? (max(var_2, var_10)) : 16))) ? 31 : ((var_11 >> (((arr_3 [i_0 - 2]) - 130))))));
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1) /* same iter space */
    {

        for (int i_2 = 0; i_2 < 17;i_2 += 1)
        {
            var_18 = var_11;
            arr_8 [1] [13] |= var_10;
            var_19 = ((~(arr_6 [i_2])));
        }
        for (int i_3 = 0; i_3 < 17;i_3 += 1)
        {
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                for (int i_5 = 2; i_5 < 13;i_5 += 1)
                {
                    {
                        var_20 = min((((arr_17 [i_1] [1] [i_1] [1]) ^ 1919071761)), -893731183);
                        var_21 = (max(var_21, (arr_6 [i_1])));
                        arr_18 [1] [1] [i_4] [1] = ((~((((9600159788580414815 > 240) || var_10)))));
                        var_22 = var_13;
                    }
                }
            }
            var_23 = (max(var_23, (((-(arr_9 [i_1] [i_3]))))));
        }
        var_24 ^= (min(((~(arr_12 [i_1]))), (min(-153637643, -32756))));
    }
    for (int i_6 = 0; i_6 < 17;i_6 += 1) /* same iter space */
    {
        var_25 -= (~var_12);
        var_26 = (min(var_26, (~9542)));
        var_27 -= var_6;
    }
    var_28 |= var_4;
    var_29 = var_15;
    var_30 += var_7;
    var_31 = var_11;
    #pragma endscop
}
