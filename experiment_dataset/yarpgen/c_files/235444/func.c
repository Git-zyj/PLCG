/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235444
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235444 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235444
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
    var_11 = (((~(((((((/* implicit */int) var_1)) + (2147483647))) << (((((/* implicit */int) var_6)) - (8802))))))) ^ (((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) var_7)))))) == (((((/* implicit */_Bool) var_3)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        arr_2 [(short)11] = ((/* implicit */int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [(_Bool)1])))) & ((~(((/* implicit */int) (unsigned short)65535))))))) ? ((~(arr_0 [i_0]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [(short)10]))) : (arr_0 [i_0])))) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [9U])))) : (((/* implicit */int) arr_1 [i_0])))))));
        var_12 -= ((/* implicit */short) arr_1 [i_0]);
        var_13 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)57344)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)195)))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (signed char i_1 = 1; i_1 < 10; i_1 += 4) /* same iter space */
        {
            arr_6 [(short)4] = arr_1 [i_1];
            var_14 = ((/* implicit */short) (+(((/* implicit */int) arr_1 [i_0]))));
        }
        for (signed char i_2 = 1; i_2 < 10; i_2 += 4) /* same iter space */
        {
            var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_7 [(short)13] [i_0] [i_0]))))) ? (((((/* implicit */_Bool) arr_1 [i_2])) ? (((/* implicit */int) arr_3 [i_0] [i_2])) : (((/* implicit */int) arr_3 [i_2 + 1] [i_0])))) : (((((/* implicit */_Bool) arr_1 [i_2])) ? (((/* implicit */int) arr_9 [i_2] [i_2 - 1] [i_2])) : (((/* implicit */int) arr_9 [i_0] [i_0] [i_0]))))))) ? (arr_4 [i_0]) : ((-(((((/* implicit */_Bool) arr_7 [i_2] [i_0] [i_0])) ? (((/* implicit */int) arr_7 [(unsigned short)2] [i_2] [i_2])) : (((/* implicit */int) arr_5 [i_0])))))))))));
            var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_2])) ? (arr_4 [i_0]) : (((/* implicit */int) arr_9 [i_0] [i_0] [9ULL]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_2])) ? (((/* implicit */int) arr_8 [i_0] [i_2] [i_2])) : (((/* implicit */int) arr_8 [i_0] [i_0] [i_2]))))) : (((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (18446744073709551613ULL) : (((/* implicit */unsigned long long int) -756196964))))))) ? (((/* implicit */int) arr_5 [i_0])) : (((((((/* implicit */int) arr_7 [i_0] [i_0] [i_0])) - (((/* implicit */int) arr_8 [i_0] [(unsigned short)7] [i_2])))) * (((((/* implicit */int) arr_1 [i_2])) >> (((((/* implicit */int) arr_7 [i_2 + 2] [(unsigned char)8] [i_0])) - (124)))))))));
        }
        var_17 = ((/* implicit */int) ((((((((/* implicit */_Bool) 605158168)) ? (((/* implicit */unsigned long long int) 2097024)) : (arr_0 [i_0]))) / (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_8 [i_0] [i_0] [i_0]))))))) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((((/* implicit */_Bool) arr_4 [i_0])) ? (arr_4 [i_0]) : (((/* implicit */int) arr_8 [i_0] [(unsigned char)10] [i_0])))) : (((/* implicit */int) arr_3 [i_0] [i_0])))))));
    }
}
