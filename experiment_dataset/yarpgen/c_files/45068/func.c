/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45068
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45068 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45068
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
    var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) (-(((((/* implicit */_Bool) ((((/* implicit */int) var_5)) & (((/* implicit */int) var_3))))) ? (((/* implicit */int) max((((/* implicit */unsigned short) var_8)), ((unsigned short)42635)))) : (((/* implicit */int) (unsigned short)22900)))))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (long long int i_0 = 3; i_0 < 16; i_0 += 3) 
    {
        var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-102)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) var_14)))))) ? ((~(var_9))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)46925)) ? (((/* implicit */int) (signed char)-26)) : (((/* implicit */int) (signed char)118)))))));
        arr_3 [i_0] = (signed char)28;
        var_17 ^= ((/* implicit */unsigned short) var_0);
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_1 [i_0]))));
    }
    /* vectorizable */
    for (signed char i_1 = 0; i_1 < 11; i_1 += 4) 
    {
        var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_13))));
        var_19 = ((/* implicit */unsigned short) var_8);
        /* LoopSeq 2 */
        for (unsigned short i_2 = 2; i_2 < 10; i_2 += 2) /* same iter space */
        {
            var_20 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [(signed char)5])) ? (((/* implicit */int) (unsigned short)22900)) : (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) (signed char)-28)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)28))) : (var_7))) : (arr_0 [i_2])));
            var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_2])) ? (((/* implicit */int) var_13)) : (((((/* implicit */_Bool) 16383LL)) ? (((/* implicit */int) var_4)) : (815276444)))));
        }
        for (unsigned short i_3 = 2; i_3 < 10; i_3 += 2) /* same iter space */
        {
            arr_14 [i_1] [i_3] [i_3] = var_1;
            var_22 -= ((/* implicit */long long int) (+(arr_12 [i_3 - 2])));
        }
        arr_15 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_7 [i_1] [i_1])) ? (((/* implicit */int) arr_7 [i_1] [i_1])) : (((/* implicit */int) arr_7 [i_1] [i_1]))));
        var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_6 [(_Bool)1])) ? (((var_9) % (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_1] [i_1]))))) : (arr_0 [i_1])));
    }
    for (signed char i_4 = 2; i_4 < 8; i_4 += 4) 
    {
        var_24 = ((/* implicit */signed char) ((var_10) == (((/* implicit */long long int) ((/* implicit */int) min((arr_2 [i_4]), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_9 [i_4] [i_4])) || (((/* implicit */_Bool) arr_6 [(signed char)6])))))))))));
        var_25 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_4 - 1])) ? (arr_12 [i_4 - 1]) : (arr_12 [i_4 - 2])))) ? (((((/* implicit */_Bool) (signed char)-46)) ? (arr_9 [(signed char)9] [i_4 - 2]) : (((/* implicit */long long int) ((/* implicit */int) var_6))))) : (arr_9 [i_4 + 1] [i_4 - 2])));
        var_26 ^= ((/* implicit */signed char) ((((((/* implicit */_Bool) max((((/* implicit */int) arr_11 [i_4] [(signed char)3] [i_4])), (arr_6 [2ULL])))) ? (((((/* implicit */_Bool) (unsigned short)4)) ? (var_12) : (var_12))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_4])) ? (-815276444) : (((/* implicit */int) (unsigned short)56836))))))) | (((/* implicit */long long int) ((/* implicit */int) var_4)))));
    }
}
