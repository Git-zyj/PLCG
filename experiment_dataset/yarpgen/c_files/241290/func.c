/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241290
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241290 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241290
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
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (unsigned int i_2 = 1; i_2 < 17; i_2 += 4) 
                {
                    for (int i_3 = 1; i_3 < 15; i_3 += 3) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 18; i_4 += 4) 
                        {
                            {
                                var_11 = ((/* implicit */unsigned char) 6193242602277998536LL);
                                var_12 = ((/* implicit */unsigned long long int) ((_Bool) ((((((/* implicit */int) arr_5 [7U] [i_1])) / (((/* implicit */int) (unsigned char)85)))) / ((-(((/* implicit */int) (unsigned char)64)))))));
                                var_13 = ((/* implicit */short) ((var_9) & (((/* implicit */unsigned long long int) ((1080835863) * (((/* implicit */int) ((var_0) > (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_2] [i_2])))))))))));
                            }
                        } 
                    } 
                } 
                arr_16 [i_0] [i_0] [7LL] = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)64))) > (((((/* implicit */_Bool) var_8)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-121))))))))) > (arr_15 [i_1] [i_1] [0] [0] [0])));
                var_14 = ((/* implicit */int) (_Bool)1);
            }
        } 
    } 
    var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) var_7))));
    /* LoopNest 2 */
    for (signed char i_5 = 1; i_5 < 11; i_5 += 3) 
    {
        for (unsigned char i_6 = 1; i_6 < 11; i_6 += 4) 
        {
            {
                /* LoopNest 3 */
                for (unsigned char i_7 = 0; i_7 < 12; i_7 += 3) 
                {
                    for (int i_8 = 0; i_8 < 12; i_8 += 3) 
                    {
                        for (unsigned long long int i_9 = 4; i_9 < 10; i_9 += 3) 
                        {
                            {
                                arr_29 [i_9] [i_7] [i_6] [i_7] [8U] = ((/* implicit */short) 4270375679980507132ULL);
                                var_16 = ((/* implicit */long long int) (+(arr_0 [i_9 + 2] [i_6])));
                                var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)-6555)) ? (var_2) : (((((/* implicit */_Bool) ((arr_24 [i_6] [i_6] [i_9]) / (((/* implicit */long long int) arr_12 [i_8] [i_8] [i_8]))))) ? (((long long int) -4409045321176512266LL)) : (max((((/* implicit */long long int) arr_17 [i_5] [i_6])), (arr_14 [(short)3] [i_6] [i_7] [i_8] [i_9])))))));
                            }
                        } 
                    } 
                } 
                var_18 = ((long long int) arr_28 [i_5] [i_5] [i_5] [i_6 - 1] [(short)6]);
                arr_30 [i_5] = ((((arr_14 [i_5] [i_5] [i_5] [i_5 + 1] [i_5]) > (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_6 - 1] [i_5 + 1]))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_22 [i_6 - 1] [i_5 - 1] [9]))) : (max((arr_14 [(_Bool)1] [(_Bool)1] [i_5] [i_5 - 1] [(_Bool)1]), (((/* implicit */long long int) arr_22 [i_6 - 1] [i_5 - 1] [i_6])))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned char) -4409045321176512266LL);
    var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)3331)) ? ((~((+(((/* implicit */int) var_4)))))) : ((-(((/* implicit */int) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) var_10)))))))));
}
