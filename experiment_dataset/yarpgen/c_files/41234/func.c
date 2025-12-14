/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41234
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41234 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41234
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
    var_20 = ((/* implicit */unsigned int) var_19);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (unsigned int i_1 = 4; i_1 < 9; i_1 += 3) 
        {
            {
                var_21 = ((/* implicit */signed char) (+((~((+(-173802087)))))));
                /* LoopSeq 1 */
                for (unsigned int i_2 = 2; i_2 < 11; i_2 += 3) 
                {
                    var_22 = ((/* implicit */signed char) (+((+(((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))))));
                    var_23 = (~((-((+(var_7))))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 3; i_3 < 11; i_3 += 4) 
                    {
                        for (long long int i_4 = 2; i_4 < 11; i_4 += 4) 
                        {
                            {
                                var_24 &= ((/* implicit */unsigned int) (~(((/* implicit */int) arr_10 [i_0] [3LL] [i_0] [i_0] [i_0] [i_0]))));
                                arr_14 [i_1] [i_1] [i_2 - 2] [(short)9] [(short)8] [(short)9] [(short)9] = ((/* implicit */signed char) var_1);
                            }
                        } 
                    } 
                    var_25 -= ((/* implicit */int) (!(((/* implicit */_Bool) var_16))));
                }
                var_26 = ((/* implicit */signed char) (+(((((/* implicit */int) (!(((/* implicit */_Bool) var_3))))) << (((((/* implicit */int) var_14)) - (46739)))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_5 = 1; i_5 < 17; i_5 += 4) 
    {
        for (unsigned char i_6 = 4; i_6 < 17; i_6 += 1) 
        {
            {
                var_27 = ((/* implicit */signed char) (+(203767504U)));
                var_28 = (+(((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))) % (var_12))));
                arr_20 [i_5] [i_5] = var_15;
                arr_21 [11U] [i_5] = ((/* implicit */unsigned int) (+((+(173802069)))));
            }
        } 
    } 
    var_29 = var_6;
    var_30 = var_4;
}
