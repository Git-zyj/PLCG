/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239829
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239829 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239829
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
    for (long long int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 10; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 10; i_3 += 2) 
                    {
                        for (int i_4 = 0; i_4 < 10; i_4 += 3) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) 2869792824U)) ? (((/* implicit */int) (short)30714)) : (((/* implicit */int) (signed char)-54)))))) ? (((/* implicit */int) max((min((arr_6 [i_0] [i_0] [i_3] [i_4]), (((/* implicit */unsigned short) arr_1 [i_0])))), (((/* implicit */unsigned short) arr_1 [i_0]))))) : ((-(((((/* implicit */int) (short)30706)) ^ (((/* implicit */int) (signed char)-54))))))));
                                var_19 = ((/* implicit */int) ((unsigned char) ((short) arr_3 [i_0])));
                                arr_10 [i_0] [i_3] [i_4] = ((/* implicit */unsigned long long int) arr_9 [i_2] [(signed char)3] [i_2] [i_2] [1] [1ULL]);
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */signed char) (-(((((((/* implicit */_Bool) 7718288944742724454ULL)) ? (((/* implicit */int) (signed char)-60)) : (((/* implicit */int) (unsigned char)180)))) & (((int) 6071753804950640299ULL))))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned char) min((var_21), (var_4)));
    /* LoopNest 2 */
    for (unsigned short i_5 = 0; i_5 < 23; i_5 += 1) 
    {
        for (unsigned char i_6 = 3; i_6 < 22; i_6 += 2) 
        {
            {
                var_22 |= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(((((/* implicit */int) arr_13 [i_5] [i_5])) >> (0U))))))));
                var_23 += ((/* implicit */int) max((((/* implicit */short) min((((/* implicit */signed char) arr_15 [i_5] [5LL] [i_5])), ((signed char)-1)))), (((short) ((((/* implicit */_Bool) arr_14 [i_6] [i_5] [i_5])) ? (var_13) : (((/* implicit */int) (unsigned char)84)))))));
                var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_5] [i_6] [i_6]))) : (399007007166043444ULL))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 3565515337U))))) : (min((arr_12 [i_6 - 3]), (arr_12 [i_6 - 1])))));
                var_25 = ((/* implicit */unsigned long long int) 4294967283U);
            }
        } 
    } 
    var_26 = ((/* implicit */unsigned short) var_5);
}
