/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219261
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219261 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219261
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
    var_17 = ((/* implicit */short) (!(((/* implicit */_Bool) 2046488885U))));
    var_18 = ((/* implicit */short) ((max((((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1))))), (14472956417016679840ULL))) <= (var_13)));
    var_19 = ((/* implicit */unsigned char) 2046488904U);
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            for (signed char i_2 = 3; i_2 < 16; i_2 += 4) 
            {
                {
                    arr_7 [i_0] [i_1] = ((/* implicit */int) max((((/* implicit */unsigned int) (_Bool)1)), (((unsigned int) arr_5 [i_0] [i_1]))));
                    /* LoopSeq 1 */
                    for (int i_3 = 2; i_3 < 17; i_3 += 3) 
                    {
                        var_20 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-25521)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) ? (min((var_6), (((/* implicit */unsigned int) var_4)))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_3 + 1] [i_2 + 2] [i_2 - 1]))))))));
                        var_21 = (_Bool)1;
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (short i_4 = 0; i_4 < 20; i_4 += 3) 
                        {
                            var_22 = ((/* implicit */unsigned char) ((var_3) % (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)53)))));
                            arr_12 [18U] [i_3 + 3] [i_2] [18U] [i_1] [(unsigned char)17] = ((/* implicit */_Bool) (unsigned char)48);
                        }
                    }
                    /* LoopNest 2 */
                    for (signed char i_5 = 1; i_5 < 19; i_5 += 4) 
                    {
                        for (unsigned char i_6 = 3; i_6 < 18; i_6 += 3) 
                        {
                            {
                                var_23 = ((/* implicit */long long int) var_12);
                                var_24 |= ((/* implicit */_Bool) max((1572864U), (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)31655)))))));
                                var_25 = ((/* implicit */_Bool) (((+(((((/* implicit */unsigned long long int) var_1)) & (3973787656692871776ULL))))) | (((((/* implicit */_Bool) arr_17 [i_0] [(signed char)12] [i_0] [i_5 + 1] [i_0] [i_6 - 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (((arr_13 [17U] [(signed char)9] [i_2 - 1] [i_5]) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))))));
                            }
                        } 
                    } 
                    arr_18 [i_0] [i_1] [i_2] = ((/* implicit */long long int) (~(var_14)));
                    var_26 = ((/* implicit */unsigned long long int) (+(((long long int) 256401735607340583LL))));
                }
            } 
        } 
    } 
}
