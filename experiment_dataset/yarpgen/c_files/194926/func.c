/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194926
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194926 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194926
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
    var_20 = var_13;
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 10; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_0] [i_0 - 1] = min((((/* implicit */unsigned long long int) max((-1799090084), (((/* implicit */int) (unsigned char)116))))), (arr_2 [i_0]));
                var_21 = ((/* implicit */short) (((!(((/* implicit */_Bool) arr_2 [i_0])))) ? (((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_1 [i_0 + 1] [i_0 + 2])), (arr_0 [i_0 - 1])))) : (arr_4 [i_0] [i_0])));
                var_22 += ((/* implicit */short) (-(min(((+(arr_3 [0ULL] [i_1] [8ULL]))), (((/* implicit */long long int) (-(((/* implicit */int) arr_1 [i_0] [i_0])))))))));
                var_23 = ((/* implicit */_Bool) max((((/* implicit */int) (short)-32761)), (1799090094)));
            }
        } 
    } 
    /* LoopNest 3 */
    for (short i_2 = 0; i_2 < 13; i_2 += 1) 
    {
        for (unsigned int i_3 = 0; i_3 < 13; i_3 += 2) 
        {
            for (unsigned int i_4 = 3; i_4 < 12; i_4 += 2) 
            {
                {
                    var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(arr_10 [i_4 - 1])))) ? ((~(arr_10 [i_4 - 1]))) : (min((arr_10 [i_4 - 3]), (arr_10 [i_4 + 1])))));
                    var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)-45)) ? (12263804441739512359ULL) : (((/* implicit */unsigned long long int) -1799090094))));
                    var_26 = ((/* implicit */short) max((max((((/* implicit */unsigned int) arr_11 [i_4 + 1])), (arr_10 [i_4 - 3]))), (arr_10 [i_2])));
                }
            } 
        } 
    } 
    var_27 = ((((/* implicit */_Bool) var_17)) ? ((((!(((/* implicit */_Bool) var_15)))) ? (((((/* implicit */_Bool) var_13)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) var_6))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_15))))))) : (((/* implicit */long long int) ((/* implicit */int) var_19))));
    var_28 = ((/* implicit */short) min((((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (var_13) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))), (var_0)));
}
