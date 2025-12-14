/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226032
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226032 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226032
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((((max(((max(116, var_1))), 6128536136282027270))) ? var_3 : var_10));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_16 = ((-2499672276 >= ((((!(~6128536136282027270)))))));
                var_17 = (max(var_17, ((((((arr_2 [i_0]) ? (((!(arr_1 [i_0 - 2] [i_1])))) : (max(var_7, 253952))))) ? ((((max((arr_0 [4] [4]), var_0))) - (arr_2 [i_0]))) : ((((((-3078227445378799187 ? -36 : 1795295020))) && (((~(arr_1 [i_0] [22])))))))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 17;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 17;i_3 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 17;i_5 += 1)
                    {
                        {
                            arr_15 [i_2] [2] [i_4] [i_4] = ((+(((arr_8 [i_2] [i_3] [8]) / (-32767 - 1)))));
                            var_18 += ((var_4 ? (max(2499672276, (arr_2 [i_5]))) : ((((var_2 ? -2147483642 : (arr_13 [i_5])))))));
                            arr_16 [i_2] [i_4] = ((~((((arr_6 [i_2] [i_2]) | (arr_11 [i_3] [i_3] [i_4]))))));
                        }
                    }
                }
                arr_17 [i_2] = (((1 ? (arr_8 [i_2] [i_3] [i_3]) : (-2147483647 - 1))));
            }
        }
    }
    var_19 = (((((-var_4 << (-var_5 + 49)))) ? ((-(var_14 == 2499672285))) : (!var_6)));
    #pragma endscop
}
