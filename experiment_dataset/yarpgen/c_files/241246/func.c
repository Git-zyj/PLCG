/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241246
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241246 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241246
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
    var_12 = ((/* implicit */int) (short)-22241);
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned short)27711))));
        var_13 ^= ((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned short)48367))));
    }
    /* LoopSeq 2 */
    for (int i_1 = 0; i_1 < 12; i_1 += 3) 
    {
        var_14 = ((/* implicit */_Bool) ((short) max((((int) 3647378999U)), (((/* implicit */int) ((short) (unsigned short)47525))))));
        var_15 = ((/* implicit */unsigned int) var_9);
    }
    for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 4) 
    {
        var_16 = max((((/* implicit */int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)17168))) > (8746986220298849571ULL)))) != (((/* implicit */int) arr_5 [(unsigned short)1]))))), (((((/* implicit */int) (_Bool)0)) + (((/* implicit */int) (unsigned short)12908)))));
        arr_11 [(short)8] = ((/* implicit */unsigned short) max((((/* implicit */int) arr_6 [i_2])), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_2])) ? (((/* implicit */int) (unsigned char)194)) : (((/* implicit */int) arr_8 [i_2]))))) ? (((/* implicit */int) max((arr_6 [i_2]), (var_7)))) : (((((/* implicit */int) arr_1 [i_2])) + (((/* implicit */int) arr_10 [i_2] [i_2]))))))));
        var_17 = ((/* implicit */unsigned short) (-(arr_9 [i_2])));
    }
    /* LoopSeq 1 */
    for (int i_3 = 2; i_3 < 9; i_3 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_4 = 1; i_4 < 7; i_4 += 4) 
        {
            arr_16 [i_3] = ((/* implicit */_Bool) (+((~(((/* implicit */int) (unsigned short)17168))))));
            var_18 = ((/* implicit */long long int) arr_14 [i_4] [i_3 - 2] [i_3 - 2]);
        }
        var_19 ^= ((/* implicit */long long int) min((((((/* implicit */int) (unsigned short)52609)) - (((/* implicit */int) ((((/* implicit */int) var_4)) == (((/* implicit */int) arr_12 [i_3 - 1]))))))), ((~(((/* implicit */int) min(((unsigned short)31373), (((/* implicit */unsigned short) arr_13 [i_3])))))))));
        arr_17 [i_3] [1LL] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_6 [i_3]))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_13 [i_3])) || (((((/* implicit */_Bool) arr_13 [i_3])) && (((/* implicit */_Bool) 2040180798))))))) : (((/* implicit */int) arr_13 [i_3 + 2]))));
    }
}
