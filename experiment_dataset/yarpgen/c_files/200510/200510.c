/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200510
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200510 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200510
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_19 = (max(((min((16462264189162055953 <= 16462264189162055953), (max(128, 52750))))), 1984479884547495663));
                var_20 = ((min(1, -21723)));
                var_21 = (((13971969749452118902 / 1984479884547495659) > ((((min(0, 1984479884547495676))) ? 13868930967611170623 : 21723))));
                arr_4 [i_0 - 1] [i_0 - 1] [i_0] = (max((min((min(-6622117483841117293, 1)), (6622117483841117293 + -6622117483841117293))), ((((((6622117483841117277 ? 137 : -23965))) ? 149 : (((21214 ? -21204 : -21214))))))));
            }
        }
    }
    var_22 = max(0, (((65535 >> (43810 + 21745)))));
    #pragma endscop
}
