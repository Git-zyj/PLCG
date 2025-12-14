/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231282
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231282 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231282
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
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            {
                arr_7 [i_0] [i_0] [i_1] = ((/* implicit */signed char) (~((~(65535)))));
                arr_8 [11U] [(short)4] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) (((+(((/* implicit */int) (short)32767)))) / (((/* implicit */int) max(((short)(-32767 - 1)), (((/* implicit */short) (unsigned char)219)))))))) != (((((/* implicit */_Bool) -65536)) ? (min((var_1), (((/* implicit */unsigned int) 65535)))) : (((/* implicit */unsigned int) ((int) var_5)))))));
            }
        } 
    } 
    var_19 = ((/* implicit */_Bool) (-(((/* implicit */int) var_13))));
    /* LoopNest 2 */
    for (unsigned char i_2 = 3; i_2 < 14; i_2 += 2) 
    {
        for (short i_3 = 0; i_3 < 17; i_3 += 1) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_4 = 0; i_4 < 17; i_4 += 2) 
                {
                    for (unsigned long long int i_5 = 0; i_5 < 17; i_5 += 2) 
                    {
                        {
                            arr_22 [i_5] [(short)3] [(short)3] [i_2] [i_5] [(unsigned short)15] = ((/* implicit */long long int) (!(((/* implicit */_Bool) -1))));
                            var_20 -= ((/* implicit */int) var_14);
                            arr_23 [i_2] [i_5] = ((/* implicit */_Bool) ((unsigned long long int) (signed char)32));
                        }
                    } 
                } 
                arr_24 [i_2] [(short)11] = ((/* implicit */int) var_10);
            }
        } 
    } 
}
