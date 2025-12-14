/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44611
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44611 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44611
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
    var_19 = ((/* implicit */short) var_4);
    var_20 = ((/* implicit */_Bool) (~(min((var_3), (((/* implicit */unsigned long long int) ((var_18) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))))))));
    var_21 *= ((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-108))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 1; i_0 < 18; i_0 += 2) 
    {
        for (unsigned int i_1 = 2; i_1 < 19; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 20; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 1; i_3 < 18; i_3 += 2) 
                    {
                        for (signed char i_4 = 1; i_4 < 18; i_4 += 3) 
                        {
                            {
                                var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) (~(((((/* implicit */int) (signed char)120)) >> (((((/* implicit */int) (signed char)-108)) + (125))))))))));
                                var_23 ^= ((/* implicit */_Bool) ((((/* implicit */int) (signed char)107)) % (((/* implicit */int) (signed char)-101))));
                                var_24 = ((/* implicit */unsigned char) ((var_11) | (var_10)));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned char i_5 = 0; i_5 < 20; i_5 += 1) 
                    {
                        var_25 = ((/* implicit */unsigned short) (+(arr_6 [i_0 + 2] [i_1 - 2] [i_1 - 1])));
                        var_26 = ((/* implicit */long long int) arr_1 [i_0 - 1] [3ULL]);
                        var_27 |= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_4 [i_0 + 2] [i_1 + 1] [i_1 - 2]))));
                        var_28 = ((/* implicit */unsigned char) ((arr_6 [i_0 - 1] [i_0 + 2] [i_0 + 1]) - (((/* implicit */unsigned int) ((/* implicit */int) var_5)))));
                    }
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 20; i_6 += 4) 
                    {
                        for (unsigned int i_7 = 0; i_7 < 20; i_7 += 3) 
                        {
                            {
                                var_29 = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) (!(arr_9 [i_0 - 1] [i_0 + 2] [i_1 - 2] [i_1 + 1])))), (var_2)));
                                var_30 = ((/* implicit */unsigned char) arr_18 [i_1] [i_1 - 1] [i_0 + 2] [i_0] [i_1 - 1] [i_7]);
                            }
                        } 
                    } 
                    var_31 ^= (!(((/* implicit */_Bool) (+((+(((/* implicit */int) arr_7 [i_1]))))))));
                }
            } 
        } 
    } 
}
