/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226276
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226276 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226276
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
    var_18 ^= ((/* implicit */signed char) var_15);
    var_19 = ((/* implicit */short) var_2);
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) /* same iter space */
    {
        var_20 |= ((/* implicit */int) (!(((/* implicit */_Bool) -4573429794706214451LL))));
        var_21 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_12))));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 3; i_2 < 15; i_2 += 4) 
            {
                {
                    var_22 *= ((/* implicit */signed char) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) -4573429794706214451LL)), (max((arr_5 [4ULL] [i_2]), (var_8))))))));
                    var_23 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) 4573429794706214450LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)54967))) : (var_10)))))) > (((((((/* implicit */unsigned long long int) arr_6 [13ULL])) ^ (var_11))) + (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)56)))))));
                    arr_7 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 4573429794706214451LL)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) arr_1 [i_1])) : (((/* implicit */int) arr_3 [(_Bool)1] [(_Bool)1]))))) : ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_2]))) : (-4573429794706214465LL))))) - (((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_6 [i_0 + 1]))))));
                }
            } 
        } 
        arr_8 [i_0] [(_Bool)1] = ((/* implicit */unsigned long long int) (unsigned short)65527);
        arr_9 [i_0] = ((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) arr_3 [i_0 + 1] [i_0 + 1])) ? (((/* implicit */unsigned long long int) ((4573429794706214478LL) | (((/* implicit */long long int) ((/* implicit */int) (short)22777)))))) : (arr_5 [i_0 + 1] [i_0 + 1]))));
    }
    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) /* same iter space */
    {
        var_24 = ((/* implicit */unsigned char) ((((/* implicit */long long int) (-(((int) (short)19444))))) >= (max((((/* implicit */long long int) (~(arr_2 [i_3])))), (arr_4 [i_3 + 1] [i_3 + 1] [i_3 + 1] [10LL])))));
        /* LoopNest 2 */
        for (unsigned long long int i_4 = 0; i_4 < 17; i_4 += 1) 
        {
            for (signed char i_5 = 2; i_5 < 13; i_5 += 2) 
            {
                {
                    arr_17 [i_3] [1U] [i_4] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned int) arr_12 [i_3 + 1] [i_4]))) ? (((/* implicit */int) ((((/* implicit */_Bool) ((arr_5 [i_4] [i_4]) << (((((/* implicit */int) (signed char)101)) - (49)))))) && (((/* implicit */_Bool) min((arr_13 [i_3 + 1] [i_4]), (arr_10 [i_5]))))))) : (((((((/* implicit */int) arr_12 [2ULL] [i_4])) << (((((/* implicit */int) arr_1 [(unsigned char)8])) + (61))))) * (((/* implicit */int) ((_Bool) (_Bool)0)))))));
                    var_25 = ((/* implicit */unsigned int) max(((~(((((/* implicit */_Bool) arr_16 [i_3] [i_4] [i_3])) ? (var_16) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)192))))))), (((/* implicit */long long int) ((short) var_14)))));
                }
            } 
        } 
    }
}
