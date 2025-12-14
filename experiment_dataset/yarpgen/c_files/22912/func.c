/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22912
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22912 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22912
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
    for (unsigned int i_0 = 1; i_0 < 17; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 15; i_2 += 2) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned char i_3 = 2; i_3 < 17; i_3 += 4) /* same iter space */
                    {
                        arr_13 [i_0] [i_1] [i_1] = ((/* implicit */unsigned int) var_2);
                        var_11 ^= ((/* implicit */unsigned long long int) ((((((/* implicit */long long int) var_3)) & (max((((/* implicit */long long int) (unsigned char)255)), (9223372036854775795LL))))) | ((~(-9223372036854775795LL)))));
                        var_12 ^= ((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */_Bool) (unsigned short)58656)) ? (-9223372036854775795LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))))));
                    }
                    for (unsigned char i_4 = 2; i_4 < 17; i_4 += 4) /* same iter space */
                    {
                        arr_17 [i_0] [17U] [i_0] = ((/* implicit */long long int) min((((/* implicit */unsigned int) min((((((/* implicit */_Bool) var_0)) ? (arr_16 [i_0 + 1] [(unsigned short)0] [i_2 + 3] [i_4 + 1] [i_0 + 1] [i_2 + 1]) : (-365871489))), (((((/* implicit */_Bool) (unsigned char)87)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_10))))))), (arr_12 [(unsigned short)11])));
                        /* LoopSeq 1 */
                        for (unsigned short i_5 = 0; i_5 < 18; i_5 += 2) 
                        {
                            arr_20 [i_5] [i_0] [i_2] [i_0] [i_0 + 1] = max((max(((-(274743689216LL))), (((/* implicit */long long int) arr_19 [i_2 + 2] [i_2 + 1] [i_2 + 2])))), (((/* implicit */long long int) ((unsigned char) ((((/* implicit */_Bool) arr_6 [i_0] [i_2 + 2])) ? (((/* implicit */int) (unsigned short)65518)) : (((/* implicit */int) arr_14 [i_4 + 1])))))));
                            arr_21 [i_5] [i_5] [i_0] [i_4] [i_5] [i_2] [i_0 - 1] = ((/* implicit */unsigned char) var_3);
                        }
                        var_13 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0 + 1])) && (((/* implicit */_Bool) 9180839774005051987LL))));
                        var_14 = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_14 [i_0 - 1])), (((((/* implicit */_Bool) var_8)) ? (arr_0 [i_4] [i_0 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_1])))))))) ? (((/* implicit */int) ((signed char) arr_5 [i_0 - 1] [i_0 - 1] [i_0 - 1]))) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)82))) != (9180839774005051987LL))))));
                        var_15 = ((/* implicit */unsigned long long int) max((((/* implicit */int) var_7)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65508))) : (-9223372036854775781LL)))) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (_Bool)1))))));
                    }
                    var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) (unsigned char)169)) ? (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned short) arr_3 [i_1] [i_1] [i_1])), (var_5))))) : ((~(3708464305U))))))))));
                    var_17 ^= ((/* implicit */unsigned short) ((unsigned int) arr_14 [i_0]));
                }
            } 
        } 
    } 
    var_18 = (+((+(((/* implicit */int) var_10)))));
    var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (((9223372036854775795LL) | (((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (var_8)))))));
}
