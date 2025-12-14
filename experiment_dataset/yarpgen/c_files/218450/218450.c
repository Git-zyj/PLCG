/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218450
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218450 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218450
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((((var_13 ? var_1 : var_9)))) || var_14);
    var_21 = (min(var_21, var_0));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_22 = (max(((((max(-32765, 4294967295)) <= (((18446744073709551615 ? 49598 : (arr_2 [i_2] [i_1] [6]))))))), ((((((arr_4 [i_2] [i_2]) & (arr_5 [i_0])))) ? (17573212453608789868 == -5166737644609320232) : (arr_3 [i_0] [i_2] [0])))));
                    var_23 *= (((((((7 ? 8372224 : (arr_3 [i_0] [i_0] [i_2])))) ? (max((arr_0 [i_2] [3]), (arr_3 [i_0] [i_2] [i_2]))) : (((max((arr_5 [i_2]), (arr_2 [i_0] [i_0] [i_2]))))))) == (((-(arr_4 [i_0] [i_1]))))));
                    var_24 = ((((max(27021597764222976, 9104))) ? var_8 : (((-(arr_6 [i_2] [4]))))));
                }
            }
        }
    }
    #pragma endscop
}
