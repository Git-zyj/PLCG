/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229912
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229912 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229912
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
    var_10 -= ((/* implicit */short) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) 4199225270U)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) var_8))))) ? (((/* implicit */int) max(((unsigned short)29756), (var_6)))) : (((/* implicit */int) min((var_8), (var_4)))))), (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) (unsigned short)65522)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (unsigned short)65535))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 4; i_0 < 19; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 22; i_2 += 3) 
                {
                    for (unsigned int i_3 = 0; i_3 < 22; i_3 += 1) 
                    {
                        {
                            var_11 = ((/* implicit */short) min((var_11), (((/* implicit */short) ((((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) min((1496846992U), (3519658286U)))))) ? (125829120U) : (((/* implicit */unsigned int) ((/* implicit */int) var_0))))))));
                            var_12 &= ((/* implicit */unsigned short) arr_6 [i_0] [i_0]);
                        }
                    } 
                } 
                var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) arr_0 [i_0])) ? (686192603U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned short) var_5))) ? (((/* implicit */int) ((unsigned short) var_2))) : (((/* implicit */int) (unsigned short)65535))))) : (((((/* implicit */_Bool) (unsigned short)65533)) ? (max((((/* implicit */unsigned int) var_9)), (arr_8 [i_0] [i_1] [i_0] [(unsigned short)1]))) : (arr_9 [i_0] [i_0] [i_0 + 3] [(unsigned short)10] [i_1] [i_1])))));
                var_14 ^= var_7;
                var_15 = ((/* implicit */unsigned short) ((((arr_1 [i_0 - 4]) != (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0] [i_1]))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)0))))) : (var_1)));
            }
        } 
    } 
}
