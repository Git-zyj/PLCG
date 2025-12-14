/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236654
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236654 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236654
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
    var_10 -= ((/* implicit */unsigned short) max((((((var_8) / (((/* implicit */long long int) ((/* implicit */int) var_4))))) + (((/* implicit */long long int) ((((/* implicit */_Bool) 18446744073709551612ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-119))) : (var_1)))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((unsigned short) var_8))))))));
    var_11 = ((/* implicit */short) min((var_11), (((/* implicit */short) var_2))));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 4) /* same iter space */
    {
        var_12 |= ((/* implicit */int) min((min((((/* implicit */unsigned int) ((int) (unsigned short)10350))), (min((((/* implicit */unsigned int) (unsigned short)40259)), (66060288U))))), ((-(66060291U)))));
        arr_3 [i_0] = ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */short) arr_0 [i_0])), ((short)20079))))))) >> (((((((/* implicit */_Bool) (short)12139)) ? (-7322903612841528814LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) + (7322903612841528814LL)))));
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 4) /* same iter space */
    {
        var_13 = ((/* implicit */short) ((((/* implicit */_Bool) ((arr_2 [i_1] [i_1]) & (((/* implicit */int) arr_5 [i_1] [i_1]))))) ? (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) (unsigned short)13266))))) : (arr_2 [i_1] [i_1])));
        var_14 = ((/* implicit */int) max((var_14), (((/* implicit */int) ((((/* implicit */long long int) 4194240)) <= (3583523450281148892LL))))));
    }
    /* vectorizable */
    for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 4) /* same iter space */
    {
        arr_9 [1LL] [i_2] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 4228907037U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_2]))) : (arr_1 [i_2] [0]))) != (((/* implicit */unsigned long long int) (-(-1LL))))));
        /* LoopSeq 2 */
        for (signed char i_3 = 0; i_3 < 12; i_3 += 3) 
        {
            var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) (-(-2110646002))))));
            var_16 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [i_2] [i_2])) ? ((((_Bool)1) ? (arr_1 [i_2] [i_3]) : (((/* implicit */unsigned long long int) -60701925)))) : (((/* implicit */unsigned long long int) var_8))));
            var_17 = ((/* implicit */long long int) 1491013691U);
        }
        for (long long int i_4 = 0; i_4 < 12; i_4 += 4) 
        {
            arr_16 [(unsigned char)5] [(unsigned short)8] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_5 [i_2] [i_4])) : (((/* implicit */int) arr_5 [i_4] [i_2]))))) ? (((/* implicit */int) var_3)) : (-19)));
            arr_17 [i_2] = ((/* implicit */unsigned short) (_Bool)1);
        }
    }
}
