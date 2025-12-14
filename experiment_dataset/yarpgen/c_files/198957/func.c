/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198957
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198957 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198957
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
    for (signed char i_0 = 4; i_0 < 12; i_0 += 2) 
    {
        var_14 = ((/* implicit */short) min((((/* implicit */long long int) ((((/* implicit */int) arr_0 [i_0 - 3])) < (((/* implicit */int) var_8))))), (((((/* implicit */_Bool) arr_0 [i_0 + 3])) ? (((/* implicit */long long int) (+(((/* implicit */int) arr_0 [i_0 - 4]))))) : (arr_1 [i_0 + 2] [i_0])))));
        arr_2 [i_0] = ((/* implicit */_Bool) (~(min((((/* implicit */long long int) (unsigned short)57344)), ((~(arr_1 [i_0] [i_0])))))));
        var_15 += ((/* implicit */_Bool) min(((+(((var_1) % (((/* implicit */long long int) ((/* implicit */int) (short)32767))))))), (arr_1 [(_Bool)1] [(unsigned short)2])));
        var_16 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_1))));
    }
    /* LoopNest 2 */
    for (long long int i_1 = 3; i_1 < 14; i_1 += 4) 
    {
        for (unsigned short i_2 = 0; i_2 < 16; i_2 += 2) 
        {
            {
                var_17 = ((((((/* implicit */int) arr_6 [i_1 + 2] [i_1 + 1])) < (((/* implicit */int) arr_3 [i_1 - 3])))) || (((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)14)))))))));
                var_18 += ((/* implicit */long long int) (((+(((/* implicit */int) max((arr_5 [i_2]), (((/* implicit */short) arr_7 [i_1]))))))) % (((/* implicit */int) max((((/* implicit */short) (signed char)-15)), (arr_5 [i_2]))))));
                var_19 = ((/* implicit */_Bool) ((((((/* implicit */int) arr_5 [i_1])) % (((/* implicit */int) arr_5 [i_1])))) / (((/* implicit */int) ((var_10) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1]))))))));
            }
        } 
    } 
}
