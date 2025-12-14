/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194402
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194402 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194402
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
    var_19 -= ((/* implicit */unsigned long long int) (signed char)-72);
    /* LoopSeq 1 */
    for (unsigned short i_0 = 2; i_0 < 21; i_0 += 4) 
    {
        /* LoopNest 3 */
        for (unsigned short i_1 = 1; i_1 < 21; i_1 += 2) 
        {
            for (short i_2 = 2; i_2 < 21; i_2 += 3) 
            {
                for (unsigned char i_3 = 1; i_3 < 19; i_3 += 2) 
                {
                    {
                        arr_11 [i_2] [i_3 - 1] = ((/* implicit */short) arr_2 [i_3]);
                        arr_12 [i_2] = ((/* implicit */long long int) ((((((/* implicit */long long int) min((var_4), (((/* implicit */int) var_1))))) ^ (arr_2 [i_0 - 2]))) != (max((((/* implicit */long long int) max((((/* implicit */unsigned int) var_10)), (0U)))), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-21943))) : (4769318126697289501LL)))))));
                        var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(arr_10 [i_0 - 1] [i_0] [i_0] [i_0])))) && (((/* implicit */_Bool) ((unsigned long long int) var_11)))));
                        var_21 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) ((((/* implicit */int) var_10)) << (((arr_2 [i_3]) + (4246880688631657108LL)))))) ? (((((/* implicit */_Bool) (unsigned char)99)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0] [i_0] [i_0]))) : (arr_9 [i_0] [i_1]))) : (arr_9 [i_0 + 1] [i_2 - 1])))));
                        arr_13 [i_2] [i_1] [i_1 + 1] [i_2] [i_3] = ((/* implicit */unsigned long long int) var_15);
                    }
                } 
            } 
        } 
        var_22 -= ((((/* implicit */_Bool) var_15)) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_16)) - (((/* implicit */int) arr_8 [i_0 - 2] [i_0] [i_0]))))))))) : (var_15));
        arr_14 [i_0] = ((/* implicit */unsigned char) (((~(min((((/* implicit */unsigned long long int) 4294967295U)), (arr_9 [i_0] [i_0]))))) < (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_5 [i_0] [i_0]))))) / (((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (arr_10 [i_0 - 2] [i_0] [i_0] [i_0]))))))));
    }
}
