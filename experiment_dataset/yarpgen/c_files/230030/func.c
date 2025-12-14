/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230030
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230030 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230030
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
    var_11 = ((var_8) ? (((/* implicit */int) ((signed char) var_4))) : (((/* implicit */int) var_6)));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                for (signed char i_2 = 0; i_2 < 19; i_2 += 4) 
                {
                    /* LoopSeq 3 */
                    for (unsigned short i_3 = 0; i_3 < 19; i_3 += 1) 
                    {
                        arr_11 [i_3] [i_1] [1] [i_1] [i_1] [i_2] = ((/* implicit */unsigned char) (~(var_1)));
                        arr_12 [i_3] [i_3] [(unsigned short)6] [i_3] = ((/* implicit */unsigned int) (((~(((/* implicit */int) (short)15397)))) < (((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) ((_Bool) (unsigned short)65535))) : (((/* implicit */int) arr_8 [i_0] [i_0] [i_1] [i_2] [i_3]))))));
                        arr_13 [i_3] [i_3] [i_2] [i_1] [i_1] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_7 [i_3] [i_3] [i_3] [i_3]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (min((((var_10) / (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)9))))), (var_0)))));
                        var_12 = ((/* implicit */_Bool) var_3);
                    }
                    for (unsigned short i_4 = 0; i_4 < 19; i_4 += 3) /* same iter space */
                    {
                        /* LoopSeq 4 */
                        for (unsigned int i_5 = 3; i_5 < 18; i_5 += 1) /* same iter space */
                        {
                            var_13 = ((/* implicit */_Bool) max((var_13), (((/* implicit */_Bool) max((var_3), (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)242)) && (((/* implicit */_Bool) 16383))))))))));
                            arr_20 [i_0] [i_0] [i_4] [i_0] [i_0] = ((/* implicit */unsigned int) arr_4 [i_1] [i_4]);
                        }
                        for (unsigned int i_6 = 3; i_6 < 18; i_6 += 1) /* same iter space */
                        {
                            var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 469762048)) ? (((/* implicit */unsigned int) ((var_9) << (((/* implicit */int) arr_18 [(_Bool)1] [(_Bool)1] [i_1] [i_2] [i_2] [i_2] [i_6 + 1]))))) : (((var_1) << (((((/* implicit */int) (unsigned short)65535)) - (65517)))))))) ? (((((/* implicit */_Bool) (unsigned short)65510)) ? (((0ULL) | (((/* implicit */unsigned long long int) 887696233)))) : (var_10))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_6 [(signed char)4] [i_1] [i_2] [i_6 - 1])) << ((((~(((/* implicit */int) arr_0 [(signed char)16])))) + (22190)))))))))));
                            arr_23 [i_0] [i_0] [i_0] [i_4] [(_Bool)1] = ((/* implicit */short) min((((/* implicit */long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) var_8))) == (var_1))) ? (((/* implicit */int) (signed char)7)) : (((/* implicit */int) var_5))))), (-36028797018963968LL)));
                        }
                        /* vectorizable */
                        for (unsigned int i_7 = 3; i_7 < 18; i_7 += 1) /* same iter space */
                        {
                            var_15 = var_3;
                            arr_26 [10] [i_1] [i_7 - 1] [i_4] [i_4] = (!(((((/* implicit */_Bool) 3746223678U)) && (((/* implicit */_Bool) var_0)))));
                        }
                        for (signed char i_8 = 0; i_8 < 19; i_8 += 4) 
                        {
                            arr_29 [i_4] [i_4] [i_4] [i_4] [i_4] = min((((((/* implicit */_Bool) (~(15728640)))) ? (var_3) : (var_3))), (((/* implicit */int) (unsigned short)65531)));
                            arr_30 [(unsigned char)9] [i_1] [i_1] [i_4] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned int) (~(var_1))))) ? (((((/* implicit */_Bool) (-(var_4)))) ? (arr_3 [i_4] [(unsigned short)11] [(signed char)17]) : (((var_5) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_4] [i_4]))))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_8] [i_1] [6ULL] [i_1] [i_8] [i_2])))));
                        }
                        arr_31 [i_4] = ((/* implicit */int) 5977743529889816278ULL);
                    }
                    for (unsigned short i_9 = 0; i_9 < 19; i_9 += 3) /* same iter space */
                    {
                        arr_34 [i_0] [i_0] [i_9] = ((((_Bool) arr_2 [i_0])) ? ((+(-15728641))) : (((/* implicit */int) var_8)));
                        arr_35 [i_1] &= ((/* implicit */_Bool) (+(((12575924658503736779ULL) >> (((/* implicit */int) (_Bool)1))))));
                        arr_36 [(signed char)2] [i_9] [(signed char)2] [i_2] [i_9] = ((/* implicit */unsigned char) ((var_3) > (((((arr_7 [i_2] [i_0] [i_0] [i_9]) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_2)))) / (((((/* implicit */_Bool) var_9)) ? (325734) : (((/* implicit */int) (unsigned char)52))))))));
                    }
                    /* LoopNest 2 */
                    for (int i_10 = 3; i_10 < 17; i_10 += 3) 
                    {
                        for (unsigned int i_11 = 0; i_11 < 19; i_11 += 4) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned char) var_5);
                                var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) var_4))));
                                arr_43 [15U] [15U] [i_2] [i_11] [i_11] [i_2] [i_11] = ((/* implicit */unsigned char) ((int) (~(((/* implicit */int) ((unsigned short) var_3))))));
                            }
                        } 
                    } 
                }
                var_18 = ((/* implicit */unsigned int) ((signed char) (unsigned short)47015));
                var_19 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_1] [i_0])) ? (var_9) : (var_3)))) ? (min((var_0), (((/* implicit */unsigned long long int) 9223372036854775793LL)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1623603086U)) ? (((/* implicit */int) (unsigned short)18520)) : (((/* implicit */int) var_2))))))), (((var_4) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))));
                arr_44 [i_0] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)39386)) ? (((((/* implicit */_Bool) 554628815397104393ULL)) ? (((/* implicit */int) (signed char)26)) : (arr_28 [i_1] [i_1] [(unsigned char)6] [i_1] [i_1]))) : (((/* implicit */int) (unsigned char)42))))) ? (((/* implicit */int) (short)-4)) : (((/* implicit */int) arr_37 [i_0] [i_0] [i_1] [i_0] [i_0]))));
            }
        } 
    } 
    var_20 = ((/* implicit */int) min(((unsigned char)0), (((/* implicit */unsigned char) (signed char)70))));
}
