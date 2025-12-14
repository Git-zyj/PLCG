/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241105
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241105 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241105
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
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        var_10 = ((/* implicit */long long int) arr_1 [i_0]);
        var_11 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1)))) : (5270407545220801381LL)))) ? (((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_1 [i_0]) : (arr_1 [i_0]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (signed char)127))))));
    }
    for (short i_1 = 0; i_1 < 11; i_1 += 3) 
    {
        var_12 *= ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [0ULL] [i_1])) ? (arr_0 [i_1]) : (arr_1 [i_1])))))) || (((/* implicit */_Bool) arr_2 [i_1] [i_1]))));
        var_13 = (-((-((~(arr_0 [i_1]))))));
        arr_5 [i_1] [i_1] = ((/* implicit */unsigned short) max(((~(((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_1] [i_1]))))))), (((((/* implicit */_Bool) max((arr_3 [i_1] [i_1]), (arr_1 [i_1])))) ? (((/* implicit */int) ((signed char) arr_2 [i_1] [i_1]))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [(unsigned char)9])))))))));
    }
    /* LoopNest 2 */
    for (long long int i_2 = 1; i_2 < 8; i_2 += 4) 
    {
        for (unsigned short i_3 = 0; i_3 < 11; i_3 += 1) 
        {
            {
                /* LoopNest 2 */
                for (short i_4 = 0; i_4 < 11; i_4 += 3) 
                {
                    for (unsigned short i_5 = 0; i_5 < 11; i_5 += 3) 
                    {
                        {
                            arr_17 [i_2] [i_3] [i_2] = (!(((/* implicit */_Bool) arr_12 [i_4] [i_5])));
                            arr_18 [i_2] [i_5] [i_4] = (!(((/* implicit */_Bool) arr_2 [i_3] [i_3])));
                            var_14 += ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_16 [i_2 + 3] [i_3] [i_4] [i_5])) && (((/* implicit */_Bool) arr_16 [i_2] [i_3] [10ULL] [i_5])))))) % (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_4] [i_3] [i_4] [i_5]))) % (arr_0 [i_2 + 3])))));
                            var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_16 [i_2 + 3] [i_2 + 3] [i_4] [i_5])) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_2 - 1] [i_2]))) : ((~(arr_7 [i_2])))))) < ((~(((arr_13 [i_2 + 1] [i_3] [i_4] [(_Bool)0]) | (arr_0 [i_2]))))))))));
                        }
                    } 
                } 
                var_16 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) arr_15 [i_2 + 3] [(unsigned short)6] [7ULL] [i_3])), (min((((/* implicit */unsigned long long int) arr_11 [i_2] [i_2 + 1] [6ULL] [i_3])), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_2 + 2] [i_2] [i_3]))) % (arr_3 [(_Bool)1] [i_3])))))));
            }
        } 
    } 
    var_17 -= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_4))));
    var_18 = ((/* implicit */unsigned short) ((((((/* implicit */int) min((var_3), (var_3)))) / (((/* implicit */int) var_2)))) ^ (((((/* implicit */int) var_4)) | (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_8))))))));
    var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((~(((/* implicit */int) var_4)))) & (((/* implicit */int) var_4))))) ? (((/* implicit */int) min((((/* implicit */unsigned char) ((((/* implicit */int) var_2)) >= (((/* implicit */int) var_4))))), (max((var_9), (((/* implicit */unsigned char) var_0))))))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_2)) : (((((/* implicit */int) var_9)) / (((/* implicit */int) var_9))))))));
}
