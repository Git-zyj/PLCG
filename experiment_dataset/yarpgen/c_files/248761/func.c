/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248761
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248761 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248761
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
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (short i_1 = 3; i_1 < 8; i_1 += 2) 
        {
            {
                var_14 = ((/* implicit */unsigned int) (_Bool)0);
                arr_5 [i_0] [i_1] = ((/* implicit */unsigned char) (+(arr_1 [i_1 - 2])));
                arr_6 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) ((signed char) (+(arr_1 [i_0])))))) + (min((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)0)) ^ (((/* implicit */int) var_0))))), (((((/* implicit */_Bool) -1796322923)) ? (1220150280U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))));
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 10; i_2 += 1) 
                {
                    for (long long int i_3 = 2; i_3 < 7; i_3 += 4) 
                    {
                        {
                            var_15 = (-(((/* implicit */int) (_Bool)1)));
                            arr_11 [i_2] = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) 32736)) ? (arr_7 [i_1 - 3] [i_1 + 1]) : (((/* implicit */int) (signed char)(-127 - 1)))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_16 = ((/* implicit */int) min((var_16), (((/* implicit */int) 18446744073709551615ULL))));
}
