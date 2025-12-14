/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21853
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21853 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21853
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
    var_11 = ((/* implicit */unsigned long long int) ((_Bool) max((1510754996), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (short)2084)))))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        var_12 = ((/* implicit */short) min((var_12), (((/* implicit */short) ((((/* implicit */int) ((arr_0 [(unsigned short)13] [(unsigned short)13]) <= (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))) : (arr_0 [i_0] [i_0])))))) | ((~(((/* implicit */int) arr_1 [i_0])))))))));
        arr_2 [i_0] [i_0] &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_6))))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) == (arr_0 [i_0] [i_0])))) : (((((/* implicit */_Bool) (short)-2084)) ? (((/* implicit */int) (short)-2072)) : (-536870912)))));
        var_13 = ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)0))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) ((_Bool) arr_0 [i_0] [i_0]))) & ((~(((/* implicit */int) (signed char)87))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) (signed char)87)) : (((/* implicit */int) (signed char)-67))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)-2084))))) : (max((((/* implicit */unsigned long long int) (signed char)87)), (7648367773577858065ULL))))));
    }
    for (int i_1 = 0; i_1 < 23; i_1 += 1) 
    {
        arr_5 [i_1] = ((/* implicit */unsigned char) ((max((((/* implicit */long long int) arr_4 [8] [i_1])), (((-1969125551311725205LL) ^ (((/* implicit */long long int) ((/* implicit */int) (unsigned short)19034))))))) > (((/* implicit */long long int) (((!(((/* implicit */_Bool) (short)-2084)))) ? (((/* implicit */int) (_Bool)0)) : ((+(((/* implicit */int) (signed char)-67)))))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (int i_2 = 0; i_2 < 23; i_2 += 3) 
        {
            var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (short)-2084))) : (var_10)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_1]))))) : ((-(((/* implicit */int) arr_7 [i_2] [i_2] [i_1]))))));
            arr_9 [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_1])) ? (((/* implicit */unsigned long long int) arr_3 [i_1])) : (arr_6 [i_1])))) && ((!(((/* implicit */_Bool) arr_3 [i_2]))))));
            var_15 = ((/* implicit */unsigned char) arr_6 [i_2]);
        }
    }
}
