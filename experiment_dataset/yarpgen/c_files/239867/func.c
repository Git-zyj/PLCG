/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239867
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239867 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239867
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
    var_18 = ((/* implicit */long long int) max((var_6), (((/* implicit */unsigned long long int) var_9))));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((((/* implicit */long long int) (+(((/* implicit */int) arr_1 [i_0]))))) - (((var_0) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0]))) : (-645650663335256555LL))))) : (((/* implicit */long long int) 1073741816U))));
        arr_4 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1))))) : (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (1631029437857948284ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))) ? (((/* implicit */unsigned int) (+((~(-1915751695)))))) : (var_5)));
        arr_5 [i_0] [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((((/* implicit */short) (unsigned char)158)), (((short) arr_2 [i_0])))))));
        arr_6 [i_0] [i_0] = ((/* implicit */unsigned char) 1631029437857948316ULL);
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            for (unsigned int i_2 = 2; i_2 < 10; i_2 += 2) 
            {
                {
                    arr_11 [i_0] [i_0] [i_0] [i_0] = (~(((/* implicit */int) arr_9 [i_2] [i_2] [i_0])));
                    /* LoopNest 2 */
                    for (short i_3 = 3; i_3 < 11; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_19 [i_0] [i_2] [i_3] [i_0] = ((/* implicit */unsigned long long int) var_5);
                                var_20 += ((/* implicit */int) (_Bool)1);
                            }
                        } 
                    } 
                    arr_20 [i_0] [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((7906844349437915641ULL), (((/* implicit */unsigned long long int) var_3)))))));
                    /* LoopSeq 2 */
                    for (int i_5 = 1; i_5 < 11; i_5 += 2) 
                    {
                        var_21 = ((/* implicit */unsigned char) ((_Bool) 9272910840538499457ULL));
                        var_22 = ((/* implicit */unsigned short) ((unsigned long long int) ((unsigned short) (~(((/* implicit */int) (unsigned char)158))))));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_6 = 0; i_6 < 12; i_6 += 2) 
                    {
                        var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) arr_15 [i_6] [i_1] [i_0]))));
                        var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) arr_26 [i_2 - 2] [i_2 + 2] [i_2 - 2] [i_2]))));
                        var_25 = ((/* implicit */unsigned char) min((var_25), ((unsigned char)205)));
                    }
                    var_26 = ((/* implicit */short) (!(((/* implicit */_Bool) var_4))));
                }
            } 
        } 
    }
    /* LoopSeq 1 */
    for (signed char i_7 = 3; i_7 < 21; i_7 += 4) 
    {
        var_27 = ((/* implicit */signed char) var_17);
        arr_31 [i_7] [i_7] = ((/* implicit */unsigned short) arr_30 [i_7]);
    }
    var_28 = var_1;
}
