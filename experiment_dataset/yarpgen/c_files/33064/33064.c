/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33064
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33064 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33064
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    var_16 &= max(((((max(53281, 2643683207307339120))) ? ((var_1 ? var_12 : 15803060866402212495)) : 163612985564261267)), (max(((var_11 ? var_0 : 13032882117271992478)), 9223372036854775799)));
                    var_17 = ((((13032882117271992478 >> (((arr_5 [i_2 - 1] [i_1 + 2] [i_0 - 2] [i_0]) - 1755406426344886760))))) ? (max((arr_5 [i_2 - 1] [i_1 - 4] [i_0 - 2] [i_0]), (arr_4 [i_1 - 1] [i_0 - 1] [i_0]))) : (~-8302775136316481587));
                    var_18 = ((-8904150459887816039 ? (min((max(5413861956437559116, 1)), 5413861956437559137)) : (((~(arr_4 [i_0] [i_1] [i_0]))))));
                }
            }
        }
    }
    var_19 = ((2783886548503048240 ? (var_15 - var_11) : (min((min(var_11, 16624)), -var_15))));
    #pragma endscop
}
