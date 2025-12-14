/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197498
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197498 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197498
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
    for (short i_0 = 2; i_0 < 9; i_0 += 4) 
    {
        arr_2 [i_0 + 1] [i_0 + 2] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_1 [i_0 + 1] [i_0])) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)18)))))))) ? (((var_13) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0 + 1] [i_0 + 1]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))));
        var_14 += (~((-(((/* implicit */int) var_12)))));
    }
    for (signed char i_1 = 0; i_1 < 18; i_1 += 1) 
    {
        /* LoopSeq 1 */
        for (long long int i_2 = 2; i_2 < 16; i_2 += 3) 
        {
            var_15 = var_12;
            /* LoopSeq 3 */
            for (long long int i_3 = 0; i_3 < 18; i_3 += 1) 
            {
                var_16 -= ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)9)) ? (((/* implicit */int) (unsigned short)65527)) : ((-(((/* implicit */int) (unsigned short)9))))));
                arr_11 [i_1] [i_2] [i_2] [(signed char)12] = ((/* implicit */short) ((((/* implicit */_Bool) var_13)) ? ((~(((/* implicit */int) (unsigned short)65533)))) : (((((/* implicit */int) (unsigned short)65533)) / (((((/* implicit */int) (unsigned short)65525)) ^ (((/* implicit */int) (unsigned short)9))))))));
                arr_12 [i_2] = ((/* implicit */signed char) (+(((/* implicit */int) ((signed char) (-(((/* implicit */int) (unsigned short)65527))))))));
            }
            for (unsigned char i_4 = 3; i_4 < 17; i_4 += 4) 
            {
                var_17 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_15 [(signed char)16] [i_2] [i_4 - 1] [(signed char)7])) : (((/* implicit */int) (unsigned short)13))))) && ((!(((/* implicit */_Bool) var_4)))));
                arr_17 [i_1] [i_2] [i_2] [i_1] = ((/* implicit */int) (~((((_Bool)1) ? (4528089699478231559LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)14)))))));
                arr_18 [i_1] [i_1] [i_2] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((((~(((/* implicit */int) (unsigned short)3)))) + (2147483647))) << ((((~(((/* implicit */int) arr_5 [(unsigned char)16])))) - (8475)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)48))))) : (((/* implicit */int) var_12))));
            }
            for (short i_5 = 0; i_5 < 18; i_5 += 3) 
            {
                /* LoopSeq 4 */
                for (unsigned short i_6 = 1; i_6 < 16; i_6 += 3) 
                {
                    var_18 = ((/* implicit */signed char) var_5);
                    var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)52))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_6))))) : ((~((+(((/* implicit */int) (short)-7253))))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (long long int i_7 = 0; i_7 < 18; i_7 += 2) 
                    {
                        arr_29 [i_1] [i_2] = ((/* implicit */long long int) arr_15 [(_Bool)1] [i_2] [i_2] [i_1]);
                        var_20 = ((/* implicit */signed char) (+((-(4528089699478231578LL)))));
                    }
                    var_21 += ((/* implicit */signed char) (~(((/* implicit */int) var_2))));
                }
                for (unsigned short i_8 = 0; i_8 < 18; i_8 += 4) 
                {
                    var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) -91445016))) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (short)-1))))) ? (((/* implicit */int) var_10)) : ((+(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)0)))))))));
                    arr_32 [i_1] [i_2] [i_5] [i_8] = ((/* implicit */short) (signed char)-40);
                    var_23 &= ((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned short)9))));
                    var_24 = ((/* implicit */short) ((((((/* implicit */_Bool) (signed char)-121)) ? (((/* implicit */int) (short)-20)) : (((/* implicit */int) (signed char)-121)))) < ((~(((/* implicit */int) var_3))))));
                }
                for (unsigned short i_9 = 0; i_9 < 18; i_9 += 3) 
                {
                    arr_37 [i_2] [i_2] = ((/* implicit */unsigned long long int) arr_8 [i_2] [i_5] [i_2] [i_2]);
                    var_25 = ((/* implicit */short) (signed char)38);
                    var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */int) var_11)) % (((/* implicit */int) var_2)))) << (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_9))) < (var_1))))))) ? ((+(arr_22 [i_9] [i_2] [i_2] [(signed char)0]))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_24 [i_2 - 2] [i_2 - 1] [i_2 - 1] [i_2 - 1])) > (((/* implicit */int) ((((/* implicit */int) var_4)) < (((/* implicit */int) (unsigned short)2)))))))))));
                }
                /* vectorizable */
                for (short i_10 = 1; i_10 < 14; i_10 += 3) 
                {
                    /* LoopSeq 3 */
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) /* same iter space */
                    {
                        arr_43 [i_1] [(short)11] [(short)11] [i_5] [i_2] [i_5] [i_1] = (short)1;
                        arr_44 [i_2] = ((/* implicit */signed char) (~((~(((/* implicit */int) (short)-32751))))));
                        arr_45 [i_1] [i_1] [i_5] [i_2] [i_10 + 4] [i_10] [i_11] = ((/* implicit */short) (+(((/* implicit */int) var_2))));
                        arr_46 [(short)14] [(unsigned short)4] &= ((/* implicit */unsigned int) (~(var_13)));
                        var_27 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (unsigned short)4)) : (((/* implicit */int) var_3))))));
                    }
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) /* same iter space */
                    {
                        arr_49 [(_Bool)1] [(_Bool)1] [i_2] [i_10 + 1] [i_10] [10] = ((/* implicit */signed char) ((((/* implicit */_Bool) 4528089699478231559LL)) ? (((var_11) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_4)))) : (((/* implicit */int) var_3))));
                        var_28 = ((/* implicit */long long int) ((short) ((unsigned char) (unsigned short)13)));
                        var_29 *= ((/* implicit */short) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [10LL] [i_2 + 1] [i_2] [i_2])))))));
                    }
                    for (signed char i_13 = 2; i_13 < 15; i_13 += 4) 
                    {
                        var_30 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_8))))) ? (((/* implicit */int) var_12)) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) != (var_6))))));
                        arr_52 [i_2] [i_2] [i_5] [i_10 - 1] = ((/* implicit */short) ((((/* implicit */int) arr_40 [i_1] [i_10 + 4] [i_5] [i_10 - 1] [i_10 - 1])) != (((/* implicit */int) arr_40 [i_1] [i_10 + 4] [i_2] [i_2] [(unsigned short)12]))));
                        var_31 = ((/* implicit */signed char) min((var_31), (((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */int) (_Bool)0)) >= (((/* implicit */int) (unsigned short)13))))) < (((/* implicit */int) (unsigned short)15)))))));
                    }
                    arr_53 [i_2] [i_2] [i_5] [i_10] = ((/* implicit */short) ((((/* implicit */int) (signed char)-95)) > (var_7)));
                    var_32 *= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) arr_19 [(unsigned short)11] [i_10 + 3])) * (4602834744918852362ULL)));
                    arr_54 [i_2] [i_2] [i_2] [i_5] [i_10] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)59539)))))));
                }
                var_33 = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) 736655765)) ? (((/* implicit */int) ((((/* implicit */int) (unsigned short)65533)) < (((/* implicit */int) arr_6 [i_2] [i_2]))))) : ((~(((/* implicit */int) (unsigned short)56408))))))));
            }
        }
        arr_55 [i_1] = ((/* implicit */short) (_Bool)1);
        var_34 = (~(((/* implicit */int) (unsigned short)14)));
    }
    var_35 = ((/* implicit */unsigned short) ((var_9) ? (((((/* implicit */_Bool) ((var_9) ? (736655765) : (((/* implicit */int) (short)-7239))))) ? (((/* implicit */long long int) ((/* implicit */int) ((short) (unsigned short)65533)))) : (((var_1) + (((/* implicit */long long int) ((/* implicit */int) var_8))))))) : (((/* implicit */long long int) ((/* implicit */int) var_11)))));
}
