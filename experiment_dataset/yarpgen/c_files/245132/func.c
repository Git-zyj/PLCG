/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245132
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245132 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245132
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
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_1] = ((/* implicit */unsigned char) (+((+(((/* implicit */int) var_9))))));
                var_17 = ((/* implicit */unsigned short) arr_1 [i_0]);
                /* LoopSeq 4 */
                for (short i_2 = 4; i_2 < 22; i_2 += 4) 
                {
                    var_18 += ((/* implicit */unsigned short) max((min((var_8), (((/* implicit */unsigned long long int) (unsigned char)218)))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_8 [i_2])))))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 25; i_3 += 2) 
                    {
                        for (signed char i_4 = 0; i_4 < 25; i_4 += 2) 
                        {
                            {
                                arr_16 [i_0] [i_1] [i_2] [i_0] [i_3] [i_4] [i_4] = ((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_15)))))));
                                arr_17 [i_0] [i_0] [i_2] [i_0] [i_0] = ((/* implicit */long long int) (-(((/* implicit */int) ((unsigned short) arr_13 [i_0] [i_1] [i_2] [i_3] [i_3])))));
                                var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) (-(((((((/* implicit */_Bool) (unsigned short)31999)) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))))) / (((var_4) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)49055))))))))))));
                                var_20 = ((/* implicit */unsigned long long int) (~((~(((/* implicit */int) var_14))))));
                            }
                        } 
                    } 
                    arr_18 [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */int) max((arr_3 [i_2 + 1] [i_2 + 1] [i_2 + 2]), (((signed char) var_8))))) + (2147483647))) << (((((/* implicit */int) (unsigned char)32)) - (32)))));
                }
                /* vectorizable */
                for (int i_5 = 0; i_5 < 25; i_5 += 2) 
                {
                    var_21 = ((/* implicit */unsigned char) var_15);
                    var_22 -= ((/* implicit */signed char) var_4);
                    var_23 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 9223372036854775805LL)) ? (((/* implicit */int) (unsigned char)164)) : (((/* implicit */int) (unsigned char)255))))) ? (((((/* implicit */_Bool) -9223372036854775786LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : (4U))) : (((/* implicit */unsigned int) (-(((/* implicit */int) var_9)))))));
                }
                /* vectorizable */
                for (unsigned short i_6 = 0; i_6 < 25; i_6 += 2) /* same iter space */
                {
                    var_24 = ((/* implicit */unsigned char) (unsigned short)14084);
                    var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)10)) ? (((/* implicit */int) ((unsigned char) 9223372036854775807LL))) : (((((/* implicit */_Bool) (unsigned char)4)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (unsigned char)245))))));
                    /* LoopSeq 2 */
                    for (unsigned short i_7 = 0; i_7 < 25; i_7 += 2) /* same iter space */
                    {
                        var_26 |= ((/* implicit */_Bool) (+((-(9223372036854775807LL)))));
                        arr_27 [i_0] [i_0] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)7702)))))) ? (9223372036854775784LL) : (((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)22723)))))));
                        var_27 = ((/* implicit */int) ((unsigned char) var_8));
                        var_28 = ((/* implicit */unsigned short) max((var_28), ((unsigned short)22718)));
                    }
                    for (unsigned short i_8 = 0; i_8 < 25; i_8 += 2) /* same iter space */
                    {
                        var_29 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [6]) : (((/* implicit */unsigned long long int) -9223372036854775785LL))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)31999)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_10))))) : (((var_3) - (((/* implicit */long long int) ((/* implicit */int) var_9)))))));
                        arr_32 [i_0] [i_1] [i_1] [i_8] = ((/* implicit */unsigned int) var_14);
                        arr_33 [i_0] [i_1] [i_0] [i_1] [i_1] [i_6] = ((/* implicit */unsigned char) (~(((/* implicit */int) ((((/* implicit */_Bool) var_16)) && (((/* implicit */_Bool) (unsigned char)10)))))));
                    }
                }
                /* vectorizable */
                for (unsigned short i_9 = 0; i_9 < 25; i_9 += 2) /* same iter space */
                {
                    var_30 = ((/* implicit */unsigned long long int) max((var_30), (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_1)))))));
                    /* LoopNest 2 */
                    for (signed char i_10 = 0; i_10 < 25; i_10 += 2) 
                    {
                        for (short i_11 = 0; i_11 < 25; i_11 += 2) 
                        {
                            {
                                arr_43 [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 9223372036854775807LL))));
                                var_31 = ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)30))))) > (((((/* implicit */int) var_15)) * (((/* implicit */int) arr_4 [i_0]))))));
                                var_32 = ((/* implicit */unsigned char) var_15);
                            }
                        } 
                    } 
                    var_33 = ((/* implicit */short) min((var_33), (((/* implicit */short) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_30 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) var_11)))))));
                }
                var_34 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) 3219141821U)) ? (((/* implicit */long long int) ((((/* implicit */int) (short)-27052)) & (((/* implicit */int) (short)-27052))))) : ((((-9223372036854775807LL - 1LL)) & (((/* implicit */long long int) ((/* implicit */int) var_10))))))), (((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)0)))))));
                var_35 ^= ((/* implicit */unsigned short) ((((((((/* implicit */int) arr_24 [i_0] [i_0] [i_0])) > (((/* implicit */int) arr_8 [(short)6])))) && (((/* implicit */_Bool) (signed char)-106)))) ? ((-(min((1075825480U), (((/* implicit */unsigned int) var_5)))))) : (((/* implicit */unsigned int) (+((~(((/* implicit */int) (signed char)49)))))))));
            }
        } 
    } 
    var_36 = ((/* implicit */_Bool) max((var_36), (((/* implicit */_Bool) 9223372036854775807LL))));
    var_37 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (unsigned short)36314)) : (((/* implicit */int) var_11)))), (((/* implicit */int) var_15)))))));
    var_38 = ((/* implicit */unsigned short) min((((/* implicit */long long int) ((((/* implicit */_Bool) (short)-27070)) ? ((-(((/* implicit */int) var_15)))) : (((/* implicit */int) var_15))))), ((-((-(0LL)))))));
    var_39 *= ((/* implicit */unsigned char) ((((var_3) + (((/* implicit */long long int) ((/* implicit */int) var_5))))) > (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((signed char) var_13)))))))));
}
