/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45750
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45750 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45750
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    arr_9 [9] [i_1] = max(0, (((5425991893551282900 && ((min(13020752180158268715, 2282204012)))))));
                    var_12 = (max(((((((-2147483647 - 1) ? 2147483647 : -1618876489))) && (((-8013 ? 131 : 0))))), ((0 >= ((2282204012 ? 0 : 218169059))))));
                    var_13 = (min(32767, 15755150751080855734));
                    var_14 = (((((234086722 ? 1634914006 : 3981460749))) ? ((((((1634914021 ? -2526274023749432179 : -1618876480))) ? (((3841382050 ? 1730335605 : 7))) : (max(3058025881, 0))))) : (((1629226275 * 15755150751080855724) ? 18446744073709551615 : (((-21 ? 6758388622440124882 : 21877)))))));
                }
            }
        }
    }
    var_15 = (max(4166545723044298015, 0));
    #pragma endscop
}
