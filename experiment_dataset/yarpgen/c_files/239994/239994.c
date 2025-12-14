/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239994
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239994 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239994
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 16;i_2 += 1) /* same iter space */
                {
                    arr_10 [i_2] = ((((((arr_5 [i_1] [i_0]) ? (!var_6) : 1))) > (min(((var_0 ? (arr_7 [i_0] [i_1] [i_1] [i_2]) : var_3)), var_8))));
                    var_11 &= (min(-3026488095955350714, -3026488095955350706));
                }
                for (int i_3 = 0; i_3 < 16;i_3 += 1) /* same iter space */
                {
                    arr_14 [i_3] [i_1] = ((!((((arr_11 [i_0] [i_0] [i_1] [i_3]) ? var_8 : (arr_11 [1] [i_1] [i_1] [i_0]))))));
                    arr_15 [i_3] [i_1] [i_1] = (max(((((58 | 129207498) ? (~3026488095955350705) : (arr_9 [i_0] [i_0] [i_3] [i_1])))), ((~(arr_6 [i_0] [1])))));
                }
                for (int i_4 = 0; i_4 < 16;i_4 += 1) /* same iter space */
                {
                    var_12 = (((((var_9 >> (((arr_5 [9] [9]) - 939872380))))) & (((arr_5 [i_4] [i_4]) | (arr_5 [i_0] [i_1])))));
                    arr_19 [i_0] [i_1] [1] = -3026488095955350703;
                }
                for (int i_5 = 0; i_5 < 16;i_5 += 1) /* same iter space */
                {
                    var_13 = (max(var_13, var_5));
                    arr_23 [i_0] [i_1] [i_5] = (arr_18 [i_0] [i_1] [i_5]);
                    arr_24 [12] [i_1] [i_1] = ((-var_3 ? (arr_5 [i_5] [i_1]) : var_5));
                    var_14 = (min(var_14, (~3026488095955350705)));
                }
                arr_25 [i_0] [i_1] = 15924122250749941034;
                arr_26 [i_0] = ((+((((arr_2 [i_0] [i_1]) < ((min((arr_1 [12] [i_1]), var_7))))))));
            }
        }
    }
    var_15 = (min(var_15, var_3));
    #pragma endscop
}
