/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247315
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247315 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247315
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
    /* LoopSeq 1 */
    for (unsigned char i_0 = 1; i_0 < 17; i_0 += 4) 
    {
        /* LoopSeq 4 */
        /* vectorizable */
        for (signed char i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            var_15 |= ((/* implicit */signed char) ((_Bool) var_3));
            var_16 = ((/* implicit */unsigned char) ((-9223372036854775802LL) < (((/* implicit */long long int) ((/* implicit */int) var_12)))));
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 19; i_2 += 1) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        var_17 = ((/* implicit */long long int) ((signed char) var_2));
                        var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) (~((+(((/* implicit */int) var_10)))))))));
                        var_19 = ((/* implicit */int) ((unsigned char) (!(((/* implicit */_Bool) (signed char)-7)))));
                        var_20 = ((/* implicit */int) ((long long int) var_8));
                        arr_9 [i_3] [i_1] [i_3] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                    }
                } 
            } 
        }
        for (unsigned short i_4 = 0; i_4 < 19; i_4 += 4) /* same iter space */
        {
            /* LoopSeq 2 */
            for (unsigned short i_5 = 0; i_5 < 19; i_5 += 4) 
            {
                var_21 = ((/* implicit */short) (~(min((((/* implicit */unsigned int) min((((/* implicit */unsigned short) var_2)), (var_14)))), (((var_1) | (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))));
                var_22 -= ((/* implicit */long long int) max((((/* implicit */int) ((signed char) ((var_11) % (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))), ((~(((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) (signed char)9)))))))));
                arr_14 [i_0] [16ULL] [i_5] = ((/* implicit */long long int) ((unsigned char) (((+(var_5))) > (((/* implicit */long long int) ((/* implicit */int) (short)-25634))))));
            }
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned int) (-(3000859482U))))) ? ((-(((/* implicit */int) var_12)))) : ((+(((/* implicit */int) min((((/* implicit */short) var_10)), (var_12)))))))))));
                var_24 = ((/* implicit */short) max((min((max((((/* implicit */unsigned long long int) var_12)), (0ULL))), (((/* implicit */unsigned long long int) var_2)))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_3)) / (((/* implicit */int) var_12)))))));
                var_25 = ((/* implicit */unsigned char) (((((-(((/* implicit */int) (_Bool)1)))) / (524287))) ^ (((/* implicit */int) (unsigned char)232))));
            }
            arr_17 [i_4] [i_0 + 2] = ((/* implicit */unsigned long long int) (-(min((((/* implicit */unsigned int) (signed char)-54)), (1294107814U)))));
        }
        for (unsigned short i_7 = 0; i_7 < 19; i_7 += 4) /* same iter space */
        {
            var_26 &= ((/* implicit */int) (+(max((((long long int) 1294107816U)), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_7)))))))));
            var_27 = ((/* implicit */_Bool) max((max((var_11), (((/* implicit */long long int) var_12)))), (((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)22)))))));
            var_28 = ((/* implicit */short) min((((((/* implicit */unsigned int) ((/* implicit */int) (short)15))) ^ (((((/* implicit */_Bool) var_11)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) var_4))))))), (((/* implicit */unsigned int) min((((/* implicit */short) var_9)), (max((((/* implicit */short) var_6)), (var_4))))))));
            arr_20 [i_7] = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) (short)15)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)110)))), (((((/* implicit */_Bool) ((short) var_0))) ? ((~(((/* implicit */int) var_3)))) : (((/* implicit */int) var_2))))));
        }
        for (unsigned short i_8 = 0; i_8 < 19; i_8 += 4) /* same iter space */
        {
            /* LoopNest 3 */
            for (unsigned int i_9 = 0; i_9 < 19; i_9 += 4) 
            {
                for (signed char i_10 = 2; i_10 < 18; i_10 += 4) 
                {
                    for (unsigned long long int i_11 = 0; i_11 < 19; i_11 += 4) 
                    {
                        {
                            var_29 += ((/* implicit */long long int) (_Bool)1);
                            var_30 = ((/* implicit */unsigned int) ((((var_5) >> (((/* implicit */int) (_Bool)1)))) & (((/* implicit */long long int) max((((/* implicit */unsigned int) (unsigned char)19)), (var_13))))));
                            arr_30 [i_0] [i_8] [i_9] [i_10] [i_11] = ((/* implicit */int) (+(min((((/* implicit */long long int) (signed char)127)), (var_11)))));
                        }
                    } 
                } 
            } 
            var_31 = ((/* implicit */long long int) min((min(((!(((/* implicit */_Bool) var_1)))), ((!(((/* implicit */_Bool) var_12)))))), (((((/* implicit */_Bool) ((short) var_13))) && (((/* implicit */_Bool) var_0))))));
        }
        /* LoopNest 2 */
        for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) 
        {
            for (short i_13 = 0; i_13 < 19; i_13 += 4) 
            {
                {
                    var_32 = (signed char)3;
                    /* LoopSeq 3 */
                    for (unsigned int i_14 = 0; i_14 < 19; i_14 += 4) 
                    {
                        arr_40 [i_0] [i_12] [i_13] [i_12] = (-(min((((/* implicit */unsigned int) var_3)), (2232825640U))));
                        arr_41 [i_14] = (~(min((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (signed char)-101)) : (((/* implicit */int) (short)-1054)))), (((((/* implicit */_Bool) (unsigned char)185)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (signed char)-7)))))));
                    }
                    for (int i_15 = 1; i_15 < 16; i_15 += 2) /* same iter space */
                    {
                        arr_44 [1LL] [i_12] [i_12] [i_13] [i_12] [1LL] = ((/* implicit */short) max((((/* implicit */unsigned int) (~(((((((/* implicit */int) var_2)) + (2147483647))) << (((9633326783308792003ULL) - (9633326783308792003ULL)))))))), (((((/* implicit */_Bool) var_4)) ? (((1294107804U) >> (((9633326783308791986ULL) - (9633326783308791973ULL))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_12))))))))));
                        var_33 = ((((/* implicit */_Bool) (short)-1054)) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_2))) != (var_11)))) : (((((((/* implicit */int) var_3)) + (2147483647))) << (((((/* implicit */int) (short)953)) - (953))))));
                        var_34 = ((/* implicit */short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) < (8813417290400759657ULL))) ? ((+(((((-9223372036854775794LL) + (9223372036854775807LL))) << (((8813417290400759612ULL) - (8813417290400759612ULL))))))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                        var_35 -= ((/* implicit */int) ((short) 2548207224171946385ULL));
                    }
                    for (int i_16 = 1; i_16 < 16; i_16 += 2) /* same iter space */
                    {
                        /* LoopSeq 2 */
                        for (unsigned int i_17 = 0; i_17 < 19; i_17 += 2) 
                        {
                            var_36 -= ((/* implicit */long long int) max((((/* implicit */unsigned long long int) (signed char)97)), (((9633326783308791993ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)70)))))));
                            var_37 = ((/* implicit */unsigned int) ((((min((-2143864622), (min((0), (((/* implicit */int) var_12)))))) + (2147483647))) << (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_0)), (var_7)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)34628))))) : (((/* implicit */int) var_14))))));
                        }
                        /* vectorizable */
                        for (short i_18 = 0; i_18 < 19; i_18 += 3) 
                        {
                            arr_52 [i_16] [(short)3] [i_13] [9LL] [i_18] = ((/* implicit */short) (!(((((/* implicit */long long int) ((/* implicit */int) (short)-1072))) == (9223372036854775802LL)))));
                            var_38 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (var_7) : (2547117220110215291ULL)));
                            arr_53 [i_16] [i_16] [i_13] [i_12 - 1] [i_16] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)65531)) || (((/* implicit */_Bool) var_14))));
                            var_39 = var_7;
                        }
                        arr_54 [i_16] = ((/* implicit */unsigned int) (unsigned char)70);
                        var_40 = ((/* implicit */unsigned int) ((((/* implicit */int) ((_Bool) var_2))) == (((/* implicit */int) max((((/* implicit */unsigned short) (short)-1)), ((unsigned short)65531))))));
                        arr_55 [i_0] [i_0 + 2] [i_0 + 1] [i_0 - 1] [i_16] [i_0 + 2] = ((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1061))) : (var_7))))))));
                        /* LoopSeq 1 */
                        for (unsigned char i_19 = 0; i_19 < 19; i_19 += 4) 
                        {
                            arr_58 [i_0] [i_12] [i_16] [i_0] [i_19] = ((/* implicit */signed char) var_11);
                            var_41 = ((/* implicit */unsigned short) max(((+(((/* implicit */int) (short)2063)))), (((/* implicit */int) min((((/* implicit */unsigned short) (short)1071)), ((unsigned short)30907))))));
                        }
                    }
                }
            } 
        } 
    }
    var_42 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (!(var_9))))) % (min((var_11), (((/* implicit */long long int) (+(((/* implicit */int) (short)-424)))))))));
    var_43 += ((/* implicit */signed char) (!(((/* implicit */_Bool) ((8813417290400759591ULL) << (((((/* implicit */int) (short)409)) - (385))))))));
}
