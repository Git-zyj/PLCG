/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215299
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215299 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215299
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
    var_20 = (_Bool)1;
    var_21 = ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) max((var_1), (((unsigned short) var_1))))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) var_5))) || (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_10)), (var_7))))))), (((unsigned long long int) arr_0 [i_0])))))));
        var_23 = ((/* implicit */short) (~(max((var_12), (((/* implicit */unsigned long long int) arr_1 [i_0]))))));
        var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) max(((+(((/* implicit */int) (!(((/* implicit */_Bool) var_8))))))), (((/* implicit */int) (short)15482)))))));
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 3; i_2 < 21; i_2 += 3) 
            {
                {
                    var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (((_Bool)0) ? (((/* implicit */int) (_Bool)1)) : (arr_3 [i_0] [i_1] [i_1])))), ((~(var_9)))))) ? (576460752303423487LL) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_2 - 1])))));
                    var_26 = ((/* implicit */short) ((((/* implicit */_Bool) ((arr_6 [i_0] [i_2 - 3] [i_2]) ? (((/* implicit */int) arr_6 [i_0] [i_2 + 1] [i_0])) : (((/* implicit */int) arr_6 [i_2] [i_2 + 1] [i_2]))))) || (((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_2 [i_0])) ? (var_15) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0] [i_1] [i_2]))))), (var_15))))));
                }
            } 
        } 
        arr_8 [i_0] [i_0] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) max(((short)-15510), (((/* implicit */short) (signed char)-92)))))));
    }
    var_27 = ((/* implicit */int) var_10);
}
