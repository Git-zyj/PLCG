/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47097
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47097 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47097
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_14 = (((((45295 >= -127) + (17592186042368 >> 61))) + (max(64, ((61 ? 17592186042368 : -314461848))))));
                var_15 += (((max(46369, ((40918 ? -125 : 861988520)))) & ((((-22358 + 2147483647) << (((((min(8092774363283734110, -127)) + 157)) - 30)))))));
                arr_6 [i_1] [i_0] [2] = (max((0 | 2853717407), (9535 - 9460508729460515868)));
            }
        }
    }
    var_16 -= ((781060872734543975 - (((4294967295 - 3432978776) ? 141 : 8986235344249035747))));
    var_17 = (((((min(-1291391436, 1)))) ? (((((~0) < 3483930914)))) : ((((max(18446726481523509248, 15243682119757370310))) ? (max(10, 2853717407)) : (min(4043023319, 24700))))));
    var_18 += ((((((45295 / (-127 - 1)))) ? -3432978775 : (((61 ? 0 : 16383))))));
    #pragma endscop
}
