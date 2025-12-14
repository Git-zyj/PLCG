/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210128
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210128 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210128
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
    for (int i_0 = 4; i_0 < 22; i_0 += 3) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_8 [(unsigned short)10] [i_0] &= ((/* implicit */unsigned short) min((((/* implicit */unsigned int) arr_6 [(unsigned short)24] [(unsigned short)24] [(unsigned short)24])), (1061359948U)));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 25; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 25; i_4 += 1) 
                        {
                            {
                                var_13 *= (+(((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-7736))) : (arr_12 [(unsigned short)11] [i_2] [i_1 - 1] [i_0 + 3] [i_0 - 3]))));
                                var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) (short)-7727)) && (((/* implicit */_Bool) (unsigned char)12)))))) : (min((var_10), (((/* implicit */int) ((short) var_0)))))));
                                arr_13 [i_2] [i_1 - 1] [i_1] [i_1] [i_1 - 1] [i_1 - 1] = ((/* implicit */unsigned char) var_3);
                            }
                        } 
                    } 
                    var_15 += ((/* implicit */unsigned int) ((((/* implicit */int) var_5)) != (((((/* implicit */_Bool) min((((/* implicit */unsigned int) (short)7746)), (var_8)))) ? (((((((/* implicit */int) (short)-7750)) + (2147483647))) >> (((847003238) - (847003212))))) : (((arr_1 [i_0 - 2]) ? (arr_7 [i_0] [(unsigned char)8] [(unsigned char)8] [(unsigned char)8]) : (((/* implicit */int) (signed char)84))))))));
                    var_16 += ((/* implicit */unsigned char) var_10);
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_5 = 2; i_5 < 15; i_5 += 1) 
    {
        for (long long int i_6 = 0; i_6 < 17; i_6 += 2) 
        {
            {
                var_17 += (+(4294967295U));
                var_18 = ((/* implicit */int) min((var_18), (var_0)));
                var_19 = ((/* implicit */short) min((arr_4 [i_6] [i_5 + 1] [i_5 + 1]), (((/* implicit */unsigned short) var_6))));
            }
        } 
    } 
    var_20 = ((/* implicit */int) -2081673502832735623LL);
}
