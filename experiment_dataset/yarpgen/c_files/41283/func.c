/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41283
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41283 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41283
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
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (signed char i_1 = 4; i_1 < 15; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (short i_2 = 0; i_2 < 16; i_2 += 2) 
                {
                    var_18 = ((/* implicit */long long int) (+(var_2)));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 2; i_3 < 15; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 16; i_4 += 4) 
                        {
                            {
                                arr_14 [i_0] [i_0] [i_2] [i_3] [i_0] = ((/* implicit */unsigned int) var_12);
                                var_19 -= ((/* implicit */unsigned char) (-(var_7)));
                            }
                        } 
                    } 
                    arr_15 [i_0] [0] [i_2] [i_1] = ((/* implicit */unsigned short) (!(var_13)));
                }
                arr_16 [i_1 - 4] [i_0] = ((/* implicit */unsigned char) var_3);
                /* LoopNest 2 */
                for (unsigned long long int i_5 = 0; i_5 < 16; i_5 += 2) 
                {
                    for (unsigned char i_6 = 0; i_6 < 16; i_6 += 1) 
                    {
                        {
                            arr_23 [i_6] [i_1 + 1] [i_6] = ((/* implicit */signed char) (+((-(((/* implicit */int) var_8))))));
                            arr_24 [i_6] [i_6] = min(((~(((((/* implicit */_Bool) var_15)) ? (var_15) : (((/* implicit */int) var_9)))))), ((-((~(((/* implicit */int) var_11)))))));
                            var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_4))))) ? (((((/* implicit */_Bool) var_1)) ? (var_3) : (var_5))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_0)))))));
                            var_21 = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) var_8))))) ? ((-(var_5))) : (((/* implicit */unsigned long long int) (-((~(var_1))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) ((var_13) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (var_17)))) ? ((-(var_5))) : (((/* implicit */unsigned long long int) (-(var_1))))))));
    var_23 ^= ((/* implicit */unsigned short) (~(((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_0))))))))));
    var_24 = ((/* implicit */long long int) min((var_2), (((((/* implicit */_Bool) max((var_10), (((/* implicit */long long int) var_1))))) ? (min((var_3), (var_7))) : (((/* implicit */unsigned long long int) var_17))))));
}
