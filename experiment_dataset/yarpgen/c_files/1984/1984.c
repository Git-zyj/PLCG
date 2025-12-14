/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1984
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1984 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1984
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((2305843009213693951 + (min(((1244562526415967793 ? 3160027991538883085 : var_5)), (((var_12 << (63 - 53))))))));
    var_14 = ((var_1 ? (~var_9) : 46098));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 9;i_2 += 1)
            {
                {
                    var_15 -= ((((((arr_3 [i_0 + 3] [i_1] [i_2 - 3]) ? (arr_3 [i_0] [i_0] [i_2 - 2]) : (51252 && 2528802540)))) ? (arr_6 [i_0] [i_1] [i_2]) : ((((arr_5 [i_2 - 1] [i_0] [i_0 + 2] [i_1 + 1]) || (arr_5 [i_2 - 2] [i_0] [i_0 + 1] [i_1 + 1]))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 9;i_4 += 1)
                        {
                            {
                                var_16 = ((~(((arr_11 [8] [i_2 + 1] [i_2 - 3] [i_3] [i_1]) + var_7))));
                                var_17 = ((+(((arr_6 [i_1 + 1] [i_4 - 4] [i_1 + 1]) ? (max(var_10, 9223372036854775801)) : ((((-1 + 2147483647) << (var_4 - 104114350))))))));
                                var_18 *= ((((((54638 ? 3160027991538883085 : (arr_5 [i_0] [i_3] [8] [i_0]))))) ? (((arr_11 [i_3] [i_3] [i_2] [8] [i_3]) ? (arr_5 [8] [i_0] [i_1] [i_3]) : ((~(arr_4 [i_0] [i_1]))))) : var_7));
                            }
                        }
                    }
                    var_19 = 46098;
                    var_20 = (max(((min(84, 3))), ((-127 ? 4294967269 : 78))));
                    arr_12 [i_0] [i_0] [i_1] [i_0 + 3] = ((!(((19437 ? (((arr_0 [i_1] [i_2]) ? 19439 : (arr_1 [4]))) : (((max(var_12, var_10)))))))));
                }
            }
        }
    }
    var_21 = ((var_5 ? (min((126 + 925185161), ((var_3 ? var_7 : var_5)))) : var_0));
    #pragma endscop
}
