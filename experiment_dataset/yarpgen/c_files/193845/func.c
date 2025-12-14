/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193845
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193845 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193845
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
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        /* LoopNest 3 */
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (signed char i_3 = 0; i_3 < 24; i_3 += 3) 
                {
                    {
                        arr_11 [i_0] [i_0] [i_0] [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((arr_8 [i_0] [17LL] [i_2] [i_0]), (arr_8 [i_3] [4U] [i_1] [i_0])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_0] [i_1] [19LL] [19LL]))))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_3] [i_0] [i_1] [i_0])) || (((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_2] [i_3])))))));
                        var_19 = ((/* implicit */unsigned char) ((((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_0] [i_0])) ? (1264897575U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_1] [i_3])))))) | (6473360984384224466ULL))) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 660459252022359854LL)) ? (((/* implicit */int) arr_8 [i_0] [i_1] [i_2] [i_2])) : (((/* implicit */int) ((short) var_15))))))));
                    }
                } 
            } 
        } 
        var_20 = ((/* implicit */unsigned short) ((((((/* implicit */long long int) ((((/* implicit */int) var_3)) | (((/* implicit */int) arr_6 [i_0]))))) % (min((arr_5 [i_0] [i_0]), (((/* implicit */long long int) arr_8 [i_0] [i_0] [17LL] [i_0])))))) < (((/* implicit */long long int) ((/* implicit */int) min((arr_2 [i_0] [i_0] [i_0]), (((((/* implicit */_Bool) arr_3 [i_0])) && (((/* implicit */_Bool) arr_4 [i_0]))))))))));
        /* LoopSeq 1 */
        for (int i_4 = 2; i_4 < 23; i_4 += 2) 
        {
            var_21 = ((/* implicit */unsigned int) var_15);
            var_22 ^= ((/* implicit */unsigned int) max((((/* implicit */long long int) (-(arr_13 [i_4 + 1] [i_4])))), (((((/* implicit */_Bool) max((((/* implicit */long long int) var_13)), (arr_5 [i_4] [3LL])))) ? (min((((/* implicit */long long int) (unsigned char)242)), (var_4))) : (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), (arr_0 [i_4])))))))));
            arr_15 [20LL] [i_0] = ((((((/* implicit */_Bool) ((arr_13 [i_0] [i_4 - 2]) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_15)))))) ? (((/* implicit */int) (signed char)-109)) : (var_10))) >= (((/* implicit */int) (!((_Bool)0)))));
        }
        arr_16 [i_0] = ((/* implicit */int) (signed char)-109);
    }
    /* vectorizable */
    for (long long int i_5 = 0; i_5 < 17; i_5 += 2) 
    {
        var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) (((_Bool)1) ? (arr_4 [i_5]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)24)))))) ? (arr_14 [i_5] [i_5] [i_5]) : (((/* implicit */int) arr_12 [i_5]))));
        var_24 = ((/* implicit */_Bool) arr_1 [i_5]);
        arr_19 [3] [3] &= ((/* implicit */signed char) (_Bool)1);
        var_25 = ((/* implicit */unsigned char) var_9);
    }
    var_26 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1178372509U)) ? (((/* implicit */int) min((var_0), (var_13)))) : (((/* implicit */int) var_3))))) ? (-6555281019556141992LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
    var_27 = ((/* implicit */long long int) var_1);
}
