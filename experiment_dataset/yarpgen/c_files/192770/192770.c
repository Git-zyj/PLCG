/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192770
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192770 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192770
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        var_17 = (min(54343, 16));
                        var_18 = ((((((max((arr_0 [i_0] [i_2]), 287104476244869120))) ? (max((arr_6 [i_0] [i_1] [i_2]), 8111608767482804344)) : (arr_7 [i_0] [i_1] [i_3] [i_3])))) ? (arr_7 [i_3] [i_2] [5] [7]) : ((min(var_3, 18446744073709551588))));
                        var_19 = ((((min((((!(arr_0 [i_3] [i_2])))), (((arr_7 [i_1] [i_2] [i_1] [5]) ? 17146370231546491597 : var_1))))) ? (((!17146370231546491597) ? (((-(arr_3 [0])))) : ((18446744073709551605 ? 417969941003576312 : 1)))) : ((((((arr_6 [i_0] [i_2] [i_3]) ? (arr_5 [i_1] [i_0]) : (arr_2 [5])))) ? 14477796465984649468 : (((arr_8 [i_3] [6] [1] [i_2] [6] [i_0]) ? var_13 : 59303))))));
                    }
                    var_20 = 128;
                }
            }
        }
    }
    var_21 = (((min((!var_2), (min(241, 1811722068190331448)))) > 14));
    #pragma endscop
}
