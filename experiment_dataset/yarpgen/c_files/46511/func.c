/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46511
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46511 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46511
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
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            {
                var_16 = ((/* implicit */signed char) max((min(((-(arr_4 [13] [i_0] [13]))), (max((-659067879), (1933878099))))), ((+((-(((/* implicit */int) arr_1 [i_0]))))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 19; i_2 += 3) 
                {
                    for (signed char i_3 = 2; i_3 < 17; i_3 += 3) 
                    {
                        {
                            var_17 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 659067875)) ? (403967870U) : (403967870U)))) ? (((/* implicit */int) max((arr_6 [i_3] [i_3 + 1] [i_3 + 1]), (arr_6 [i_3 + 1] [i_3 - 1] [i_3 + 1])))) : (min(((+(((/* implicit */int) arr_7 [i_0] [i_0] [i_1] [2] [i_0])))), (((/* implicit */int) arr_7 [i_1] [i_3] [i_3] [i_3 - 1] [i_3]))))));
                            var_18 = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) arr_9 [8U])) ? (((/* implicit */int) (signed char)77)) : (((/* implicit */int) (short)11857))))));
                            var_19 = ((/* implicit */unsigned int) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_2] [i_3])))))));
                            var_20 = ((unsigned int) ((((/* implicit */int) ((short) arr_4 [i_0] [i_1] [i_1]))) > (((/* implicit */int) ((((/* implicit */unsigned int) arr_4 [i_0] [(unsigned char)5] [i_3])) < (arr_2 [i_0] [i_0]))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned int i_4 = 0; i_4 < 19; i_4 += 3) 
                {
                    for (signed char i_5 = 0; i_5 < 19; i_5 += 4) 
                    {
                        {
                            var_21 = ((/* implicit */unsigned int) var_8);
                            var_22 = ((/* implicit */unsigned char) var_13);
                        }
                    } 
                } 
            }
        } 
    } 
    var_23 = ((/* implicit */short) min((((((/* implicit */_Bool) (-(-659067890)))) ? (((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) var_10)) : (3732080507U))) : (min((var_9), (((/* implicit */unsigned int) var_7)))))), (min((((/* implicit */unsigned int) (~(((/* implicit */int) var_14))))), (max((((/* implicit */unsigned int) var_13)), (var_6)))))));
}
