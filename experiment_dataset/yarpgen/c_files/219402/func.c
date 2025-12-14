/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219402
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219402 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219402
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
    var_20 ^= ((/* implicit */unsigned char) ((((((/* implicit */int) max(((unsigned char)0), ((unsigned char)63)))) - (((/* implicit */int) ((_Bool) var_16))))) & (((/* implicit */int) ((((/* implicit */int) ((8718607708448285962LL) != (((/* implicit */long long int) ((/* implicit */int) var_13)))))) == (((/* implicit */int) (short)1023)))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                arr_5 [i_1] [i_0] [i_0] = (!((!(((/* implicit */_Bool) arr_3 [i_1 + 1] [i_1 + 1])))));
                var_21 ^= ((/* implicit */unsigned long long int) (short)-2);
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 24; i_2 += 2) 
                {
                    for (unsigned short i_3 = 2; i_3 < 23; i_3 += 2) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_3 - 2] [(unsigned char)12] [i_1 + 1] [(_Bool)1])) ? (((/* implicit */int) arr_10 [i_2] [i_1 + 1] [(short)6])) : (((/* implicit */int) arr_4 [i_1] [i_1 + 1] [0ULL]))))) ? ((-(-1100151922))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_3 - 2] [0] [i_1 + 1] [i_0])))))));
                                var_23 &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)68)) ? (((/* implicit */unsigned int) ((/* implicit */int) max((var_13), ((signed char)-79))))) : (((((/* implicit */_Bool) arr_2 [i_0])) ? (3631539844U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))) || ((!(((/* implicit */_Bool) min((((/* implicit */unsigned char) var_6)), (arr_6 [i_3 - 1]))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_24 = ((/* implicit */short) ((((((/* implicit */_Bool) ((short) var_18))) ? ((-(8220348173881554441LL))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) * (((/* implicit */long long int) 0U))));
    var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_17)) && ((!(((/* implicit */_Bool) (+(((/* implicit */int) var_5)))))))));
}
