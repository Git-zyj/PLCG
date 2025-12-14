/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40161
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40161 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40161
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
    var_11 = ((/* implicit */unsigned short) (unsigned char)191);
    /* LoopNest 2 */
    for (short i_0 = 2; i_0 < 19; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    for (int i_3 = 1; i_3 < 19; i_3 += 1) 
                    {
                        {
                            var_12 = ((/* implicit */unsigned long long int) ((((/* implicit */int) max((((short) var_0)), (((/* implicit */short) arr_4 [i_0] [i_0] [i_0]))))) ^ ((-((~(arr_0 [i_2 - 1] [i_3])))))));
                            var_13 = ((/* implicit */unsigned int) min((var_13), (((/* implicit */unsigned int) (((~(((/* implicit */int) arr_3 [i_0 - 1])))) + (arr_0 [i_0] [i_1]))))));
                        }
                    } 
                } 
                var_14 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) ((signed char) 2271094706U))) ? (((((/* implicit */_Bool) (unsigned char)191)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_3 [i_1])))) : (((/* implicit */int) arr_6 [i_0]))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_4 = 0; i_4 < 15; i_4 += 3) 
    {
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            {
                arr_17 [i_4] [i_5] [i_4] = ((/* implicit */_Bool) arr_8 [i_4] [i_5]);
                var_15 |= ((/* implicit */long long int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)53)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) arr_14 [(_Bool)1] [i_5] [i_5]))))) ? (((((/* implicit */int) (unsigned char)191)) / (((/* implicit */int) arr_4 [(signed char)4] [i_5] [12U])))) : (((/* implicit */int) arr_5 [(unsigned char)18])))), ((~(((/* implicit */int) (unsigned char)196))))));
                arr_18 [i_5] [i_5] = ((/* implicit */short) (-(min((((((/* implicit */_Bool) arr_16 [i_5] [i_4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_4] [i_4] [(unsigned short)5]))) : (var_8))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_14 [i_5] [i_5] [i_5])))))))));
            }
        } 
    } 
}
