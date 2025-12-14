/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26640
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26640 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26640
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 20;i_2 += 1)
            {
                {
                    var_17 = ((min(4459107273629227637, var_10)));
                    arr_7 [i_0] [i_2] = min(7369464826777985949, 7491088592688389378);
                }
            }
        }
    }
    var_18 *= (!var_16);
    /* LoopNest 2 */
    for (int i_3 = 2; i_3 < 17;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 19;i_4 += 1)
        {
            {
                var_19 = ((((((arr_6 [i_3 + 1]) ? 11077279246931565667 : (arr_10 [i_3]))) % -7369464826777985949)) >> (((((arr_12 [i_3 - 2] [i_3 - 2]) + 0)) + 4539889727822911761)));
                var_20 -= (((arr_1 [i_3 + 1]) ? ((var_2 ? 510154018249412223 : 962072674304)) : 11077279246931565668));
                var_21 = (max(var_21, (((((arr_4 [i_3 + 1]) && -2335804047944324878))))));
            }
        }
    }
    #pragma endscop
}
