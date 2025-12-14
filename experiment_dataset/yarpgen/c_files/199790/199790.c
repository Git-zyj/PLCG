/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199790
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199790 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199790
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 &= 255;
    var_12 = 2717988767;
    var_13 = (((var_6 && 1069547520) ? ((var_2 >> (2717988767 - 2717988761))) : var_7));

    for (int i_0 = 0; i_0 < 13;i_0 += 1) /* same iter space */
    {
        arr_4 [i_0] [i_0] = ((!((max(var_9, 576443160117379072)))));
        arr_5 [i_0] [i_0] = ((!(((~(var_10 != 0))))));
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1) /* same iter space */
    {

        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {
            arr_13 [i_1] [i_1] [i_1] = (((((2717988767 | (arr_7 [i_1] [i_2])))) ? (arr_3 [i_1] [4]) : (!6131028371818781101)));
            arr_14 [i_1] [i_2] [i_2] = (135 >= 768);
            var_14 = ((((var_2 ? (!7) : (((arr_7 [i_1] [i_2]) & 187)))) > (arr_9 [i_2] [i_2] [i_1])));
        }
        for (int i_3 = 2; i_3 < 10;i_3 += 1)
        {
            var_15 = (((((max(192, (arr_16 [i_1] [i_3] [i_3]))))) ? (((((min(var_0, 192))) ? 2147483647 : (((!(arr_0 [i_1]))))))) : (arr_2 [i_1])));

            for (int i_4 = 0; i_4 < 13;i_4 += 1)
            {
                var_16 = (((arr_2 [i_1]) ? 174274872 : (0 / 18446744073709551615)));
                var_17 = 18446744073709551615;
                var_18 = ((((max((arr_2 [i_3 + 2]), (arr_15 [i_4] [i_3] [i_3 - 1])))) ? ((768 ? var_0 : 0)) : (((arr_7 [i_3 - 2] [i_3 + 3]) ? (arr_2 [i_3 + 3]) : 768))));
            }
            for (int i_5 = 2; i_5 < 12;i_5 += 1)
            {
                arr_23 [i_1] [i_1] [i_1] [i_1] = (12315715701890770514 >> ((((-41802783 / (arr_7 [i_3 - 1] [i_3 - 1]))) + 1741808)));
                var_19 = (max((((((max(1576978529, 4294967295))) || ((max(135, 121)))))), (min((arr_3 [i_5 + 1] [i_3 + 2]), (arr_3 [i_5 - 2] [i_3 + 3])))));
            }
            arr_24 [i_3 - 1] = -1069547520;
        }
        var_20 *= (((max(var_7, (arr_15 [i_1] [i_1] [i_1])))) ? (((((max((arr_2 [i_1]), -438422874))) ? (min(28610, 1595413791)) : ((max(0, var_8)))))) : var_10);
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 13;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 10;i_7 += 1)
            {
                {
                    var_21 = (max(4294967295, 0));
                    arr_30 [i_1] [i_6] [i_7 - 1] [i_7] = (min(((max(28672, 255))), (max((arr_7 [i_6] [i_1]), var_10))));
                    arr_31 [i_1] [i_1] [i_1] [i_1] = ((+(((arr_22 [i_1] [i_1] [i_6] [i_7 + 1]) >> (2365139230 - 2365139200)))));
                    var_22 = ((((max(2666843142, (((arr_26 [i_1] [i_1]) ? var_4 : var_0))))) ? 222 : (((arr_27 [i_1] [i_6] [i_7 + 3]) ? 186 : (arr_27 [i_1] [i_6] [i_7 - 1])))));
                    var_23 -= (arr_10 [i_7 + 2]);
                }
            }
        }
        arr_32 [i_1] = arr_9 [i_1] [i_1] [i_1];
    }
    var_24 = var_0;
    #pragma endscop
}
