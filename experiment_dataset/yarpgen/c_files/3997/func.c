/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3997
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3997 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3997
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
    for (signed char i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        var_15 = ((/* implicit */_Bool) ((int) var_7));
        /* LoopNest 3 */
        for (signed char i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 25; i_2 += 4) 
            {
                for (signed char i_3 = 1; i_3 < 24; i_3 += 3) 
                {
                    {
                        var_16 = ((/* implicit */unsigned short) arr_9 [i_3] [i_3] [i_3 - 1] [i_3]);
                        var_17 -= ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)7)) || (((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned short)65151)) && (((/* implicit */_Bool) (signed char)1)))) ? (((/* implicit */int) max(((short)-31856), (((/* implicit */short) arr_7 [i_0] [i_0] [i_2] [i_2]))))) : (((/* implicit */int) (unsigned short)31222)))))));
                        var_18 = ((/* implicit */unsigned char) ((unsigned long long int) ((var_11) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_3 - 1] [i_3 + 1]))))));
                    }
                } 
            } 
        } 
        var_19 = ((/* implicit */signed char) var_6);
        var_20 = ((/* implicit */unsigned char) var_11);
    }
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        var_21 = min((((arr_8 [i_4] [i_4] [i_4] [i_4] [i_4]) ? (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_4]))) : (var_8))), (((/* implicit */long long int) (+(((/* implicit */int) arr_8 [i_4] [i_4] [i_4] [i_4] [i_4]))))));
        var_22 = ((/* implicit */short) (+((-2147483647 - 1))));
        var_23 = ((/* implicit */signed char) (~(((/* implicit */int) ((var_12) >= (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_4))))))))));
        var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) ((((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-23)) ? (((/* implicit */int) (signed char)-75)) : (((/* implicit */int) (signed char)-24))))) % (max((arr_4 [i_4]), (arr_4 [i_4]))))))));
    }
    /* LoopNest 2 */
    for (unsigned long long int i_5 = 0; i_5 < 20; i_5 += 1) 
    {
        for (int i_6 = 0; i_6 < 20; i_6 += 1) 
        {
            {
                var_25 = ((/* implicit */unsigned char) (+((((!(((/* implicit */_Bool) arr_18 [3U] [i_6] [i_6])))) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_7)) << (((/* implicit */int) arr_9 [i_6] [i_6] [(unsigned short)5] [(unsigned short)5]))))) : (var_9)))));
                /* LoopSeq 1 */
                for (short i_7 = 0; i_7 < 20; i_7 += 2) 
                {
                    /* LoopSeq 3 */
                    for (signed char i_8 = 3; i_8 < 19; i_8 += 3) 
                    {
                        var_26 = ((/* implicit */int) ((((((/* implicit */int) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) var_6))))) <= (((/* implicit */int) var_4)))) ? (min((var_12), (((/* implicit */unsigned long long int) arr_15 [i_8 - 1] [i_8 - 3])))) : (((/* implicit */unsigned long long int) (((!(var_3))) ? (((unsigned int) var_11)) : (((/* implicit */unsigned int) ((((/* implicit */int) var_1)) % (((/* implicit */int) arr_10 [i_6] [i_8]))))))))));
                        var_27 -= ((/* implicit */short) var_5);
                        var_28 = ((/* implicit */signed char) var_14);
                    }
                    /* vectorizable */
                    for (unsigned short i_9 = 4; i_9 < 19; i_9 += 1) /* same iter space */
                    {
                        var_29 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [17LL] [i_7] [i_7])))))) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) arr_7 [(short)13] [i_9] [i_9] [i_9 + 1])))));
                        arr_27 [i_5] [i_5] [i_5] [i_5] [i_5] = ((/* implicit */unsigned short) var_0);
                        arr_28 [i_5] [i_5] [i_5] = ((var_11) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_9] [i_9] [i_9] [i_9 + 1] [i_9 - 2]))));
                        var_30 -= (+(((((/* implicit */unsigned int) ((/* implicit */int) var_5))) - (var_9))));
                    }
                    for (unsigned short i_10 = 4; i_10 < 19; i_10 += 1) /* same iter space */
                    {
                        arr_33 [(unsigned short)1] [(unsigned short)1] [i_7] [i_10] &= ((/* implicit */short) ((signed char) var_3));
                        var_31 *= ((/* implicit */unsigned int) min((((/* implicit */int) var_13)), ((-(((/* implicit */int) (unsigned char)25))))));
                        var_32 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_14 [i_7])) ? (((/* implicit */int) var_0)) : (((((((/* implicit */int) var_4)) + (2147483647))) << (((arr_29 [i_10 + 1] [i_10 + 1]) - (1897151661U)))))));
                        var_33 = ((/* implicit */unsigned char) min((var_33), (((/* implicit */unsigned char) (+(min((((/* implicit */int) var_7)), ((-(((/* implicit */int) var_1)))))))))));
                        var_34 = ((/* implicit */unsigned short) ((int) arr_30 [i_10 - 4] [i_5] [i_5] [i_7] [(unsigned short)8] [i_5]));
                    }
                    arr_34 [i_5] [i_6] [i_5] [i_5] = ((/* implicit */unsigned short) var_2);
                    /* LoopSeq 2 */
                    for (unsigned int i_11 = 1; i_11 < 19; i_11 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (short i_12 = 0; i_12 < 20; i_12 += 1) 
                        {
                            var_35 = ((/* implicit */_Bool) min((var_5), (arr_19 [i_5])));
                            arr_41 [i_7] [i_11 + 1] [i_6] [i_7] &= ((((/* implicit */_Bool) arr_30 [i_5] [i_6] [i_6] [i_7] [i_7] [i_12])) ? (((/* implicit */unsigned int) (-(((/* implicit */int) arr_9 [i_11] [i_11 - 1] [i_11 + 1] [i_11 + 1]))))) : ((+(var_9))));
                            var_36 = ((/* implicit */long long int) (~(((/* implicit */int) max((arr_18 [i_5] [i_5] [i_12]), (arr_25 [i_5] [i_7] [(unsigned short)8]))))));
                        }
                        var_37 = ((/* implicit */unsigned long long int) arr_14 [i_5]);
                    }
                    for (unsigned short i_13 = 0; i_13 < 20; i_13 += 1) 
                    {
                        var_38 = ((/* implicit */signed char) var_8);
                        /* LoopSeq 1 */
                        for (short i_14 = 0; i_14 < 20; i_14 += 1) 
                        {
                            var_39 = max((var_14), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_43 [i_13] [i_13] [i_7] [i_6] [i_5]))))));
                            var_40 += ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_1))))) - (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (var_6)))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)68))))) : (max((var_9), (((/* implicit */unsigned int) (-(((/* implicit */int) var_13)))))))));
                            arr_47 [i_5] [(short)4] [(unsigned char)5] [i_5] [i_7] = ((/* implicit */unsigned char) ((((/* implicit */long long int) (~(var_14)))) >= (arr_39 [i_6] [i_6] [i_7] [(unsigned char)19] [i_13])));
                            var_41 = ((/* implicit */unsigned char) (~(((/* implicit */int) min((((/* implicit */unsigned short) max((((/* implicit */unsigned char) var_4)), (var_13)))), (min((var_10), (((/* implicit */unsigned short) var_0)))))))));
                        }
                        var_42 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_9)))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_3))))) ? ((-(((/* implicit */int) arr_38 [i_5] [i_5] [i_7] [i_7])))) : (((/* implicit */int) arr_6 [i_6] [i_7] [i_6])))) : (((/* implicit */int) var_0))));
                    }
                }
                arr_48 [i_5] = ((/* implicit */signed char) (!(((/* implicit */_Bool) max((min((var_8), (((/* implicit */long long int) arr_14 [(signed char)4])))), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_35 [i_5] [i_5] [i_5] [i_5]))))))))));
                /* LoopNest 2 */
                for (signed char i_15 = 3; i_15 < 17; i_15 += 1) 
                {
                    for (unsigned char i_16 = 1; i_16 < 19; i_16 += 2) 
                    {
                        {
                            var_43 += ((/* implicit */int) (((+(((/* implicit */int) var_0)))) != (((((/* implicit */int) arr_45 [i_16 + 1] [i_15 - 1] [i_15 - 2])) + (((/* implicit */int) arr_45 [i_16 + 1] [i_16 + 1] [i_15 - 2]))))));
                            var_44 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) arr_19 [i_15 + 1])) ? (arr_23 [i_16] [i_16] [(short)8] [i_5] [i_5]) : (((/* implicit */int) ((((/* implicit */int) (short)32760)) != (((/* implicit */int) (short)4975))))))), (((/* implicit */int) ((((((/* implicit */_Bool) (short)-32763)) ? (((/* implicit */unsigned long long int) 4294967290U)) : (3370928435846600027ULL))) > (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_11) > (arr_31 [i_5] [i_5] [i_5] [i_5]))))))))));
                        }
                    } 
                } 
                var_45 += ((/* implicit */unsigned int) var_3);
            }
        } 
    } 
}
