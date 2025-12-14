/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232639
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232639 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232639
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 20;i_1 += 1)
        {
            {
                var_11 |= ((~(max((((!(arr_0 [i_1 - 2])))), (max((arr_4 [i_1]), (arr_5 [i_0] [i_0])))))));
                arr_6 [i_1] [i_1] |= ((~((+(((arr_3 [13] [18]) - (arr_2 [i_1] [i_1])))))));
                arr_7 [i_1] |= ((+(((arr_3 [i_0] [i_1 + 1]) ? (arr_3 [7] [i_1 - 1]) : (arr_1 [i_0])))));
            }
        }
    }
    var_12 |= 1;
    var_13 |= ((-16 ? (!var_3) : (((((max(219, var_2))) & var_4)))));
    var_14 = ((var_9 & (5376113125148458889 | var_10)));

    for (int i_2 = 3; i_2 < 18;i_2 += 1)
    {
        arr_12 [i_2] [i_2] = (arr_1 [i_2 - 3]);

        for (int i_3 = 0; i_3 < 19;i_3 += 1)
        {
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 19;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 19;i_5 += 1)
                {
                    {
                        var_15 = (max(var_15, ((max(((~(arr_4 [i_3]))), (--15))))));
                        var_16 = (max(var_16, ((((arr_11 [i_3] [i_3]) ? (((arr_16 [i_2] [i_3] [i_3]) ? ((((1 <= (arr_2 [i_4] [i_4]))))) : (var_6 - -5140269853188427048))) : ((((((arr_13 [i_2]) ? -98 : -5819447483787896146))) ? 65535 : (255 / -5376113125148458890))))))));
                    }
                }
            }
            arr_22 [i_2 - 3] [i_2] = (min((max((arr_14 [i_2]), var_4)), ((((~-15) ? 5 : -var_8)))));
            var_17 |= ((((-(arr_5 [i_2] [i_2]))) / -219));
            arr_23 [i_2] [i_2] = 1801572825865668794;
            var_18 |= arr_15 [i_3] [1] [1];
        }
        for (int i_6 = 4; i_6 < 18;i_6 += 1) /* same iter space */
        {
            var_19 += ((((min((arr_10 [1] [1]), ((1 ? var_8 : (arr_1 [i_6])))))) ? (arr_24 [1]) : (((((max((arr_17 [18]), 32767))) >> (((arr_24 [18]) + 6935841750602221844)))))));
            /* LoopNest 2 */
            for (int i_7 = 1; i_7 < 16;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 1;i_8 += 1)
                {
                    {
                        var_20 = (max(((((arr_16 [i_2] [i_2] [i_7 - 1]) ? (arr_16 [i_2] [i_2] [i_7 - 1]) : 0))), (max((arr_24 [i_2]), 1064511572))));
                        arr_32 [i_2] [i_2] [i_2] [1] [i_2] [i_2] = (((((!((min(1072693248, (arr_21 [i_8] [i_8] [i_8]))))))) + (((4294967295 != (arr_28 [i_7] [i_7] [i_7] [i_7 + 3]))))));
                    }
                }
            }
        }
        for (int i_9 = 4; i_9 < 18;i_9 += 1) /* same iter space */
        {
            arr_37 [i_2] [i_2] [i_2] = (arr_15 [i_2] [12] [12]);
            var_21 = -5376113125148458890;
            /* LoopNest 3 */
            for (int i_10 = 0; i_10 < 19;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 19;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 19;i_12 += 1)
                    {
                        {
                            var_22 = (min(var_22, ((((arr_18 [i_12] [i_12] [i_12] [i_12]) ? var_2 : -32758)))));
                            arr_46 [i_12] [i_2] [i_2] [i_2] [2] [i_2] = ((var_5 < ((((!(arr_17 [i_2])))))));
                        }
                    }
                }
            }
            var_23 += (max((((arr_15 [15] [15] [i_9]) / (((max((arr_2 [4] [i_9]), 1)))))), (((65535 >> (32767 - 32764))))));
            var_24 = ((!((((arr_38 [i_9] [i_2] [18]) ? (((arr_28 [i_2] [i_2] [i_9 - 3] [i_9 - 3]) ? (arr_15 [i_2 - 1] [i_2 - 1] [i_9]) : 20608)) : (arr_28 [i_2] [i_2] [i_2 - 2] [i_9 - 2]))))));
        }
    }
    #pragma endscop
}
