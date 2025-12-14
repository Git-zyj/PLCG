/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31456
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31456 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31456
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_20 = (min(var_20, (((((max(((var_4 ? (arr_0 [i_0]) : 231)), ((8192 ? 7047 : 0))))) ? ((((((0 ? (arr_0 [i_0]) : var_18)) != -8192)))) : (min(34891, 18275348211342429970)))))));
                arr_4 [14] [i_1] = (((max(2575897254088180448, (arr_1 [i_1]))) - (min((arr_2 [i_0]), 0))));
                var_21 = (((((arr_0 [i_1]) >= (arr_0 [i_1]))) ? (((arr_3 [10] [i_1] [i_1]) + (((!(arr_1 [i_1])))))) : ((-(18184 == -12364)))));
                arr_5 [i_1] [i_0] = ((-((var_18 / ((18275348211342429970 ? 171395862367121651 : -31529077353799351))))));
            }
        }
    }

    for (int i_2 = 1; i_2 < 22;i_2 += 1)
    {
        arr_8 [i_2] = ((!((((((-5863186408293290319 ? 31529077353799350 : var_3))) ? (arr_6 [i_2 + 1] [i_2]) : ((((arr_6 [i_2 + 2] [i_2]) == 0))))))));
        var_22 = (max(var_22, (var_0 <= 2434204913)));
    }
    var_23 = var_15;
    #pragma endscop
}
