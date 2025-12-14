/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213104
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213104 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213104
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
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (unsigned int i_1 = 1; i_1 < 15; i_1 += 3) 
        {
            {
                var_18 -= ((/* implicit */signed char) ((((((/* implicit */int) arr_1 [i_1 + 1] [i_1 - 1])) != (((/* implicit */int) (signed char)8)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_1 - 1] [i_1 + 1]))) : (max((((/* implicit */unsigned int) arr_1 [i_1 + 1] [i_1 - 1])), (4294967295U)))));
                /* LoopSeq 2 */
                for (unsigned char i_2 = 2; i_2 < 14; i_2 += 1) 
                {
                    arr_8 [i_1] [i_1 - 1] [i_1] [i_2] = ((/* implicit */_Bool) max((min((arr_3 [i_2 + 2] [i_2 - 1] [i_1]), (arr_3 [i_2 - 2] [i_2 - 1] [i_2 - 2]))), (((/* implicit */long long int) (unsigned char)255))));
                    arr_9 [i_1] [i_1] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))) - ((~(var_11)))))) && (((/* implicit */_Bool) (~(((/* implicit */int) arr_7 [i_1 + 1] [i_1] [i_1])))))));
                }
                /* vectorizable */
                for (unsigned char i_3 = 0; i_3 < 16; i_3 += 1) 
                {
                    arr_12 [i_0] [i_3] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)239)) ? (2147483647) : (((/* implicit */int) (unsigned char)6))));
                    /* LoopNest 2 */
                    for (unsigned char i_4 = 0; i_4 < 16; i_4 += 3) 
                    {
                        for (unsigned char i_5 = 3; i_5 < 15; i_5 += 2) 
                        {
                            {
                                arr_17 [i_0] [i_1] [i_3] [(_Bool)1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) arr_6 [i_3] [i_5 - 1]);
                                arr_18 [i_1] [i_3] [i_1] = ((/* implicit */_Bool) (+(arr_13 [i_3] [i_3])));
                                var_19 -= ((/* implicit */unsigned int) ((_Bool) arr_15 [i_5 - 3] [i_1] [i_1] [i_1 + 1] [i_5 - 3] [i_5]));
                                var_20 -= ((/* implicit */unsigned short) (unsigned char)17);
                            }
                        } 
                    } 
                }
                arr_19 [i_1] = ((_Bool) -2147483647);
            }
        } 
    } 
    var_21 = ((/* implicit */_Bool) var_2);
}
