/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220460
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220460 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220460
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (~687753520);
    var_19 = ((!((min((((var_8 + 2147483647) >> (var_5 - 1725850497))), 45)))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_2 [i_0] = (arr_0 [i_0]);
        arr_3 [i_0] = (1790940721 <= 4294967289);
        arr_4 [i_0] [i_0] = (((((arr_1 [i_0]) >= var_16)) ? 1289725056 : ((((-27664 == (-2147483647 - 1)))))));
        arr_5 [i_0] = ((-(arr_0 [i_0])));
        var_20 = ((var_1 ? (var_9 - var_6) : 5));
    }
    for (int i_1 = 4; i_1 < 11;i_1 += 1)
    {
        var_21 = ((((max((max(2147483647, var_10)), (min(var_3, var_6))))) ? ((max(32758, 1))) : ((-6771164268698211030 ? (arr_7 [i_1 - 3]) : 1327328842))));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 13;i_3 += 1)
            {
                {
                    arr_13 [i_3] [i_3] = var_17;
                    var_22 = 6107472808935892926;
                }
            }
        }
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 13;i_4 += 1)
        {
            for (int i_5 = 4; i_5 < 12;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 13;i_6 += 1)
                {
                    {
                        var_23 *= ((((max(var_15, (arr_12 [i_1] [i_1] [1] [i_5 + 1])))) || ((var_6 <= (max(var_14, 18446744073709551601))))));
                        var_24 = (((max(-1, 237)) < var_11));
                        arr_22 [i_1] [10] [i_5] [i_6] = (arr_20 [i_5 - 1] [11] [i_6] [i_5 - 4] [i_5 - 1]);
                        var_25 = -1367780657;
                    }
                }
            }
        }
        var_26 = (((var_11 > ((12438901594222172886 ? 0 : -36)))));
    }
    for (int i_7 = 3; i_7 < 14;i_7 += 1)
    {
        var_27 = (arr_0 [i_7 + 1]);
        arr_25 [6] |= (((((!(arr_23 [4])))) * (((!((1 > (-2147483647 - 1))))))));
    }
    #pragma endscop
}
