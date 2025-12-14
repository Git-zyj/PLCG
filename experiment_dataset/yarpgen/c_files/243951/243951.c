/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243951
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243951 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243951
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            {
                arr_5 [i_0] = -59;
                var_17 = (max(var_17, ((((min(-1143709870, (arr_4 [i_1 - 1] [i_1 - 1]))) / ((((((-1143709878 ? -1143709855 : 2305843000623759360))) && 2803909492))))))));
                arr_6 [i_0] = ((max(2305843000623759360, 992938885208782360)));
                var_18 += (max((((-(arr_2 [i_1 + 1])))), (max(-281474976710656, 1915454880))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 10;i_3 += 1)
        {
            {
                arr_13 [i_2] [i_3] [6] = (max((((arr_2 [i_3]) ? (arr_2 [i_2]) : (arr_2 [i_2]))), ((-1915454873 ? (arr_2 [i_3]) : (arr_2 [i_2])))));
                arr_14 [i_2] [i_3] = (arr_12 [i_2] [i_2] [i_2]);
            }
        }
    }
    var_19 += ((-var_14 <= (min(var_7, var_12))));
    var_20 -= var_11;
    var_21 = (((((max(-1143709870, var_12))) ? (min(32760, var_5)) : (((max(var_4, var_0)))))) >= (~var_8));
    #pragma endscop
}
