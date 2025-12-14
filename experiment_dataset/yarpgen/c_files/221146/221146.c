/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221146
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221146 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221146
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((-var_8 == (((!(~2490051047155765197))))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 19;i_2 += 1)
            {
                {

                    for (int i_3 = 1; i_3 < 17;i_3 += 1)
                    {
                        var_11 = (max(var_11, 2490051047155765197));
                        var_12 = ((!(!-var_6)));
                    }
                    var_13 = (max(15956693026553786413, (((((max(3974766126, 6699561814841285327))) ? ((max(var_4, (arr_8 [i_1] [i_0] [i_0] [i_1] [i_1] [i_2 - 1])))) : 2490051047155765201)))));
                }
            }
        }
    }
    #pragma endscop
}
