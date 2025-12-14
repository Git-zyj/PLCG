/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212995
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212995 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212995
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_16 = (min(((15960858574912517682 && ((max(2485885498797033934, 2485885498797033924))))), ((21 || ((min(246, 15960858574912517659)))))));
                var_17 = 110;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 24;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 1;i_3 += 1)
        {
            {
                arr_11 [i_3] [i_2] = 15960858574912517682;
                var_18 = (max(((max(-9223372036854775785, 1171763873))), (min(-1171763874, 18446744073709551615))));
                arr_12 [i_3] = (max((min(2485885498797033934, -68)), (1171763865 / 37)));
                var_19 = ((((max(1209248298905946969, 2171147903))) && 81));
            }
        }
    }
    #pragma endscop
}
