/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230886
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230886 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230886
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 18; i_2 += 4) 
                {
                    for (unsigned char i_3 = 0; i_3 < 18; i_3 += 4) 
                    {
                        {
                            var_20 *= var_17;
                            arr_11 [i_0] [i_0] [i_1] [i_3] = ((/* implicit */unsigned int) ((var_6) <= (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_10 [i_1 - 1] [i_1 - 1]) <= (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))))));
                        }
                    } 
                } 
                arr_12 [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) (unsigned short)11))))) ? ((((_Bool)1) ? (((/* implicit */int) var_18)) : (((/* implicit */int) arr_5 [i_1 - 1] [i_1 - 1] [i_1 - 1])))) : (((/* implicit */int) (signed char)89))));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned int) min((((/* implicit */short) (!((!(((/* implicit */_Bool) 2379706116291839462LL))))))), (var_3)));
    /* LoopNest 3 */
    for (unsigned short i_4 = 1; i_4 < 15; i_4 += 3) 
    {
        for (unsigned long long int i_5 = 0; i_5 < 18; i_5 += 1) 
        {
            for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
            {
                {
                    arr_20 [i_4] [i_4] [i_4] = (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) / (arr_14 [i_4 - 1])))));
                    arr_21 [i_4] [i_4] = ((/* implicit */unsigned short) arr_14 [i_4 + 3]);
                    /* LoopNest 2 */
                    for (signed char i_7 = 0; i_7 < 18; i_7 += 2) 
                    {
                        for (int i_8 = 0; i_8 < 18; i_8 += 3) 
                        {
                            {
                                arr_27 [i_7] [(unsigned short)6] [i_7] [i_7] [i_8] |= ((/* implicit */_Bool) ((((/* implicit */int) ((signed char) ((((/* implicit */_Bool) 2379706116291839491LL)) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) (_Bool)1)))))) - ((+((+(((/* implicit */int) (_Bool)1))))))));
                                var_22 ^= ((((((/* implicit */int) arr_26 [i_4])) / (((/* implicit */int) var_4)))) - (var_16));
                                var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) var_3))));
                                var_24 = ((/* implicit */unsigned long long int) var_8);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_25 = var_8;
}
