/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228483
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228483 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228483
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
    var_14 = ((/* implicit */unsigned short) var_7);
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        var_15 |= ((/* implicit */short) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (short)0))));
        var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) arr_3 [i_0]))));
    }
    /* LoopSeq 1 */
    for (int i_1 = 0; i_1 < 19; i_1 += 2) 
    {
        var_17 = max((max(((+(((/* implicit */int) (_Bool)1)))), (((((((/* implicit */int) arr_5 [i_1])) + (2147483647))) >> (((((/* implicit */int) arr_5 [i_1])) + (26691))))))), (((/* implicit */int) arr_5 [i_1])));
        arr_6 [i_1] = ((/* implicit */unsigned char) (+(((((/* implicit */int) max((arr_4 [i_1] [i_1]), (arr_4 [i_1] [i_1])))) + (((((/* implicit */int) arr_5 [i_1])) - (((/* implicit */int) arr_5 [i_1]))))))));
        /* LoopSeq 1 */
        for (long long int i_2 = 2; i_2 < 18; i_2 += 2) 
        {
            var_18 = ((/* implicit */unsigned long long int) arr_7 [i_1]);
            var_19 = ((/* implicit */_Bool) (~((+(((/* implicit */int) max((((/* implicit */unsigned short) arr_4 [i_1] [i_2])), (arr_8 [i_2] [i_2]))))))));
        }
        arr_10 [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */int) (_Bool)1)) / (1550736797)));
    }
    var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) max(((!(((/* implicit */_Bool) var_10)))), ((!((!(((/* implicit */_Bool) var_3)))))))))));
    var_21 |= ((/* implicit */long long int) min(((~(min((1550736797), (((/* implicit */int) (_Bool)1)))))), (((/* implicit */int) max((((/* implicit */unsigned short) var_11)), (max((var_10), (((/* implicit */unsigned short) var_8)))))))));
}
