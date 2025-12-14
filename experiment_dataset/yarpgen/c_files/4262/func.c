/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4262
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4262 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4262
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
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 12; i_0 += 3) 
    {
        for (int i_1 = 2; i_1 < 13; i_1 += 4) 
        {
            {
                var_12 = ((/* implicit */int) (unsigned char)85);
                var_13 += ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_1 - 2] [i_1]))))) <= ((+(((/* implicit */int) (unsigned char)75))))));
                var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_2 [i_0] [i_0] [10LL])) ? (((/* implicit */int) arr_2 [i_0 + 2] [i_0 - 1] [7])) : (min(((~(((/* implicit */int) arr_3 [i_1] [i_0])))), ((+(((/* implicit */int) arr_0 [i_0]))))))));
                arr_4 [i_0] = ((/* implicit */short) ((long long int) min((arr_2 [i_0 + 2] [i_1] [i_1 - 2]), (arr_2 [i_0 - 1] [i_0] [i_1]))));
                /* LoopNest 2 */
                for (unsigned char i_2 = 2; i_2 < 13; i_2 += 4) 
                {
                    for (short i_3 = 0; i_3 < 14; i_3 += 4) 
                    {
                        {
                            var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (((-(((/* implicit */int) (short)4724)))) * (((((/* implicit */int) arr_3 [i_0] [i_3])) % (((/* implicit */int) var_8))))))) ? (((((/* implicit */int) min((arr_2 [i_3] [i_0 + 1] [i_0 + 1]), (((/* implicit */short) (unsigned char)87))))) % (((((/* implicit */_Bool) (short)-10230)) ? (((/* implicit */int) arr_2 [i_0 - 1] [i_0 - 1] [i_3])) : (((/* implicit */int) (unsigned char)85)))))) : (((/* implicit */int) arr_8 [i_2])))))));
                            arr_10 [i_3] [i_3] [i_2] [(unsigned char)8] = ((((/* implicit */int) (unsigned char)86)) + (((/* implicit */int) min((arr_2 [i_3] [i_3] [i_2 - 1]), (((/* implicit */short) (unsigned char)150))))));
                            arr_11 [i_0 + 2] = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)1)) ? (7403391435400760876LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)161)))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-10240)) ? (((/* implicit */int) (short)-10685)) : (((/* implicit */int) (unsigned char)4)))))))) + ((-(((/* implicit */int) min((arr_6 [i_0 + 2] [i_1]), (var_5))))))));
                            arr_12 [i_0] [i_0] [i_0] [(short)4] [i_2] [i_3] = ((/* implicit */unsigned char) ((arr_5 [i_0] [i_0] [i_0] [i_0]) == (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */short) arr_1 [i_0 - 1] [i_2 - 1])), (max((arr_7 [12LL] [12LL] [i_2] [i_2]), ((short)-10675)))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned char) (-(max((((/* implicit */int) var_4)), (min((((/* implicit */int) var_7)), (-1180311594)))))));
    var_17 = var_4;
    var_18 *= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (-7403391435400760894LL))) : (((/* implicit */long long int) ((/* implicit */int) min(((unsigned char)85), ((unsigned char)165))))))) / ((-(-366406443542237445LL)))));
}
