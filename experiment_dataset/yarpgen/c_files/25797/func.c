/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25797
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25797 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25797
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 3; i_0 < 11; i_0 += 4) 
    {
        for (int i_1 = 1; i_1 < 11; i_1 += 2) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) max((((/* implicit */int) ((signed char) arr_5 [i_0] [4LL] [i_0]))), ((((!(var_8))) ? ((~(((/* implicit */int) (short)21035)))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_0 [(_Bool)1] [7U])) || (((/* implicit */_Bool) arr_3 [(unsigned short)11] [i_2]))))))))))));
                    var_20 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_6 [10LL] [i_1 + 1]) << (((arr_6 [8U] [i_1 - 1]) - (1596055948091093679LL)))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [2] [i_1 + 1])) ? (arr_6 [10] [i_1 + 1]) : (((/* implicit */long long int) 523806847)))))));
                    arr_7 [i_0] [i_1] [i_2] = ((/* implicit */signed char) (+(((((/* implicit */_Bool) ((signed char) var_1))) ? (((/* implicit */int) ((unsigned char) arr_2 [1ULL]))) : (arr_3 [i_1] [i_1])))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((long long int) var_16)), (((/* implicit */long long int) var_15))))) ? (7348875203936825758ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))));
}
