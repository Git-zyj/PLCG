/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202286
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202286 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202286
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
    var_14 = ((/* implicit */unsigned int) (unsigned short)65535);
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) arr_1 [i_0]);
        var_15 += ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */long long int) ((unsigned char) (unsigned char)25))), (max((((/* implicit */long long int) arr_0 [4LL])), (arr_1 [(_Bool)1])))))) ? (((/* implicit */int) max((var_1), (((/* implicit */unsigned char) arr_0 [(unsigned short)6]))))) : (min((((((/* implicit */_Bool) arr_0 [(signed char)8])) ? (((/* implicit */int) (short)-32751)) : (((/* implicit */int) arr_0 [(_Bool)1])))), (((/* implicit */int) (unsigned short)65512))))));
        arr_3 [i_0] = ((/* implicit */unsigned char) min((max((((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) / (arr_1 [i_0]))), (((/* implicit */long long int) ((unsigned char) -1178906649))))), (((/* implicit */long long int) ((unsigned short) ((((/* implicit */int) var_1)) / (((/* implicit */int) (unsigned short)20770))))))));
        var_16 = ((/* implicit */long long int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) -1958186729)) ? (arr_1 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_9)))))) || (((/* implicit */_Bool) arr_1 [i_0])))), ((((!(((/* implicit */_Bool) arr_1 [i_0])))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_1 [i_0]) : (arr_1 [i_0]))))))));
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_17 = ((((arr_5 [i_1] [(unsigned short)0]) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_10)))) == (((((/* implicit */_Bool) (unsigned char)244)) ? (((/* implicit */int) arr_4 [i_1])) : (((/* implicit */int) arr_5 [i_1] [i_1])))));
        arr_6 [i_1] [i_1] = ((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)44765)) & (((/* implicit */int) arr_4 [i_1]))))) & (((arr_5 [i_1] [i_1]) ? (339868614U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1]))))));
        var_18 |= ((/* implicit */_Bool) ((unsigned long long int) (~(((/* implicit */int) arr_4 [8ULL])))));
    }
    var_19 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_11)), ((((!(((/* implicit */_Bool) 4294967295U)))) ? ((((_Bool)0) ? (10LL) : (((/* implicit */long long int) ((/* implicit */int) var_11))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_9)) : (var_0))))))));
}
