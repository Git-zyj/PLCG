/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204498
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204498 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204498
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
    var_10 = ((/* implicit */int) (!(((/* implicit */_Bool) max((var_6), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) 6926550936098495848LL))))))))));
    /* LoopNest 3 */
    for (short i_0 = 1; i_0 < 9; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_10 [i_0] [i_0 - 1] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_1)), (var_8)))) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_6 [i_0] [i_0])) : (((/* implicit */int) arr_0 [i_0])))) : (379593733)))));
                    arr_11 [(short)5] [i_0] [(short)5] = ((/* implicit */unsigned char) ((max((((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_2] [i_2]))))), (379593742))) << ((((((~(((/* implicit */int) arr_4 [i_0])))) + (63313))) - (22)))));
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 10; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 10; i_4 += 2) 
                        {
                            {
                                var_11 = ((/* implicit */_Bool) min((var_11), (((/* implicit */_Bool) min((((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_4 [i_0])))))))), ((-(((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_9)))))))))));
                                var_12 = ((/* implicit */unsigned short) (-(-379593742)));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
