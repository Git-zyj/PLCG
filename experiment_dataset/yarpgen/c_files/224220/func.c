/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224220
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224220 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224220
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
    /* LoopSeq 2 */
    for (signed char i_0 = 1; i_0 < 10; i_0 += 1) 
    {
        var_16 = ((/* implicit */short) (-(((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) var_4)) : (arr_1 [i_0 + 1] [i_0 - 1])))));
        arr_3 [i_0] [i_0] &= ((/* implicit */unsigned char) 3249568207945046899LL);
        /* LoopNest 2 */
        for (unsigned char i_1 = 3; i_1 < 8; i_1 += 3) 
        {
            for (unsigned int i_2 = 3; i_2 < 8; i_2 += 3) 
            {
                {
                    var_17 = ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_0 + 1])) ? (arr_4 [i_0 + 1]) : (arr_4 [i_2 + 2])))) : (((long long int) var_11)));
                    var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) max((((/* implicit */int) (short)14391)), (((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (unsigned char)252)) : (((/* implicit */int) (_Bool)1)))))))));
                }
            } 
        } 
        arr_9 [i_0] &= ((/* implicit */short) arr_6 [(short)0]);
    }
    for (signed char i_3 = 1; i_3 < 20; i_3 += 3) 
    {
        arr_12 [i_3 + 1] [i_3] = ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) 0LL)) : (var_5))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (short)8454)), (3807283849U))))))) ? (((/* implicit */long long int) 4294967274U)) : (arr_10 [i_3]));
        arr_13 [i_3 + 1] = ((/* implicit */int) min((((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) var_3)))) : (arr_11 [i_3 + 1] [i_3 - 1]))), (((/* implicit */unsigned int) (_Bool)1))));
    }
    /* LoopNest 2 */
    for (unsigned long long int i_4 = 3; i_4 < 13; i_4 += 4) 
    {
        for (unsigned long long int i_5 = 1; i_5 < 14; i_5 += 1) 
        {
            {
                arr_18 [i_5] = ((/* implicit */long long int) (~(((/* implicit */int) arr_16 [i_5] [i_4 - 3] [i_5]))));
                arr_19 [i_5 + 1] [i_5] [i_4 - 2] = ((/* implicit */unsigned char) ((unsigned long long int) ((var_10) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (((((/* implicit */_Bool) var_5)) ? (arr_14 [i_5]) : (((/* implicit */unsigned int) var_4)))))));
                var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) ((_Bool) var_8)))));
                arr_20 [i_4] [i_5] [i_4] = ((/* implicit */_Bool) min((((((/* implicit */_Bool) ((short) arr_14 [i_4]))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 2982179158944490471LL)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) var_10))))) : ((~(2626126851U))))), (1606863767U)));
                var_20 = (~(arr_14 [i_5 + 2]));
            }
        } 
    } 
    var_21 ^= max((((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_12))))), (max((((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_3))))), (var_11))));
}
