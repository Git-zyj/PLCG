/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232268
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232268 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232268
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
    var_13 = ((/* implicit */unsigned char) var_11);
    /* LoopNest 2 */
    for (long long int i_0 = 2; i_0 < 15; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (long long int i_3 = 0; i_3 < 16; i_3 += 4) 
                    {
                        for (int i_4 = 3; i_4 < 14; i_4 += 3) 
                        {
                            {
                                var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) (signed char)7))));
                                var_15 = ((/* implicit */_Bool) (-(((/* implicit */int) max((arr_12 [i_4 - 2] [i_0 - 1]), (arr_12 [i_4 - 2] [i_0 - 1]))))));
                                arr_14 [i_0] [i_0 - 2] [i_1] [i_0 - 2] [9ULL] [i_4] = ((/* implicit */short) 32767U);
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_5 = 0; i_5 < 16; i_5 += 3) 
                {
                    for (unsigned short i_6 = 0; i_6 < 16; i_6 += 1) 
                    {
                        {
                            var_16 = ((/* implicit */unsigned short) max((7187601343368758535LL), (((/* implicit */long long int) (+(arr_9 [i_0] [i_0] [i_0] [i_0] [i_0 - 1]))))));
                            var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_10)))))));
                        }
                    } 
                } 
                var_18 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max(((~(var_6))), (10U))))));
                /* LoopNest 2 */
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    for (unsigned int i_8 = 0; i_8 < 16; i_8 += 4) 
                    {
                        {
                            arr_24 [i_0 - 2] [i_1] [(unsigned char)9] [i_8] [i_7] [i_8] = ((/* implicit */unsigned int) (-(((/* implicit */int) var_4))));
                            var_19 |= ((/* implicit */signed char) (+((~(min((3099963852896484578LL), (((/* implicit */long long int) (_Bool)1))))))));
                            var_20 = ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_1)))) : ((~(min((((/* implicit */unsigned long long int) arr_23 [12U] [i_1] [i_7] [i_7] [i_8] [(unsigned char)6])), (arr_20 [i_0] [i_0] [i_7]))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (((var_2) ^ (((/* implicit */long long int) (+(((/* implicit */int) var_0))))))) : (((long long int) var_8))));
    var_22 = ((/* implicit */unsigned int) var_0);
}
