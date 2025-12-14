/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210361
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210361 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210361
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (((min(-var_4, 945251135)) << ((((var_3 ? 140737354137600 : (((max(var_2, var_6)))))) - 4160749565))));
    var_11 = var_8;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 14;i_1 += 1)
        {
            {
                var_12 = ((167 ? 18446603336355414030 : 1));
                arr_5 [i_0] [i_0] [i_0 - 3] = (max(1486, (((((1 ? (arr_2 [i_1 + 1]) : 0)) == (arr_3 [i_0] [i_0]))))));
            }
        }
    }
    var_13 = ((((max(var_6, -var_3))) ? ((-14449 ? 618363945330067779 : var_0)) : -0));
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 24;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 24;i_3 += 1)
        {
            {
                var_14 = var_9;
                arr_12 [i_2] [i_2] = ((-1133723042 ? ((-22944 ? 320420539 : 1)) : (((((3167889725278976110 - (arr_10 [i_2] [i_3] [i_3])))) ? (arr_10 [i_2] [i_2] [i_3]) : (arr_11 [i_2])))));
            }
        }
    }
    #pragma endscop
}
