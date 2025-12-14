/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195665
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195665 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195665
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 -= ((2592098081622372881 <= ((max((var_7 || -2592098081622372882), var_2)))));

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_18 *= min(((((((arr_0 [i_0]) & (-9223372036854775807 - 1))) <= (var_9 != var_0)))), (max(var_14, (min(54, 1056653100824071477)))));
        var_19 += (((min(((-169285468 ? 787104477785163332 : 201)), ((-(arr_1 [i_0] [i_0]))))) <= (((((((19068 ? 29821 : var_8))) && ((min(-2592098081622372882, 11299)))))))));
        var_20 = (((((~156) ? (~156) : (var_16 & var_0)))) ? ((-(arr_1 [i_0] [i_0]))) : ((~(min((arr_1 [i_0] [i_0]), -29821)))));
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    var_21 = (((max(var_13, (arr_5 [i_0] [i_0] [i_1 + 1] [2]))) * (((min((arr_5 [i_0] [i_0] [i_1 - 1] [15]), -19068))))));
                    arr_7 [i_0] [i_2] [i_0] [i_2] = ((((min((min(217, var_4)), (min(2, 217))))) ? -19069 : ((((min(-3198542130876707439, 29821))) ? (((arr_1 [i_0] [i_1]) ^ 202)) : (((min((arr_5 [i_2] [i_1] [i_1] [i_0]), var_7))))))));
                }
            }
        }
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 18;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 18;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 18;i_5 += 1)
                {
                    {
                        arr_15 [i_0] [i_0] [i_4] [i_5] [i_0] = (arr_10 [i_3] [i_4] [i_5]);
                        var_22 = (var_13 / -var_3);
                    }
                }
            }
        }
    }
    var_23 = ((((((min(19072, var_13))) ? var_3 : (-5956660646580368668 / var_14)))) ? -2592098081622372882 : (((var_12 ? var_14 : (!var_7)))));
    var_24 = max(var_4, var_6);
    var_25 = ((((((((-1261808131786431741 ? var_4 : var_1))) ? ((var_7 ? -308672394651645068 : 9223372036854775807)) : (((var_3 ? var_3 : 55)))))) ? ((11315 ? var_12 : (max(116, var_8)))) : ((((var_8 ? 30307 : 249)) & (18 || var_16)))));
    #pragma endscop
}
