/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249786
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249786 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249786
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_10 += (min(((623399529690253631 ? 17823344544019297988 : 17823344544019297985)), (((1 ? 32767 : (-32767 - 1))))));
                var_11 = 140;
                var_12 = ((-(((!1) ? (~30063) : (-32767 - 1)))));
            }
        }
    }
    var_13 += (min(-var_9, (((!((min(768273402, 623399529690253647))))))));
    var_14 = ((((((max(1, 234))))) ? var_2 : (((((45453 ? 168 : -55)))))));
    var_15 = 11675;
    #pragma endscop
}
