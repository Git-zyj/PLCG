/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31962
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31962 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31962
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    arr_8 [i_0] [i_0] [i_2] [i_0 - 1] = ((!((min((arr_3 [i_0 - 1]), var_6)))));
                    var_17 = (max(var_17, ((min(((min((arr_3 [i_0 - 1]), ((57 ? (arr_1 [17]) : 0))))), ((((max(var_7, (arr_3 [i_0])))) ? ((15986723991614597621 * (arr_1 [i_1]))) : (193 * -18888))))))));
                }
                arr_9 [1] [16] [i_1] = (min((arr_4 [i_0]), ((-(arr_7 [i_1] [i_1] [i_0] [11])))));
            }
        }
    }
    var_18 = (max(var_13, (((((-57 ? -1 : var_1))) ? (min(210, var_0)) : (-58 * 1)))));
    var_19 = ((((-1872 ? var_12 : (min(222, 2334561626123068207)))) >> (var_0 - 11385731256783865410)));
    var_20 = var_14;
    #pragma endscop
}
