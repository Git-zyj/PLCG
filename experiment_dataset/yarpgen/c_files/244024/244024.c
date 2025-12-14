/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244024
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244024 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244024
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 -= (min((((((1683600490 ? 252 : 192))) ? (((18071595411740001623 ? -1 : 13017))) : (max(18446744073709551611, 2459500490)))), (((((max(0, 25527))) ? (max(2980, var_10)) : (min(4294967295, var_11)))))));
    var_15 ^= (min(20476, ((((max(-10, 127))) ? -3094905356585536532 : 23481))));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_16 = ((((max((max((arr_3 [i_0 - 4] [4]), var_0)), ((min((arr_1 [i_0] [i_1]), (arr_0 [i_0 - 4]))))))) ? ((((((-9 ? (arr_4 [i_0] [i_1]) : (arr_2 [i_0])))) ? ((min(2, (arr_1 [i_0 - 3] [i_1])))) : ((var_12 ? 45 : var_8))))) : (max(((max(21, (arr_3 [i_0] [i_1])))), (min(-8410982860852909361, (arr_4 [i_0 + 1] [i_0 + 1])))))));
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_17 = (min(var_17, (((((max((((var_12 ? 8 : 5))), (min(4294967280, 0))))) ? (max((min(var_8, 4294967269)), (max((arr_14 [i_0] [i_0] [i_3] [i_1]), var_8)))) : (((((min(18446744073709551595, (arr_7 [i_4] [i_4] [i_4])))) ? ((1 ? 106 : 0)) : ((min(var_5, var_9)))))))))));
                                var_18 = (min((max((((var_9 ? (arr_1 [i_0] [i_0]) : var_13))), (max(var_0, 173)))), (min((((1641594642 ? 3791 : 2150622555))), (min((arr_13 [i_3] [i_2 + 2] [i_2 + 2]), 9223372036854775807))))));
                                var_19 = ((((max(((23156 ? 11488 : var_4)), ((((arr_14 [i_3] [i_3] [i_1] [i_3]) ? (arr_7 [i_1] [i_1] [3]) : (arr_10 [i_1] [i_3] [i_1] [i_4]))))))) ? (((((max(var_7, var_12))) ? (((var_3 ? var_8 : (arr_7 [i_0] [i_1] [i_0])))) : ((1992377142 ? 3570656712 : var_8))))) : (max((((var_3 ? var_10 : (arr_7 [i_0] [i_0] [i_0])))), ((1 ? -8137717482055968999 : var_9))))));
                            }
                        }
                    }
                }

                /* vectorizable */
                for (int i_5 = 0; i_5 < 13;i_5 += 1)
                {
                    var_20 = (((((var_7 ? var_10 : var_10))) ? ((var_4 ? 246799746 : var_4)) : (((-1558337079863355198 ? 18916 : 0)))));
                    var_21 = ((0 ? 1 : 6878218622628133866));
                }
                for (int i_6 = 3; i_6 < 12;i_6 += 1)
                {
                    var_22 = (min(var_22, (((((max((max(var_13, (arr_2 [i_6]))), (max(-32483, var_11))))) ? ((max((max(var_10, var_2)), ((max(var_6, (arr_10 [i_0] [i_1] [i_1] [i_6]))))))) : (min(((((arr_3 [i_0] [i_0 - 2]) ? 0 : var_13))), (max(26834, 3240324706848990087)))))))));
                    var_23 = (min(6221, 18446744073709551615));
                }
                var_24 = ((((((min(19153, var_9))) ? ((20344 ? (arr_4 [i_0 - 4] [i_1]) : (arr_20 [i_0]))) : ((max(var_0, var_0)))))) ? (max(((max(1, (arr_0 [i_0])))), ((20 ? (arr_16 [i_0 - 3]) : (arr_18 [12] [i_1] [i_1] [i_1]))))) : (min((min(var_11, var_10)), (max(295843863, (arr_13 [i_0] [i_0 - 1] [i_1]))))));
                var_25 |= (((((((min(var_10, (arr_11 [i_1])))) ? (min(-1, -38)) : ((max(32767, -17836)))))) ? ((min(((11278560840049005945 ? var_12 : 515355182)), ((min((arr_6 [3] [i_1]), (arr_2 [1]))))))) : (max((max(51, var_0)), ((max(30, var_11)))))));
            }
        }
    }
    #pragma endscop
}
