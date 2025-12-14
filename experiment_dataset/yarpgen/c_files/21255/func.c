/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21255
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21255 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21255
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
    var_16 += ((/* implicit */unsigned short) (_Bool)1);
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            for (long long int i_2 = 2; i_2 < 16; i_2 += 4) 
            {
                {
                    arr_6 [i_2] [i_2] [i_1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((arr_0 [i_1]) <= (var_0))) ? (max((((/* implicit */long long int) 2147483647)), (8064LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_1])) ? (arr_0 [i_0]) : (-870732996))))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_0] [i_2])) % (arr_0 [i_2])))) ? (((/* implicit */int) ((arr_1 [i_1]) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_1] [i_1] [i_2 - 2])))))) : (((/* implicit */int) min((arr_3 [i_2] [i_1]), (arr_3 [i_0] [i_1])))))) : (((/* implicit */int) arr_4 [i_0] [i_1] [i_1]))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17; i_3 += 4) 
                    {
                        for (long long int i_4 = 0; i_4 < 17; i_4 += 2) 
                        {
                            {
                                var_17 |= ((/* implicit */unsigned char) ((var_3) ? (((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)7))))) ? (((/* implicit */int) ((signed char) (unsigned char)248))) : (((((/* implicit */_Bool) arr_0 [i_3])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_7 [i_0] [i_1] [i_2 - 2] [i_3] [i_4])))))) : ((+(((/* implicit */int) (unsigned char)249))))));
                                var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) (+(((/* implicit */int) ((var_9) != (((/* implicit */unsigned long long int) arr_2 [i_3] [i_1] [i_0]))))))))));
                                var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? ((((_Bool)0) ? (((/* implicit */int) (unsigned char)252)) : (((/* implicit */int) (unsigned char)18)))) : (346891988)))) ? (min((((/* implicit */unsigned long long int) max((((/* implicit */int) arr_13 [i_0] [i_0] [i_1] [i_1] [i_2] [i_3] [i_4])), (arr_0 [i_0])))), (((((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_2] [i_3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_4] [i_1]))) : (arr_1 [i_0]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_13 [i_0] [i_1] [i_2 + 1] [i_0] [i_4] [i_0] [i_3])) != (var_11)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */signed char) ((((/* implicit */int) (signed char)63)) <= (((var_0) - (((/* implicit */int) ((var_9) < (((/* implicit */unsigned long long int) var_0)))))))));
    var_21 = ((/* implicit */signed char) ((((/* implicit */int) (signed char)62)) / (((/* implicit */int) var_8))));
}
