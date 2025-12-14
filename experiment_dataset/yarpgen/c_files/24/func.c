/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24
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
    var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) var_16)))) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (short)-2)))) : ((-(((/* implicit */int) var_6))))))))))));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            var_20 -= ((/* implicit */long long int) ((((/* implicit */_Bool) max((((arr_3 [i_1] [i_0]) & (arr_4 [i_1]))), (((/* implicit */unsigned long long int) arr_0 [i_1]))))) ? ((~(((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [i_1]))) : (arr_4 [i_0]))))) : (((/* implicit */unsigned long long int) ((var_3) ? (((/* implicit */int) arr_6 [7ULL] [i_0] [i_0])) : (((/* implicit */int) arr_5 [i_0] [i_1] [i_1])))))));
            var_21 = ((/* implicit */_Bool) var_4);
            var_22 = ((/* implicit */short) arr_4 [(unsigned short)8]);
        }
        for (unsigned short i_2 = 0; i_2 < 23; i_2 += 1) 
        {
            arr_10 [i_2] [i_2] [i_2] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((_Bool) arr_1 [i_2] [i_0]))), (((((/* implicit */_Bool) ((((/* implicit */int) arr_8 [i_2] [i_2])) ^ (((/* implicit */int) arr_7 [i_2] [i_2] [i_0]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */int) arr_9 [i_2])) : (((/* implicit */int) arr_8 [i_2] [i_2]))))) : (min((((/* implicit */unsigned long long int) (short)1)), (10390913582585456393ULL)))))));
            var_23 |= ((/* implicit */long long int) ((arr_5 [i_2] [i_0] [i_0]) ? (((((/* implicit */_Bool) arr_3 [(unsigned char)0] [(unsigned char)0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (min((var_15), (((/* implicit */unsigned long long int) arr_8 [(_Bool)1] [(_Bool)1])))))) : (max((((/* implicit */unsigned long long int) arr_0 [i_0])), (((10390913582585456402ULL) ^ (((/* implicit */unsigned long long int) -3311307724106773885LL))))))));
            var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) -8942714188274197269LL)) ? (8055830491124095217ULL) : (((/* implicit */unsigned long long int) 8942714188274197268LL))));
        }
        /* LoopSeq 1 */
        for (unsigned long long int i_3 = 0; i_3 < 23; i_3 += 1) 
        {
            arr_13 [i_3] = ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_3]))) < (arr_4 [i_3]))) ? (((/* implicit */unsigned long long int) (+(arr_11 [i_0] [i_0])))) : (min((((/* implicit */unsigned long long int) arr_11 [i_0] [i_0])), (arr_4 [i_3]))));
            var_25 *= ((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))));
        }
        arr_14 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)65527)) ? (((16958123494889848663ULL) & (((((/* implicit */unsigned long long int) arr_11 [i_0] [i_0])) * (arr_3 [(signed char)22] [i_0]))))) : (max((arr_3 [i_0] [18ULL]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 8055830491124095236ULL)) ? (8942714188274197268LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))))));
    }
    var_26 = ((/* implicit */short) (+((~(min((((/* implicit */unsigned long long int) var_11)), (5641982415396759142ULL)))))));
    var_27 = ((/* implicit */_Bool) var_17);
}
