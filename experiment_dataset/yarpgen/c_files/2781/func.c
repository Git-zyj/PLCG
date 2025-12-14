/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2781
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2781 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2781
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
    var_18 = var_15;
    var_19 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) min(((signed char)-119), ((signed char)-119)))) ? (min((((/* implicit */long long int) var_2)), (-4887388801437837595LL))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-17))) : (4318139521666720765LL))))), (((/* implicit */long long int) -2104072500))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            {
                /* LoopSeq 3 */
                for (signed char i_2 = 2; i_2 < 20; i_2 += 4) /* same iter space */
                {
                    arr_10 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) min((((/* implicit */signed char) (_Bool)1)), ((signed char)-19)));
                    arr_11 [(unsigned short)4] [i_2] |= ((/* implicit */_Bool) min((((int) arr_8 [i_2] [i_2 + 2] [i_2 + 3])), (((/* implicit */int) (signed char)-119))));
                    arr_12 [i_0] [i_1] [i_2] |= ((/* implicit */unsigned short) arr_9 [i_0] [i_2] [i_2] [i_1]);
                }
                for (signed char i_3 = 2; i_3 < 20; i_3 += 4) /* same iter space */
                {
                    arr_17 [i_0] [i_1] [i_0] [i_0] = min((((((/* implicit */_Bool) (signed char)-2)) ? (((/* implicit */int) (signed char)-117)) : (((/* implicit */int) (short)1102)))), (((/* implicit */int) min(((short)-628), (((/* implicit */short) (unsigned char)249))))));
                    var_20 -= ((/* implicit */long long int) var_14);
                    /* LoopNest 2 */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        for (int i_5 = 3; i_5 < 23; i_5 += 3) 
                        {
                            {
                                arr_25 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) arr_24 [i_5] [i_5] [i_5 - 1] [i_5] [i_5] [i_5] [i_5])) ? (((/* implicit */int) arr_24 [i_0] [i_5] [i_5 - 3] [i_5] [i_5] [i_5] [i_5])) : (2104072499))));
                                arr_26 [i_0] [i_1] [i_0] [i_0] [i_0] [i_3] = 498461620643137738LL;
                                arr_27 [i_0] [i_0] [i_0] [i_4] [i_5 - 3] = ((/* implicit */int) (signed char)10);
                                var_21 = ((/* implicit */signed char) var_4);
                            }
                        } 
                    } 
                }
                for (signed char i_6 = 2; i_6 < 20; i_6 += 4) /* same iter space */
                {
                    arr_31 [i_0] [i_1] [i_6] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) (unsigned short)32831))) ? (((/* implicit */int) (unsigned short)22979)) : (((int) arr_20 [i_0] [i_0] [i_0] [i_0]))))) ? (arr_22 [i_0] [i_0] [i_1] [i_0] [i_0]) : (min((((/* implicit */long long int) (short)32766)), (2447075494992210756LL)))));
                    arr_32 [i_0] = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) min((((/* implicit */unsigned short) (unsigned char)90)), ((unsigned short)22999)))) ? (((arr_6 [(unsigned short)1] [i_1] [i_6]) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) (unsigned char)125)))) : (((/* implicit */int) arr_20 [i_0] [i_0] [i_1] [i_6])))), ((~(((/* implicit */int) arr_7 [i_6 - 2]))))));
                    arr_33 [i_0] = ((/* implicit */signed char) min((((/* implicit */long long int) ((((/* implicit */int) arr_23 [i_0] [i_0] [i_1] [i_0] [i_0])) + (((/* implicit */int) var_5))))), ((-9223372036854775807LL - 1LL))));
                    /* LoopSeq 1 */
                    for (signed char i_7 = 1; i_7 < 22; i_7 += 1) 
                    {
                        var_22 &= ((/* implicit */_Bool) arr_16 [i_0] [i_7 + 2]);
                        var_23 &= ((/* implicit */long long int) min(((unsigned char)90), (((/* implicit */unsigned char) (_Bool)1))));
                    }
                    var_24 -= (unsigned short)56724;
                }
                var_25 = ((/* implicit */long long int) min((((((/* implicit */_Bool) 2999017298U)) ? (1895677424) : (((/* implicit */int) (unsigned char)0)))), (((/* implicit */int) ((unsigned char) arr_0 [i_0])))));
                /* LoopSeq 4 */
                for (unsigned int i_8 = 3; i_8 < 23; i_8 += 3) 
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_9 = 1; i_9 < 22; i_9 += 4) 
                    {
                        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                        {
                            {
                                arr_44 [i_0] [i_1] [i_0] [i_9] [i_0] = ((/* implicit */signed char) (-(min((((/* implicit */int) ((-5287554189484381104LL) == (((/* implicit */long long int) ((/* implicit */int) (unsigned char)185)))))), (((((/* implicit */_Bool) arr_21 [(_Bool)1] [i_1] [i_1] [i_0])) ? (((/* implicit */int) (short)32766)) : (((/* implicit */int) (unsigned short)42557))))))));
                                var_26 = ((/* implicit */int) min((var_26), ((~(((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)162)) || (((/* implicit */_Bool) (unsigned short)22979)))))))));
                            }
                        } 
                    } 
                    var_27 = ((/* implicit */long long int) max((var_27), (((/* implicit */long long int) min(((+(((/* implicit */int) arr_36 [i_8] [i_8 - 1] [(_Bool)1] [i_8] [i_8 + 1])))), ((~(((((/* implicit */int) arr_1 [i_1] [i_8])) & (((/* implicit */int) arr_36 [i_0] [i_0] [i_0] [i_0] [i_0])))))))))));
                    arr_45 [i_1] [10U] [i_8] [i_8] &= ((/* implicit */signed char) (!(((((/* implicit */long long int) (-2147483647 - 1))) > (16777215LL)))));
                    var_28 += ((/* implicit */signed char) (~((~(((/* implicit */int) ((((/* implicit */int) (signed char)-8)) != (((/* implicit */int) arr_41 [i_0] [i_0] [i_0] [i_0] [i_1] [i_8])))))))));
                }
                for (long long int i_11 = 1; i_11 < 22; i_11 += 3) 
                {
                    var_29 = ((((/* implicit */_Bool) arr_41 [6U] [i_1] [i_11 - 1] [(_Bool)1] [i_11 - 1] [i_0])) ? (((/* implicit */long long int) min((((((/* implicit */int) var_14)) / (((/* implicit */int) arr_36 [i_0] [i_0] [i_0] [i_1] [i_11 + 1])))), ((-(arr_37 [i_0] [i_1] [i_0] [i_1])))))) : (min((arr_5 [i_11 + 2] [i_11 - 1] [i_11 + 1]), (((/* implicit */long long int) arr_7 [i_11 + 2])))));
                    arr_49 [i_1] [i_1] [i_11] [i_1] |= ((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)0)) - (((/* implicit */int) (unsigned char)6))));
                    arr_50 [i_0] [i_1] [i_11] = ((/* implicit */int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_24 [i_11 + 1] [i_11 + 1] [i_11] [i_11 + 1] [i_11 - 1] [i_11 + 1] [(_Bool)1])) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (0LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)56724)) ? (((/* implicit */int) (signed char)90)) : (((/* implicit */int) (unsigned char)18)))))))), (var_3)));
                }
                /* vectorizable */
                for (unsigned short i_12 = 0; i_12 < 24; i_12 += 4) 
                {
                    arr_53 [i_0] [i_1] [i_1] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_52 [i_0] [(signed char)21] [i_1] [i_12])) ? (((/* implicit */int) arr_52 [i_0] [i_1] [i_12] [i_12])) : (((/* implicit */int) (unsigned short)65432))));
                    var_30 |= ((/* implicit */unsigned long long int) ((arr_9 [i_0] [i_1] [i_1] [i_12]) ? (arr_28 [i_0] [i_1] [i_1] [i_12]) : (arr_37 [i_0] [i_1] [i_12] [i_12])));
                }
                for (unsigned int i_13 = 0; i_13 < 24; i_13 += 2) 
                {
                    arr_56 [i_0] = min((((/* implicit */long long int) arr_48 [i_0] [(unsigned short)1] [i_0])), (min((((/* implicit */long long int) (~(((/* implicit */int) var_7))))), (((((/* implicit */_Bool) 988106865)) ? (((/* implicit */long long int) ((/* implicit */int) var_15))) : (0LL))))));
                    arr_57 [i_0] [i_1] [i_13] = ((((/* implicit */int) (unsigned short)65535)) ^ (((/* implicit */int) (signed char)-31)));
                    var_31 += ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) min((-758556282), (((/* implicit */int) arr_2 [i_0]))))) ? (2147483634) : (((/* implicit */int) (_Bool)1))))));
                    var_32 = ((/* implicit */unsigned short) var_1);
                }
            }
        } 
    } 
    var_33 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-31))) : ((-(-6107774002994367504LL)))));
}
