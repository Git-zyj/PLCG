/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232803
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232803 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232803
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((var_13 <= 1) ? ((-46 ? 1 : 7858948627548608679)) : (((100 ? ((max(var_3, var_3))) : var_1)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_17 = (max(var_17, ((((((var_5 ? (arr_6 [i_0] [i_0]) : ((max(1, (arr_0 [i_0]))))))) ? (((!(arr_5 [i_0])))) : -5334868393873167676)))));
                    var_18 = (max(var_18, ((((arr_6 [i_0] [i_0]) == ((((((arr_5 [i_0]) + 2147483647)) << ((((((9 ? (arr_3 [1] [i_1] [i_1]) : 1)) + 627073953)) - 5))))))))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 11;i_3 += 1)
    {
        for (int i_4 = 1; i_4 < 10;i_4 += 1)
        {
            {
                arr_12 [6] [4] [i_3] = (((!(arr_4 [i_4] [i_3] [i_3] [i_3]))));
                var_19 = (((((-5476625765008517184 ? (((-32767 - 1) ? (arr_7 [i_4] [i_3]) : 0)) : (((var_0 ? (arr_3 [i_3] [i_3] [i_3]) : (arr_8 [i_3]))))))) || (((((max(5719688203387241976, (-2147483647 - 1)))) ? (((!(arr_10 [i_3] [i_4])))) : (~190))))));

                for (int i_5 = 2; i_5 < 8;i_5 += 1)
                {
                    var_20 = arr_7 [i_4] [i_3];
                    var_21 = (-2147483647 - 1);
                }
            }
        }
    }
    #pragma endscop
}
