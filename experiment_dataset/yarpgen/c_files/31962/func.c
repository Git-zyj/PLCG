/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31962
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31962 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31962
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
    for (short i_0 = 3; i_0 < 20; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            {
                /* LoopSeq 1 */
                for (signed char i_2 = 0; i_2 < 21; i_2 += 1) 
                {
                    arr_8 [i_0] [i_0] [i_2] [i_0 - 1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) min((arr_3 [i_0 - 1]), (var_6))))));
                    var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) min((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) arr_3 [i_0 - 1])), (((((/* implicit */_Bool) (signed char)57)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [(short)17]))) : (0U)))))), (((((/* implicit */_Bool) max((((/* implicit */unsigned char) var_7)), (arr_3 [i_0])))) ? (((15986723991614597621ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_1]))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)193)) * (((/* implicit */int) (short)-18888))))))))))));
                }
                arr_9 [(_Bool)1] [(short)16] [i_1] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) arr_4 [i_0])), ((-(arr_7 [i_1] [i_1] [i_0] [11U])))));
            }
        } 
    } 
    var_18 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_13)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-57)) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) var_1))))) ? (min((((/* implicit */unsigned long long int) (unsigned char)210)), (var_0))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)-58)) * (((/* implicit */int) (_Bool)1)))))))));
    var_19 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) (short)-1872)) ? (((/* implicit */unsigned long long int) var_12)) : (min((((/* implicit */unsigned long long int) (unsigned char)222)), (2334561626123068207ULL))))) >> (((var_0) - (11385731256783865410ULL)))));
    var_20 = ((/* implicit */signed char) var_14);
}
