/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40690
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40690 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40690
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        var_15 -= (~var_4);

        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            arr_7 [i_1] = (var_2 > var_2);
            var_16 = (var_13 - var_5);
        }
        for (int i_2 = 1; i_2 < 1;i_2 += 1)
        {
            arr_10 [i_2] [i_2] [i_2] = ((!var_13) >= var_0);
            var_17 = (max(var_17, (((((var_3 ? var_10 : var_4)) <= -var_10)))));
            var_18 = (max(var_18, var_3));
            var_19 = (109 <= 5654093726565988072);

            for (int i_3 = 0; i_3 < 17;i_3 += 1)
            {
                var_20 = (max(var_20, ((((var_4 <= var_8) % var_13)))));
                var_21 = (!var_12);

                for (int i_4 = 0; i_4 < 17;i_4 += 1)
                {
                    arr_16 [i_2] [i_2] [i_2] [15] = ((((var_8 ? var_3 : var_0))) ? var_12 : (var_8 <= var_1));
                    var_22 = (95 >= 18342);
                }
            }
        }
        arr_17 [i_0] [i_0] = (((-1742299821 && -1) ? ((-104 ? 19904 : 0)) : 1742299818));
        var_23 = ((-var_12 ? (!var_9) : (var_9 <= var_5)));
    }
    var_24 = (min(var_24, (((-(((var_10 || (((var_13 ? var_1 : var_1)))))))))));
    var_25 = ((~(((var_12 % var_5) ? var_12 : ((65535 ? 1742299828 : 0))))));
    #pragma endscop
}
