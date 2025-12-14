/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246886
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246886 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246886
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
    for (unsigned int i_0 = 1; i_0 < 12; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            {
                var_18 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)44)) ? (((/* implicit */int) (signed char)50)) : (((/* implicit */int) (unsigned short)3325))))) ? (((arr_4 [i_0]) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0] [i_0] [i_0]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) arr_5 [i_0 - 1])), ((unsigned short)32764))))))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [i_0 - 1]))) / ((-(arr_0 [i_0] [i_1]))))))));
                var_19 = ((/* implicit */unsigned char) min((((min((11977388841586545850ULL), (((/* implicit */unsigned long long int) (unsigned char)90)))) - (((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned short)62210), ((unsigned short)8267))))))), (max((((arr_1 [i_0] [i_1]) ? (arr_4 [i_0]) : (14521910608149901672ULL))), (((/* implicit */unsigned long long int) ((unsigned int) arr_4 [i_0])))))));
                var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) -2254437282852036905LL))));
            }
        } 
    } 
    var_21 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((var_7) < (((/* implicit */long long int) ((/* implicit */int) var_15))))))))) == (((((/* implicit */_Bool) max((var_3), (((/* implicit */unsigned int) var_13))))) ? (((/* implicit */unsigned long long int) var_7)) : (min((18446744073709551615ULL), (((/* implicit */unsigned long long int) var_5))))))));
    /* LoopSeq 1 */
    for (signed char i_2 = 0; i_2 < 17; i_2 += 3) 
    {
        var_22 ^= ((/* implicit */int) (!(((/* implicit */_Bool) (+(arr_10 [i_2]))))));
        arr_11 [i_2] = ((((/* implicit */_Bool) arr_9 [i_2])) ? (((/* implicit */unsigned long long int) arr_8 [i_2])) : (min((((/* implicit */unsigned long long int) (unsigned short)3325)), (14521910608149901684ULL))));
        var_23 = ((/* implicit */unsigned short) arr_7 [i_2]);
    }
    var_24 = ((/* implicit */_Bool) var_11);
}
