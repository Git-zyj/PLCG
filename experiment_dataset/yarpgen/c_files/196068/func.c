/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196068
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196068 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196068
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
    for (short i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            {
                var_12 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(3240460386724040990LL)))) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) min((((/* implicit */unsigned short) arr_4 [i_0] [i_1])), (var_1))))))) ? (min((((var_2) - (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1]))))), (((/* implicit */long long int) var_6)))) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [i_0])))));
                var_13 &= (short)0;
                arr_5 [i_0] [i_1] [i_1] = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_2 [i_1])) ? (arr_1 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0])))))));
            }
        } 
    } 
    var_14 -= min((((((/* implicit */_Bool) ((((/* implicit */_Bool) 34359738336LL)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_6))))) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */short) (unsigned char)91)), ((short)-541))))))), (var_4));
    /* LoopNest 2 */
    for (long long int i_2 = 0; i_2 < 19; i_2 += 4) 
    {
        for (short i_3 = 3; i_3 < 17; i_3 += 2) 
        {
            {
                arr_11 [i_2] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (min((((((/* implicit */_Bool) var_3)) ? (-34359738337LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */long long int) var_1)))) : (((/* implicit */long long int) ((((/* implicit */int) var_8)) >> (((arr_7 [i_3 - 1] [i_3 + 1]) + (2728049818435896081LL))))))));
                arr_12 [i_2] = ((/* implicit */short) min((((((/* implicit */long long int) ((/* implicit */int) min((var_3), (arr_6 [i_2]))))) + (arr_7 [i_3 - 2] [i_3]))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)17647)) ? (((/* implicit */int) (unsigned char)91)) : (((/* implicit */int) arr_8 [i_3 - 2]))))) ? (((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_8 [i_2])))) : (((/* implicit */int) ((short) 0ULL))))))));
                var_15 = ((/* implicit */short) min((((arr_7 [i_3 - 3] [i_3]) / (min((arr_7 [i_2] [i_3]), (((/* implicit */long long int) var_8)))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_7))))) ? (((((/* implicit */_Bool) var_10)) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) var_6))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (short)0)))))))));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-3934))) : (((((/* implicit */_Bool) var_0)) ? (3545514707001107916LL) : (((/* implicit */long long int) ((/* implicit */int) var_3)))))))));
    var_17 = ((/* implicit */short) min((((((/* implicit */_Bool) 34359738336LL)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */int) (unsigned char)119)) : (((/* implicit */int) (unsigned char)0))))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (var_9))))), (((/* implicit */long long int) (+(((((/* implicit */int) var_11)) + (((/* implicit */int) var_3)))))))));
}
