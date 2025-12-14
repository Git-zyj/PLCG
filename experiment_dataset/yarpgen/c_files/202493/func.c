/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202493
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202493 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202493
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
    var_20 = ((/* implicit */int) ((((/* implicit */_Bool) max(((~(((/* implicit */int) var_2)))), (((/* implicit */int) (!(((/* implicit */_Bool) (short)24298)))))))) ? ((~(((((/* implicit */_Bool) (signed char)-10)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)25))))))));
    var_21 += ((/* implicit */unsigned short) ((signed char) ((_Bool) min((var_1), (var_11)))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 4; i_1 < 10; i_1 += 1) 
        {
            {
                var_22 |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */int) (_Bool)0)), (arr_5 [i_1])))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)182)) ? (1839629015) : (((/* implicit */int) var_19))))) : (((((/* implicit */long long int) -1839629015)) - (var_15)))))) ? (((((/* implicit */int) ((((/* implicit */int) arr_4 [2LL] [i_1] [2LL])) != (((/* implicit */int) var_2))))) * (((((/* implicit */int) (signed char)-50)) & (arr_6 [10U]))))) : (((/* implicit */int) ((((((/* implicit */_Bool) arr_5 [i_1])) ? (var_9) : (var_5))) > (((/* implicit */unsigned long long int) ((/* implicit */int) (!((_Bool)1))))))))));
                var_23 = ((/* implicit */int) max((var_23), (arr_6 [(unsigned short)2])));
                arr_7 [i_0] [i_1] = ((/* implicit */long long int) ((unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_12))))) ? (arr_6 [i_0]) : (((/* implicit */int) ((((/* implicit */int) arr_1 [1LL])) != (((/* implicit */int) var_4))))))));
                var_24 *= ((/* implicit */signed char) (_Bool)1);
            }
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_2 = 3; i_2 < 8; i_2 += 1) 
    {
        var_25 = ((/* implicit */signed char) (unsigned short)42573);
        var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)189)) ? (10ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -2070234245)) ? (((/* implicit */int) arr_0 [2LL])) : (arr_5 [i_2]))))));
        arr_10 [i_2] = ((/* implicit */short) (-((((_Bool)0) ? (8787704947693520443ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)7702)))))));
    }
    var_27 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) min((((/* implicit */int) max((var_17), (var_7)))), (((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_2))))))) * (max((((/* implicit */unsigned long long int) ((((((/* implicit */int) var_11)) + (2147483647))) << (((10ULL) - (10ULL)))))), (min((var_5), (((/* implicit */unsigned long long int) (unsigned char)66))))))));
}
