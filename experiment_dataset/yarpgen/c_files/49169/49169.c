/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49169
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49169 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49169
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((-var_1 ? var_3 : (!8736916797811267461)));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {

            /* vectorizable */
            for (int i_2 = 3; i_2 < 14;i_2 += 1)
            {
                arr_9 [i_0] [i_0] [i_2 + 1] [1] = (((arr_7 [i_0] [i_0] [i_2 - 3]) ? 8 : (arr_1 [i_0])));
                arr_10 [i_0] [i_0] [i_1] [i_2] = (165 && (arr_4 [i_0]));
                arr_11 [i_0] = var_0;
            }
            for (int i_3 = 0; i_3 < 17;i_3 += 1)
            {
                var_12 = (max(var_12, ((((((((150 ? 254 : var_0))) ? 128 : 150)) << (((56902 <= (-15 * 3537)))))))));
                arr_16 [i_0] [i_1] [i_3] = ((44 ? (((((8 ? (arr_7 [i_0] [i_0] [i_0]) : 1))) ? 106 : ((var_1 * (arr_13 [i_0] [15] [i_0] [i_3]))))) : ((((var_3 && (arr_2 [i_0] [i_0])))))));
                var_13 = (min((max((arr_3 [i_0] [i_1] [6]), -309681782286150298)), (arr_3 [i_0] [i_1] [i_3])));
            }
            arr_17 [i_0] = ((-(arr_8 [i_1] [i_1] [i_0] [i_0])));
            var_14 = (min(var_14, (((-(((((max((arr_8 [i_0] [i_0] [i_1] [i_1]), 28063))) < ((min(6658, 85)))))))))));
            var_15 -= 4294967295;
        }
        for (int i_4 = 0; i_4 < 17;i_4 += 1)
        {
            arr_21 [i_0] [i_0] = var_5;
            var_16 = ((((-((var_4 ? 250 : (arr_6 [i_0] [i_0] [i_0]))))) - 1));
            var_17 = 309681782286150299;
        }
        var_18 = (min(var_18, (((((max(16699, (arr_5 [10])))) ? -103 : ((((min(-1126376617, (arr_12 [4] [4]))) <= var_10))))))));
        /* LoopNest 3 */
        for (int i_5 = 2; i_5 < 13;i_5 += 1)
        {
            for (int i_6 = 1; i_6 < 16;i_6 += 1)
            {
                for (int i_7 = 1; i_7 < 15;i_7 += 1)
                {
                    {
                        var_19 = (max(((min((arr_29 [i_5 + 4] [i_6 + 1] [13] [15]), (arr_29 [i_5 - 2] [i_6 + 1] [i_6] [i_6 - 1])))), var_3));

                        for (int i_8 = 0; i_8 < 17;i_8 += 1)
                        {
                            arr_34 [i_8] [i_0] = (min(var_4, (~var_4)));
                            var_20 |= ((~(~4294967274)));
                            var_21 = (((((((arr_27 [12] [12]) & 135)) <= (var_4 - var_6))) || var_0));
                            arr_35 [i_0] = 50734;
                            arr_36 [i_0] [i_0] [i_0] [i_0] [i_0] = var_6;
                        }
                        for (int i_9 = 0; i_9 < 17;i_9 += 1)
                        {
                            var_22 = ((2547406153 ? (-6643130716260703398 == 1) : ((655005519 ? -1310416309 : 1310416322))));
                            arr_40 [i_5] [i_0] [i_5] [i_5] [i_9] [i_5] [i_0] = ((-(min(4294967286, (arr_6 [i_6 + 1] [i_5 + 1] [i_0])))));
                        }
                        for (int i_10 = 0; i_10 < 17;i_10 += 1)
                        {
                            arr_45 [i_0] = (max((~var_10), (((((-(arr_39 [i_10] [i_10] [13] [i_10] [1] [i_10] [14]))) > (!19))))));
                            arr_46 [i_0] [i_5] [i_0] [i_0] [i_10] = 86;
                        }
                    }
                }
            }
        }
    }
    for (int i_11 = 0; i_11 < 12;i_11 += 1)
    {
        var_23 ^= ((-(max(((21930 ? 1 : 73)), ((((arr_23 [i_11] [i_11] [i_11]) < 1541309721013358140)))))));
        var_24 = -7193450600830814571;
        var_25 = -11;
    }
    var_26 = ((1683878775 >> (var_9 - 1433198213382383821)));
    #pragma endscop
}
