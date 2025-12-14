/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215883
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215883 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215883
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
    var_16 = ((/* implicit */unsigned short) max((1845982577U), (((/* implicit */unsigned int) (_Bool)1))));
    var_17 = ((/* implicit */_Bool) var_13);
    var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) var_9))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (signed char i_2 = 2; i_2 < 20; i_2 += 3) 
                {
                    arr_7 [i_2] [i_2] [i_2] [i_1] = ((/* implicit */_Bool) (~((~(((/* implicit */int) var_5))))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 21; i_3 += 4) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_15 [i_0] [i_0] [i_1] [i_0] [i_4] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((var_6), (((/* implicit */int) arr_8 [i_0] [i_2 + 1] [i_2] [i_2 - 1]))))) ? (((((((/* implicit */_Bool) 2147483633)) ? (-26) : (((/* implicit */int) (_Bool)0)))) - (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) max((((/* implicit */unsigned char) arr_11 [i_2 + 1] [i_1] [i_2 - 1] [i_3] [i_2 + 1] [i_2 + 1])), (arr_8 [i_2 - 2] [i_2 - 2] [i_2 - 2] [i_3]))))));
                                var_19 = ((((/* implicit */_Bool) ((unsigned char) var_11))) ? (2768645793371580767LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)154))));
                                arr_16 [i_1] [i_3] = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_14 [i_0] [i_1] [i_3]))));
                                var_20 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) min((arr_8 [i_0] [i_2 - 1] [i_2 - 1] [i_3]), (((/* implicit */unsigned char) var_8)))))) * (min((((((/* implicit */_Bool) var_15)) ? (112774097U) : (arr_10 [i_1]))), (((/* implicit */unsigned int) max((var_10), (((/* implicit */int) arr_8 [i_2] [i_2] [i_2 - 1] [i_2 - 1])))))))));
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_11 [i_0] [i_2] [i_2 + 1] [i_1] [i_0] [i_1])))))));
                }
                var_22 = ((/* implicit */_Bool) (-(arr_12 [i_0] [i_0] [i_0] [i_0] [i_1] [i_1])));
            }
        } 
    } 
}
