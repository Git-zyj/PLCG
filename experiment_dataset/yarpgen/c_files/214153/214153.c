/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214153
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214153 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214153
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            var_15 -= ((var_14 ? ((((16206755409425652673 ? var_13 : 8725724278030336)) / (arr_2 [8] [8]))) : ((max((arr_0 [2]), (((arr_0 [4]) & (arr_1 [i_1] [2]))))))));
            arr_4 [i_0] [i_0] = (((arr_1 [i_0] [i_0]) ? var_10 : (3883609963 != 2)));
        }
        arr_5 [i_0] [i_0] = ((14893233186662603145 && ((!(arr_3 [i_0] [i_0] [i_0])))));
        var_16 -= (min(((((max(19546, 3883609963))) ? (((var_14 ? 132 : var_7))) : (((arr_2 [0] [i_0]) ? 16513957250754290873 : 411357332)))), (((~(arr_2 [6] [i_0]))))));
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 21;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 21;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 21;i_4 += 1)
            {
                {
                    var_17 = (max(((min(2079, -26020))), 6957382806652010888));
                    arr_13 [i_2] [i_3] [i_4] = var_5;
                    arr_14 [i_2] [i_3] [i_2] = arr_10 [i_3];
                }
            }
        }
    }
    var_18 = ((var_10 || (((var_12 ? 10779297267208948578 : (max(var_4, var_2)))))));
    #pragma endscop
}
