/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42888
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42888 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42888
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max((min((max(var_5, -15)), (100806807897567051 < -1))), (var_0 <= var_12)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_17 |= (arr_4 [i_0] [i_1] [i_2]);
                    var_18 = (!2670);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_19 = ((-8637887683875162839 ? 1755620749 : -2674));
                                var_20 = ((((((((255 ? 1189522049 : 5175675311460871622))) && (arr_12 [i_0] [i_1] [i_2])))) > (((!((((arr_5 [i_4]) ? var_0 : (arr_2 [i_4] [i_3] [i_1])))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_21 = ((((!(((var_3 ? var_0 : var_0))))) ? var_4 : (!var_2)));
    var_22 = (((((13170 ? var_2 : var_13))) ? var_7 : (!var_15)));
    #pragma endscop
}
