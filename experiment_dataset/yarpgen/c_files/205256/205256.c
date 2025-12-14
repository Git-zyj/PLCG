/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205256
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205256 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205256
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max((max(15166805983280623205, ((max(var_10, var_0))))), (max(((var_0 ? 108 : 12559928884418556500)), 60365))));
    var_12 -= ((((min((5653919286387155814 % 17710), 15))) ? 3279938090428928410 : ((max(((1 ? 5653919286387155803 : var_2)), var_6)))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                arr_5 [i_0 + 1] [i_0 + 1] [i_1] = (min(((((arr_3 [i_0 - 1] [i_0 - 1] [i_1]) ? ((-5653919286387155814 - (arr_3 [i_1] [i_1] [i_1]))) : 1254835027))), ((15166805983280623203 ? ((44775 ? 13431084072597212920 : (arr_3 [i_0] [i_0] [i_1]))) : 620441402))));
                var_13 = (min(((15166805983280623212 ? 7255951110532907424 : 3279938090428928411)), (20659 % 65535)));
                var_14 ^= (max(14, (max((min(-620441403, 5653919286387155803)), ((((arr_1 [1]) > 20672)))))));
                arr_6 [i_1] = (min((((((15166805983280623196 << (-27494 + 27519)))) ? ((((((arr_1 [i_0]) + 2147483647)) << (4246026523 - 4246026523)))) : ((-36 ? 149 : -5270173110449318559)))), (((((~(arr_0 [20] [i_1]))) * (var_5 / -1830784672))))));
            }
        }
    }
    var_15 *= 15166805983280623204;
    #pragma endscop
}
