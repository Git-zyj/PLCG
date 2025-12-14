/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45840
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45840 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45840
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
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        /* LoopSeq 2 */
        for (unsigned short i_1 = 1; i_1 < 23; i_1 += 2) /* same iter space */
        {
            arr_6 [i_0] [i_1 + 2] = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) var_0)), (((arr_4 [i_1 + 2]) >> (((arr_4 [i_1 + 2]) - (4182572846283285905ULL)))))));
            var_14 = ((/* implicit */short) min((((((/* implicit */_Bool) arr_4 [i_1 - 1])) ? (arr_4 [i_1 + 2]) : (arr_4 [i_1 - 1]))), (((/* implicit */unsigned long long int) -8070552711556385875LL))));
            arr_7 [i_1 - 1] = ((/* implicit */short) ((((/* implicit */_Bool) min(((~(((/* implicit */int) arr_5 [i_0])))), (((/* implicit */int) arr_5 [i_0]))))) ? (((/* implicit */int) var_9)) : (((((/* implicit */_Bool) max((((/* implicit */unsigned short) var_12)), (var_6)))) ? (((/* implicit */int) arr_3 [i_1 - 1] [i_1 - 1])) : (((/* implicit */int) min(((unsigned short)65528), (((/* implicit */unsigned short) (short)-23849)))))))));
        }
        for (unsigned short i_2 = 1; i_2 < 23; i_2 += 2) /* same iter space */
        {
            var_15 = ((/* implicit */unsigned short) arr_5 [i_2]);
            arr_10 [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_0])) ? (((/* implicit */int) arr_3 [i_0] [i_2 + 2])) : (((/* implicit */int) arr_9 [i_0]))))) ? (((((/* implicit */_Bool) 3886111788214977266LL)) ? (((((/* implicit */int) var_7)) * (((/* implicit */int) arr_1 [i_0])))) : ((-(((/* implicit */int) arr_9 [i_2 - 1])))))) : (((/* implicit */int) var_5))));
            arr_11 [i_0] [i_2] [i_2 - 1] = var_0;
        }
        var_16 = ((/* implicit */unsigned char) ((((/* implicit */long long int) var_2)) & (min((((/* implicit */long long int) (unsigned char)2)), (-7814869213042940927LL)))));
    }
    var_17 = ((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */_Bool) min((var_4), (var_12)))) ? (min((var_1), (((/* implicit */int) var_7)))) : (((/* implicit */int) var_5)))));
    var_18 = ((/* implicit */unsigned char) var_11);
    var_19 ^= ((/* implicit */unsigned char) var_1);
}
