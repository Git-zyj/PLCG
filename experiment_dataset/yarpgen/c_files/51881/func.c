/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51881
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51881 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51881
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
    for (short i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 21; i_2 += 3) 
            {
                {
                    arr_7 [i_2] = ((/* implicit */unsigned char) (((~(((/* implicit */int) ((unsigned char) var_0))))) | (((/* implicit */int) arr_3 [(short)0]))));
                    var_13 = ((/* implicit */unsigned long long int) max((var_13), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)(-127 - 1))))))));
                    var_14 -= ((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_1] [i_2]);
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) min((min((((unsigned int) var_11)), (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)63))))))), (((/* implicit */unsigned int) (short)32750)))))));
    var_16 = ((/* implicit */signed char) var_3);
    /* LoopNest 3 */
    for (unsigned long long int i_3 = 1; i_3 < 15; i_3 += 2) 
    {
        for (unsigned long long int i_4 = 0; i_4 < 17; i_4 += 3) 
        {
            for (signed char i_5 = 0; i_5 < 17; i_5 += 2) 
            {
                {
                    var_17 ^= ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) arr_11 [i_3 - 1] [i_3 - 1] [i_3 + 1])), ((~(max((arr_5 [i_5] [i_4] [i_4] [i_4]), (((/* implicit */unsigned long long int) arr_4 [(unsigned char)8] [i_4] [i_4]))))))));
                    var_18 = ((/* implicit */unsigned short) arr_12 [i_3 + 2]);
                }
            } 
        } 
    } 
}
