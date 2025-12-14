/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212367
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212367 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212367
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
    var_11 = ((/* implicit */unsigned char) ((var_7) & (((/* implicit */unsigned long long int) var_6))));
    var_12 = ((/* implicit */unsigned char) ((long long int) min((((/* implicit */unsigned int) ((((/* implicit */int) (short)-16384)) * (((/* implicit */int) (unsigned short)54937))))), (min((((/* implicit */unsigned int) -2040324280)), (var_6))))));
    var_13 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-16379))) & (var_2))))) ? (((/* implicit */int) var_1)) : (var_5)));
    var_14 = ((/* implicit */long long int) max((var_14), (((/* implicit */long long int) ((unsigned char) (((~(((/* implicit */int) var_9)))) | (((/* implicit */int) ((short) var_7)))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 23; i_0 += 3) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1337900330)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)5749))) : (18446744073709551615ULL)))) ? (((/* implicit */int) ((arr_1 [i_0]) < (arr_1 [i_0])))) : (((/* implicit */int) (signed char)-1))));
        var_15 = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) (unsigned char)95)) : (((/* implicit */int) (unsigned short)32768)))) << (((var_6) - (2263933276U)))));
    }
    for (signed char i_1 = 0; i_1 < 23; i_1 += 3) /* same iter space */
    {
        var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) arr_4 [i_1]))) ? (((((/* implicit */_Bool) arr_3 [i_1])) ? (-389836083144447031LL) : (((/* implicit */long long int) 2314403253U)))) : (((/* implicit */long long int) ((int) arr_3 [i_1])))));
        /* LoopNest 2 */
        for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 2) 
        {
            for (unsigned short i_3 = 0; i_3 < 23; i_3 += 4) 
            {
                {
                    arr_10 [i_1] [i_1] [22ULL] [22ULL] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? ((~(arr_5 [22U] [(unsigned short)20] [16U]))) : (((/* implicit */long long int) ((/* implicit */int) ((arr_5 [i_2] [i_2] [(signed char)9]) >= (arr_5 [i_3] [2] [i_1])))))));
                    arr_11 [i_1] = ((/* implicit */short) ((signed char) min((arr_7 [i_1] [17] [i_3] [i_2]), (((/* implicit */unsigned long long int) arr_0 [i_1])))));
                    var_17 ^= ((((/* implicit */_Bool) (~(((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) arr_6 [i_1])))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) max(((short)16383), (arr_8 [i_1] [i_1] [i_1] [(unsigned short)4])))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_1] [i_1] [i_2] [i_3])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_9))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_1] [i_1] [i_2] [i_3]))) : ((-(arr_5 [i_1] [i_2] [2U]))))));
                    arr_12 [i_1] [i_1] [i_1] [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) max((var_3), (((/* implicit */unsigned char) (signed char)-44)))))) : (((((/* implicit */_Bool) arr_1 [i_1])) ? (4622606583555152387LL) : (((/* implicit */long long int) arr_3 [i_3]))))))) ? (arr_3 [i_1]) : (min((arr_3 [i_2]), (arr_3 [i_3])))));
                    arr_13 [i_2] |= ((/* implicit */short) ((signed char) var_6));
                }
            } 
        } 
    }
}
