/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226845
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226845 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226845
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 |= ((~((((max(64, 0))) / 65535))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_19 = ((217531977 ? 4077435314 : 4294967295));
                    var_20 = (min(var_20, (((~(((((~(arr_5 [i_0] [i_1] [i_2])))) ? 76 : ((var_17 ? 9302228580770729235 : 217532000)))))))));
                }
            }
        }
    }
    var_21 = (min(var_14, 9144515492938822373));
    #pragma endscop
}
