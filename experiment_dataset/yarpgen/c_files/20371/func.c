/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20371
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20371 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20371
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
    var_17 = ((/* implicit */unsigned int) var_16);
    var_18 = ((/* implicit */unsigned long long int) (unsigned char)255);
    var_19 = ((((/* implicit */int) var_1)) | (((/* implicit */int) var_1)));
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 13; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (unsigned short i_2 = 0; i_2 < 16; i_2 += 4) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 16; i_3 += 2) 
                    {
                        for (signed char i_4 = 4; i_4 < 15; i_4 += 1) 
                        {
                            {
                                arr_14 [i_0] [i_0] [i_0] [(unsigned char)9] [i_0] [i_0 - 1] [(short)14] = ((/* implicit */unsigned short) max((((/* implicit */long long int) -2147483630)), (((long long int) ((signed char) (short)(-32767 - 1))))));
                                var_20 = ((((((-1) ^ (((/* implicit */int) (signed char)127)))) + (2147483647))) << ((((((~(((/* implicit */int) arr_0 [i_2])))) + (192))) - (19))));
                            }
                        } 
                    } 
                } 
                var_21 = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_1] [i_0 + 2]))) <= (arr_4 [i_1])));
                var_22 = ((/* implicit */unsigned char) min((var_22), (max((((unsigned char) ((unsigned int) -2147483630))), (((/* implicit */unsigned char) arr_12 [i_1] [i_1] [i_1] [i_0] [i_0]))))));
                arr_15 [i_0] = (short)21907;
            }
        } 
    } 
}
