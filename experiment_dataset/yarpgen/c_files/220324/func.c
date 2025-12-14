/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220324
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220324 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220324
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
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            for (short i_2 = 1; i_2 < 17; i_2 += 2) 
            {
                {
                    var_12 = ((/* implicit */unsigned char) min((var_12), (((/* implicit */unsigned char) 252656809U))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 19; i_3 += 2) 
                    {
                        for (signed char i_4 = 0; i_4 < 19; i_4 += 1) 
                        {
                            {
                                var_13 = ((/* implicit */signed char) min((var_13), (((/* implicit */signed char) (unsigned char)0))));
                                var_14 = ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)1))) <= (3420468846733120485LL))))) - (min((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)178))) <= (3420468846733120479LL)))), (0ULL))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (signed char i_5 = 0; i_5 < 15; i_5 += 2) 
    {
        var_15 = ((/* implicit */unsigned char) (+(((/* implicit */int) ((var_8) < (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))))))));
        arr_17 [i_5] = ((/* implicit */unsigned char) ((unsigned long long int) (unsigned char)84));
    }
    var_16 = ((/* implicit */unsigned char) var_5);
}
