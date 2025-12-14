/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226043
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226043 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226043
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
    var_12 = ((/* implicit */short) min((min((max((((/* implicit */int) var_11)), (16777215))), (((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (_Bool)1)) : (1401632256))))), (((/* implicit */int) var_0))));
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) (((_Bool)1) ? (2086504317) : (((/* implicit */int) ((signed char) ((((/* implicit */int) var_5)) + (((/* implicit */int) var_1))))))));
        var_13 = ((int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) 4294967295U)) : (11217774262361934720ULL)))) ? (max((2147483647), (((/* implicit */int) (signed char)47)))) : (((/* implicit */int) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) 121375459)))))));
        arr_3 [i_0] = ((/* implicit */short) ((((/* implicit */int) ((unsigned short) 932418599U))) >> (((((((/* implicit */_Bool) 3490781262U)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_8)))) - (24509)))));
        var_14 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_1 [i_0]) : (((/* implicit */unsigned long long int) var_2)))), (((/* implicit */unsigned long long int) var_5))));
    }
    for (int i_1 = 0; i_1 < 17; i_1 += 4) 
    {
        arr_6 [i_1] = ((/* implicit */long long int) max((13389502549960856414ULL), (((/* implicit */unsigned long long int) -121375436))));
        var_15 = ((/* implicit */unsigned short) (~(max((arr_4 [i_1] [i_1]), (((/* implicit */unsigned long long int) (unsigned short)6144))))));
        var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (831250198) : (((/* implicit */int) var_1))))) : (max((((/* implicit */unsigned long long int) var_4)), (((arr_4 [i_1] [(unsigned short)0]) & (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-84))))))))))));
        var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (max(((-9223372036854775807LL - 1LL)), (6730115113687103959LL)))))) ? (((/* implicit */long long int) (-(((/* implicit */int) max((((/* implicit */unsigned short) (signed char)114)), ((unsigned short)717))))))) : (((long long int) 4294967294U))));
    }
    /* vectorizable */
    for (int i_2 = 1; i_2 < 14; i_2 += 3) 
    {
        arr_11 [i_2] = ((/* implicit */unsigned long long int) ((unsigned int) arr_1 [i_2]));
        /* LoopSeq 1 */
        for (unsigned long long int i_3 = 0; i_3 < 15; i_3 += 3) 
        {
            arr_14 [i_2] [i_2] |= ((/* implicit */unsigned char) arr_1 [(signed char)14]);
            var_18 &= ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) (unsigned char)52)) ? (3362548722U) : (((/* implicit */unsigned int) -1540553786))))));
        }
        /* LoopNest 3 */
        for (unsigned short i_4 = 3; i_4 < 14; i_4 += 4) 
        {
            for (short i_5 = 0; i_5 < 15; i_5 += 4) 
            {
                for (signed char i_6 = 0; i_6 < 15; i_6 += 3) 
                {
                    {
                        arr_23 [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) -213650433110979705LL)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_11))));
                        var_19 *= ((/* implicit */unsigned long long int) ((unsigned short) arr_13 [i_2 - 1]));
                        var_20 ^= ((/* implicit */long long int) ((((/* implicit */int) var_0)) & (((/* implicit */int) var_6))));
                        var_21 = ((/* implicit */short) ((unsigned short) (~(arr_22 [(unsigned char)10] [i_4] [i_4] [i_4] [i_4]))));
                    }
                } 
            } 
        } 
        var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_5 [i_2] [i_2 + 1])) ? (((/* implicit */int) (unsigned char)176)) : ((-(((/* implicit */int) (signed char)(-127 - 1)))))));
    }
}
