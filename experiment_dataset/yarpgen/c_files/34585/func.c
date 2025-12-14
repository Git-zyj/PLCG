/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34585
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34585 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34585
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_16 = ((/* implicit */short) (-(((/* implicit */int) arr_4 [i_0 - 1] [i_0 - 1]))));
            var_17 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 3878725874308140896LL)) ? (17052856530837350782ULL) : (arr_2 [(unsigned short)13]))))));
        }
        var_18 ^= ((/* implicit */unsigned char) arr_2 [i_0 - 1]);
        var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) 817598108)) | (arr_1 [i_0])))) ? (((/* implicit */int) (unsigned short)19252)) : ((~(((/* implicit */int) (unsigned short)62856))))));
    }
    /* vectorizable */
    for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) /* same iter space */
    {
        var_20 ^= ((/* implicit */int) arr_1 [i_2]);
        var_21 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_6 [i_2]))));
        /* LoopSeq 1 */
        for (unsigned int i_3 = 0; i_3 < 25; i_3 += 4) 
        {
            arr_9 [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? ((-(((/* implicit */int) (unsigned short)41931)))) : (-1990028633)));
            var_22 = ((/* implicit */short) ((unsigned short) (-(((/* implicit */int) (unsigned short)23605)))));
            arr_10 [i_2] [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)138)) ? (arr_1 [i_2 - 1]) : (arr_1 [i_2 - 1])));
            var_23 += ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_15))));
            arr_11 [i_2] [(_Bool)1] [i_2] = ((((/* implicit */_Bool) -486984559)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_2] [(unsigned char)14] [i_3])) ? (1393887542872200842ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)25)))))));
        }
    }
    for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) /* same iter space */
    {
        arr_15 [i_4] = ((/* implicit */unsigned char) (+(arr_2 [i_4])));
        var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((var_4), (((/* implicit */int) arr_5 [i_4] [(unsigned short)18]))))) ? ((~(arr_12 [(unsigned short)6]))) : (((/* implicit */unsigned long long int) (+(((((/* implicit */unsigned int) ((/* implicit */int) (short)(-32767 - 1)))) - (arr_14 [i_4]))))))));
        var_25 += ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (arr_0 [10LL]) : (((/* implicit */int) var_10))))) ? (((/* implicit */int) (unsigned short)46284)) : (((/* implicit */int) ((unsigned char) arr_4 [i_4] [i_4]))))) / (max((max((((/* implicit */int) arr_5 [(unsigned char)6] [10U])), (arr_0 [i_4]))), (((((/* implicit */_Bool) arr_7 [i_4] [8U])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_12))))))));
        arr_16 [i_4] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [i_4 - 1] [(_Bool)1])) ? (((/* implicit */int) arr_5 [i_4 - 1] [(short)22])) : (((/* implicit */int) (short)-6447))))) | (3701700452U)));
    }
    var_26 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_0))));
    var_27 = ((/* implicit */short) var_12);
}
