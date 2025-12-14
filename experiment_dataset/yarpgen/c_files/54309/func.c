/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54309
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54309 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54309
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
    var_20 = var_11;
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        arr_3 [(_Bool)1] = ((/* implicit */unsigned long long int) ((signed char) min((((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_0 [i_0] [i_0])), (arr_2 [i_0])))), (((((/* implicit */_Bool) 8775447018058728056LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (var_10))))));
        var_21 += ((/* implicit */unsigned char) min(((+(((/* implicit */int) ((((/* implicit */_Bool) 5084583698756718567ULL)) || (((/* implicit */_Bool) 367554803224607978LL))))))), (((/* implicit */int) var_5))));
    }
    /* vectorizable */
    for (unsigned int i_1 = 0; i_1 < 17; i_1 += 1) 
    {
        arr_6 [i_1] = ((/* implicit */long long int) (-(((/* implicit */int) (_Bool)0))));
        var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [i_1] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_1]))) : (arr_2 [i_1])));
        /* LoopSeq 1 */
        for (short i_2 = 0; i_2 < 17; i_2 += 4) 
        {
            /* LoopSeq 1 */
            for (int i_3 = 0; i_3 < 17; i_3 += 3) 
            {
                var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)58)) ? (((/* implicit */int) arr_1 [i_1])) : (((/* implicit */int) (short)17513)))))));
                arr_13 [i_1] [(unsigned char)12] [i_1] [i_3] = ((/* implicit */short) (-(((((/* implicit */_Bool) (signed char)-59)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)17496))) : (1663431617897664766ULL)))));
            }
            /* LoopSeq 1 */
            for (unsigned char i_4 = 0; i_4 < 17; i_4 += 2) 
            {
                arr_16 [i_1] [i_2] [i_4] = ((/* implicit */unsigned int) (-(((var_13) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) (short)-17528)))))));
                /* LoopSeq 1 */
                for (int i_5 = 0; i_5 < 17; i_5 += 1) 
                {
                    var_24 += ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (short)32761))));
                    arr_19 [i_2] [i_5] [i_1] [i_1] [i_2] [i_1] = ((arr_7 [i_5]) - (arr_7 [i_1]));
                }
                arr_20 [i_1] [(signed char)7] [(signed char)7] [i_1] = ((/* implicit */long long int) arr_11 [i_1]);
            }
        }
        arr_21 [i_1] [i_1] = ((/* implicit */long long int) var_15);
    }
}
