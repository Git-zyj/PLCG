/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21230
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21230 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21230
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = 12301423393660523443;
    var_17 -= var_14;
    var_18 = ((((-56 && (56 + var_14))) ? var_7 : var_6));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 6;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            {
                var_19 = (((arr_2 [i_0 + 3]) ? (min((arr_2 [i_0 + 1]), var_7)) : (((max((arr_2 [i_0 + 4]), (arr_2 [i_0 - 1])))))));

                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    var_20 = ((~(min((var_9 + -403789353), (403789353 + 160)))));
                    arr_8 [i_2] = ((((arr_2 [i_0 + 3]) ? -444504464 : 1837891637325744995)));
                }
                for (int i_3 = 0; i_3 < 10;i_3 += 1)
                {
                    arr_11 [1] [i_3] [i_1] [i_3] = (((((-(arr_3 [i_0 + 4])))) ? ((var_2 ? -899664256 : var_7)) : (2422236737245072256 + 0)));
                    arr_12 [i_3] = (((((!-56) & -403789353)) ^ (max(-471166046, (arr_7 [i_3] [i_1] [i_3])))));
                }
            }
        }
    }
    #pragma endscop
}
