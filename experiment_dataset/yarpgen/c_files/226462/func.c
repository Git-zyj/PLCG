/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226462
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226462 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226462
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
    var_19 = ((((/* implicit */_Bool) var_10)) ? ((+(((/* implicit */int) var_10)))) : (((((/* implicit */_Bool) ((var_14) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))) ? ((~(-22))) : (min((var_0), (((/* implicit */int) (unsigned char)106)))))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 12; i_0 += 1) 
    {
        for (unsigned char i_1 = 3; i_1 < 12; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 14; i_2 += 4) 
            {
                {
                    var_20 &= ((/* implicit */unsigned long long int) ((((/* implicit */int) min(((unsigned char)193), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned short)37)))))))) - (((((/* implicit */_Bool) ((((/* implicit */int) var_18)) + (98126637)))) ? (((((/* implicit */_Bool) arr_4 [i_2])) ? (var_6) : (var_6))) : ((+(arr_4 [i_2])))))));
                    var_21 = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) ((arr_5 [i_0 - 2]) == (arr_5 [i_1 - 1])))), (2670004550U)));
                    var_22 = ((/* implicit */short) ((((/* implicit */_Bool) (~(arr_4 [i_0])))) ? (arr_1 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)43)))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 2; i_3 < 11; i_3 += 3) 
                    {
                        for (long long int i_4 = 0; i_4 < 14; i_4 += 1) 
                        {
                            {
                                var_23 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_4 [i_0]))));
                                arr_12 [i_2] [(_Bool)1] [i_2] [i_3] [i_4] |= ((/* implicit */_Bool) (-(min((1344377374), (arr_7 [i_1 - 2] [10] [(unsigned short)11])))));
                            }
                        } 
                    } 
                    var_24 = arr_0 [i_2] [(unsigned char)2];
                }
            } 
        } 
    } 
    var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_2)) ? (var_14) : (((/* implicit */unsigned int) (~(min((var_0), (((/* implicit */int) var_4)))))))));
    var_26 = ((/* implicit */unsigned char) var_13);
}
