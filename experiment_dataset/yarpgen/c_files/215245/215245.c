/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215245
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215245 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215245
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = 3464704454;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 17;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_0] [i_0] [i_0] = ((4951914101507664938 ? ((((var_5 ? var_2 : (arr_4 [i_2]))))) : 34562));
                    var_18 = (min(3982206492662155174, (((arr_7 [i_0 - 2] [i_0 + 1]) ? (arr_6 [i_1 - 1] [i_2]) : (0 || 8)))));
                }
            }
        }
    }
    var_19 = (min((-6172720167011841417 == 6172720167011841421), ((-((var_11 ? -1692605876 : 232))))));
    #pragma endscop
}
