/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200887
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200887 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200887
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((((((((var_2 ? 65527 : -1152190293406242587))) ? 0 : (~var_1)))) || 14));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            {
                var_18 = 241;
                var_19 = ((((max(((13134050978724343588 + (arr_2 [i_0] [i_1 + 1] [i_1 - 1]))), (((0 ? 3249829920 : 1)))))) ? ((32 ? 13134050978724343588 : 0)) : ((((-256 == ((588548592544804351 ? 1855709340 : (arr_2 [i_0 - 1] [i_0 + 4] [i_0 - 3])))))))));
                var_20 -= (((((966564673 + ((max(112, (arr_1 [i_0]))))))) ? (((arr_2 [i_0 - 1] [i_0 + 4] [i_1]) + ((-8174980674928548855 ? 1 : 0)))) : (arr_0 [i_1 + 2] [i_1])));
                var_21 = (max((((arr_3 [i_0] [i_0 + 1]) ? ((-8473749455802672946 ? 1 : var_9)) : 88)), (max((arr_2 [i_0 - 1] [i_0 + 4] [i_1 + 2]), ((20 + (arr_3 [i_0] [i_1 + 2])))))));
            }
        }
    }
    var_22 = (min(var_22, ((max(18, -8174980674928548855)))));
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 21;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 21;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 21;i_4 += 1)
            {
                {
                    var_23 -= ((((max(11117194329360100399, 40))) && ((((max(32, 62))) && 14))));
                    var_24 = ((254 / ((((237 ? var_12 : 9073735915756905750)) * (19 * 59)))));
                }
            }
        }
    }
    #pragma endscop
}
