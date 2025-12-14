/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193394
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193394 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193394
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
    for (long long int i_0 = 2; i_0 < 20; i_0 += 3) 
    {
        for (unsigned short i_1 = 1; i_1 < 18; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned int i_2 = 0; i_2 < 21; i_2 += 1) 
                {
                    var_15 = ((/* implicit */unsigned long long int) ((unsigned short) 1244977066302397153ULL));
                    var_16 -= ((/* implicit */long long int) ((unsigned short) (unsigned short)35125));
                }
                for (unsigned char i_3 = 0; i_3 < 21; i_3 += 2) 
                {
                    var_17 = ((/* implicit */long long int) 31ULL);
                    var_18 = ((unsigned long long int) (unsigned char)159);
                }
                /* LoopNest 2 */
                for (unsigned short i_4 = 0; i_4 < 21; i_4 += 3) 
                {
                    for (unsigned long long int i_5 = 0; i_5 < 21; i_5 += 3) 
                    {
                        {
                            var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) arr_11 [(unsigned short)19] [(unsigned short)19] [i_4] [i_5]))));
                            arr_15 [i_0 + 1] [i_5] [i_4] [i_4] [i_5] = ((/* implicit */unsigned short) min((-1151089839309160128LL), (((((/* implicit */long long int) ((((/* implicit */int) (unsigned char)243)) >> (((/* implicit */int) (unsigned char)7))))) | (((long long int) arr_13 [i_0] [i_4] [1ULL]))))));
                        }
                    } 
                } 
                arr_16 [i_0 - 2] = ((/* implicit */unsigned int) arr_12 [i_0 - 2] [i_0 - 2]);
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned long long int) var_0);
    var_21 = ((/* implicit */unsigned char) ((unsigned int) (unsigned char)219));
    /* LoopNest 2 */
    for (unsigned char i_6 = 0; i_6 < 16; i_6 += 3) 
    {
        for (long long int i_7 = 1; i_7 < 15; i_7 += 1) 
        {
            {
                var_22 ^= ((arr_22 [i_6] [i_7] [i_7]) - (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)1)) / (((/* implicit */int) (unsigned short)4095))))));
                var_23 = ((/* implicit */unsigned short) ((unsigned char) ((unsigned char) arr_6 [i_6] [i_6] [i_7] [i_7])));
            }
        } 
    } 
}
