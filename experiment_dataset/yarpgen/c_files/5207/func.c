/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5207
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5207 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5207
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
    var_19 = ((/* implicit */short) var_12);
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        var_20 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (938436833851622735LL) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0])))))) ? (((/* implicit */int) var_7)) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) (signed char)-40))))));
        arr_2 [i_0] = (unsigned short)3341;
        var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) var_2)))))));
    }
    for (unsigned int i_1 = 4; i_1 < 16; i_1 += 2) 
    {
        arr_6 [i_1] = ((/* implicit */unsigned short) ((signed char) arr_3 [i_1 + 1] [i_1]));
        var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) max((((((/* implicit */_Bool) max((arr_4 [i_1] [i_1 - 3]), (((/* implicit */unsigned short) var_10))))) ? (((((/* implicit */_Bool) arr_1 [(unsigned short)7])) ? (((/* implicit */int) arr_5 [i_1])) : (((/* implicit */int) arr_4 [14LL] [14LL])))) : (((/* implicit */int) arr_3 [i_1 - 2] [(unsigned short)3])))), (((/* implicit */int) var_12)))))));
    }
    /* vectorizable */
    for (unsigned short i_2 = 0; i_2 < 17; i_2 += 2) 
    {
        var_23 &= ((/* implicit */long long int) ((((/* implicit */int) arr_4 [i_2] [i_2])) / (((/* implicit */int) arr_4 [i_2] [i_2]))));
        var_24 *= ((/* implicit */short) (((!(var_7))) ? (((/* implicit */long long int) ((/* implicit */int) arr_8 [(_Bool)1] [i_2]))) : ((((_Bool)0) ? (938436833851622735LL) : (((/* implicit */long long int) 1903933283U))))));
        /* LoopSeq 1 */
        for (signed char i_3 = 0; i_3 < 17; i_3 += 4) 
        {
            arr_12 [i_2] [i_3] [i_3] &= ((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_10 [i_2] [i_2])) : (((/* implicit */int) var_2)))) : ((~(((/* implicit */int) var_4))))));
            /* LoopSeq 3 */
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                arr_16 [i_2] |= ((/* implicit */short) (signed char)-34);
                arr_17 [i_4] [(_Bool)1] [i_4] = ((/* implicit */unsigned int) 938436833851622735LL);
                var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_3])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_1 [i_4]))));
            }
            for (unsigned short i_5 = 0; i_5 < 17; i_5 += 2) 
            {
                arr_21 [i_2] [i_2] [i_3] [14] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_2] [i_3]))) : (((((/* implicit */_Bool) arr_3 [i_2] [i_2])) ? (arr_15 [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_5])))))));
                arr_22 [(unsigned short)12] [i_3] [i_5] [(unsigned short)12] = (+(arr_19 [i_2] [i_2] [i_2] [i_2]));
            }
            for (int i_6 = 0; i_6 < 17; i_6 += 3) 
            {
                var_26 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_8)) && (var_12))))) : (((((/* implicit */_Bool) var_3)) ? (arr_15 [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))));
                var_27 = ((/* implicit */unsigned long long int) min((var_27), (((/* implicit */unsigned long long int) var_7))));
            }
        }
        arr_25 [i_2] |= ((/* implicit */unsigned short) 18446744073709551615ULL);
    }
}
