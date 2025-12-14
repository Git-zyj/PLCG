/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244045
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244045 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244045
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_4 [i_0] [i_0] [i_1] = ((/* implicit */unsigned long long int) ((-1057870366) != (((/* implicit */int) (unsigned char)255))));
                arr_5 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_11)) ? (65535) : (((/* implicit */int) arr_3 [i_0] [(unsigned short)6]))))))) ? (((/* implicit */long long int) ((((((/* implicit */_Bool) -970345566)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))) : (var_4))) * (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) (unsigned char)0))))))) : (max((8664336223533847383LL), (((/* implicit */long long int) -970345566))))));
                var_13 = ((int) ((((unsigned long long int) (signed char)127)) > (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))));
                /* LoopSeq 4 */
                /* vectorizable */
                for (short i_2 = 0; i_2 < 23; i_2 += 2) 
                {
                    var_14 = ((/* implicit */unsigned char) (signed char)-44);
                    arr_9 [i_2] [i_1] [i_0] |= ((/* implicit */short) ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) var_5))));
                    arr_10 [i_0] [i_0] [10LL] [i_2] = (-(((/* implicit */int) arr_2 [i_2] [i_1] [(signed char)14])));
                    var_15 ^= ((/* implicit */short) ((((/* implicit */_Bool) arr_2 [i_2] [i_1] [i_0])) && (((/* implicit */_Bool) 898717973))));
                }
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    var_16 += ((((/* implicit */_Bool) arr_8 [i_3] [i_1])) ? (((arr_7 [i_3] [i_1] [i_0]) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))) : (((((/* implicit */unsigned long long int) var_4)) * (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) var_4)) : (9695548816802293409ULL))))));
                    arr_14 [i_1] = ((/* implicit */unsigned char) var_1);
                }
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    var_17 = ((/* implicit */unsigned short) (~(max((((((/* implicit */_Bool) (signed char)96)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (signed char)-97)))), (((((/* implicit */_Bool) (signed char)-74)) ? (((/* implicit */int) (short)11344)) : (((/* implicit */int) (short)-11337))))))));
                    var_18 = ((/* implicit */unsigned char) min((0ULL), (524287ULL)));
                    var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) (~(((/* implicit */int) max((var_8), (((/* implicit */short) (_Bool)0))))))))));
                    var_20 = ((/* implicit */_Bool) ((unsigned int) var_5));
                    var_21 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (signed char)-24)) >= (((/* implicit */int) min(((unsigned short)30221), (((/* implicit */unsigned short) var_3))))))))) : (max((arr_13 [i_1]), (((/* implicit */unsigned long long int) ((7800513829883165794LL) + (((/* implicit */long long int) ((/* implicit */int) var_1))))))))));
                }
                for (unsigned short i_5 = 0; i_5 < 23; i_5 += 1) 
                {
                    arr_22 [i_0] [i_1] [i_1] [(short)6] = ((/* implicit */short) ((((((/* implicit */int) arr_11 [i_5])) % (((/* implicit */int) arr_11 [i_0])))) | (((/* implicit */int) (short)4))));
                    arr_23 [i_0] [i_1] [16LL] [i_1] = ((/* implicit */int) (((+(((((/* implicit */_Bool) (unsigned short)2805)) ? (((/* implicit */unsigned long long int) -9223372036854775807LL)) : (4383376065593171348ULL))))) - (max((var_11), (((/* implicit */unsigned long long int) var_8))))));
                    /* LoopNest 2 */
                    for (short i_6 = 0; i_6 < 23; i_6 += 4) 
                    {
                        for (long long int i_7 = 1; i_7 < 22; i_7 += 4) 
                        {
                            {
                                arr_29 [i_7] = ((/* implicit */unsigned short) (~((~(((((/* implicit */_Bool) (unsigned char)101)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)56898))) : (var_6)))))));
                                var_22 = (unsigned short)57211;
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) (-(32704ULL))))));
                }
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) var_2)), (((((/* implicit */_Bool) (~(var_6)))) ? ((~(3733343614099744463ULL))) : (((/* implicit */unsigned long long int) (~(11LL))))))));
    var_25 = ((/* implicit */unsigned long long int) max((var_25), (((32704ULL) << (((((/* implicit */int) (short)11325)) - (11300)))))));
    var_26 += ((/* implicit */unsigned short) ((signed char) var_0));
}
