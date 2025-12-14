/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225561
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225561 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225561
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = 2047;
    var_18 = -1858745555;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 14;i_1 += 1)
        {
            {
                var_19 = (arr_0 [i_1] [i_0]);
                var_20 = (max(var_20, ((((((563813127 ? (arr_3 [i_0] [i_1]) : var_16)) != -72))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        {
                            var_21 *= ((!(((-(arr_4 [i_1 + 2]))))));
                            var_22 &= var_5;
                            arr_9 [i_3] [i_2] [i_3] [i_3] [i_3] [i_2] = (i_2 % 2 == 0) ? ((min((~63489), (((arr_7 [i_2]) << (((min(var_7, (arr_5 [i_2]))) - 18385811991438941991))))))) : ((min((~63489), (((arr_7 [i_2]) << (((((min(var_7, (arr_5 [i_2]))) - 18385811991438941991)) - 60932082270614839)))))));
                            var_23 = (max(var_23, ((((((((((arr_1 [i_1] [i_1 + 1]) ? (arr_6 [i_1]) : (arr_6 [i_2])))) || (var_12 ^ var_16)))) & ((((63489 | var_3) == (min(1185452764, 5573792005879668871))))))))));
                            arr_10 [i_0] [i_1] [i_2] [i_2] [9] [i_3] = ((~(((!(((var_6 ? var_5 : var_7))))))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 0;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 17;i_5 += 1)
                    {
                        {
                            var_24 = ((var_0 * (min(1578563772890818386, var_10))));
                            var_25 = (min((((((var_11 ? 1 : (arr_0 [i_0] [i_0])))) ? -12872952067829882762 : (arr_7 [2]))), ((min((arr_3 [i_1] [i_4 + 1]), ((-(arr_12 [i_0] [i_0] [i_0]))))))));
                            var_26 = (((arr_2 [i_5] [i_4 + 1] [i_1 + 2]) ? ((-(((arr_13 [i_0] [1] [i_0]) / (arr_5 [0]))))) : (!13009887647762672766)));
                            arr_16 [i_0] [i_1] = ((~(~1)));
                        }
                    }
                }
                var_27 ^= (arr_7 [0]);
            }
        }
    }
    var_28 = ((var_6 ? var_8 : (((640095592 ? 2048083299 : (min(4294967288, 63488)))))));
    #pragma endscop
}
