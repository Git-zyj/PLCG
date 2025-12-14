/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233746
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233746 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233746
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
    var_10 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned char)41))))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_1)))) : (((/* implicit */int) (_Bool)1))))));
    var_11 = (+((~(((long long int) (signed char)115)))));
    /* LoopSeq 3 */
    for (signed char i_0 = 1; i_0 < 22; i_0 += 4) 
    {
        var_12 = ((/* implicit */unsigned char) (signed char)77);
        arr_3 [i_0] = ((/* implicit */unsigned char) arr_2 [(unsigned char)8]);
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 4) 
    {
        arr_7 [i_1] = ((/* implicit */unsigned long long int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [11LL] [11LL]))) | (arr_5 [i_1]))) >= (((((/* implicit */_Bool) var_3)) ? (arr_5 [13LL]) : (15298081314617055348ULL)))));
        var_13 = ((/* implicit */signed char) (+(((arr_5 [5LL]) | (arr_5 [24U])))));
    }
    for (short i_2 = 0; i_2 < 16; i_2 += 3) 
    {
        /* LoopNest 2 */
        for (signed char i_3 = 0; i_3 < 16; i_3 += 1) 
        {
            for (int i_4 = 0; i_4 < 16; i_4 += 4) 
            {
                {
                    var_14 = ((/* implicit */unsigned short) ((((/* implicit */long long int) min((((((/* implicit */_Bool) var_0)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) var_4))))), (((/* implicit */unsigned int) arr_12 [i_2]))))) & (max((((/* implicit */long long int) ((signed char) var_2))), (((((/* implicit */long long int) ((/* implicit */int) var_1))) & (arr_9 [i_2] [i_4])))))));
                    var_15 = ((/* implicit */short) min((((long long int) arr_14 [i_3] [i_3])), (((/* implicit */long long int) ((((/* implicit */int) ((unsigned short) (unsigned char)215))) ^ ((~(((/* implicit */int) var_8)))))))));
                    var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((min((((/* implicit */unsigned int) arr_6 [i_2] [i_3])), (26U))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_4 [i_2])))))))) ? (max((((((/* implicit */_Bool) 3148662759092496243ULL)) ? (arr_2 [i_2]) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_2] [i_2]))))), (max((((/* implicit */long long int) var_9)), (arr_9 [i_4] [i_2]))))) : (min((arr_2 [i_2]), (max((-3545695249085451340LL), (arr_2 [i_2])))))));
                }
            } 
        } 
        var_17 = ((((/* implicit */_Bool) arr_1 [i_2] [i_2])) ? ((-(arr_5 [i_2]))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) arr_2 [(unsigned char)6])) : ((~(arr_10 [6U] [i_2]))))));
        var_18 = ((/* implicit */short) (~(min((((/* implicit */unsigned int) (~(((/* implicit */int) arr_12 [i_2]))))), (((arr_14 [10LL] [i_2]) | (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))))));
    }
    var_19 = (+(((((/* implicit */_Bool) max((26U), (((/* implicit */unsigned int) (unsigned char)124))))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_6))))))));
    var_20 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (+(((var_4) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_7))))))), (((unsigned int) ((((/* implicit */_Bool) (unsigned char)215)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0))) : (var_3))))));
}
