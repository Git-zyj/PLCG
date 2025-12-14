/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43448
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43448 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43448
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
    for (int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 4; i_1 < 15; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                {
                    var_12 = ((/* implicit */unsigned char) ((unsigned int) (+(((/* implicit */int) arr_0 [i_1 - 1])))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (int i_4 = 0; i_4 < 18; i_4 += 3) 
                        {
                            {
                                var_13 = ((/* implicit */_Bool) -9223372036854775799LL);
                                var_14 = ((/* implicit */unsigned short) (_Bool)1);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 0; i_5 < 18; i_5 += 2) 
                    {
                        for (unsigned short i_6 = 0; i_6 < 18; i_6 += 3) 
                        {
                            {
                                var_15 &= ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_8))))), (max((((((/* implicit */_Bool) arr_15 [(unsigned char)13] [(signed char)8])) ? (((/* implicit */unsigned long long int) var_4)) : (arr_1 [i_1] [i_1]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)1895)) ? (288229276640083968LL) : (((/* implicit */long long int) 972337354)))))))));
                                var_16 = ((/* implicit */unsigned short) (unsigned char)24);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_7 = 2; i_7 < 14; i_7 += 4) 
                    {
                        for (unsigned int i_8 = 0; i_8 < 18; i_8 += 4) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned short) max((var_17), (arr_24 [i_0] [i_2 + 1] [i_7])));
                                var_18 |= ((/* implicit */long long int) min((((/* implicit */unsigned int) max((var_0), (((/* implicit */unsigned short) arr_4 [i_1] [i_1 + 3] [i_2 + 1]))))), (min((((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)67))) : (var_9))), (((/* implicit */unsigned int) ((arr_23 [i_0] [i_0] [i_2 + 1] [i_8] [i_8]) + (((/* implicit */int) arr_15 [i_8] [i_1 - 1])))))))));
                                var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) var_0))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_20 += ((/* implicit */unsigned short) ((((/* implicit */int) var_8)) >= (min((((((/* implicit */int) (unsigned short)31)) % (((/* implicit */int) var_0)))), ((-(((/* implicit */int) var_1))))))));
    var_21 = (~(((((/* implicit */int) var_8)) | (((/* implicit */int) var_0)))));
}
