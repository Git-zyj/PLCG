/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201288
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201288 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201288
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
    for (long long int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        var_18 = ((((/* implicit */_Bool) min((max((((/* implicit */long long int) (signed char)127)), (9223372036854775807LL))), (var_0)))) ? (((((/* implicit */_Bool) (~(((/* implicit */int) var_16))))) ? (var_15) : (((/* implicit */long long int) ((/* implicit */int) var_1))))) : (((/* implicit */long long int) (+(((/* implicit */int) var_10))))));
        arr_2 [i_0] [i_0] = ((/* implicit */long long int) var_16);
    }
    for (signed char i_1 = 0; i_1 < 16; i_1 += 1) 
    {
        var_19 = ((/* implicit */unsigned int) ((long long int) (~(max((2097151LL), (var_17))))));
        /* LoopNest 2 */
        for (unsigned short i_2 = 1; i_2 < 15; i_2 += 2) 
        {
            for (long long int i_3 = 0; i_3 < 16; i_3 += 2) 
            {
                {
                    var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) (+(max(((-(var_8))), (((((/* implicit */_Bool) var_5)) ? (var_15) : (9223372036854775807LL))))))))));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 16; i_4 += 2) 
                    {
                        for (signed char i_5 = 0; i_5 < 16; i_5 += 1) 
                        {
                            {
                                arr_17 [15LL] [10LL] [2LL] [i_4] [i_4] = ((/* implicit */unsigned int) ((unsigned short) (!(((/* implicit */_Bool) arr_13 [i_2 - 1] [i_2] [i_2] [i_2 - 1] [i_2] [i_2 - 1] [i_1])))));
                                var_21 = ((/* implicit */unsigned int) max((((/* implicit */long long int) ((((long long int) arr_10 [i_1] [i_2] [i_3] [i_4])) >= (35175782154240LL)))), ((~(((((-9223372036854775807LL) + (9223372036854775807LL))) << (((((/* implicit */int) arr_9 [i_2] [i_3] [i_4] [i_5])) - (97)))))))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (int i_6 = 1; i_6 < 15; i_6 += 4) 
                    {
                        arr_21 [i_6] [(signed char)7] = (+(((((/* implicit */_Bool) ((-7344427479008207797LL) / (((/* implicit */long long int) var_5))))) ? (((var_7) - (-2010249486950817366LL))) : (var_3))));
                        var_22 = ((/* implicit */long long int) ((((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) 9223372036854775807LL)))))))) >= (((((/* implicit */_Bool) ((((-1550866406) + (2147483647))) << (((((((-9223372036854775807LL) - (-9223372036854775782LL))) + (35LL))) - (10LL)))))) ? (((/* implicit */long long int) 1550866405)) : (2097151LL)))));
                        arr_22 [(signed char)6] [i_6] [i_6] = ((/* implicit */int) ((((((((/* implicit */_Bool) var_15)) ? (((/* implicit */long long int) 4294967295U)) : (var_17))) <= (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_6]))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_1] [i_2] [i_3])))))) : (min((((/* implicit */long long int) ((((/* implicit */int) (unsigned short)65535)) << (((var_8) - (2413104695557160330LL)))))), (((((/* implicit */_Bool) var_3)) ? (var_0) : (9223372036854775807LL)))))));
                        arr_23 [i_1] [i_6] [i_1] [i_1] [i_3] [i_6] = min(((+(((/* implicit */int) (unsigned short)65535)))), (((int) (signed char)41)));
                    }
                    var_23 = var_7;
                    arr_24 [i_3] [i_2] [i_1] = ((/* implicit */signed char) min((((arr_3 [i_3]) & (var_8))), (((long long int) ((((/* implicit */_Bool) var_12)) ? (137438953472LL) : (var_8))))));
                }
            } 
        } 
    }
    var_24 = ((/* implicit */long long int) var_12);
    var_25 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3612028529U)) ? ((-(-1607697361))) : (((/* implicit */int) ((-7954308615441041034LL) == (var_4))))))) ? (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) ((signed char) 1375880907U))) : (216974819))) : (((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_14))))));
    var_26 = max((var_4), (min((max((((/* implicit */long long int) (unsigned short)1524)), (var_15))), (((/* implicit */long long int) ((unsigned short) var_11))))));
    var_27 = ((/* implicit */unsigned short) min((var_27), (((/* implicit */unsigned short) max((var_6), (((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) && (((/* implicit */_Bool) var_13)))))) >= (var_0)))))))));
}
