/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248187
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248187 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248187
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
    var_17 = ((/* implicit */unsigned short) max((((/* implicit */int) ((unsigned short) var_6))), (((((/* implicit */int) var_7)) ^ (((/* implicit */int) min(((signed char)106), (var_16))))))));
    var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) var_11))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (unsigned char i_1 = 2; i_1 < 13; i_1 += 3) 
        {
            for (signed char i_2 = 3; i_2 < 11; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 15; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 15; i_4 += 2) 
                        {
                            {
                                var_19 = ((/* implicit */short) max((((/* implicit */long long int) (-(((/* implicit */int) arr_6 [i_2 + 2] [i_0] [i_1 - 2] [i_1 - 2] [(_Bool)1] [i_3]))))), (((((/* implicit */_Bool) 9223372036854775793LL)) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-107)))))));
                                arr_12 [i_0] [i_0] [i_1] [i_0] [i_3] [i_0] [i_4] = var_7;
                                var_20 = ((/* implicit */short) ((((/* implicit */int) (signed char)-119)) / (((1168495525) / (((/* implicit */int) (unsigned char)227))))));
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */int) var_12);
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 1; i_5 < 11; i_5 += 3) 
                    {
                        for (unsigned char i_6 = 2; i_6 < 12; i_6 += 1) 
                        {
                            {
                                var_22 += ((/* implicit */unsigned short) var_10);
                                var_23 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) max(((~(((/* implicit */int) (unsigned short)65513)))), (((/* implicit */int) (signed char)113))))) ? (((unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_13 [i_0] [i_1] [i_0] [(unsigned char)2]))) | (arr_10 [i_0] [i_1 - 1] [(short)0] [i_5] [i_6] [i_6])))) : ((~(arr_5 [i_0] [i_2 - 2] [10] [i_5 - 1])))));
                                arr_17 [i_0] [i_1] [i_1] [i_1 + 2] = ((/* implicit */unsigned long long int) ((unsigned short) min((((/* implicit */long long int) (unsigned char)28)), (max((arr_10 [i_0] [i_1] [i_0] [i_5] [i_5] [i_6]), (((/* implicit */long long int) var_3)))))));
                                arr_18 [(unsigned char)13] [i_1] [i_0] [i_6] = ((/* implicit */long long int) ((((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_13 [i_1] [i_1 - 1] [i_1 - 2] [i_0])))) + (((/* implicit */int) (!(var_15))))));
                                var_24 = ((/* implicit */short) arr_8 [i_6] [i_6] [i_6 + 1] [i_6 + 1]);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_25 = ((((/* implicit */int) var_1)) | (((/* implicit */int) var_2)));
}
