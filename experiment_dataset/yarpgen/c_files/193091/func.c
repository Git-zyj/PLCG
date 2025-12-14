/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193091
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193091 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193091
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
    var_12 = ((/* implicit */long long int) max((var_12), (((/* implicit */long long int) ((unsigned int) (signed char)-85)))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            for (unsigned int i_2 = 1; i_2 < 13; i_2 += 1) 
            {
                {
                    var_13 ^= ((/* implicit */short) arr_0 [2U]);
                    arr_9 [i_0] [10U] [(_Bool)1] &= ((/* implicit */short) ((((((((/* implicit */_Bool) var_6)) || (arr_5 [i_0] [i_1] [i_2 + 3]))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_0] [7ULL] [i_2])) || (((/* implicit */_Bool) var_7))))) : (((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0])) ? (-1288751490) : (-1288751467))))) / (((/* implicit */int) arr_8 [i_2] [i_2] [(unsigned char)0]))));
                    var_14 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)75)) ? (2700563071U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)2438)))));
                    arr_10 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)75)) ? (((/* implicit */int) arr_8 [6LL] [i_1] [i_0])) : (((/* implicit */int) ((((((/* implicit */_Bool) var_7)) ? (arr_4 [i_0] [i_2]) : (((/* implicit */unsigned int) 1288751490)))) != (arr_2 [i_1]))))));
                }
            } 
        } 
    } 
}
