/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191289
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191289 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191289
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_18 = (max((((!8190005024919661945) & (arr_4 [i_0] [i_1]))), var_7));
                var_19 = (max(var_19, ((((4334554594113140301 - var_2) >= ((((max(3801954684593385219, var_5))) ? ((var_16 ? var_13 : 14644789389116166397)) : ((max(var_6, 1998959215))))))))));
            }
        }
    }
    var_20 = (min(var_20, (((((((((3801954684593385235 >> (var_10 + 22401)))) ? ((min(var_4, var_5))) : 9217002684959843678))) ? ((((var_2 | var_12) ^ var_10))) : ((((var_4 ? var_14 : var_4)) * (var_11 / var_17))))))));

    for (int i_2 = 0; i_2 < 21;i_2 += 1)
    {
        arr_9 [i_2] = ((!(!var_4)));
        arr_10 [i_2] = ((!((var_7 && (arr_5 [i_2])))));
    }
    var_21 &= ((((((138 + 1998959208) * (-66 == var_0)))) ? var_8 : (~245)));
    #pragma endscop
}
