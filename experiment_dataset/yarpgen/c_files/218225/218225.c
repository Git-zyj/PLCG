/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218225
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218225 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218225
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(var_4, 7343688560242637316));
    var_12 = ((((((max(0, 0)))) == var_6)));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_13 = (((min(var_9, (arr_0 [i_0 - 1] [i_0])))) == (((arr_0 [7] [i_0]) ? (arr_0 [i_0 - 2] [i_0]) : (arr_0 [i_0 - 3] [i_0]))));
                arr_5 [i_0] [i_0] [i_0] = ((-(((arr_4 [i_0 - 1]) ? -43 : (arr_4 [i_0 + 1])))));
                var_14 = ((((max((arr_0 [i_0 - 1] [i_0]), (arr_4 [i_0 + 1])))) / (((((18890 ? 65535 : 13997))) ? ((max(30652, 9))) : -80))));
                var_15 = ((1107178857210485398 ? (arr_1 [i_0 + 1]) : ((max(var_8, (arr_4 [i_0 - 2]))))));
            }
        }
    }
    var_16 = var_9;
    #pragma endscop
}
