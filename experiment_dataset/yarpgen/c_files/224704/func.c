/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224704
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224704 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224704
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
    var_20 ^= ((/* implicit */_Bool) (~(var_4)));
    var_21 &= ((/* implicit */int) ((long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) <= (var_4))));
    var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)2047)) * (((/* implicit */int) (signed char)-41)))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (signed char i_1 = 2; i_1 < 22; i_1 += 1) 
        {
            {
                arr_6 [i_1] = ((/* implicit */signed char) -3603341179065552386LL);
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (int i_3 = 0; i_3 < 23; i_3 += 4) 
                    {
                        {
                            arr_11 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */int) ((((/* implicit */_Bool) (+(arr_5 [i_0] [i_1] [i_2])))) ? (min((((/* implicit */long long int) (signed char)-25)), (3200863326052749351LL))) : (((/* implicit */long long int) ((/* implicit */int) var_10)))));
                            /* LoopSeq 3 */
                            for (signed char i_4 = 0; i_4 < 23; i_4 += 1) 
                            {
                                var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) ((unsigned int) (-(min((arr_3 [i_0]), (((/* implicit */unsigned int) 633897781))))))))));
                                var_24 = ((/* implicit */unsigned int) (-(var_1)));
                            }
                            for (unsigned int i_5 = 0; i_5 < 23; i_5 += 2) 
                            {
                                arr_18 [i_0] [i_1] [i_2] [i_3] [(unsigned short)11] [i_2] = ((/* implicit */signed char) (+(((((/* implicit */_Bool) arr_8 [i_1 + 1] [i_1 + 1] [i_1 - 1])) ? (arr_8 [i_1 - 2] [i_1] [i_1 - 2]) : (((/* implicit */unsigned int) ((/* implicit */int) var_13)))))));
                                var_25 ^= ((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) arr_2 [i_0])) || (((((/* implicit */_Bool) arr_14 [i_1] [i_1] [i_1] [i_5])) && (((/* implicit */_Bool) var_10)))))));
                            }
                            for (long long int i_6 = 0; i_6 < 23; i_6 += 2) 
                            {
                                var_26 = ((/* implicit */unsigned short) min((var_26), (((/* implicit */unsigned short) var_13))));
                                arr_23 [i_1] [15] [i_1] [i_3] [i_6] [15] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(max((arr_3 [i_2]), (((/* implicit */unsigned int) var_12))))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 633897799)))))) : (-8106465404836099867LL)));
                                var_27 ^= ((/* implicit */int) ((((arr_21 [i_0] [i_0] [i_0] [i_2] [i_3] [i_0]) ^ (((/* implicit */long long int) min((((/* implicit */int) (_Bool)1)), (633897789)))))) ^ (-4423711634147866283LL)));
                                arr_24 [(short)0] [(short)0] [i_2] [i_3] [i_6] = ((/* implicit */short) (signed char)40);
                            }
                        }
                    } 
                } 
            }
        } 
    } 
}
