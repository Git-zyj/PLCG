/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22632
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22632 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22632
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            var_20 |= 7355;
            var_21 = (min((((((var_15 != (arr_0 [i_0] [i_1]))) || ((((((((-2147483647 - 1) + 2147483647)) + 2147483647)) >> (8070450532247928832 - 8070450532247928821))))))), ((2147483647 >> ((((2147483647 ? var_10 : 8070450532247928821)) - 1461))))));
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            var_22 ^= (255 && (!6984185202174384055));

            for (int i_3 = 2; i_3 < 10;i_3 += 1)
            {
                arr_8 [i_0] [3] [i_2] [0] = (((((arr_3 [i_2]) ? var_4 : var_15)) ^ 27787));
                var_23 = (max(var_23, ((((arr_2 [i_0] [i_2] [i_3 + 2]) ? (arr_2 [i_0] [i_2] [i_3 - 1]) : (arr_2 [i_3 - 1] [i_2] [i_3 + 2]))))));

                for (int i_4 = 2; i_4 < 9;i_4 += 1)
                {
                    var_24 = (min(var_24, (((arr_2 [i_0] [i_0] [i_0]) <= var_9))));
                    arr_11 [i_0] [i_2] [8] [i_3] = var_3;
                }
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    arr_14 [i_0] [i_2] [i_3] [i_3] [1] |= -10376293541461622784;
                    var_25 = (-((var_5 ? 158 : var_9)));
                    arr_15 [i_0] [i_2] [i_2] [i_5] [i_5] = (((((var_12 ? 8070450532247928832 : var_5))) ? (arr_13 [i_3 - 2] [i_3 + 3] [i_3 - 1] [i_3 - 1]) : (85 % var_5)));
                }
            }
            arr_16 [i_2] = var_0;
        }
        var_26 -= 11462558871535167566;
        var_27 += (((((19895 ? 20602 : 11462558871535167560))) || ((min(((var_12 ? var_14 : (arr_0 [i_0] [i_0]))), (min((arr_13 [i_0] [1] [i_0] [i_0]), var_5)))))));
        var_28 ^= var_9;
    }
    var_29 |= (var_5 ^ var_1);
    var_30 = var_18;
    #pragma endscop
}
