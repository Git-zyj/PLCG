/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224122
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224122 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224122
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
    var_16 = ((/* implicit */unsigned short) var_0);
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 22; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            {
                var_17 = ((((/* implicit */_Bool) min((max((arr_1 [i_1] [i_1]), (arr_2 [(short)20]))), (((/* implicit */short) ((arr_5 [i_0] [i_1] [i_1]) < (16792780349748134336ULL))))))) ? (((((/* implicit */_Bool) arr_6 [i_0 - 1] [i_0 + 1])) ? (((/* implicit */int) ((short) arr_3 [i_0] [i_0]))) : (((/* implicit */int) ((short) 16792780349748134336ULL))))) : (((/* implicit */int) (((!(((/* implicit */_Bool) 6610360396097000536ULL)))) || (((/* implicit */_Bool) ((long long int) var_15)))))));
                var_18 -= ((/* implicit */unsigned long long int) max((-3911110687731468925LL), (((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_1 [i_0 + 1] [i_0 - 1])) : (var_6))))));
                arr_7 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */int) ((min((var_11), (((/* implicit */unsigned long long int) var_10)))) > (arr_5 [i_0 - 1] [i_0 - 1] [i_0 - 1])))) != (((/* implicit */int) (!(((/* implicit */_Bool) var_15)))))));
                var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) max((((arr_6 [15ULL] [i_0 - 1]) ^ (arr_6 [i_0] [i_0 + 1]))), (min((arr_6 [i_0] [i_0 + 1]), (arr_6 [19LL] [i_0 - 1]))))))));
                var_20 = ((/* implicit */short) ((((/* implicit */_Bool) ((short) arr_1 [i_0] [i_0]))) ? (((((/* implicit */_Bool) ((var_11) << (((/* implicit */int) var_3))))) ? (arr_0 [i_0]) : (((arr_5 [i_0 + 1] [i_1] [i_0 + 1]) - (((/* implicit */unsigned long long int) 1297301855)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [i_0]))) : (var_15)))) >= (arr_0 [i_0])))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 4) 
    {
        for (unsigned int i_3 = 1; i_3 < 15; i_3 += 1) 
        {
            {
                arr_14 [13LL] = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) var_3))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_3]))) : (((unsigned int) min((10255487501472181798ULL), (((/* implicit */unsigned long long int) arr_9 [i_2])))))));
                arr_15 [i_2] [i_2] [(short)13] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) (unsigned char)182))) ? (((/* implicit */unsigned long long int) var_4)) : (((((/* implicit */_Bool) arr_3 [i_2] [i_2])) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)4594)) & (((/* implicit */int) arr_4 [i_2] [i_2]))))) : (((((/* implicit */_Bool) (unsigned short)44238)) ? (8191256572237369818ULL) : (var_12)))))));
                var_21 = ((/* implicit */unsigned int) max((((((/* implicit */unsigned long long int) ((arr_13 [i_2] [i_3] [i_3]) & (((/* implicit */int) arr_12 [i_3 - 1] [(signed char)6]))))) & (var_12))), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_4 [i_2] [i_2])), (((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) arr_11 [i_2] [i_3])) : (arr_9 [(short)9]))))))));
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) var_12))));
}
