/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192881
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192881 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192881
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
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            for (unsigned char i_2 = 1; i_2 < 22; i_2 += 2) 
            {
                {
                    arr_10 [i_0] [i_0] [i_0] = ((/* implicit */signed char) min((((unsigned int) (!(((/* implicit */_Bool) var_8))))), (((/* implicit */unsigned int) (!(((_Bool) var_4)))))));
                    var_10 -= ((/* implicit */long long int) max((max((((/* implicit */unsigned int) (signed char)126)), (0U))), (((unsigned int) var_3))));
                    /* LoopSeq 3 */
                    for (unsigned int i_3 = 0; i_3 < 24; i_3 += 1) 
                    {
                        arr_14 [i_0] [i_3] = ((/* implicit */long long int) ((unsigned long long int) ((((/* implicit */_Bool) var_8)) ? ((-(var_3))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) var_6)) : (var_9))))));
                        var_11 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 0U)) ? (0U) : (0U)))) || ((!(((/* implicit */_Bool) var_8))))));
                        arr_15 [i_0] [i_1] [i_0] [20U] [i_1] = ((((/* implicit */_Bool) ((((/* implicit */int) var_0)) << (((var_9) - (2410168640U)))))) ? ((+(((/* implicit */int) var_0)))) : (min((((/* implicit */int) var_2)), (var_7))));
                    }
                    for (unsigned char i_4 = 1; i_4 < 23; i_4 += 3) 
                    {
                        var_12 = ((/* implicit */unsigned char) (-((+(var_6)))));
                        var_13 = ((/* implicit */long long int) max((var_13), (((/* implicit */long long int) ((unsigned char) 457591456)))));
                        arr_18 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_4))))) ? ((~(((/* implicit */int) var_4)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))));
                        arr_19 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) (((~(var_6))) > (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_4))))));
                    }
                    /* vectorizable */
                    for (unsigned int i_5 = 4; i_5 < 21; i_5 += 1) 
                    {
                        var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) var_6)) ? (var_1) : (((/* implicit */long long int) var_9)))) : (((/* implicit */long long int) (~(((/* implicit */int) var_4)))))));
                        var_15 = ((/* implicit */long long int) (-(var_6)));
                        /* LoopSeq 1 */
                        for (int i_6 = 1; i_6 < 23; i_6 += 2) 
                        {
                            var_16 = ((/* implicit */signed char) (~(var_1)));
                            arr_24 [i_0] [i_1] [i_0] = ((/* implicit */signed char) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))));
                            var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) (+(((/* implicit */int) var_4)))))));
                            var_18 |= ((/* implicit */long long int) var_6);
                        }
                        var_19 -= ((/* implicit */signed char) (~(var_8)));
                    }
                    var_20 *= ((/* implicit */signed char) (!(((/* implicit */_Bool) ((unsigned char) (_Bool)1)))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) (-(var_5))))));
}
