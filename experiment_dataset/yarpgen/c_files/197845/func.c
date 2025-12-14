/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197845
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197845 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197845
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
    var_10 = ((/* implicit */signed char) ((((int) (unsigned short)26659)) >> (((2043440029U) - (2043440002U)))));
    /* LoopNest 3 */
    for (signed char i_0 = 4; i_0 < 11; i_0 += 2) 
    {
        for (long long int i_1 = 2; i_1 < 11; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 12; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 12; i_3 += 4) 
                    {
                        for (short i_4 = 3; i_4 < 11; i_4 += 2) 
                        {
                            {
                                var_11 ^= ((/* implicit */unsigned int) ((((((/* implicit */int) ((signed char) (unsigned short)38868))) + (2147483647))) >> (((((int) min(((unsigned short)26686), (((/* implicit */unsigned short) var_1))))) - (26676)))));
                                arr_16 [i_1 + 1] [i_4] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)38845)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)26691))) : ((+(1694747456163976312ULL)))));
                            }
                        } 
                    } 
                    var_12 *= ((/* implicit */unsigned char) min((((((/* implicit */_Bool) arr_9 [i_1] [i_0 - 4] [i_0 - 4])) ? (((/* implicit */int) arr_9 [i_0] [i_0 - 4] [i_0 - 4])) : (((/* implicit */int) var_3)))), ((-(((/* implicit */int) arr_9 [i_0] [i_0 - 2] [i_0 - 2]))))));
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */signed char) ((int) var_1));
}
