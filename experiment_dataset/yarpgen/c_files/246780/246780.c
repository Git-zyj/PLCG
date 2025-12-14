/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246780
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246780 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246780
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 ^= ((-1772571326 ? ((-((450195946 ? -3281833171402162584 : -1041796455)))) : var_0));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_14 = (min(var_14, ((((arr_4 [i_1] [i_0]) & (9 % 4025480645119581031))))));
                var_15 = -3281833171402162591;
                arr_7 [i_0] [i_1] [i_0] = (((((~(arr_1 [i_1])))) ? ((((((3298534883328 ? 9 : 4294967292))) || (var_12 && 3281833171402162582)))) : (((((min(-1729541492, (arr_6 [i_1] [i_0] [i_0])))) && (((1 ? -2074 : var_8))))))));
                var_16 = (max((!1140513729), (8386298136483057104 % -2109723517)));
                var_17 = ((!(((arr_5 [i_0] [i_0] [i_1]) != (arr_1 [i_0])))));
            }
        }
    }
    #pragma endscop
}
