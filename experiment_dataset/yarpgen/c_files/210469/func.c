/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210469
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210469 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210469
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    var_19 = ((/* implicit */unsigned char) var_11);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 17; i_2 += 3) 
                {
                    for (signed char i_3 = 2; i_3 < 13; i_3 += 4) 
                    {
                        {
                            arr_13 [i_2] = ((/* implicit */unsigned short) (-((+(((int) 6066093869529790816LL))))));
                            var_20 = ((/* implicit */unsigned short) (unsigned char)166);
                            var_21 &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3649382769U)) ? (var_7) : (((/* implicit */int) arr_4 [i_3 + 4] [i_1]))))) ? (((/* implicit */unsigned int) min((2147483647), (((/* implicit */int) (unsigned char)90))))) : (arr_12 [(unsigned char)3] [(unsigned char)3] [i_2])));
                            var_22 ^= ((/* implicit */unsigned int) min((max((var_4), (((/* implicit */int) var_2)))), (arr_10 [i_3 - 1] [i_3 + 1] [(unsigned short)9] [i_3 - 1] [i_3])));
                        }
                    } 
                } 
                var_23 = ((/* implicit */int) ((signed char) (_Bool)1));
                var_24 = ((/* implicit */unsigned char) ((max((arr_10 [i_0] [i_0] [i_0] [i_0] [i_0]), (((/* implicit */int) ((short) var_12))))) / (((((var_4) - (((/* implicit */int) var_15)))) + ((+(-1646490080)))))));
            }
        } 
    } 
}
