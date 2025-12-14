/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190161
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190161 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190161
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
    var_10 = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) var_6)))) ? (((/* implicit */int) (signed char)-45)) : (((/* implicit */int) ((((/* implicit */_Bool) (signed char)-45)) || (((/* implicit */_Bool) (signed char)55)))))));
    var_11 = ((/* implicit */unsigned long long int) var_5);
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 9; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            {
                arr_4 [i_0 + 4] [i_1] [i_0 + 4] = ((/* implicit */short) ((max((((/* implicit */int) (_Bool)1)), (arr_0 [i_0] [i_1]))) + (((((/* implicit */int) (signed char)44)) - (arr_0 [i_0 - 1] [i_0 - 1])))));
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned char i_3 = 0; i_3 < 13; i_3 += 2) 
                    {
                        {
                            arr_11 [(unsigned short)2] [(unsigned short)2] [i_2] [i_3] [i_3] = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0] [i_2]))) : (((((/* implicit */_Bool) 1515617177U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)52))) : (1515617167U))))) | (((/* implicit */unsigned int) ((/* implicit */int) ((arr_9 [i_0] [i_0 + 2] [i_0 + 2] [i_0]) > (((/* implicit */unsigned int) ((int) arr_0 [i_0] [i_2])))))))));
                            var_12 -= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_8 [i_3] [6ULL] [i_2] [i_0])) ? (((/* implicit */int) ((_Bool) ((_Bool) var_2)))) : (((((((/* implicit */int) (_Bool)1)) >> (((/* implicit */int) arr_1 [i_0])))) ^ (((/* implicit */int) ((unsigned short) (unsigned char)219)))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
