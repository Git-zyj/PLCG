/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209996
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209996 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209996
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_20 = (((((var_14 ? -248755825 : (arr_3 [i_0])))) ? (arr_3 [i_0]) : 17665));
                arr_8 [i_0] = -1246296048;

                for (int i_2 = 0; i_2 < 14;i_2 += 1) /* same iter space */
                {
                    var_21 = (min(var_21, ((((max((25869 - -22), (((var_16 ? (arr_1 [i_2]) : 756851220))))) + ((((arr_10 [i_2] [i_2] [i_2] [i_0]) + (var_8 + 33554430)))))))));
                    var_22 *= (((((-(~102)))) == (((var_11 / (arr_6 [i_1] [i_1] [i_2]))))));
                }
                for (int i_3 = 0; i_3 < 14;i_3 += 1) /* same iter space */
                {
                    arr_15 [i_0] [i_1] [i_3] [i_3] &= (max((((((arr_3 [i_0]) > var_7)) ? (arr_2 [i_0] [i_0]) : (arr_0 [i_3]))), ((((max(17873988861842104981, var_18))) ? (0 | 0) : (arr_5 [i_1] [i_3])))));
                    var_23 *= 1613450011;
                    var_24 = 31849;
                    var_25 = (min((var_10 || -9050638092574046589), ((((arr_0 [i_0]) < ((min((arr_9 [i_1]), var_0))))))));
                }
                for (int i_4 = 0; i_4 < 14;i_4 += 1) /* same iter space */
                {
                    arr_18 [i_0] [i_4] [i_4] &= (((var_11 + (max((arr_7 [i_4]), -1011818973)))));
                    var_26 &= ((-((((min((arr_12 [i_4]), (arr_11 [i_4] [i_1] [i_4])))) + (arr_11 [i_4] [i_1] [i_1])))));
                    var_27 &= 1;
                }
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    var_28 += ((-((((17046630676850232780 == (arr_4 [i_5]))) ? (var_1 > var_12) : var_19))));
                    var_29 = var_14;
                }
            }
        }
    }
    var_30 = (min(64351, 3312226289));
    var_31 *= var_2;
    #pragma endscop
}
