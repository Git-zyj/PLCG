/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221842
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221842 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221842
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_6;

    for (int i_0 = 0; i_0 < 16;i_0 += 1) /* same iter space */
    {
        var_11 = (arr_2 [i_0] [i_0]);
        var_12 = (((((1878741825 ? -20250 : -337137111))) ? ((+((min((arr_0 [2]), var_4))))) : (((!(arr_3 [i_0]))))));
        var_13 = (min((min((min(2147483632, 3372)), (((arr_2 [i_0] [i_0]) / (arr_1 [i_0]))))), ((~(arr_1 [i_0])))));

        for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
        {
            var_14 = (((-380152044 <= var_4) ? ((-(337137110 >= -74))) : (arr_5 [i_0] [i_1])));
            var_15 = 1;
        }
        for (int i_2 = 0; i_2 < 1;i_2 += 1) /* same iter space */
        {
            var_16 = -27867;
            var_17 = (((((((9223372036854644736 & var_2) != ((((arr_4 [i_0] [i_2]) ? (arr_3 [i_0]) : 255))))))) == (((arr_0 [i_2]) ? var_7 : 1525778846))));
            var_18 = (max(var_18, ((((((-(arr_6 [i_0] [i_2])))) ? (max(3023341175, 76)) : (arr_6 [i_0] [i_2]))))));
            var_19 = (((-1878741850 | (1945508890 / -337137111))));
        }
        var_20 = ((((max((arr_4 [i_0] [i_0]), (arr_4 [i_0] [i_0])))) - (arr_5 [0] [i_0])));
    }
    for (int i_3 = 0; i_3 < 16;i_3 += 1) /* same iter space */
    {
        var_21 = (max((((arr_4 [i_3] [i_3]) ^ (min(1878741825, var_5)))), (((!(arr_1 [i_3]))))));
        var_22 = (arr_4 [1] [i_3]);
    }
    var_23 -= var_2;
    var_24 = (max(var_6, var_5));
    var_25 -= -0;
    #pragma endscop
}
