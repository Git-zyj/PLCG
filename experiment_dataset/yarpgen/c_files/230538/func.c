/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230538
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230538 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230538
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
    var_17 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (~(958749796066935698LL)))))))) ^ (var_15)));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            {
                var_18 = (+(min((14856904605937026842ULL), (((/* implicit */unsigned long long int) (short)15630)))));
                var_19 = ((/* implicit */long long int) ((14856904605937026870ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))));
                arr_6 [i_0] [i_1] [i_1] = ((/* implicit */short) min((((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */long long int) ((var_4) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_6))))) : (arr_3 [i_0]))), (((long long int) ((((/* implicit */unsigned long long int) arr_5 [i_1] [i_0])) + (arr_1 [i_0]))))));
                /* LoopSeq 1 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    /* LoopSeq 3 */
                    for (unsigned long long int i_3 = 2; i_3 < 24; i_3 += 1) 
                    {
                        arr_12 [i_0] [i_1] [i_1] [i_3] = ((/* implicit */long long int) ((((((/* implicit */unsigned long long int) (~(var_15)))) & (max((14856904605937026870ULL), (3589839467772524774ULL))))) | (((/* implicit */unsigned long long int) ((/* implicit */int) (short)10082)))));
                        arr_13 [i_0] [i_1] [i_1] [(unsigned char)15] = ((/* implicit */short) ((arr_9 [i_1] [i_0]) != (((/* implicit */unsigned long long int) (-(arr_5 [i_0] [i_0]))))));
                    }
                    for (short i_4 = 0; i_4 < 25; i_4 += 1) /* same iter space */
                    {
                        var_20 = ((/* implicit */unsigned int) min((((6183507012118615261LL) >= (-3944006073864605970LL))), (((var_16) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_0] [i_1] [i_2] [i_4])))))));
                        arr_16 [i_0] [i_1] [i_0] [i_0] [i_1] [i_0] = ((/* implicit */long long int) (-((+((-(((/* implicit */int) var_10))))))));
                        arr_17 [i_0] [i_1] [i_1] [i_4] = ((/* implicit */unsigned long long int) var_9);
                        var_21 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((((/* implicit */int) min((var_0), (((/* implicit */unsigned short) var_10))))) == (((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))))), (((((/* implicit */_Bool) ((((/* implicit */int) var_12)) & (((/* implicit */int) var_4))))) ? (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (short)-15630)), (var_15)))) : (((arr_9 [i_1] [i_1]) << (((arr_4 [i_0] [19LL]) - (2974651338646562209LL)))))))));
                        /* LoopSeq 3 */
                        for (long long int i_5 = 2; i_5 < 24; i_5 += 1) 
                        {
                            var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) ((int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_19 [i_0] [14U] [i_0]))))) ? (((((/* implicit */_Bool) var_5)) ? (arr_9 [i_0] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))))) : (((/* implicit */unsigned long long int) min((arr_18 [i_0] [16U] [i_2] [i_4] [i_0]), (((/* implicit */long long int) var_10)))))))))));
                            var_23 = ((/* implicit */unsigned int) ((short) -6183507012118615261LL));
                        }
                        /* vectorizable */
                        for (signed char i_6 = 1; i_6 < 24; i_6 += 1) 
                        {
                            var_24 = ((/* implicit */unsigned long long int) arr_5 [i_4] [i_6 - 1]);
                            var_25 = ((/* implicit */signed char) max((var_25), (((/* implicit */signed char) (+(((/* implicit */int) arr_7 [i_6 - 1] [(short)8] [i_6 - 1])))))));
                            arr_23 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */int) ((14856904605937026870ULL) & (14856904605937026842ULL)));
                        }
                        for (int i_7 = 0; i_7 < 25; i_7 += 2) 
                        {
                            arr_28 [i_0] [i_1] [i_0] [i_4] [i_1] [i_1] = ((/* implicit */_Bool) (~(((((/* implicit */unsigned long long int) 5879599360408807515LL)) ^ (3589839467772524782ULL)))));
                            var_26 = ((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) ((var_5) & (var_11)))) ? (((var_9) | (((/* implicit */long long int) var_15)))) : (((/* implicit */long long int) var_2)))));
                        }
                    }
                    for (short i_8 = 0; i_8 < 25; i_8 += 1) /* same iter space */
                    {
                        var_27 = ((/* implicit */short) max((var_27), (((/* implicit */short) ((unsigned long long int) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (unsigned short)1613))))))));
                        arr_33 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)0)) & (((/* implicit */int) (_Bool)0))));
                    }
                    /* LoopSeq 1 */
                    for (long long int i_9 = 0; i_9 < 25; i_9 += 2) 
                    {
                        arr_36 [i_0] [i_1] [i_1] [i_9] = ((/* implicit */short) min((min((((/* implicit */int) arr_19 [i_0] [i_1] [i_9])), ((-(((/* implicit */int) arr_31 [i_1])))))), (((/* implicit */int) arr_30 [i_0] [i_1] [16U] [i_2] [i_2] [i_1]))));
                        var_28 = ((/* implicit */long long int) (-(((/* implicit */int) ((signed char) ((arr_1 [i_0]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))))));
                    }
                    var_29 = ((/* implicit */unsigned int) ((((/* implicit */int) ((_Bool) (+(arr_34 [i_1] [i_1] [20] [0U]))))) >> (min((((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-16615))) / (15109601158941310178ULL))), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) (_Bool)1)), (4424478191348777411LL))))))));
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 25; i_10 += 3) 
                    {
                        for (unsigned long long int i_11 = 0; i_11 < 25; i_11 += 3) 
                        {
                            {
                                var_30 = ((/* implicit */unsigned short) min((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) var_14)) / (var_8)))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) var_6))))) : (((((/* implicit */int) var_10)) << (((arr_34 [i_0] [i_1] [i_2] [i_11]) + (826652130)))))))), (((var_9) ^ (((((/* implicit */long long int) ((/* implicit */int) arr_30 [i_0] [i_1] [i_2] [i_10] [i_11] [i_11]))) & (arr_18 [i_0] [i_1] [i_1] [i_0] [i_11])))))));
                                var_31 |= ((/* implicit */unsigned short) ((var_16) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) -196532109185592371LL))))));
                                var_32 = ((/* implicit */long long int) ((((((((/* implicit */unsigned int) var_2)) & (arr_14 [i_0] [i_1] [i_1] [i_11]))) >> (((min((var_8), (((/* implicit */long long int) arr_21 [i_1] [i_1] [i_1] [(short)11] [i_2] [i_10] [18U])))) + (7939613733448183464LL))))) > (((unsigned int) arr_39 [i_0] [i_1] [i_2] [i_10] [i_11]))));
                                var_33 = (+(min((((/* implicit */int) ((14856904605937026870ULL) >= (((/* implicit */unsigned long long int) arr_18 [i_0] [i_1] [i_2] [i_10] [i_11]))))), ((-(809232253))))));
                                var_34 = ((/* implicit */_Bool) max((min((((-7681644391183569202LL) & (((/* implicit */long long int) ((/* implicit */int) arr_26 [i_1]))))), (((/* implicit */long long int) min((var_2), (((/* implicit */int) var_13))))))), (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)10284)) >> (((((/* implicit */int) var_0)) - (50502))))))));
                            }
                        } 
                    } 
                }
                var_35 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_21 [i_1] [i_1] [i_0] [i_0] [i_0] [(short)15] [i_0])), (var_16)))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_8)) && (arr_21 [i_1] [i_1] [i_0] [i_1] [i_0] [i_0] [i_0])))) : ((-(((/* implicit */int) (short)22735))))));
            }
        } 
    } 
}
