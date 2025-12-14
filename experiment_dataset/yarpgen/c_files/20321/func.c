/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20321
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20321 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20321
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
    var_13 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) var_3))))) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))));
    var_14 = ((/* implicit */_Bool) min((var_14), (((/* implicit */_Bool) var_0))));
    var_15 = ((/* implicit */int) var_2);
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 12; i_0 += 3) /* same iter space */
    {
        var_16 *= ((/* implicit */_Bool) arr_0 [i_0]);
        arr_3 [i_0] = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) 367999071U)), ((((_Bool)1) ? (((/* implicit */unsigned long long int) 8190U)) : (((arr_1 [i_0] [i_0]) | (((/* implicit */unsigned long long int) 3926968213U))))))));
    }
    /* vectorizable */
    for (long long int i_1 = 0; i_1 < 12; i_1 += 3) /* same iter space */
    {
        arr_6 [i_1] = ((/* implicit */int) ((arr_4 [i_1]) + (arr_4 [i_1])));
        var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_1] [i_1])) ? (((/* implicit */unsigned long long int) 367999071U)) : (arr_1 [i_1] [i_1])));
        arr_7 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) (+(-2487689868450918932LL)))) * (arr_1 [i_1] [i_1])));
    }
    for (unsigned int i_2 = 0; i_2 < 12; i_2 += 3) 
    {
        /* LoopSeq 1 */
        for (int i_3 = 0; i_3 < 12; i_3 += 3) 
        {
            var_18 = ((((/* implicit */_Bool) ((((/* implicit */int) arr_8 [i_2])) + (1017478662)))) ? (((/* implicit */unsigned long long int) arr_9 [i_3] [i_2])) : (((((/* implicit */_Bool) ((15773988010875694467ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_2])))))) ? (((/* implicit */unsigned long long int) 367999071U)) : (arr_4 [i_2]))));
            arr_12 [i_3] [i_2] = ((/* implicit */unsigned char) min((arr_2 [4U]), (((/* implicit */short) ((((/* implicit */_Bool) arr_2 [(unsigned char)6])) || (((/* implicit */_Bool) arr_2 [8U])))))));
            var_19 = ((/* implicit */unsigned short) arr_11 [10] [i_2]);
            var_20 ^= min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_2] [10U])) && (((/* implicit */_Bool) (unsigned char)48))))), (((arr_1 [(unsigned char)6] [(unsigned short)0]) % (arr_1 [i_3] [4ULL]))));
        }
        var_21 += arr_0 [i_2];
        var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) arr_1 [i_2] [(unsigned char)8]))));
        var_23 ^= ((/* implicit */unsigned int) (_Bool)1);
    }
}
