/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211767
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211767 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211767
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(var_18, (1879048192 & 16252928)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_7 [1] [i_1] = -5907172120049177407;
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 14;i_3 += 1)
                    {
                        {
                            arr_13 [i_0] [i_0] [i_2] [i_1] [i_1] &= ((18446743798831644672 ? -6620126012076908277 : -7301141574524917789));
                            var_19 = min((arr_8 [i_2] [i_1] [i_2]), (7360695580179723147 <= 15502426346144187031));
                        }
                    }
                }
                arr_14 [i_0] [i_1] = (min(((1 ? 18446743798831644672 : 868)), var_1));
            }
        }
    }
    #pragma endscop
}
