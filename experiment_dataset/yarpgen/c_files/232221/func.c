/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232221
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232221 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232221
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
    var_20 = ((/* implicit */unsigned char) (_Bool)1);
    var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1))))))) ? (max((((/* implicit */long long int) var_7)), (var_8))) : (((/* implicit */long long int) ((/* implicit */int) var_19)))))) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_9))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (unsigned char i_1 = 4; i_1 < 14; i_1 += 2) 
        {
            for (unsigned short i_2 = 3; i_2 < 14; i_2 += 4) 
            {
                {
                    var_22 = ((((/* implicit */_Bool) (signed char)-100)) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) var_7)));
                    /* LoopNest 2 */
                    for (signed char i_3 = 3; i_3 < 11; i_3 += 1) 
                    {
                        for (int i_4 = 1; i_4 < 13; i_4 += 3) 
                        {
                            {
                                arr_12 [i_0] [i_0] [i_0 + 1] [i_3] [i_0 + 1] [i_0] = ((/* implicit */signed char) min((((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1))))), (min((-5LL), (((/* implicit */long long int) (~(((/* implicit */int) (signed char)-42)))))))));
                                var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)(-127 - 1))) | (((/* implicit */int) arr_6 [i_0 + 1] [i_1 - 3] [i_3 - 3] [i_4 + 2]))))) ? (((/* implicit */long long int) max((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)121))))), ((-(((/* implicit */int) arr_11 [i_0] [i_1] [i_2] [i_3 - 2] [i_4 + 2]))))))) : (var_0)));
                                var_24 = ((/* implicit */int) (~(max((((/* implicit */unsigned long long int) (signed char)41)), (144115188075855871ULL)))));
                            }
                        } 
                    } 
                    arr_13 [i_0] [i_1] [i_1] [i_2] = ((/* implicit */unsigned char) arr_7 [i_0] [i_1 - 4] [i_0]);
                    arr_14 [3LL] [i_0 + 1] [i_0 + 1] [i_2 - 3] = ((/* implicit */unsigned short) arr_7 [i_0 + 1] [i_1 - 3] [i_1 - 3]);
                }
            } 
        } 
    } 
    var_25 *= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) min((((((((/* implicit */int) var_9)) + (2147483647))) << (((var_0) - (6161066681886972867LL))))), (((/* implicit */int) var_16))))) < (var_4)));
    var_26 = ((/* implicit */unsigned int) var_16);
}
