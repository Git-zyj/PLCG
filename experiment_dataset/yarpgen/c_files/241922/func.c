/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241922
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241922 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241922
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
    var_17 = var_6;
    var_18 = ((/* implicit */signed char) ((1065353216U) > (((((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) (unsigned short)10942)) : (((/* implicit */int) (unsigned short)10934))))) * (4294967295U)))));
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 20; i_0 += 1) 
    {
        for (unsigned int i_1 = 2; i_1 < 21; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */short) max((((((/* implicit */_Bool) (signed char)36)) ? (((/* implicit */int) (signed char)-35)) : (((/* implicit */int) ((unsigned short) 3993406996U))))), (((((/* implicit */_Bool) ((long long int) var_8))) ? (((/* implicit */int) var_11)) : (((-1143690452) & (((/* implicit */int) var_12))))))));
                var_20 = ((/* implicit */signed char) max((((/* implicit */long long int) max((max((((/* implicit */unsigned int) (signed char)99)), (var_2))), (27U)))), (((((/* implicit */_Bool) -1LL)) ? (max((((/* implicit */long long int) (signed char)127)), (-232731718396153021LL))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)1023))))))))));
                var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)10948))))) ? (((((/* implicit */_Bool) (signed char)-19)) ? (((/* implicit */int) (signed char)-35)) : (((/* implicit */int) arr_0 [i_0 - 1])))) : (((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? (arr_4 [i_0 + 1] [i_1 - 2]) : (arr_4 [i_0 + 2] [i_1 + 1])))));
                var_22 = ((/* implicit */signed char) ((((/* implicit */unsigned int) (+(((/* implicit */int) max(((unsigned short)10930), ((unsigned short)10930))))))) > (((unsigned int) (unsigned short)54593))));
            }
        } 
    } 
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_2 = 1; i_2 < 17; i_2 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned int i_3 = 2; i_3 < 18; i_3 += 4) 
        {
            for (unsigned char i_4 = 3; i_4 < 16; i_4 += 3) 
            {
                {
                    var_23 |= ((/* implicit */signed char) var_16);
                    var_24 = ((/* implicit */unsigned long long int) max((var_24), (((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */_Bool) (signed char)-60)) ? (((/* implicit */int) arr_0 [i_4])) : (((/* implicit */int) (unsigned char)3))))))));
                }
            } 
        } 
        /* LoopNest 3 */
        for (signed char i_5 = 1; i_5 < 18; i_5 += 3) 
        {
            for (signed char i_6 = 1; i_6 < 16; i_6 += 4) 
            {
                for (long long int i_7 = 4; i_7 < 17; i_7 += 4) 
                {
                    {
                        /* LoopSeq 3 */
                        for (unsigned short i_8 = 2; i_8 < 17; i_8 += 1) /* same iter space */
                        {
                            var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) ((((/* implicit */_Bool) var_4)) ? (((long long int) var_2)) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-37))))))));
                            var_26 ^= ((/* implicit */signed char) ((unsigned int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (short)-14298)) : (((/* implicit */int) var_6)))));
                            var_27 |= ((/* implicit */signed char) var_1);
                        }
                        for (unsigned short i_9 = 2; i_9 < 17; i_9 += 1) /* same iter space */
                        {
                            var_28 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_10)) : (((((/* implicit */_Bool) 620056330U)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (signed char)56))))));
                            var_29 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_15)) : (var_1)))) + ((-(var_2)))));
                        }
                        for (unsigned short i_10 = 2; i_10 < 17; i_10 += 1) /* same iter space */
                        {
                            var_30 -= ((/* implicit */unsigned short) var_2);
                            var_31 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)10958)) ? (((/* implicit */int) (signed char)-3)) : (((/* implicit */int) (short)-3771))));
                            var_32 = ((short) var_1);
                            var_33 = ((/* implicit */signed char) ((((/* implicit */int) var_15)) + (((((/* implicit */_Bool) 1143690467)) ? (((/* implicit */int) (unsigned short)65532)) : (var_16)))));
                        }
                        var_34 = ((/* implicit */short) ((((/* implicit */_Bool) arr_3 [i_2] [i_5 + 1] [i_2])) || (((/* implicit */_Bool) (signed char)-81))));
                        var_35 = ((/* implicit */unsigned short) ((arr_1 [i_2 + 1]) < (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535)))));
                        var_36 += arr_7 [i_6];
                    }
                } 
            } 
        } 
    }
    for (signed char i_11 = 2; i_11 < 22; i_11 += 3) 
    {
        var_37 = ((/* implicit */unsigned char) arr_32 [i_11]);
        /* LoopNest 2 */
        for (int i_12 = 1; i_12 < 24; i_12 += 1) 
        {
            for (unsigned short i_13 = 1; i_13 < 22; i_13 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_14 = 1; i_14 < 24; i_14 += 3) 
                    {
                        for (unsigned int i_15 = 2; i_15 < 21; i_15 += 3) 
                        {
                            {
                                var_38 = var_9;
                                var_39 = ((((/* implicit */_Bool) max((((/* implicit */unsigned int) -1521320536)), (max((4294967295U), (((/* implicit */unsigned int) (unsigned short)10930))))))) ? ((-(((/* implicit */int) ((signed char) (signed char)-2))))) : (((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_13)))) + (((/* implicit */int) var_10)))));
                                var_40 = ((/* implicit */unsigned short) max((var_40), (((/* implicit */unsigned short) ((int) 565358890U)))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_16 = 1; i_16 < 22; i_16 += 1) 
                    {
                        for (short i_17 = 2; i_17 < 21; i_17 += 4) 
                        {
                            {
                                var_41 = ((/* implicit */unsigned char) ((signed char) (short)20905));
                                var_42 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_47 [i_11] [i_11] [i_11])) ? (4294967287U) : (((/* implicit */unsigned int) (-(((/* implicit */int) (short)-16318)))))))) < (((long long int) ((((/* implicit */_Bool) (unsigned char)254)) ? (var_1) : (var_16))))));
                                var_43 = ((/* implicit */signed char) arr_34 [i_11]);
                            }
                        } 
                    } 
                    var_44 ^= ((/* implicit */short) (!(((/* implicit */_Bool) ((((((/* implicit */int) (unsigned short)10930)) < (((/* implicit */int) (unsigned short)57101)))) ? (((((/* implicit */_Bool) (unsigned short)46849)) ? (357373847) : (((/* implicit */int) (unsigned short)65535)))) : (var_1))))));
                }
            } 
        } 
    }
    var_45 = ((/* implicit */short) 1748983713);
}
