/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37704
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37704 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37704
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
    var_10 ^= 6996939746878762936ULL;
    var_11 = var_2;
    /* LoopNest 3 */
    for (unsigned short i_0 = 1; i_0 < 9; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_12 = ((/* implicit */unsigned long long int) (unsigned char)127);
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 13; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 3; i_4 < 12; i_4 += 3) 
                        {
                            {
                                var_13 = ((/* implicit */unsigned int) ((max((max((((/* implicit */long long int) 2147483644)), ((-9223372036854775807LL - 1LL)))), (((/* implicit */long long int) arr_7 [i_0])))) + (((long long int) arr_7 [i_0]))));
                                var_14 = ((/* implicit */short) ((((/* implicit */int) arr_7 [i_0])) == ((-(((/* implicit */int) min(((short)-18859), (((/* implicit */short) arr_9 [i_0] [i_0])))))))));
                            }
                        } 
                    } 
                    var_15 -= ((/* implicit */short) (~(((/* implicit */int) ((((/* implicit */int) arr_7 [6U])) == (((var_9) ? (((/* implicit */int) arr_15 [i_0] [i_0] [i_0] [i_1] [i_2])) : (((/* implicit */int) (unsigned char)64)))))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (int i_5 = 2; i_5 < 20; i_5 += 3) 
    {
        for (short i_6 = 0; i_6 < 21; i_6 += 3) 
        {
            {
                var_16 = ((/* implicit */unsigned long long int) 1073377885);
                arr_22 [i_5 - 2] [i_6] [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) 9223372036854775780LL)) ? ((~(9223372036854775807LL))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)25146)))));
            }
        } 
    } 
}
