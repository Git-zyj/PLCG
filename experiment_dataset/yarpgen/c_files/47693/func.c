/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47693
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47693 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47693
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
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 17; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 1; i_2 < 17; i_2 += 2) 
                {
                    for (int i_3 = 1; i_3 < 16; i_3 += 3) 
                    {
                        {
                            arr_9 [i_2] [i_1] |= ((/* implicit */int) var_15);
                            arr_10 [i_0] = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) 9223372036854775798LL)) ? (((/* implicit */int) arr_4 [i_0] [i_0] [i_3 + 1])) : (((/* implicit */int) arr_8 [i_3] [i_3] [i_3 + 2] [i_3 + 1]))))));
                        }
                    } 
                } 
                var_18 = ((/* implicit */unsigned int) min((((/* implicit */unsigned char) ((((/* implicit */int) (short)13239)) < (-439444785)))), (min((arr_1 [i_1 - 1]), ((unsigned char)7)))));
                arr_11 [i_0] = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((((/* implicit */int) (unsigned char)21)) + (((/* implicit */int) max(((short)32767), ((short)32767))))))), (((((/* implicit */long long int) ((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)3968))) : (arr_5 [(unsigned short)6] [(unsigned short)6] [i_0])))) + (min((arr_7 [4U] [i_0] [i_0] [i_1 - 2]), (((/* implicit */long long int) var_3))))))));
                var_19 ^= ((/* implicit */unsigned short) min((((unsigned long long int) arr_0 [i_0] [i_0])), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned char)235)))))));
            }
        } 
    } 
    var_20 = ((/* implicit */signed char) var_10);
}
