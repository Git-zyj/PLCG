/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19503
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19503 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19503
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    var_15 = ((((!(11168780437340775505 ^ var_2))) ? ((((((7277963636368776110 > (arr_3 [14] [i_1]))) && 11105303117256429378)))) : (max((((-(arr_5 [i_2] [i_0])))), ((-2 ? 11168780437340775505 : 10107))))));
                    var_16 = (max(var_16, ((max((max((16705 > 10116), 10116)), (((((var_5 ? 1037595888554605863 : 12181923823007805328)) != var_11))))))));
                    var_17 += ((-(8149706704480925232 + 7277963636368776111)));
                }
            }
        }
    }
    var_18 = (!var_8);
    var_19 = var_14;
    var_20 = var_5;
    #pragma endscop
}
