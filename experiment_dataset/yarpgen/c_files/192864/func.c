/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192864
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192864 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192864
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
    var_14 = ((/* implicit */signed char) var_0);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 11; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 11; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 4; i_4 < 7; i_4 += 1) 
                        {
                            {
                                arr_11 [i_1] [i_4] [i_3] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) (-(arr_5 [i_0] [i_1] [i_3] [i_4])));
                                var_15 = ((/* implicit */unsigned long long int) var_13);
                                arr_12 [i_0] [i_0] [6ULL] [i_0] [i_0] [i_0] |= ((/* implicit */short) arr_6 [i_4 - 2]);
                            }
                        } 
                    } 
                    var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) arr_10 [i_0] [i_1] [i_1] [i_1] [i_0] [i_2]))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 11; i_5 += 1) 
                    {
                        for (signed char i_6 = 0; i_6 < 11; i_6 += 4) 
                        {
                            {
                                var_17 = ((/* implicit */long long int) min((((/* implicit */int) arr_8 [i_1])), (((((/* implicit */_Bool) arr_8 [i_1])) ? (((/* implicit */int) arr_8 [i_1])) : (((/* implicit */int) arr_16 [i_1] [i_2] [i_1] [i_6]))))));
                                var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) (unsigned char)241))));
                                var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((arr_15 [0LL] [i_2] [i_1] [(_Bool)1]) & (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_2] [i_5]))))), (((/* implicit */unsigned int) arr_13 [i_0]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)89))) : (1335096091U)));
                            }
                        } 
                    } 
                    arr_19 [i_1] = ((/* implicit */signed char) arr_17 [4ULL] [(signed char)6] [i_1] [i_1] [i_1] [i_2] [4ULL]);
                }
            } 
        } 
    } 
    var_20 ^= var_9;
    var_21 *= ((/* implicit */unsigned short) (~(((/* implicit */int) var_10))));
    var_22 = ((/* implicit */unsigned long long int) (+(((var_5) & (((/* implicit */int) ((var_5) > (((/* implicit */int) (unsigned char)105)))))))));
}
