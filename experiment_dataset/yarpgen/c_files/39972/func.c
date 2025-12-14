/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39972
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39972 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39972
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
    for (signed char i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 4) 
                {
                    for (long long int i_3 = 2; i_3 < 8; i_3 += 4) 
                    {
                        {
                            var_20 -= ((/* implicit */unsigned short) 3327220168U);
                            var_21 = ((/* implicit */unsigned int) (~((((~(((/* implicit */int) arr_5 [i_0] [i_1])))) ^ (((/* implicit */int) var_3))))));
                            var_22 = ((/* implicit */signed char) (_Bool)1);
                            var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_8)) ? (min((1705406806U), (1705406806U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_8 [i_3 - 2] [i_3 + 2] [i_3 - 2] [i_3 + 2] [i_3 + 1])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_16)))))));
                        }
                    } 
                } 
                arr_9 [i_0] [i_0] = ((/* implicit */signed char) min(((~(((/* implicit */int) ((_Bool) var_4))))), (((/* implicit */int) (_Bool)1))));
                /* LoopNest 2 */
                for (unsigned long long int i_4 = 0; i_4 < 10; i_4 += 4) 
                {
                    for (unsigned short i_5 = 0; i_5 < 10; i_5 += 4) 
                    {
                        {
                            arr_16 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2589560510U)) ? (1705406815U) : (((/* implicit */unsigned int) (+((-2147483647 - 1)))))))) ? (((((/* implicit */_Bool) (unsigned short)30849)) ? (((1705406817U) / (1705406815U))) : (((/* implicit */unsigned int) (+(((/* implicit */int) arr_12 [i_0] [i_0] [i_4] [i_0]))))))) : (((/* implicit */unsigned int) min((var_17), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_19)) : (((/* implicit */int) arr_12 [i_0] [i_0] [(signed char)3] [i_5])))))))));
                            var_24 = ((/* implicit */signed char) var_10);
                            var_25 = ((/* implicit */long long int) max((arr_14 [i_0] [i_1] [i_4] [i_5]), (max((((/* implicit */unsigned int) var_3)), (arr_6 [i_0])))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_26 = ((/* implicit */long long int) (~(((((/* implicit */int) var_14)) * (((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))))));
    var_27 = ((/* implicit */long long int) ((unsigned int) var_3));
    var_28 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) var_18)))) : (var_7)))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_19))));
}
