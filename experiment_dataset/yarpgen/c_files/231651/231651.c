/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231651
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231651 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231651
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((-var_7 ? ((-((45537 ? var_0 : var_8)))) : ((((var_2 >= ((var_8 ? var_7 : var_5))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] = 470349457;
                arr_5 [i_0] = 15678170214079284325;
                arr_6 [i_0] = ((!((min((((var_0 ? 91 : (arr_0 [i_0] [10])))), (max((arr_3 [13] [i_0]), var_15)))))));
                arr_7 [10] [i_0] = (min(((((((var_12 + (arr_3 [i_0] [i_1])))) ? (((min(-91, 1)))) : (arr_0 [11] [i_0])))), (arr_3 [i_0] [i_0])));
                arr_8 [i_0] = ((~(103 < var_7)));
            }
        }
    }
    #pragma endscop
}
