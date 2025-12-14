/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32399
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32399 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32399
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((((max(var_10, var_12))) ? -1728882029637798045 : ((max(((var_1 ? -1171562685 : 2983525952)), ((min(-32, 127))))))));
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_15 = (min((min(((1311441348 | (arr_0 [i_1]))), (((!(arr_5 [i_0] [i_1] [i_0])))))), var_5));
                    var_16 = (max(var_16, (max(((min(2983525952, (!var_9)))), ((-190528019 ? -4536152010844015844 : (~2983525946)))))));
                    var_17 = var_7;
                }
            }
        }
    }
    var_18 = (min((~var_6), (var_8 != var_8)));
    #pragma endscop
}
