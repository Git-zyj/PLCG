/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212486
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212486 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212486
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
    /* LoopNest 3 */
    for (signed char i_0 = 4; i_0 < 8; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 9; i_1 += 1) 
        {
            for (int i_2 = 1; i_2 < 8; i_2 += 2) 
            {
                {
                    var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((arr_3 [i_2 - 1] [9ULL] [i_2]), (arr_3 [i_2 + 2] [i_2] [i_2])))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_6 [i_1 - 1] [i_1] [i_2]))))) : (min((((/* implicit */unsigned long long int) ((var_15) ^ (arr_1 [(signed char)7])))), (min((var_0), (((/* implicit */unsigned long long int) var_8))))))));
                    var_21 = ((/* implicit */signed char) min((((((/* implicit */_Bool) arr_1 [i_1])) ? (((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_2 [i_0])))) : ((+(((/* implicit */int) arr_4 [i_2])))))), (((/* implicit */int) ((((268435455U) & (((/* implicit */unsigned int) ((/* implicit */int) var_6))))) != (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0]))))))));
                    /* LoopSeq 2 */
                    for (long long int i_3 = 0; i_3 < 10; i_3 += 2) 
                    {
                        arr_9 [i_1] [i_1] = ((/* implicit */signed char) var_13);
                        var_22 = ((/* implicit */short) ((_Bool) min((((var_7) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) var_12)))), (((/* implicit */unsigned long long int) arr_2 [i_2 - 1])))));
                        var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */long long int) 617144776U)), (arr_8 [i_0 - 4] [i_0 - 4] [i_1 - 1] [i_1 - 1])))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) << (((((/* implicit */int) arr_2 [7ULL])) - (177)))))))))) : (2194649104U))))));
                        var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)21995)) ? (arr_1 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0] [i_0] [i_0])))))) ? (arr_0 [7ULL]) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_7 [i_1] [i_1] [i_1] [i_3])))))))) ? (min((((((/* implicit */_Bool) arr_4 [i_0 + 2])) ? (var_8) : (((/* implicit */int) var_18)))), (((/* implicit */int) arr_7 [i_1] [i_0 - 4] [i_0] [i_1])))) : (((/* implicit */int) arr_2 [i_3]))));
                    }
                    for (signed char i_4 = 1; i_4 < 9; i_4 += 1) 
                    {
                        var_25 ^= ((/* implicit */signed char) ((var_6) ? (var_8) : (((/* implicit */int) min((((/* implicit */unsigned char) arr_4 [i_0 + 2])), (arr_6 [1] [1] [i_4]))))));
                        var_26 = ((/* implicit */short) ((((/* implicit */unsigned long long int) max((((((/* implicit */int) var_4)) % (var_13))), (arr_11 [i_2])))) < (max((((unsigned long long int) arr_8 [i_0] [(_Bool)0] [i_0] [i_0])), (((/* implicit */unsigned long long int) ((short) var_19)))))));
                    }
                    arr_13 [i_2] [i_0] [i_0] [i_0] &= ((/* implicit */short) min((((/* implicit */int) ((short) arr_10 [i_0] [i_1] [i_0] [i_0] [i_2] [i_0 - 3]))), (min((((/* implicit */int) arr_2 [i_1])), ((~(((/* implicit */int) (_Bool)1))))))));
                    arr_14 [i_1] = ((/* implicit */unsigned long long int) arr_2 [i_0]);
                }
            } 
        } 
    } 
    var_27 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((var_7) ? (((var_16) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))) : (((var_7) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) : (var_16)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (((-(var_0))) < (var_11))))) : (((min((var_0), (((/* implicit */unsigned long long int) (_Bool)1)))) << (((var_10) + (9023348563877936315LL)))))));
    /* LoopNest 2 */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        for (unsigned char i_6 = 0; i_6 < 14; i_6 += 1) 
        {
            {
                var_28 = ((/* implicit */long long int) ((((arr_17 [i_6]) << (((((/* implicit */int) arr_18 [i_5])) + (17982))))) << ((((~(var_19))) - (2821063108U)))));
                arr_20 [4ULL] &= ((/* implicit */unsigned char) ((max((min((((/* implicit */unsigned long long int) var_3)), (var_16))), (((/* implicit */unsigned long long int) ((short) arr_15 [i_5]))))) + (((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)0)))))));
                var_29 = ((/* implicit */long long int) min((var_29), (((/* implicit */long long int) ((unsigned short) (_Bool)0)))));
            }
        } 
    } 
}
