/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191923
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191923 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191923
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
    var_20 = ((/* implicit */int) ((((max((((/* implicit */long long int) var_3)), (-7537348870834465641LL))) < (((/* implicit */long long int) ((((/* implicit */_Bool) var_19)) ? (var_19) : (((/* implicit */int) var_12))))))) && (((/* implicit */_Bool) var_0))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                {
                    var_21 *= ((((/* implicit */int) (short)0)) != (-843684674));
                    var_22 = ((/* implicit */_Bool) min((((/* implicit */int) (!((_Bool)1)))), (((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) var_4))))) ? (((/* implicit */int) var_1)) : ((+(((/* implicit */int) var_8))))))));
                    /* LoopSeq 3 */
                    for (int i_3 = 0; i_3 < 22; i_3 += 2) 
                    {
                        var_23 = ((/* implicit */short) (+((+(var_19)))));
                        arr_10 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */int) (_Bool)0);
                        var_24 = ((/* implicit */signed char) max((((/* implicit */int) ((((/* implicit */int) arr_9 [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1] [i_1 + 1])) < (((/* implicit */int) (_Bool)1))))), (((int) arr_9 [i_1 + 1] [i_1 + 1] [19LL] [i_1 + 1] [i_1 + 1]))));
                    }
                    for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                    {
                        var_25 = ((/* implicit */long long int) min((((/* implicit */int) var_18)), (((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) (short)22421)) : (((/* implicit */int) ((_Bool) arr_4 [i_4] [i_2])))))));
                        arr_13 [i_1 + 1] [(signed char)8] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) 0)) ? (((((/* implicit */_Bool) (unsigned short)1)) ? (((/* implicit */int) var_4)) : (153195131))) : (((((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_2] [i_4 - 1])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_11 [i_1])))))) ^ (((((/* implicit */_Bool) (short)-22421)) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) (unsigned short)65535))))));
                    }
                    /* vectorizable */
                    for (unsigned short i_5 = 1; i_5 < 18; i_5 += 3) 
                    {
                        var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_2 [i_5 + 3] [i_1 + 1])) ? ((~(((/* implicit */int) var_0)))) : (((arr_2 [i_0] [i_1]) + (((/* implicit */int) (signed char)125))))));
                        var_27 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_11)) * (((/* implicit */int) arr_9 [i_0] [i_1 + 1] [(short)0] [i_5 - 1] [i_5]))))) ? (((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (_Bool)1))));
                        /* LoopSeq 1 */
                        for (unsigned short i_6 = 4; i_6 < 20; i_6 += 2) 
                        {
                            arr_20 [i_0] [i_1] [i_5] [i_5] [i_6] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_5 [i_0] [i_0] [i_0])) * (((/* implicit */int) var_3)))))));
                            arr_21 [i_0] [i_1 + 1] [i_1] [i_2] [i_5] [i_6 + 2] [(signed char)18] = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) arr_17 [i_5 + 3] [i_5 + 3] [19] [19])) > (((/* implicit */int) var_10))))) != ((+(var_5)))));
                        }
                    }
                }
            } 
        } 
    } 
}
