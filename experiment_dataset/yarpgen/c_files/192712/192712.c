/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192712
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192712 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192712
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        var_16 = (min(var_16, var_12));

        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            var_17 = (--103);
            var_18 = var_15;
        }

        for (int i_2 = 2; i_2 < 20;i_2 += 1)
        {

            for (int i_3 = 3; i_3 < 20;i_3 += 1)
            {
                arr_8 [i_3] [i_2 + 1] [i_3] = (max(((~(((arr_0 [i_0]) ? (arr_6 [i_3] [i_2 + 2]) : (arr_0 [i_0]))))), ((min(var_9, (arr_6 [i_3] [i_3]))))));
                arr_9 [i_3] [i_2 + 2] = 2022;
                var_19 = (min(var_19, ((((((var_2 >= (arr_0 [i_2 + 2])))) > (arr_7 [i_2] [i_2 + 2] [20]))))));

                for (int i_4 = 1; i_4 < 19;i_4 += 1)
                {
                    var_20 = (max(var_20, ((min(64, 112)))));
                    var_21 = (max((max((arr_1 [i_4 - 1] [i_0 - 1]), (arr_0 [i_4 + 2]))), ((~(arr_0 [i_4 - 1])))));
                }
                for (int i_5 = 4; i_5 < 21;i_5 += 1)
                {
                    var_22 = (max(var_22, -795992373));
                    var_23 += -103;
                    var_24 = (max(var_24, var_12));
                }
            }
            arr_16 [i_0 - 1] = var_10;
            var_25 = -113;

            for (int i_6 = 4; i_6 < 19;i_6 += 1)
            {
                arr_20 [i_0 - 1] [i_2] [i_6] [i_6] = (min((96 < -926775678), (~32764)));
                var_26 = (arr_12 [i_0] [i_0] [i_0 - 1] [8] [i_6 + 1]);
                var_27 = ((((((arr_11 [i_6]) - (arr_11 [i_2])))) ? (arr_11 [i_2]) : (((arr_11 [i_6]) + var_13))));
            }
        }
    }
    var_28 *= var_6;
    #pragma endscop
}
