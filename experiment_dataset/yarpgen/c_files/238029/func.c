/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238029
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238029 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238029
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
    var_16 &= ((/* implicit */unsigned int) var_13);
    var_17 *= ((/* implicit */unsigned char) 3858117957U);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (unsigned int i_1 = 2; i_1 < 18; i_1 += 2) 
        {
            {
                arr_4 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)-82)) ? (((/* implicit */int) (unsigned short)2865)) : (((/* implicit */int) (unsigned short)25191))));
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 21; i_2 += 1) 
                {
                    for (long long int i_3 = 2; i_3 < 19; i_3 += 4) 
                    {
                        {
                            var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned short)65534)) : (((/* implicit */int) (unsigned short)8192)))))))));
                            arr_11 [i_3] [i_2] [i_2] [i_2] [i_0] [i_0] = ((((((/* implicit */unsigned int) max((((/* implicit */int) var_2)), (arr_2 [i_3] [i_1 - 2])))) >= (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : (var_8))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0] [i_2] [i_3]))) : (max((((/* implicit */unsigned int) var_10)), (arr_5 [i_1 + 2] [i_3 - 1] [i_3 - 2] [i_3]))));
                            var_19 |= arr_8 [i_0] [i_0] [i_2] [i_3];
                            arr_12 [i_0] [i_1] [i_2] = ((/* implicit */unsigned char) ((((int) (!(((/* implicit */_Bool) -4302762459369440625LL))))) % (((/* implicit */int) arr_9 [i_2] [i_2] [i_1 + 3] [i_2] [i_0]))));
                            arr_13 [i_0] [i_0] [i_2] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) 3376228905U))))) >> (((arr_2 [i_0] [i_1]) % (((/* implicit */int) var_6))))));
                        }
                    } 
                } 
                var_20 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_1] [i_1])) ? (((/* implicit */int) var_15)) : (((/* implicit */int) arr_10 [i_1] [i_1] [i_1] [i_1 + 3] [i_1])))))));
                var_21 -= ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0] [i_1] [i_0] [i_1]))) < (var_7))))));
                var_22 ^= ((/* implicit */unsigned short) max((((/* implicit */int) var_13)), (((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_1 + 2])) ? (((/* implicit */int) arr_6 [i_0] [i_1 - 2] [i_1])) : (((/* implicit */int) arr_6 [i_0] [i_0] [i_1 - 2]))))));
            }
        } 
    } 
    var_23 = ((/* implicit */short) (signed char)7);
    var_24 = max((var_14), (((/* implicit */unsigned char) var_13)));
}
