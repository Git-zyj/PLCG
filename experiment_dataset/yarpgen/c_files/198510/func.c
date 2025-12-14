/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198510
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198510 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198510
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
    var_16 -= ((/* implicit */_Bool) var_0);
    /* LoopNest 3 */
    for (unsigned short i_0 = 1; i_0 < 13; i_0 += 3) 
    {
        for (unsigned short i_1 = 1; i_1 < 11; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 14; i_2 += 4) 
            {
                {
                    var_17 = ((/* implicit */int) (unsigned char)191);
                    var_18 -= ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned int) (unsigned char)65))) ? (((/* implicit */int) (unsigned char)64)) : (((/* implicit */int) (short)27424))));
                    arr_8 [i_0] [i_0] [(unsigned short)4] = ((/* implicit */unsigned int) arr_0 [i_0]);
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (signed char i_4 = 1; i_4 < 13; i_4 += 3) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned char) 4222308726U);
                                var_20 += ((/* implicit */unsigned short) 848463879U);
                                arr_14 [i_0] [i_0] = arr_1 [i_0];
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 0; i_5 < 14; i_5 += 3) 
                    {
                        for (short i_6 = 2; i_6 < 11; i_6 += 3) 
                        {
                            {
                                arr_20 [i_0] [i_5] [(_Bool)0] [i_1] [i_0] = ((/* implicit */unsigned long long int) (+(-5936427835618475600LL)));
                                var_21 = ((unsigned short) (-(arr_6 [i_6] [9] [i_2] [1LL])));
                                var_22 -= ((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)191))));
                                var_23 = ((/* implicit */_Bool) ((((/* implicit */int) (!(((((/* implicit */_Bool) (unsigned short)65525)) || (((/* implicit */_Bool) arr_13 [i_0 + 1] [i_5] [i_2] [i_5] [i_6] [i_0 + 1]))))))) + (((/* implicit */int) (!(((/* implicit */_Bool) 72658544U)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
