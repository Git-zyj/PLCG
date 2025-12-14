/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32717
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32717 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32717
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
    var_19 ^= ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_8))) != (var_10)))) << (((((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_17)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-119))))))) + (114)))));
    var_20 = ((/* implicit */int) var_4);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned int i_2 = 0; i_2 < 25; i_2 += 4) 
                {
                    arr_6 [i_0] [i_1] [i_0] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_5 [i_0] [i_1] [i_2] [i_0])) != (((/* implicit */int) ((((/* implicit */int) (signed char)125)) != (((/* implicit */int) (signed char)-39)))))));
                    arr_7 [i_0] [i_1] [i_2] [i_2] = ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_1]))) != (1851518485806926883LL)))) != (((((var_16) + (2147483647))) << (((((/* implicit */int) arr_0 [i_0])) - (55442))))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 25; i_3 += 4) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 25; i_4 += 4) 
                        {
                            {
                                var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) (+(((((/* implicit */_Bool) ((arr_11 [i_4] [i_3] [i_2] [i_0] [i_0] [i_0] [i_0]) ? (((/* implicit */int) arr_9 [i_0] [i_0] [i_2] [i_3] [i_4] [i_4])) : (((/* implicit */int) (signed char)-110))))) ? (var_6) : (3452286635U))))))));
                                arr_12 [i_0] [i_1] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((arr_10 [i_0] [i_1] [i_2] [i_2] [i_2] [i_1] [i_4]) != (((/* implicit */int) ((((((/* implicit */_Bool) -1)) ? (((/* implicit */unsigned long long int) 3358903262U)) : (var_0))) != (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_3 [i_0])))))))));
                                var_22 *= ((/* implicit */signed char) min((((/* implicit */long long int) (~(var_4)))), (((long long int) arr_10 [i_0] [i_0] [i_1] [i_2] [i_3] [i_3] [i_4]))));
                                var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) min((288228177128456192LL), (((/* implicit */long long int) -1)))))));
                                arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((unsigned int) (-(288228177128456192LL)))) != (((/* implicit */unsigned int) ((/* implicit */int) var_2)))));
                            }
                        } 
                    } 
                }
                for (long long int i_5 = 0; i_5 < 25; i_5 += 1) 
                {
                    arr_17 [i_5] [i_0] = ((/* implicit */unsigned char) (((-(min((arr_4 [i_0] [i_1]), (((/* implicit */long long int) 0)))))) != (((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_9 [i_0] [i_0] [i_5] [i_5] [i_1] [i_1]), (((/* implicit */short) var_13))))) ? ((+(((/* implicit */int) arr_1 [i_0])))) : (((/* implicit */int) ((signed char) -6361962401705962790LL))))))));
                    var_24 = ((/* implicit */short) min((((/* implicit */signed char) (_Bool)1)), ((signed char)-119)));
                    /* LoopSeq 3 */
                    for (int i_6 = 2; i_6 < 24; i_6 += 2) /* same iter space */
                    {
                        arr_20 [i_0] [i_0] [i_5] [i_6 - 1] = ((/* implicit */_Bool) min(((+(842680649U))), (((/* implicit */unsigned int) ((((/* implicit */int) var_5)) >> (((((var_4) >> (((((/* implicit */int) (signed char)-1)) + (25))))) - (79U))))))));
                        arr_21 [i_0] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_0] [i_0] [i_0] [i_0])) ? (3267852161U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_0] [i_1] [i_5] [i_0])))))) ? (((/* implicit */int) max((arr_14 [i_1] [i_0] [i_1] [i_0]), (((/* implicit */short) (signed char)10))))) : (((/* implicit */int) ((signed char) var_14)))));
                        var_25 -= arr_14 [i_0] [i_5] [i_0] [i_6 - 1];
                    }
                    for (int i_7 = 2; i_7 < 24; i_7 += 2) /* same iter space */
                    {
                        var_26 = ((/* implicit */unsigned char) arr_18 [i_1] [i_1] [i_1] [i_1] [i_0]);
                        var_27 = ((((/* implicit */_Bool) ((signed char) ((((/* implicit */int) arr_9 [i_0] [i_1] [i_0] [i_7 - 1] [i_5] [i_7])) != (((/* implicit */int) (signed char)-96)))))) ? (((/* implicit */int) (signed char)120)) : ((~(((/* implicit */int) arr_5 [i_7 - 1] [i_7 - 2] [i_7 - 2] [i_5])))));
                        var_28 = ((/* implicit */short) ((((((/* implicit */long long int) ((int) 17537055573790398349ULL))) != (((((/* implicit */_Bool) 469762048U)) ? (((/* implicit */long long int) arr_10 [i_0] [i_0] [i_0] [i_0] [i_5] [i_7 - 1] [i_7])) : (arr_4 [i_0] [i_1]))))) ? (min((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_5]))) != (288228177128456193LL)))), (((int) 925119625U)))) : (((/* implicit */int) ((((/* implicit */unsigned int) var_14)) != (574459460U))))));
                    }
                    /* vectorizable */
                    for (int i_8 = 2; i_8 < 24; i_8 += 2) /* same iter space */
                    {
                        arr_26 [i_1] [i_1] [i_5] = ((/* implicit */short) ((((/* implicit */int) arr_25 [i_0] [i_0] [i_1] [i_5] [i_8 - 1])) != (((/* implicit */int) ((2130706432U) != (((/* implicit */unsigned int) ((/* implicit */int) var_2))))))));
                        var_29 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_9 [i_1] [i_1] [i_8] [i_8 + 1] [i_8 - 1] [i_8])) ? (var_18) : (((/* implicit */int) arr_9 [i_0] [i_8 + 1] [i_8 - 2] [i_8] [i_8 - 2] [i_8 + 1]))));
                    }
                    var_30 = ((/* implicit */signed char) min((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) max((arr_18 [i_5] [i_5] [i_1] [i_0] [i_0]), (((/* implicit */short) arr_11 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] [i_5])))))) != (((((/* implicit */_Bool) 288228177128456205LL)) ? (arr_24 [i_0] [i_5]) : (var_6)))))), (((((((/* implicit */int) (signed char)-77)) + (2147483647))) << (((var_0) - (10898550239995688051ULL)))))));
                    var_31 = (((~(((((/* implicit */_Bool) (unsigned char)52)) ? (var_15) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)127))))))) >> (((/* implicit */int) (!(((/* implicit */_Bool) arr_14 [i_1] [i_1] [i_5] [i_1]))))));
                }
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 25; i_9 += 3) 
                {
                    for (long long int i_10 = 0; i_10 < 25; i_10 += 3) 
                    {
                        {
                            var_32 += ((/* implicit */unsigned char) ((long long int) ((short) ((unsigned int) arr_2 [i_0] [i_0] [i_0]))));
                            var_33 &= ((/* implicit */short) ((arr_27 [i_1]) != (max((((/* implicit */unsigned int) var_9)), (1516103762U)))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_34 += ((/* implicit */unsigned long long int) ((((/* implicit */int) ((signed char) (signed char)-4))) != (((/* implicit */int) ((((((/* implicit */_Bool) var_4)) ? (var_3) : (((/* implicit */long long int) 16352)))) != (((/* implicit */long long int) ((2130706432U) >> (((var_1) - (4164592028U)))))))))));
}
