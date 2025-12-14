/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36055
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36055 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36055
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 15;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] = (max((min(9790483778684677283, 1567499356)), (((18446744073709551615 ? 8037569321219276052 : 33531)))));
                arr_6 [i_1] = (min((((-77 ? 498341762 : -77))), 9790483778684677304));
                var_12 = (min(var_12, 9790483778684677296));
                arr_7 [i_1] [i_1] = (min(((max(41056, ((-24 ? 2156541926 : 15298))))), (((6091 - 6091) ? ((4040906381206809355 ? 8656260295024874339 : 11)) : ((9790483778684677277 << (-6 + 35)))))));
                arr_8 [i_0] [i_1] = (((((498341739 << (3796625534 - 3796625515)))) ? 9790483778684677288 : 57433));
            }
        }
    }
    var_13 = max((((max(0, 9790483778684677296)) ^ (min(7000664610802991629, 2911013012)))), ((max(1060359487, 8656260295024874333))));
    #pragma endscop
}
