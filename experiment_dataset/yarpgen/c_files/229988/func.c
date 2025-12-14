/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229988
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229988 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229988
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
    for (short i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            {
                var_12 = ((/* implicit */short) max((var_12), (((/* implicit */short) arr_2 [i_0]))));
                var_13 += ((/* implicit */_Bool) (+(((var_1) - (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))))));
                arr_4 [i_0] [i_1] = ((/* implicit */short) arr_0 [i_1] [i_0]);
            }
        } 
    } 
    var_14 ^= ((/* implicit */long long int) var_6);
    /* LoopNest 3 */
    for (unsigned short i_2 = 0; i_2 < 10; i_2 += 1) 
    {
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            for (long long int i_4 = 0; i_4 < 10; i_4 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_5 = 3; i_5 < 9; i_5 += 4) 
                    {
                        arr_18 [i_4] [i_5] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 4113453321474533321LL)) * ((-(((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)0))) / (var_4)))))));
                        arr_19 [i_5 + 1] [i_5] [i_4] [i_5 + 1] [i_5 - 2] = ((/* implicit */long long int) (_Bool)1);
                        arr_20 [i_3] [i_3] [i_3] [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_5 - 1] [i_5 - 3] [i_5 - 2] [i_5 + 1] [i_5 - 2])) ? (arr_17 [i_5 + 1] [i_5 - 2] [i_5 - 1] [i_5 - 3] [i_5 - 1]) : (arr_17 [i_5 - 3] [i_5 - 3] [i_5 - 3] [i_5 - 1] [i_5 + 1])))) ? (max((arr_17 [i_5 - 3] [i_5 - 2] [i_5 - 2] [i_5 + 1] [i_5 - 2]), (var_9))) : ((~(arr_17 [i_5 - 2] [i_5 + 1] [i_5 + 1] [i_5 + 1] [i_5 - 2])))));
                        var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) ((((/* implicit */_Bool) (+((-(((/* implicit */int) var_8))))))) ? (((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)88)), (max((((/* implicit */unsigned short) (unsigned char)167)), (var_5)))))) : (((((/* implicit */_Bool) arr_17 [i_5 - 3] [i_5 - 2] [i_5 + 1] [i_5 - 2] [i_5 - 2])) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) arr_11 [i_4])))))))));
                    }
                    var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) ((((long long int) ((var_4) & (var_4)))) >> (min((var_4), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [i_3] [i_3])) != (((/* implicit */int) arr_13 [i_2] [i_2] [i_2] [i_2]))))))))))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */unsigned short) var_8);
}
