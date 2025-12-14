/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237580
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237580 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237580
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_20 -= (max((((!(!-1900788221)))), ((182770563 ? ((14844 ? -14856 : 2167)) : (~14870)))));
                arr_6 [i_1] [i_1] [i_1] = ((-73 ? ((max(-1627875361, 1664312076))) : (((~1064518987) ^ ((-8132882381873899156 ? -8132882381873899156 : -14856))))));
                arr_7 [i_0] [i_1] = ((~((-8132882381873899156 ? 14856 : 1064518987))));
            }
        }
    }
    var_21 = min(((-((2089288439 ? -14873 : 1064518986)))), ((var_14 ? ((14 ? 0 : 1064518987)) : (28890 + 7340032))));
    var_22 = ((~((var_3 ? ((-8132882381873899136 ? 12366650095470291885 : 0)) : var_7))));
    var_23 = ((~(((!(!-5063))))));
    #pragma endscop
}
