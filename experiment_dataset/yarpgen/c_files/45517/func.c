/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45517
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45517 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45517
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
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 9; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 11; i_3 += 1) 
                    {
                        {
                            var_17 *= ((/* implicit */signed char) ((arr_10 [i_0] [(_Bool)1] [i_1 + 2] [i_0]) ? (((/* implicit */int) (unsigned char)30)) : (((/* implicit */int) ((((/* implicit */int) arr_11 [i_0] [i_1 - 1])) < (((/* implicit */int) arr_11 [1ULL] [i_1])))))));
                            arr_12 [i_0] [i_3] [i_0] [i_2] [i_0] [10U] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_2 [i_0]))))) ? (((((/* implicit */_Bool) 2802114521U)) ? (((/* implicit */unsigned long long int) arr_8 [i_0])) : (((((/* implicit */unsigned long long int) var_16)) ^ (var_0))))) : (((/* implicit */unsigned long long int) arr_8 [i_3])));
                            arr_13 [(_Bool)1] [i_3] [0] [i_2] = (+((-(((/* implicit */int) arr_10 [(unsigned short)0] [i_1 - 1] [i_1 + 1] [i_1 - 1])))));
                        }
                    } 
                } 
                var_18 = ((/* implicit */unsigned char) (+((+(min((((/* implicit */long long int) arr_10 [(unsigned short)1] [i_0] [i_0] [i_1])), (arr_8 [i_1 + 2])))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_4 = 0; i_4 < 18; i_4 += 4) 
    {
        for (long long int i_5 = 2; i_5 < 16; i_5 += 1) 
        {
            {
                arr_19 [i_5] [(unsigned char)6] [(unsigned char)6] = ((/* implicit */unsigned long long int) var_16);
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 18; i_6 += 4) 
                {
                    for (unsigned short i_7 = 0; i_7 < 18; i_7 += 3) 
                    {
                        {
                            var_19 &= min((min((arr_23 [i_7] [i_5 + 2] [i_4] [i_4]), (((/* implicit */unsigned long long int) var_13)))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_16))))));
                            var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(min((arr_18 [i_5]), (((/* implicit */int) var_3))))))) ? (((/* implicit */int) (unsigned char)15)) : (((/* implicit */int) ((min((arr_16 [(_Bool)1] [(_Bool)1]), (arr_16 [6ULL] [6ULL]))) != (((/* implicit */long long int) arr_21 [i_6] [i_6])))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_8 = 0; i_8 < 22; i_8 += 4) 
    {
        for (int i_9 = 0; i_9 < 22; i_9 += 1) 
        {
            {
                var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) 15062694170878226660ULL)) ? (((/* implicit */unsigned int) arr_29 [i_9])) : (var_14)))))) ? ((~(arr_28 [i_8]))) : (((/* implicit */unsigned int) arr_26 [i_9]))));
                arr_31 [i_9] [i_9] = ((/* implicit */long long int) arr_24 [i_9]);
                arr_32 [i_9] [i_9] [i_9] = ((/* implicit */unsigned long long int) arr_24 [i_8]);
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned short) ((short) max(((!(((/* implicit */_Bool) (unsigned char)225)))), ((!(((/* implicit */_Bool) var_14)))))));
}
