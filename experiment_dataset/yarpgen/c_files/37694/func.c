/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37694
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37694 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37694
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
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 11; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_17 = ((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)31191)))))));
                                arr_12 [i_1] = ((/* implicit */_Bool) arr_6 [i_4] [(unsigned char)10] [i_0] [i_3]);
                            }
                        } 
                    } 
                    arr_13 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)31183)) ? (((/* implicit */int) ((((/* implicit */int) arr_3 [i_0] [i_1] [i_2])) < (((/* implicit */int) (unsigned short)31214))))) : ((~(((/* implicit */int) ((unsigned short) arr_2 [i_0] [(_Bool)1] [i_2])))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_5 = 0; i_5 < 11; i_5 += 2) 
    {
        for (short i_6 = 0; i_6 < 11; i_6 += 2) 
        {
            {
                var_18 = ((/* implicit */signed char) -1179608620);
                arr_18 [i_5] [i_6] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((-1179608622) + (2147483647))) >> (((1179608622) - (1179608610)))))) ? (((/* implicit */long long int) ((arr_3 [i_5] [i_5] [i_5]) ? (((/* implicit */int) arr_1 [i_6])) : (((/* implicit */int) arr_1 [i_5]))))) : (var_16)));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned short) (-(min(((((_Bool)1) ? (((/* implicit */int) (short)-626)) : (((/* implicit */int) (unsigned short)31183)))), (((/* implicit */int) (!(((/* implicit */_Bool) -1179608634)))))))));
}
