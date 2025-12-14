/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227599
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227599 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227599
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
    var_17 = ((/* implicit */short) ((((/* implicit */_Bool) var_0)) ? (min((((/* implicit */unsigned long long int) (signed char)9)), (((((/* implicit */_Bool) var_16)) ? (10562086366005847504ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_11)) : (((((/* implicit */int) var_6)) + (((/* implicit */int) (short)-1)))))))));
    var_18 = ((/* implicit */long long int) var_13);
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (long long int i_1 = 3; i_1 < 11; i_1 += 2) 
        {
            arr_4 [i_0] [i_1] [i_1] |= ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [6U] [i_1] [i_0]))) != (0U)));
            var_19 = arr_3 [i_0] [i_1] [i_0];
            arr_5 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) ((unsigned char) var_2))) : (((((/* implicit */_Bool) (short)2)) ? (arr_0 [i_0]) : (((/* implicit */int) (_Bool)1))))));
        }
        var_20 = ((/* implicit */unsigned int) (unsigned short)54567);
    }
    for (unsigned short i_2 = 0; i_2 < 23; i_2 += 4) 
    {
        var_21 = ((/* implicit */int) arr_7 [i_2]);
        /* LoopSeq 1 */
        for (signed char i_3 = 0; i_3 < 23; i_3 += 2) 
        {
            var_22 = ((/* implicit */_Bool) min((((/* implicit */int) (signed char)4)), (((((/* implicit */_Bool) ((((/* implicit */int) var_13)) & (((/* implicit */int) var_6))))) ? (((/* implicit */int) var_6)) : ((((_Bool)1) ? (((/* implicit */int) arr_8 [i_2])) : (((/* implicit */int) (unsigned short)14494))))))));
            arr_12 [0] [0] = ((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1)))))));
        }
        var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_11)) >= (((/* implicit */int) arr_11 [i_2])))))) - ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)39255))) : (arr_9 [(unsigned char)21])))))) ? (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (_Bool)1)), (0U)))) : (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (signed char)-119)) : (arr_6 [i_2])))), (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) arr_6 [i_2])) : (13665341436895806068ULL))))))))));
    }
    var_24 = ((/* implicit */long long int) max((var_24), (((/* implicit */long long int) ((((/* implicit */_Bool) max((16406951849659880687ULL), (((/* implicit */unsigned long long int) var_12))))) ? (var_15) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) -1809574246865870903LL)) || (((/* implicit */_Bool) var_15))))) == (((/* implicit */int) (short)-24065)))))))))));
    var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) 268435455ULL)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (signed char)127))));
}
