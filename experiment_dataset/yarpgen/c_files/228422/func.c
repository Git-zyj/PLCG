/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228422
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228422 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228422
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
    for (unsigned char i_0 = 3; i_0 < 13; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (unsigned short i_2 = 0; i_2 < 15; i_2 += 4) 
                {
                    for (unsigned int i_3 = 1; i_3 < 13; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 15; i_4 += 4) 
                        {
                            {
                                var_13 ^= ((/* implicit */unsigned int) min(((+(((/* implicit */int) (unsigned short)18894)))), (((/* implicit */int) (unsigned short)46623))));
                                arr_14 [i_0 + 1] [i_0 + 1] [i_1] [i_2] [i_3] [(unsigned short)1] = ((/* implicit */unsigned int) arr_12 [i_0]);
                                arr_15 [(unsigned char)6] [i_3] = ((/* implicit */unsigned int) (unsigned short)18889);
                                arr_16 [(signed char)2] [i_3] [(unsigned char)7] [i_1] [i_0] = ((/* implicit */unsigned int) arr_0 [i_0]);
                                var_14 = arr_13 [i_4] [i_2] [i_1];
                            }
                        } 
                    } 
                } 
                /* LoopSeq 1 */
                for (unsigned int i_5 = 4; i_5 < 14; i_5 += 1) 
                {
                    arr_19 [i_0] [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_17 [i_0] [(signed char)3] [i_1] [i_5 - 2])) ? (((/* implicit */int) arr_17 [i_5] [i_1] [i_5 - 2] [i_0 - 3])) : (((/* implicit */int) arr_8 [i_0 - 2] [(short)8] [i_5 - 3]))));
                    arr_20 [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) 615418462U)) || (((/* implicit */_Bool) (unsigned short)18894))))))));
                }
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)18912)) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) (unsigned short)32102))))) ? (((((/* implicit */unsigned long long int) var_5)) - (var_6))) : (((/* implicit */unsigned long long int) (~(var_0)))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_4)))))));
    var_16 = ((/* implicit */unsigned int) (unsigned short)46642);
}
