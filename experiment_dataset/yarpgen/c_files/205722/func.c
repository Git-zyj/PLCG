/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205722
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205722 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205722
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
    var_10 = ((/* implicit */long long int) min(((~(var_0))), (((/* implicit */int) ((((/* implicit */int) (unsigned short)11867)) <= (((/* implicit */int) (unsigned char)77)))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (unsigned short i_1 = 3; i_1 < 9; i_1 += 1) 
        {
            {
                var_11 ^= ((/* implicit */short) var_8);
                var_12 = ((/* implicit */unsigned short) (unsigned char)179);
                var_13 = ((/* implicit */unsigned int) min((var_13), (((/* implicit */unsigned int) (+(((((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)183))))) - (((((/* implicit */long long int) ((/* implicit */int) var_8))) + (var_2))))))))));
                var_14 = ((/* implicit */unsigned char) max(((~(((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)90))) : (var_3))))), (((/* implicit */long long int) ((unsigned char) ((((/* implicit */int) (unsigned char)88)) & (((/* implicit */int) (short)-9651))))))));
            }
        } 
    } 
    var_15 -= ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) (unsigned char)73)))) / (((unsigned int) var_3))));
    /* LoopNest 2 */
    for (unsigned short i_2 = 2; i_2 < 15; i_2 += 3) 
    {
        for (unsigned char i_3 = 0; i_3 < 18; i_3 += 3) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned short i_4 = 0; i_4 < 18; i_4 += 3) 
                {
                    arr_13 [i_4] = var_9;
                    var_16 = ((/* implicit */long long int) ((var_5) - (-1306621226)));
                }
                var_17 = ((((/* implicit */int) max(((short)9651), (((/* implicit */short) (unsigned char)77))))) | (max((((/* implicit */int) ((unsigned char) arr_6 [i_2] [i_2]))), (((int) (unsigned char)86)))));
                var_18 = ((((/* implicit */_Bool) (-((~(((/* implicit */int) (short)-9651))))))) ? (((((/* implicit */int) (unsigned short)21283)) | (((/* implicit */int) arr_10 [i_2 + 3])))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) (~(-1306621251)))) < (((unsigned long long int) (short)-792))))));
            }
        } 
    } 
}
