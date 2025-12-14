/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37319
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37319 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37319
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
    for (signed char i_0 = 4; i_0 < 11; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            for (unsigned char i_2 = 2; i_2 < 13; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 14; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 14; i_4 += 4) 
                        {
                            {
                                arr_13 [i_0] [i_1] [i_2 + 1] [i_4] [i_4] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(max((((/* implicit */unsigned int) 1656243849)), (3307342501U)))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)185)) ? (var_3) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) (signed char)49)))))))) : (((unsigned int) max((-4077568212085023630LL), (((/* implicit */long long int) 4194303U)))))));
                                var_15 = (+(((((/* implicit */_Bool) arr_11 [i_2] [i_2] [i_2 - 1] [(unsigned char)13] [i_1])) ? (((/* implicit */int) arr_11 [i_2] [i_2] [i_2 + 1] [i_2] [i_1])) : (((/* implicit */int) arr_11 [12U] [12U] [i_2 + 1] [i_4] [i_1])))));
                            }
                        } 
                    } 
                    arr_14 [i_0] [i_0] [(unsigned short)12] [i_1] = ((/* implicit */unsigned short) min(((+(min((((/* implicit */long long int) var_8)), (var_0))))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_7))) | (arr_6 [i_1] [i_2])))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) arr_5 [i_1]))))) : (4194288U))))));
                    var_16 = ((/* implicit */unsigned short) ((unsigned char) arr_9 [i_0] [i_1] [i_0] [i_1] [(signed char)0]));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */unsigned char) var_14);
}
