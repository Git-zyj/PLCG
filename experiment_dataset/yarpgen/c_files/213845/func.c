/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213845
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213845 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213845
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
    for (long long int i_0 = 1; i_0 < 17; i_0 += 2) 
    {
        for (unsigned char i_1 = 2; i_1 < 15; i_1 += 2) 
        {
            for (unsigned char i_2 = 2; i_2 < 17; i_2 += 3) 
            {
                {
                    var_14 = ((/* implicit */unsigned char) max((var_14), (((/* implicit */unsigned char) max((-9223372036854775800LL), (((/* implicit */long long int) (unsigned char)35)))))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 18; i_3 += 4) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 18; i_4 += 2) 
                        {
                            {
                                var_15 = ((/* implicit */long long int) (unsigned char)58);
                                arr_14 [i_0] [i_1] [i_0] [i_0] [i_4] [i_4] = (-((-(((long long int) arr_3 [i_0])))));
                            }
                        } 
                    } 
                    var_16 = ((((/* implicit */_Bool) (~(max((((/* implicit */long long int) (unsigned char)75)), (6827183720589727022LL)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) max((arr_9 [i_0] [i_1 - 2] [i_1 - 2] [i_1 - 1] [i_2 - 1] [i_2]), (((/* implicit */long long int) (unsigned char)84))))))) : (((((/* implicit */_Bool) (~(arr_12 [i_0] [i_0 - 1] [i_0] [i_0] [i_1] [i_2] [i_0 - 1])))) ? ((~(arr_9 [i_0] [i_0] [i_0 - 1] [i_2 - 1] [i_1] [i_0]))) : (((((/* implicit */_Bool) (unsigned char)131)) ? (arr_2 [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_2] [i_0]))))))));
                    var_17 = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((-1920866393207068025LL) < (72057594037927928LL))))) <= ((+(9223372036854775807LL)))))) << ((((~(((/* implicit */int) (unsigned char)249)))) + (255)))));
                    arr_15 [i_1] [i_0] |= ((((/* implicit */_Bool) (~(((/* implicit */int) ((unsigned char) (unsigned char)69)))))) ? (arr_10 [i_1] [i_1] [i_1 + 3] [i_0 - 1]) : (max((((/* implicit */long long int) (unsigned char)154)), (max((arr_6 [17LL] [i_1] [i_2] [i_2]), (18LL))))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned char) max((8344854984764068105LL), (var_11))))) ? ((~(((/* implicit */int) var_9)))) : (((/* implicit */int) ((unsigned char) (unsigned char)16)))));
}
