/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229214
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229214 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229214
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
    for (unsigned short i_0 = 2; i_0 < 9; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            {
                /* LoopSeq 4 */
                for (unsigned short i_2 = 3; i_2 < 9; i_2 += 4) 
                {
                    var_19 = ((/* implicit */unsigned char) max((((((/* implicit */int) (short)31452)) % (((/* implicit */int) (short)-31464)))), (((((/* implicit */_Bool) arr_6 [i_2 - 1])) ? (arr_6 [i_2 - 3]) : (((/* implicit */int) (short)31452))))));
                    arr_9 [i_0 - 1] = ((/* implicit */unsigned short) ((((var_18) << (((4418862335373632021LL) - (4418862335373631998LL))))) | (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_0 - 2] [i_0 - 2] [i_2 + 1])) || (((/* implicit */_Bool) var_3))))))));
                    arr_10 [i_0 - 2] [i_1] [i_2 - 1] |= arr_8 [i_0 - 2] [i_0 + 1];
                    var_20 &= ((/* implicit */short) 63);
                }
                for (unsigned long long int i_3 = 0; i_3 < 10; i_3 += 4) 
                {
                    /* LoopNest 2 */
                    for (short i_4 = 0; i_4 < 10; i_4 += 4) 
                    {
                        for (short i_5 = 0; i_5 < 10; i_5 += 2) 
                        {
                            {
                                var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) (~(((/* implicit */int) max((arr_19 [i_3] [i_1]), (arr_19 [i_0 + 1] [i_1])))))))));
                                var_22 = arr_17 [i_5] [i_4] [i_3] [i_1] [i_0 - 2];
                                var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) (-(17250351009861629991ULL))))));
                                var_24 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)-5532))));
                            }
                        } 
                    } 
                    arr_20 [i_0 - 1] [i_0 + 1] [i_0 - 1] [i_0 + 1] = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */int) arr_0 [i_0 + 1])) >= (((/* implicit */int) var_0))))) == (((int) (short)-17484))));
                    arr_21 [i_0 - 1] [i_1] [i_3] = ((/* implicit */unsigned long long int) (((-(max((-4418862335373632021LL), (((/* implicit */long long int) arr_16 [i_0 - 2] [i_1])))))) <= (((((/* implicit */_Bool) arr_19 [i_0 - 1] [i_1])) ? (4418862335373632021LL) : (((/* implicit */long long int) arr_14 [i_0 - 2] [i_1] [i_3] [i_3]))))));
                }
                for (int i_6 = 0; i_6 < 10; i_6 += 4) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (long long int i_7 = 3; i_7 < 8; i_7 += 2) 
                    {
                        for (int i_8 = 3; i_8 < 8; i_8 += 3) 
                        {
                            {
                                arr_30 [i_8 + 1] [i_7] [i_6] [i_7] [i_0 - 1] = ((/* implicit */short) max((max((-2430899882085906735LL), (4418862335373632020LL))), (((/* implicit */long long int) ((unsigned int) (signed char)-4)))));
                                var_25 = ((/* implicit */unsigned int) max((((long long int) 378564700)), (((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (arr_1 [i_1]) : (((((/* implicit */int) (short)340)) >> (((-59) + (59))))))))));
                            }
                        } 
                    } 
                    arr_31 [i_6] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned int) 1285260886)) : (var_1)))) ? (((/* implicit */int) ((arr_13 [i_0 + 1] [i_0 - 2] [i_1] [i_1] [i_6]) >= (((/* implicit */int) arr_16 [i_0 - 1] [i_1]))))) : (arr_4 [i_0 - 2] [i_1] [i_0 + 1])))));
                    arr_32 [i_0 + 1] [i_1] = ((/* implicit */short) ((min((((((/* implicit */_Bool) arr_7 [i_0 + 1] [i_0 - 2])) ? (((/* implicit */int) arr_19 [i_0 + 1] [i_1])) : (arr_26 [i_0 + 1] [i_1] [i_0] [i_6] [i_6] [i_6] [i_6]))), (((/* implicit */int) arr_15 [i_0 + 1] [i_1] [i_6] [i_6])))) % (((((/* implicit */_Bool) (short)31744)) ? (((/* implicit */int) arr_7 [i_0 + 1] [i_1])) : (((/* implicit */int) (short)-15400))))));
                }
                for (int i_9 = 0; i_9 < 10; i_9 += 4) /* same iter space */
                {
                    var_26 = ((/* implicit */unsigned long long int) min((var_26), (((/* implicit */unsigned long long int) arr_0 [i_0 - 2]))));
                    arr_35 [i_9] [i_1] [i_0 - 2] [i_0 - 1] = ((/* implicit */unsigned short) ((min((arr_29 [i_0 - 1] [i_0 - 1] [i_0 + 1] [i_0 + 1] [i_0 - 1]), (arr_29 [i_0 - 2] [i_0 - 1] [i_0 - 1] [i_0 + 1] [i_9]))) & (((arr_18 [i_0 + 1] [i_0 + 1] [i_0 - 1] [i_1] [i_9] [i_9]) & (arr_4 [i_0 - 1] [i_0 - 1] [i_0 + 1])))));
                    arr_36 [i_0 - 1] [i_1] = (-(-3168522855217298512LL));
                }
                /* LoopSeq 3 */
                for (short i_10 = 1; i_10 < 7; i_10 += 2) /* same iter space */
                {
                    var_27 = ((/* implicit */short) min((((/* implicit */long long int) ((((-1285260906) + (2147483647))) << (((((((/* implicit */int) (signed char)-4)) + (13))) - (9)))))), (0LL)));
                    var_28 = ((/* implicit */short) min((var_28), (((/* implicit */short) (unsigned char)185))));
                    arr_40 [i_0 + 1] [i_0 - 1] [i_10] [i_0 + 1] = ((/* implicit */unsigned short) max((((/* implicit */short) (!(((((/* implicit */int) (short)-13488)) <= (((/* implicit */int) (unsigned char)31))))))), ((short)21816)));
                }
                for (short i_11 = 1; i_11 < 7; i_11 += 2) /* same iter space */
                {
                    arr_44 [i_0 - 1] [i_1] [i_11 + 2] = ((/* implicit */signed char) ((long long int) (short)14269));
                    /* LoopSeq 1 */
                    for (short i_12 = 1; i_12 < 7; i_12 += 2) 
                    {
                        arr_47 [i_0 - 2] [i_1] [i_11 + 2] [i_12 - 1] = ((/* implicit */unsigned long long int) ((((((((/* implicit */_Bool) (-(((/* implicit */int) arr_41 [i_0 - 1] [i_1]))))) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) var_3))))) + (9223372036854775807LL))) >> ((((~(((/* implicit */int) (unsigned short)0)))) * (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)48788)))))))));
                        arr_48 [i_0 - 2] [i_0 - 1] [i_0 - 2] [i_0 - 1] [i_0 - 2] [i_0 + 1] = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned long long int) 4418862335373632005LL))) ? (((((/* implicit */int) ((4418862335373632020LL) == (-8217568082245936428LL)))) | (((((/* implicit */_Bool) (short)31758)) ? (((/* implicit */int) arr_28 [i_0] [i_11 + 2] [i_0])) : (((/* implicit */int) (signed char)7)))))) : (((/* implicit */int) var_6))));
                    }
                }
                for (short i_13 = 1; i_13 < 7; i_13 += 2) /* same iter space */
                {
                    var_29 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1285260906)) ? (((/* implicit */int) (unsigned short)7)) : (((/* implicit */int) var_15))))) ? (((/* implicit */int) max((var_5), (var_12)))) : (max((((/* implicit */int) (short)-31744)), (-210967662)))))) ? (((/* implicit */long long int) ((/* implicit */int) (short)31770))) : (((long long int) (unsigned short)58198))));
                    /* LoopNest 2 */
                    for (int i_14 = 0; i_14 < 10; i_14 += 2) 
                    {
                        for (short i_15 = 0; i_15 < 10; i_15 += 4) 
                        {
                            {
                                var_30 = ((/* implicit */short) (-(max((((/* implicit */unsigned int) -1533888559)), (var_18)))));
                                var_31 = ((/* implicit */short) ((((((/* implicit */_Bool) (-(arr_3 [i_13 - 1] [i_15])))) || (((/* implicit */_Bool) var_12)))) ? (((((/* implicit */long long int) ((((/* implicit */int) (signed char)-5)) & (((/* implicit */int) arr_7 [i_1] [i_14]))))) / (min((arr_43 [i_15]), (((/* implicit */long long int) (short)31736)))))) : (((/* implicit */long long int) (-(((/* implicit */int) (short)12171)))))));
                                var_32 += ((/* implicit */signed char) ((short) max((-1), (((/* implicit */int) var_9)))));
                                arr_57 [i_0 - 2] [i_1] [i_13 - 1] [i_14] [i_15] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_13 - 1] [i_13 - 1])) ? (arr_8 [i_13 + 1] [i_13 - 1]) : (arr_8 [i_13 + 2] [i_13 - 1])))) ? (arr_13 [i_0 + 1] [i_1] [i_13 - 1] [i_14] [i_15]) : ((+(-210967676))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    var_33 = ((/* implicit */long long int) max((var_33), (9223372036854775796LL)));
}
