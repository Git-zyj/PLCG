/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229020
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229020 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229020
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
    var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~((~(((/* implicit */int) var_8))))))) ? ((~(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) >= (var_4)))))) : (((/* implicit */int) var_12))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 12; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */int) var_3)), (((((/* implicit */int) var_15)) - (((/* implicit */int) var_1))))))) ? (((/* implicit */int) ((unsigned char) 420065263))) : (-420065263))))));
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 13; i_2 += 2) 
                {
                    for (unsigned int i_3 = 0; i_3 < 13; i_3 += 1) 
                    {
                        {
                            arr_14 [i_0] [i_1] [i_2] [i_3] &= ((/* implicit */_Bool) (((!(((/* implicit */_Bool) min((((/* implicit */unsigned char) (_Bool)0)), ((unsigned char)112)))))) ? (min((((/* implicit */long long int) ((int) var_4))), ((+(arr_10 [i_0] [i_0] [i_2] [(unsigned short)12]))))) : (((/* implicit */long long int) min((-420065278), (420065262))))));
                            var_21 = ((/* implicit */unsigned short) (~(((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))) ^ (((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned int) -1)) : (144894442U)))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
