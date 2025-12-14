/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209122
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209122 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209122
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((!(((max(201, 1))))));
    var_21 = (1 * var_7);

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_2 [1] [i_0] |= ((((max((~-115), (arr_0 [1])))) ? ((~(((!(arr_0 [16])))))) : (((max(1, (arr_0 [10])))))));

        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            arr_7 [i_0] [i_1] [i_1] = (38796 ? 1506028997 : ((179323237 ? (arr_3 [i_0] [i_1]) : 26758)));
            var_22 &= (+((((((arr_5 [16]) / 6595573330385499425))) ? 5 : (min((arr_5 [i_1]), (arr_4 [i_0] [14] [i_0]))))));
            var_23 -= (arr_4 [13] [i_1] [13]);
            arr_8 [i_0] [i_1] [i_0] = ((-((~((38796 ? 1 : 579808989))))));
        }
        for (int i_2 = 1; i_2 < 22;i_2 += 1)
        {
            arr_11 [17] [7] [i_0] = (((~(((!(arr_10 [i_0])))))));
            arr_12 [i_0] = (~((~(((!(arr_6 [13] [i_2] [i_2 - 1])))))));
            var_24 = (arr_5 [i_0]);
            var_25 = (((arr_6 [i_2 - 1] [4] [i_2 - 1]) != ((max((max(5972, -7434264958962882630)), -124)))));
        }
        arr_13 [i_0] = (arr_3 [i_0] [i_0]);

        for (int i_3 = 0; i_3 < 23;i_3 += 1)
        {
            arr_17 [i_0] [i_0] = (min((max(-2089059778, ((~(arr_0 [i_0]))))), ((+(max((arr_4 [i_0] [9] [i_0]), (arr_14 [i_0] [i_0])))))));
            var_26 &= ((((!(arr_4 [i_0] [i_3] [i_3]))) ? -2147483646 : ((~(arr_10 [1])))));
            var_27 = 33591;
            var_28 = ((239 ? ((max(-2089059758, (arr_14 [i_0] [i_0])))) : ((((arr_15 [10]) ? ((((arr_5 [5]) ^ (arr_5 [i_0])))) : (min(214667727709620157, (arr_15 [i_0]))))))));
            arr_18 [i_0] = max((((1 >= (arr_10 [i_0])))), (((arr_3 [i_0] [16]) ? 0 : -184)));
        }
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 11;i_4 += 1)
    {
        arr_21 [7] = ((-(!-395881711)));
        var_29 = (min(var_29, ((((!(arr_5 [i_4])))))));
        var_30 = ((1 % (!0)));
    }
    for (int i_5 = 4; i_5 < 16;i_5 += 1)
    {
        var_31 ^= (~-2044514697);
        var_32 -= (((((+(max((arr_23 [i_5]), 13))))) ? 1 : (((((arr_6 [i_5] [i_5] [i_5 - 2]) && 828313457)) ? (!9) : ((395881708 ? 8372224 : (arr_14 [i_5] [i_5])))))));
        arr_24 [i_5] |= (!18446744073709551610);
        var_33 = ((!(((arr_10 [i_5]) <= ((((arr_22 [i_5]) != -879760004)))))));
        var_34 = ((~(arr_3 [i_5] [i_5 - 4])));
    }
    #pragma endscop
}
