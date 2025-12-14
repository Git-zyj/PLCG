/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192186
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192186 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192186
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_11 = (((46 ? 47 : 3592)));
                var_12 = 19735;
                var_13 = ((~((~(((arr_2 [i_0] [i_1]) ? 171 : 1))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 21;i_2 += 1)
    {
        for (int i_3 = 4; i_3 < 19;i_3 += 1)
        {
            {
                var_14 = ((((max(221, var_8))) || ((((arr_3 [i_3 - 2] [i_3 - 4]) ? (arr_10 [i_3 - 2] [i_3 - 2]) : 1793795606)))));
                var_15 = (!1);
                arr_12 [i_2] [i_3] = (((((arr_10 [i_2] [i_2]) ? (!var_0) : (min((arr_4 [10] [i_3 + 2]), var_4)))) + (((((1 ? 842765989 : 208)) % 4221493753)))));
            }
        }
    }
    #pragma endscop
}
