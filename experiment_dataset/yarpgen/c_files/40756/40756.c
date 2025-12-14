/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40756
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40756 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40756
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((((((((4076580083639398240 ? 0 : 255))) ? 1534280158100163864 : -1534280158100163861))) ? ((55461 ? 22 : ((-239328255 ? -239328234 : 239328233)))) : (((((-1 ? 245 : 14162341229408101256))) ? ((1172965051050469906 ? 110 : 55461)) : (~6620)))));
    var_16 = ((1 ? ((((!(((-239328255 ? 750950598 : 27134))))))) : 2710847452));
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 17;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_13 [i_2] [14] [0] [1] = ((-((-((10097 ? 21611 : 31789))))));
                                var_17 = (max(var_17, (~-1534280158100163864)));
                            }
                        }
                    }
                    var_18 &= 6098424444264434042;
                }
            }
        }
    }
    #pragma endscop
}
