/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22165
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22165 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22165
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
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 3) 
            {
                {
                    var_17 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (unsigned char)254)))) > (((((/* implicit */_Bool) arr_4 [i_0])) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)129)))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 10; i_3 += 4) 
                    {
                        for (short i_4 = 2; i_4 < 8; i_4 += 2) 
                        {
                            {
                                arr_14 [i_0] [i_1] [i_0] [i_0] [i_0] [9] [i_4] = ((/* implicit */unsigned char) (~((~(((/* implicit */int) arr_4 [i_0]))))));
                                arr_15 [i_0] [(unsigned short)9] [i_1] [(unsigned short)2] [i_0] [i_3] [i_4 + 1] = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(8ULL)))) ? (((((/* implicit */int) var_15)) + (((/* implicit */int) var_12)))) : (((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [i_1] [i_2] [i_3] [i_4]))));
                            }
                        } 
                    } 
                    var_18 ^= ((/* implicit */unsigned int) arr_6 [i_0] [i_1] [i_2]);
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned char)192)) : (min((((var_8) % (((/* implicit */int) var_4)))), (((/* implicit */int) (unsigned short)16011))))));
}
