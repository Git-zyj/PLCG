/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23876
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23876 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23876
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
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        arr_3 [i_0] = 8188267634847613752ULL;
        arr_4 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-8471))) & (14807947526608384790ULL)))))) / ((~(866504656316907311ULL)))));
        arr_5 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)8471)) ? (((((/* implicit */_Bool) arr_2 [(unsigned short)1])) ? (arr_1 [i_0]) : (((/* implicit */int) (short)11492)))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0]))))))) : ((+(((var_5) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0])))))))));
        var_18 = ((/* implicit */unsigned short) min((var_18), (((unsigned short) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)36673))))) : (var_5))))));
        arr_6 [i_0] [i_0] = 6689299342521533553ULL;
    }
    var_19 |= ((((/* implicit */_Bool) ((((/* implicit */int) var_9)) << (((max((((/* implicit */unsigned long long int) var_13)), (var_5))) - (3402976974139113450ULL)))))) ? (((unsigned long long int) max((((/* implicit */unsigned long long int) var_7)), (18446744073709551612ULL)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-30806))));
    /* LoopNest 2 */
    for (unsigned short i_1 = 0; i_1 < 18; i_1 += 2) 
    {
        for (signed char i_2 = 3; i_2 < 16; i_2 += 1) 
        {
            {
                arr_11 [i_2] [i_2 - 1] = ((/* implicit */signed char) (~(max((((var_17) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_1] [i_2]))))), (((/* implicit */unsigned long long int) ((signed char) (short)-8479)))))));
                var_20 = ((/* implicit */int) (~(arr_8 [i_1])));
            }
        } 
    } 
}
