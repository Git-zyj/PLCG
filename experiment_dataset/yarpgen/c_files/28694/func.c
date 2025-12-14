/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28694
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28694 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28694
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
    var_10 = ((((((/* implicit */_Bool) ((3891993789449861374ULL) >> (((1436030666U) - (1436030654U)))))) || (((/* implicit */_Bool) (~(var_7)))))) ? (min((var_7), (((/* implicit */unsigned long long int) ((long long int) var_2))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_6)))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            {
                arr_8 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((((/* implicit */int) arr_5 [i_1] [i_1])) + (((/* implicit */int) arr_5 [i_0] [i_1]))))) != (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) (+(((/* implicit */int) arr_4 [i_0] [i_1] [i_1]))))) : (((((/* implicit */_Bool) 2858936630U)) ? (1436030689U) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))))));
                var_11 = ((/* implicit */unsigned short) min((var_11), (((/* implicit */unsigned short) max((var_8), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (3891993789449861374ULL) : (((/* implicit */unsigned long long int) 618238008U))))) || (((/* implicit */_Bool) (-(((/* implicit */int) (signed char)49))))))))))));
                arr_9 [i_0] [i_1] = ((/* implicit */short) max((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3676729288U)) ? (1519674729U) : (4277513203U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0] [i_1]))) : (((((/* implicit */_Bool) 7195017884717884834ULL)) ? (1519674729U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-32742)))))))), (((7871163361607556338LL) / (((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) (short)7000))) : (-9205250434025213951LL)))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_2 = 1; i_2 < 14; i_2 += 3) 
    {
        for (unsigned int i_3 = 0; i_3 < 15; i_3 += 4) 
        {
            {
                var_12 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_2 + 1] [i_2 + 1])) ? (arr_11 [i_2 + 1] [i_2 - 1]) : (arr_11 [i_2 - 1] [i_2 - 1])))));
                var_13 = ((/* implicit */unsigned short) ((unsigned int) (+(arr_1 [i_2 + 1]))));
                var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) 7658112190821565917ULL))));
            }
        } 
    } 
}
