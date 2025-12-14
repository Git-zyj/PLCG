/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195355
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195355 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195355
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_16 |= ((/* implicit */_Bool) min((max((arr_2 [6LL] [i_0]), (((/* implicit */short) (!(((/* implicit */_Bool) arr_2 [14U] [i_0]))))))), (((/* implicit */short) (!(((/* implicit */_Bool) max((arr_0 [0ULL] [i_0]), (arr_0 [0LL] [0LL])))))))));
        arr_3 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0] [i_0]))))) & (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (arr_0 [i_0] [i_0]) : (arr_0 [i_0] [i_0])))));
        /* LoopSeq 2 */
        for (unsigned short i_1 = 1; i_1 < 19; i_1 += 1) 
        {
            arr_7 [i_0] = ((/* implicit */unsigned short) min((min((((((/* implicit */_Bool) arr_5 [i_0])) ? (((/* implicit */int) arr_5 [i_0])) : (((/* implicit */int) arr_5 [i_0])))), ((+(((/* implicit */int) arr_5 [i_0])))))), ((+(arr_0 [i_0] [i_1 - 1])))));
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned char i_2 = 3; i_2 < 19; i_2 += 4) 
            {
                var_17 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_9 [i_2] [i_2 + 2] [i_1] [i_1]))));
                var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) ((((/* implicit */_Bool) (+(arr_10 [i_0] [i_1] [i_2] [11U])))) ? (((((/* implicit */_Bool) arr_0 [(unsigned short)2] [(unsigned short)20])) ? (((/* implicit */int) arr_2 [12LL] [12LL])) : (((/* implicit */int) arr_5 [i_1 - 1])))) : (arr_0 [(unsigned char)14] [i_2]))))));
                arr_12 [i_0] [i_0] = ((/* implicit */_Bool) arr_4 [(short)10] [i_0] [i_2]);
                arr_13 [i_0] = ((((/* implicit */_Bool) arr_0 [i_0] [i_2])) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_1 - 1] [i_2]))))) : (((/* implicit */int) arr_2 [i_0] [i_2 - 3])));
                arr_14 [i_0] [i_1] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_1 + 1] [i_1 + 1] [i_1 - 1]))));
            }
            for (int i_3 = 0; i_3 < 21; i_3 += 1) 
            {
                arr_19 [i_0] [i_0] = (+(((/* implicit */int) ((short) arr_10 [i_0] [i_0] [i_1 + 1] [4LL]))));
                var_19 = ((/* implicit */long long int) ((unsigned char) ((unsigned char) (!(((/* implicit */_Bool) arr_1 [i_3]))))));
                var_20 = ((/* implicit */unsigned char) (+(((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned int) arr_1 [i_1]))))))));
            }
            arr_20 [i_0] [i_0] = ((/* implicit */unsigned int) ((min((((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_4 [i_0] [i_0] [i_1])) : (((/* implicit */int) arr_5 [(_Bool)1])))), (((/* implicit */int) ((unsigned short) arr_6 [i_0] [i_1]))))) <= (((/* implicit */int) arr_5 [i_0]))));
        }
        for (unsigned short i_4 = 0; i_4 < 21; i_4 += 2) 
        {
            var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) min((arr_10 [i_0] [i_0] [i_0] [i_4]), (((((/* implicit */_Bool) arr_8 [(_Bool)1] [i_4] [i_4])) ? ((-(((/* implicit */int) arr_23 [i_0] [3LL])))) : (((/* implicit */int) max((arr_17 [i_0] [i_0] [i_4]), (arr_17 [i_0] [i_0] [i_4])))))))))));
            arr_25 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_16 [i_0]))))) ? (max((((/* implicit */int) (!(((/* implicit */_Bool) arr_16 [i_0]))))), ((-(((/* implicit */int) arr_11 [i_4] [7] [i_0])))))) : (arr_6 [i_0] [i_0])));
            arr_26 [i_0] [i_0] [i_4] = ((/* implicit */short) arr_0 [i_0] [i_4]);
        }
    }
    var_22 = ((/* implicit */unsigned short) min((max((var_15), (((/* implicit */long long int) (-(var_0)))))), (((/* implicit */long long int) var_7))));
}
