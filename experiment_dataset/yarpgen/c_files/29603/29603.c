/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29603
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29603 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29603
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((((!(var_3 <= 7243791243798555661)))) <= (((var_4 > (var_0 + var_5))))));
    var_13 &= (((~var_11) - var_6));
    var_14 = ((((!(!7243791243798555638)))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] [i_1] = ((((((!-7243791243798555662) && (~733513704)))) - (((~65535) * (!733513708)))));
                var_15 = (min(var_15, (((-(((((31 < (arr_3 [i_0]))) || ((((arr_3 [2]) & 1)))))))))));
                var_16 = (max(var_16, (((~((-1 % (-733513704 / var_1))))))));
            }
        }
    }
    #pragma endscop
}
