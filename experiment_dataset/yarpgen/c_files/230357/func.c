/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230357
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230357 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230357
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
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0]))));
            arr_5 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */int) arr_3 [i_0] [i_0])) - (((/* implicit */int) arr_3 [i_0] [i_1]))));
            var_16 = ((/* implicit */int) max((var_16), (((/* implicit */int) ((arr_2 [i_0] [(signed char)12]) / (arr_2 [i_0] [(signed char)10]))))));
        }
        var_17 *= ((/* implicit */signed char) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) arr_0 [(unsigned short)2])) : (((/* implicit */int) (short)18761))))) ? (((/* implicit */int) (short)18767)) : (((((((/* implicit */int) (short)18753)) > (2124331258))) ? (((((/* implicit */int) (signed char)-40)) * (((/* implicit */int) (short)-18762)))) : (((/* implicit */int) min((((/* implicit */short) (signed char)-40)), ((short)18767))))))));
    }
    var_18 = ((/* implicit */short) var_2);
    /* LoopSeq 1 */
    for (short i_2 = 0; i_2 < 19; i_2 += 3) 
    {
        arr_9 [i_2] = ((/* implicit */signed char) min((min((min((((/* implicit */unsigned long long int) arr_3 [i_2] [i_2])), (arr_2 [i_2] [i_2]))), (((/* implicit */unsigned long long int) min((arr_4 [i_2] [i_2]), (arr_4 [i_2] [i_2])))))), (((/* implicit */unsigned long long int) ((signed char) (!(((/* implicit */_Bool) arr_0 [i_2]))))))));
        arr_10 [i_2] = min((min((((((/* implicit */_Bool) arr_6 [i_2] [i_2])) ? (((/* implicit */int) arr_1 [i_2])) : (((/* implicit */int) arr_7 [i_2])))), (((/* implicit */int) arr_7 [i_2])))), (((((_Bool) arr_8 [i_2])) ? (((arr_4 [(_Bool)1] [i_2]) ? (arr_6 [i_2] [i_2]) : (((/* implicit */int) arr_7 [i_2])))) : (((/* implicit */int) arr_0 [i_2])))));
        var_19 = ((/* implicit */signed char) min((((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_3 [i_2] [i_2])), (arr_2 [i_2] [i_2])))) ? (((/* implicit */int) min((((/* implicit */signed char) arr_3 [i_2] [i_2])), (arr_0 [i_2])))) : (((/* implicit */int) ((signed char) arr_3 [i_2] [i_2]))))), (min((((arr_4 [i_2] [i_2]) ? (((/* implicit */int) arr_0 [i_2])) : (arr_6 [i_2] [i_2]))), (((((/* implicit */_Bool) arr_8 [i_2])) ? (((/* implicit */int) arr_4 [i_2] [i_2])) : (((/* implicit */int) arr_1 [i_2]))))))));
        var_20 = ((/* implicit */short) ((((min((((/* implicit */unsigned long long int) arr_1 [i_2])), (arr_2 [i_2] [i_2]))) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_1 [i_2])))))) | (((/* implicit */unsigned long long int) ((((/* implicit */int) ((signed char) arr_2 [i_2] [i_2]))) & (((/* implicit */int) min((arr_4 [i_2] [i_2]), (arr_4 [i_2] [i_2])))))))));
    }
    var_21 -= ((/* implicit */short) ((((/* implicit */int) var_14)) >= (((/* implicit */int) ((_Bool) ((((/* implicit */int) var_5)) - (((/* implicit */int) var_0))))))));
}
