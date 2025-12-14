/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50705
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50705 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50705
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 10;i_1 += 1)
        {
            {
                var_20 = (min((3 + 1125899873288192), (arr_6 [7] [i_0] [i_0])));

                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    arr_9 [i_0] [i_1] = (arr_7 [10] [10] [i_2]);
                    var_21 = (arr_2 [i_0]);
                    var_22 -= 3284739474866392301;
                    var_23 = 5;
                }
                for (int i_3 = 3; i_3 < 9;i_3 += 1)
                {
                    arr_13 [i_0] [i_0] [i_3] [i_0] = ((((4631 ? ((min(14, 241))) : 240))) && ((max((max(61254, 16777216)), (arr_1 [2])))));
                    var_24 *= (min(100, (max(1, (arr_11 [i_0])))));
                    arr_14 [i_0] [7] [i_0] = (((arr_11 [i_1 - 1]) && (((arr_6 [0] [i_3 - 1] [i_1 - 1]) && (((241 | (arr_7 [i_0] [8] [i_0]))))))));
                }
                for (int i_4 = 2; i_4 < 8;i_4 += 1)
                {
                    var_25 += (((-127 - 1) ? (((max((-127 - 1), 21023)))) : ((((min(100, -60))) ? (arr_8 [i_0] [3] [i_4] [i_4]) : ((50 ? 241 : (arr_1 [i_4 - 2])))))));
                    var_26 = (min(((((max((arr_2 [3]), (arr_4 [i_0])))) && ((min((arr_1 [9]), (arr_0 [i_4])))))), (((arr_4 [i_0]) && (arr_4 [i_1 - 1])))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 11;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 0;i_6 += 1)
                        {
                            {
                                var_27 = (min(((10 ? -315611804 : (((arr_1 [i_5]) ? (arr_3 [10] [i_0]) : (arr_12 [i_0] [i_0] [i_0]))))), (((0 >> ((((min((arr_2 [i_4]), 1))) + 18)))))));
                                arr_22 [i_1] = (((((!((61227 >= (arr_11 [1])))))) >> (((arr_5 [i_0] [i_0]) - 1753688568))));
                            }
                        }
                    }
                    var_28 = -0;
                }
                var_29 = ((((((arr_20 [i_1 + 1] [i_1 + 1] [5] [i_1 - 2] [5] [i_1] [i_1 - 2]) <= (arr_20 [i_1 - 2] [i_1] [i_1] [4] [i_1] [i_1] [i_1 - 3])))) % (arr_15 [i_0] [i_0] [i_1 - 3])));
                var_30 = ((((-4294967295 * (15532 / 1))) / -26));
                var_31 += -15513;
            }
        }
    }
    var_32 = ((var_1 || (((var_5 ? var_3 : -8261704614013765017)))));
    #pragma endscop
}
