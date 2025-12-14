/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24615
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24615 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24615
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_16 = (max(var_16, ((max(((15214514247027616550 ? ((6341736962707411661 ? 3292512723 : 4294967295)) : 226)), ((((((6341736962707411661 ? 31 : 1002454590))) > ((-1425244101236222469 ? 6351324802264202934 : 255))))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_17 = (min((((178 ? -22 : 3292512723))), (((((31 ? 0 : 17089268886350124505))) ? 15886917607183645953 : 135500758))));
                                var_18 = ((((((!((min(0, 11941991616741238732))))))) ^ (((1 || 26) ? 18446744073709551610 : (((max(2670, 1))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 17;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 17;i_6 += 1)
        {
            {
                var_19 = (max(var_19, ((max(((((!135500758) > -227))), (((36086 && -2147483618) >> (13611577227341092886 - 13611577227341092868))))))));
                arr_19 [i_5] = (min((min(13611577227341092886, 457741295)), (max(22042, ((138 ? 31 : 9196213716327353837))))));
                arr_20 [i_5] = ((((max(-88, 18446744073709551615))) ? (!0) : ((((((0 ? -12061 : 9144755135479805273))) > (max(22, 496)))))));
            }
        }
    }
    #pragma endscop
}
