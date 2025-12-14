/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242334
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242334 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242334
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(var_10, 1));

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_2 [i_0] = ((((((var_2 + 1646698580) <= 558581605))) + -48));
        var_11 = (min(var_11, ((min(((~(arr_1 [i_0]))), (arr_1 [i_0]))))));
        arr_3 [i_0] = (~30);
        var_12 |= (~var_7);
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        arr_6 [i_1] = var_7;

        for (int i_2 = 0; i_2 < 17;i_2 += 1)
        {
            arr_9 [i_1] = (arr_4 [i_1]);
            arr_10 [i_1] [i_1] = (((((3856695932 ? 438271360 : 13506947132871396260))) && (arr_7 [10] [i_2] [i_1])));

            for (int i_3 = 1; i_3 < 15;i_3 += 1)
            {
                arr_13 [i_3] [i_2] = (min(var_9, (arr_12 [i_1] [16] [i_3] [i_3 + 1])));
                var_13 = (-(60 <= var_1));
                var_14 = (arr_11 [i_1] [i_1] [5]);
            }
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                var_15 = (((((-4392101596187715610 ? (arr_0 [i_1] [i_1]) : (arr_7 [i_1] [i_2] [i_2])))) ? (arr_0 [i_1] [i_1]) : (((arr_7 [i_1] [i_2] [i_4]) ? var_1 : (arr_7 [i_1] [7] [i_1])))));
                var_16 = (min(var_16, ((min(((min((arr_1 [i_1]), (arr_1 [i_1])))), ((18280011578701454091 >> (((min(var_1, var_6)) + 2917655297839247405)))))))));
            }
            arr_16 [i_1] = (arr_15 [i_1] [i_1] [i_1]);
        }
        for (int i_5 = 2; i_5 < 16;i_5 += 1)
        {
            var_17 = (min(var_17, ((min(((~((var_7 ? (arr_14 [i_1] [i_5] [i_1]) : (arr_12 [i_1] [i_1] [16] [i_1]))))), ((((arr_11 [i_1] [i_1] [i_5]) == (((!(arr_5 [4]))))))))))));
            arr_20 [7] [i_5] [i_5] = var_8;
            var_18 = (max(var_18, (((-1201627327 || ((min(-5, 60))))))));

            for (int i_6 = 0; i_6 < 17;i_6 += 1)
            {
                var_19 = ((!(((121 ? 240 : -48)))));
                arr_23 [i_5] [i_6] = -var_6;
                arr_24 [i_5] = var_4;
            }
        }
    }
    #pragma endscop
}
