/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218672
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218672 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218672
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
    for (unsigned int i_0 = 2; i_0 < 13; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned int i_1 = 1; i_1 < 11; i_1 += 4) /* same iter space */
        {
            /* LoopNest 2 */
            for (signed char i_2 = 4; i_2 < 13; i_2 += 4) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 14; i_3 += 1) 
                {
                    {
                        var_16 = ((/* implicit */short) (+(((((/* implicit */long long int) ((/* implicit */int) var_8))) - (((((/* implicit */long long int) arr_1 [i_1])) - (9223372036854775799LL)))))));
                        var_17 = ((/* implicit */_Bool) ((unsigned long long int) arr_7 [(_Bool)1] [i_1 - 1] [i_1] [i_2] [i_3]));
                    }
                } 
            } 
            var_18 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-45)) ? (((/* implicit */long long int) (+(((((/* implicit */int) arr_8 [(_Bool)1] [i_1] [i_1 + 1] [8])) ^ (arr_3 [i_0] [i_0])))))) : (arr_7 [7LL] [i_0] [i_0] [i_1] [i_1])));
            var_19 = ((/* implicit */long long int) (-((~(((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0] [i_0])))))))));
            var_20 = ((/* implicit */int) arr_4 [i_1] [i_1 + 2] [i_1 + 1] [(unsigned char)9]);
            arr_9 [(_Bool)1] = ((/* implicit */unsigned long long int) -9223372036854775784LL);
        }
        /* vectorizable */
        for (unsigned int i_4 = 1; i_4 < 11; i_4 += 4) /* same iter space */
        {
            var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_0 - 2] [i_0] [i_0 - 2] [i_4] [i_4])) ? (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)49))) - (4294967295U))) : (((arr_10 [i_0] [i_0]) | (arr_1 [i_0]))))))));
            var_22 = ((/* implicit */int) (-((~(arr_5 [i_0] [i_0] [i_4])))));
        }
        arr_12 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) ((((((/* implicit */_Bool) arr_10 [i_0] [i_0])) ? (-4342573449010658196LL) : (((/* implicit */long long int) arr_10 [i_0] [i_0])))) > (((/* implicit */long long int) ((arr_10 [i_0 + 1] [i_0]) / (((/* implicit */unsigned int) 2038955836)))))))) + ((-(((/* implicit */int) arr_8 [i_0 + 1] [i_0] [i_0] [i_0 - 1]))))));
    }
    var_23 = ((/* implicit */int) max((var_23), (((/* implicit */int) var_8))));
}
