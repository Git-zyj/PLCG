/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33590
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33590 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33590
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
    for (short i_0 = 3; i_0 < 6; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            for (short i_2 = 1; i_2 < 9; i_2 += 1) 
            {
                {
                    var_17 = ((((/* implicit */int) (unsigned short)19768)) >= (((/* implicit */int) (unsigned short)45767)));
                    arr_8 [i_2 - 1] [(signed char)4] [i_0] = (signed char)-118;
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_13 [i_0 - 3] [3LL] [i_2 + 1] [i_3] [i_4] = ((((/* implicit */_Bool) (signed char)-111)) ? ((-(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) ((_Bool) (unsigned short)19768))));
                                var_18 &= ((/* implicit */signed char) ((short) (_Bool)1));
                                arr_14 [i_4] [8ULL] [(short)1] = ((/* implicit */long long int) max(((signed char)-63), (((/* implicit */signed char) var_16))));
                                var_19 = ((/* implicit */_Bool) arr_0 [i_0] [(signed char)0]);
                                var_20 ^= ((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */int) arr_1 [(signed char)9] [i_1])) ^ (((((/* implicit */_Bool) (unsigned short)19754)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) (signed char)-114)))))));
                            }
                        } 
                    } 
                    arr_15 [i_0] [i_1] [i_1] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */int) (signed char)118)) >= (((/* implicit */int) (signed char)-111))));
                }
            } 
        } 
    } 
    var_21 += ((/* implicit */signed char) var_10);
    var_22 = ((/* implicit */signed char) var_7);
    var_23 = ((/* implicit */unsigned long long int) ((unsigned int) max((var_4), (((/* implicit */unsigned long long int) ((var_1) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_8))))))));
}
