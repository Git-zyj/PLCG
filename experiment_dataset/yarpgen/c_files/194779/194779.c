/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194779
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194779 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194779
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (15261393228718843131 != 3185350844990708485);
    var_19 = (max(var_19, (~var_14)));

    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        var_20 = (max((max(((((arr_2 [i_0]) <= (arr_2 [i_0])))), (min(1, (arr_1 [i_0] [i_0]))))), (arr_1 [i_0 + 1] [i_0 + 1])));
        arr_3 [i_0] = 13642613218208826808;
        var_21 = (arr_0 [i_0]);
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {

        /* vectorizable */
        for (int i_2 = 0; i_2 < 23;i_2 += 1)
        {
            var_22 = ((1 ? -1 : (-127 - 1)));
            arr_10 [i_1] [i_1] [4] |= (arr_4 [i_2]);
        }
        for (int i_3 = 0; i_3 < 23;i_3 += 1)
        {
            arr_13 [i_3] [i_3] [i_3] = (6 & 3955618731906373356);
            arr_14 [i_1] = (((!var_3) != var_17));

            for (int i_4 = 0; i_4 < 23;i_4 += 1)
            {
                arr_17 [i_4] = (((arr_15 [21] [i_4] [i_4]) ? (-127 - 1) : ((~(arr_15 [i_1] [i_4] [i_1])))));
                var_23 = ((90 % 3) != (((arr_11 [i_1]) << (((arr_7 [i_1]) - 3201293704458634719)))));
            }
            var_24 = (min(var_24, (--14491125341803178259)));
        }
        var_25 = arr_15 [i_1] [i_1] [i_1];
        arr_18 [i_1] = max(var_8, var_14);
    }
    var_26 |= (var_10 == (((~(!var_17)))));
    var_27 &= 1;
    #pragma endscop
}
