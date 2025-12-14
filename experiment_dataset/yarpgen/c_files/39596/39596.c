/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39596
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39596 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39596
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (5420385546346149876 == ((min(var_10, ((var_0 >> (5420385546346149875 - 5420385546346149855)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_12 = (arr_4 [i_0]);
                arr_6 [i_0] [i_1] = ((((((var_8 ? 32672 : var_10)))) < (((arr_5 [i_0] [7] [9]) >> (4227838259935937242 - 4227838259935937193)))));
                arr_7 [i_1] [i_1] [i_0] = 1298005343;
            }
        }
    }
    #pragma endscop
}
