/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208952
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208952 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208952
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    var_11 |= var_5;
                    arr_10 [i_0 - 1] [1] [1] |= (min(8746035684175208948, 9700708389534342669));
                }
                for (int i_3 = 2; i_3 < 18;i_3 += 1)
                {
                    var_12 = (min((arr_6 [i_0] [i_1 - 1] [i_3]), ((var_1 ^ (max(9700708389534342669, var_0))))));
                    arr_13 [i_0] [i_1] = (min(9700708389534342668, var_10));
                    var_13 -= ((-(((arr_2 [i_0 + 2] [i_1 - 1] [i_3 - 2]) ? (arr_2 [i_0 + 4] [i_1 - 1] [i_3 - 2]) : (arr_1 [i_0 - 1])))));
                    arr_14 [i_1] [i_1 - 1] [17] [1] = ((arr_9 [i_3] [i_1] [i_0]) / (((arr_0 [i_3]) ? ((-(-32767 - 1))) : (arr_12 [i_0] [i_1 - 1] [i_3]))));
                    var_14 = max(((-(((!(arr_4 [i_3 - 1] [i_1])))))), (((!(((8746035684175208947 ? 9700708389534342669 : 9700708389534342667)))))));
                }
                for (int i_4 = 2; i_4 < 18;i_4 += 1)
                {
                    var_15 = (min(183, 1944820270));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 3; i_6 < 18;i_6 += 1)
                        {
                            {
                                var_16 |= (-(!var_4));
                                arr_23 [i_4] [11] [i_4] [i_5] [i_0] [i_4] = ((!(((~(arr_5 [i_4 - 1]))))));
                            }
                        }
                    }
                    var_17 += var_8;
                }

                for (int i_7 = 1; i_7 < 18;i_7 += 1)
                {
                    var_18 += (~-1);
                    arr_27 [i_0 + 4] [i_0 - 1] = (arr_12 [i_0] [i_1 - 1] [i_7]);
                    var_19 -= (((!-56) <= ((((arr_9 [i_1 - 1] [i_7 - 1] [i_7 - 1]) <= var_10)))));
                }
            }
        }
    }
    var_20 = var_10;
    #pragma endscop
}
