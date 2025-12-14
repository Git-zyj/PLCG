/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22553
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22553 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22553
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_3;

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {

        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            var_21 = ((-((1801525389917809048 * (5163829725417894278 + 586684327)))));
            arr_5 [i_0] [i_0] [i_0] = (((((!(-31011 >= 5163829725417894278)))) >> ((((~1069367729) && -31026)))));
            arr_6 [i_0] [i_0] [i_0] = (5163829725417894284 && 31010);
            arr_7 [i_0] = min(-31031, ((((-32741 ? 3589436722 : 962115301)) & (1 | -30999))));
        }
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 17;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 17;i_3 += 1)
            {
                {
                    var_22 = ((((((255 * 671605958) ? -4231 : ((45 ? 1835687050 : 134))))) && -1069367718));
                    var_23 = (((12312 ^ 18087581139353461183) ? -546555496 : (((8 | 359162934356090432) & 31030))));
                }
            }
        }
        var_24 &= (((-1069367735 + 2147483647) >> (972355154 - 972355140)));
        arr_14 [i_0] = (((0 / -489654829) * (((56 / -12) / 511))));
        var_25 *= ((((1069367729 ? -22943 : 7435089273825409289)) / (70 < 3774083153)));
    }
    #pragma endscop
}
