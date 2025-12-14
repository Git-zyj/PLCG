/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44457
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44457 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44457
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
    var_18 *= ((/* implicit */_Bool) (+(((var_7) & (((/* implicit */int) (unsigned short)62422))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 9; i_0 += 4) 
    {
        for (short i_1 = 2; i_1 < 10; i_1 += 4) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned char i_2 = 1; i_2 < 10; i_2 += 3) 
                {
                    var_19 = ((/* implicit */unsigned char) (-(max((-1969722847), (((/* implicit */int) (unsigned short)7904))))));
                    arr_6 [i_0] [i_2] = ((/* implicit */unsigned char) max((((8734046825210836827LL) & (((/* implicit */long long int) arr_1 [i_0 + 2])))), ((-(arr_5 [i_0 + 2] [i_1 - 2] [i_2 + 1])))));
                    arr_7 [i_1 - 2] [i_2] [i_1] = ((/* implicit */unsigned short) arr_3 [i_2]);
                    arr_8 [i_0 - 1] [i_0] [i_1] |= ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */int) (short)-24412)) + (var_5)))) < ((~(arr_5 [i_0] [i_1] [i_2 - 1])))))) & ((+(151798094)))));
                }
                var_20 = ((/* implicit */unsigned long long int) min(((-(((arr_4 [i_0] [i_0 + 1] [i_0]) & (((/* implicit */int) (_Bool)1)))))), (min((arr_3 [i_0 + 1]), (1641881756)))));
                arr_9 [i_0] [i_0] = (~(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) (signed char)-10)) : (((/* implicit */int) (unsigned char)76)))))))));
                arr_10 [i_0] [i_1 - 2] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_4 [i_0 - 1] [i_0 + 2] [i_1 + 1]))));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (var_5) : (((/* implicit */int) var_12))));
    var_22 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned char)255))));
}
