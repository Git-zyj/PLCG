/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203146
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203146 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203146
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
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_2 [i_0])), ((~(((8610412720788409153LL) + (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))))))));
        var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) 5554858472147562428ULL))));
        /* LoopSeq 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
        {
            var_21 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) var_7))))) ? (((((/* implicit */_Bool) -8610412720788409154LL)) ? (1913359143) : (-1272996396))) : (((/* implicit */int) var_6)));
            var_22 ^= ((/* implicit */short) var_6);
            var_23 *= ((/* implicit */signed char) max((((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) (unsigned char)0)))), (((((/* implicit */_Bool) (unsigned char)255)) || (((/* implicit */_Bool) arr_4 [i_0] [i_0]))))));
            arr_5 [i_0] [i_1] &= ((/* implicit */int) var_7);
        }
        /* vectorizable */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
        {
            var_24 = ((/* implicit */int) max((var_24), (((/* implicit */int) 8610412720788409162LL))));
            var_25 = ((/* implicit */_Bool) max((var_25), (((((/* implicit */unsigned long long int) arr_4 [i_0] [i_0])) >= (var_4)))));
        }
        arr_8 [12LL] |= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [(_Bool)1] [i_0])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_1 [i_0] [i_0]))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) arr_0 [i_0]))))) : (((((/* implicit */unsigned int) ((/* implicit */int) var_16))) | (var_11)))));
    }
    for (short i_3 = 0; i_3 < 19; i_3 += 2) 
    {
        var_26 |= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_10 [i_3]))));
        /* LoopSeq 1 */
        for (unsigned long long int i_4 = 0; i_4 < 19; i_4 += 1) 
        {
            var_27 = ((/* implicit */short) min((var_27), (((/* implicit */short) var_4))));
            var_28 = ((/* implicit */unsigned long long int) max((var_28), (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) min((((/* implicit */short) (unsigned char)2)), (arr_13 [i_4] [i_3])))) : (((((/* implicit */_Bool) arr_14 [(_Bool)1] [i_4])) ? (((/* implicit */int) arr_10 [(short)8])) : (((/* implicit */int) (unsigned char)254)))))))))));
        }
    }
    var_29 = ((/* implicit */int) min((var_29), (((/* implicit */int) var_10))));
}
