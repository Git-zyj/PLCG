/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230117
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230117 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230117
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_16 -= (((arr_1 [7]) ? 43 : (((((-3316563162230579558 ? 382771636 : -1073741824))) ? (((-382771637 ? (arr_0 [i_0] [i_0]) : 382771637))) : ((622144102 + (arr_2 [i_0])))))));
        var_17 &= (arr_1 [i_0]);
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        var_18 = ((((arr_2 [i_1]) ? (arr_2 [11]) : (arr_2 [i_1]))));
        var_19 = (((((7803461602731654098 / 382771638) ? (-382771615 * 15711950284797378587) : 2964839352278229283)) == 117));
    }
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 8;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 10;i_3 += 1)
        {
            {
                var_20 -= ((((!(arr_6 [4]))) ? ((((((arr_9 [i_2 + 1] [i_2]) ? (arr_4 [i_3]) : (arr_6 [0])))) ? (!-17847) : (((1 && (arr_7 [i_2 + 1] [9] [i_3])))))) : (((!((((arr_3 [i_3]) ? 1754682281 : 17846))))))));
                var_21 = (arr_2 [i_3]);
                arr_10 [i_2] [i_2] = ((((((((-(arr_7 [i_2] [i_2] [i_2])))) ? 0 : (arr_2 [i_2 + 1])))) ? ((((((arr_2 [i_2]) ? 40036 : -31037))) ? (arr_1 [i_3]) : (arr_3 [i_2 + 1]))) : ((((~-382771619) <= 382771610)))));
            }
        }
    }
    #pragma endscop
}
