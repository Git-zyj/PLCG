/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196449
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196449 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196449
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
    var_20 = ((/* implicit */unsigned int) var_5);
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (short i_1 = 4; i_1 < 15; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 16; i_2 += 2) 
            {
                {
                    var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)255)) || (((/* implicit */_Bool) arr_1 [5]))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 16; i_3 += 3) 
                    {
                        for (long long int i_4 = 4; i_4 < 15; i_4 += 1) 
                        {
                            {
                                arr_12 [i_2] [i_3] [i_2] [i_1] [i_2] &= ((/* implicit */_Bool) (signed char)12);
                                var_22 ^= ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_0))))) || (((/* implicit */_Bool) var_11))))) / (((((/* implicit */int) (unsigned char)244)) >> (((/* implicit */int) min((((/* implicit */signed char) (_Bool)0)), ((signed char)5))))))));
                                var_23 = ((/* implicit */int) min((var_23), (((/* implicit */int) ((((/* implicit */_Bool) 5066371313112592090ULL)) ? ((((!(((/* implicit */_Bool) var_4)))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)5))))) : (((((/* implicit */_Bool) 2362166278U)) ? (((/* implicit */unsigned int) 0)) : (1932800991U))))) : (1932801026U))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 0; i_5 < 16; i_5 += 4) 
                    {
                        for (unsigned int i_6 = 0; i_6 < 16; i_6 += 1) 
                        {
                            {
                                var_24 ^= ((/* implicit */signed char) ((1079835436708518638LL) << (((/* implicit */int) (_Bool)0))));
                                arr_18 [i_0] [i_1] [i_2] [(unsigned char)2] [9U] = ((/* implicit */unsigned short) (_Bool)1);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
