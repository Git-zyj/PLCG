/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227958
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227958 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227958
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
    var_19 -= ((/* implicit */unsigned long long int) var_17);
    var_20 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)63226)) * (((/* implicit */int) (_Bool)0))));
    var_21 = ((/* implicit */signed char) var_8);
    /* LoopNest 3 */
    for (unsigned char i_0 = 2; i_0 < 18; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 20; i_2 += 4) 
            {
                {
                    arr_9 [i_2] [(unsigned short)5] [i_1] [i_0] = ((/* implicit */unsigned long long int) (+(2131358166696138369LL)));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 1; i_4 < 19; i_4 += 2) 
                        {
                            {
                                var_22 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) (~(((/* implicit */int) arr_4 [i_1]))))) ? (((/* implicit */int) var_0)) : (((((/* implicit */int) var_4)) | (((/* implicit */int) var_0))))))));
                                var_23 |= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((((/* implicit */int) arr_10 [i_0] [i_0])) > (((/* implicit */int) arr_7 [i_0] [i_1] [i_2] [4])))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-12)) ? (((/* implicit */int) arr_5 [i_4])) : (((/* implicit */int) (short)-10494))))) : (var_1))))));
                                var_24 = ((/* implicit */unsigned int) max((var_24), (((/* implicit */unsigned int) 2131358166696138369LL))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (long long int i_6 = 0; i_6 < 20; i_6 += 1) 
                        {
                            {
                                var_25 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_13 [9LL] [i_2] [i_5] [i_6])) ? (((/* implicit */int) (short)-22202)) : (((/* implicit */int) (signed char)8))));
                                var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_12)) + (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) arr_13 [i_0] [i_2] [i_5] [i_6])) ? (((/* implicit */int) (signed char)-8)) : (((/* implicit */int) var_5))))))));
                                var_27 = ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_19 [i_5] [i_1])) != (((/* implicit */int) arr_19 [i_5] [i_1])))))) & (((var_8) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_5] [i_6]))))));
                            }
                        } 
                    } 
                    arr_21 [i_0] [i_2] = ((/* implicit */signed char) (+(((((/* implicit */_Bool) (-(arr_0 [i_0])))) ? ((~(((/* implicit */int) var_11)))) : (((/* implicit */int) (_Bool)0))))));
                }
            } 
        } 
    } 
}
