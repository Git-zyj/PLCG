/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198795
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198795 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198795
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((((24142 && 65535) || 60103)) || 28857));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    var_16 = (((((min(var_5, 28872)) >= (!9223372036854775807))) || (arr_5 [i_1] [i_1] [i_2])));
                    var_17 = (((((-(-4873050605973413732 & var_6)))) ? ((((7177783309590931031 && 0) <= (-3859706497152339798 >= -64)))) : (((var_10 >= (~9223372036854775797))))));
                    var_18 = (min(var_18, (((~(((28857 ^ 2) ? (~65535) : (~97))))))));
                }
            }
        }
    }
    var_19 = (min(var_19, ((((((-(~var_6)))) && var_14)))));
    #pragma endscop
}
