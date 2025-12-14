/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238052
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238052 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238052
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
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_19 = ((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)0))));
                    var_20 += ((/* implicit */unsigned char) max((((var_17) ? (max((131071ULL), (((/* implicit */unsigned long long int) (signed char)-16)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_6))))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_10))))))))));
                    var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) (~((+(((((/* implicit */_Bool) var_16)) ? (var_4) : (((/* implicit */long long int) var_8)))))))))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */short) ((((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) var_5)) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) var_9))))))) + (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_5)))) <= (var_8))))));
    var_23 = ((/* implicit */signed char) ((short) min((((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_14)), (var_4)))), (((((/* implicit */_Bool) var_12)) ? (var_7) : (var_3))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned char i_3 = 2; i_3 < 9; i_3 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_4 = 1; i_4 < 8; i_4 += 1) 
        {
            for (unsigned char i_5 = 2; i_5 < 8; i_5 += 4) 
            {
                {
                    var_24 = ((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) 11507736683236498278ULL)) ? (2810593087U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)112))))));
                    var_25 = ((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (var_3))));
                    var_26 = ((/* implicit */_Bool) max((var_26), (((/* implicit */_Bool) ((long long int) (~(var_12)))))));
                }
            } 
        } 
        /* LoopSeq 2 */
        for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
        {
            var_27 = ((/* implicit */unsigned int) min((var_27), (((/* implicit */unsigned int) ((long long int) var_6)))));
            arr_17 [i_3] = (+(((/* implicit */int) ((unsigned char) var_4))));
        }
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            arr_20 [i_3] = var_8;
            /* LoopNest 2 */
            for (unsigned char i_8 = 0; i_8 < 12; i_8 += 4) 
            {
                for (long long int i_9 = 3; i_9 < 10; i_9 += 3) 
                {
                    {
                        var_28 = ((/* implicit */unsigned int) min((var_28), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (signed char)-1)))))));
                        var_29 = ((/* implicit */int) min((var_29), (((/* implicit */int) (~(((var_17) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (var_16))))))));
                        /* LoopSeq 2 */
                        for (unsigned long long int i_10 = 0; i_10 < 12; i_10 += 2) 
                        {
                            var_30 = ((/* implicit */signed char) ((((_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_6)))) : ((~(var_7)))));
                            var_31 = ((/* implicit */unsigned long long int) max((var_31), (((/* implicit */unsigned long long int) (-(((var_17) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_14)))))))));
                        }
                        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                        {
                            arr_31 [i_3] [i_7] [i_8] [0ULL] = ((/* implicit */signed char) (!((_Bool)1)));
                            var_32 = ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)65535)) == (((/* implicit */int) (unsigned char)63))));
                            arr_32 [(_Bool)0] [1U] [i_8] [i_3] = ((/* implicit */short) ((long long int) var_11));
                            var_33 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (var_3)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_2))))) : ((-(var_5)))));
                            var_34 = ((((/* implicit */_Bool) ((var_15) ? (var_11) : (var_4)))) ? (((((/* implicit */_Bool) var_2)) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) var_9)))));
                        }
                        var_35 = ((/* implicit */unsigned long long int) min((var_35), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_5))))))))));
                    }
                } 
            } 
            var_36 = ((/* implicit */unsigned long long int) ((signed char) ((int) var_4)));
            var_37 = ((/* implicit */int) ((((/* implicit */_Bool) ((var_6) ? (((/* implicit */long long int) var_12)) : (var_5)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_6))))) : (((((/* implicit */_Bool) var_4)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))));
        }
        var_38 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) ((unsigned short) var_4))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))));
        var_39 = ((/* implicit */signed char) max((var_39), (((/* implicit */signed char) (~(((/* implicit */int) var_18)))))));
        var_40 += ((/* implicit */signed char) ((_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_17)))));
    }
    /* vectorizable */
    for (unsigned char i_12 = 4; i_12 < 9; i_12 += 3) /* same iter space */
    {
        arr_35 [i_12] = ((/* implicit */unsigned char) (((_Bool)1) ? (2147483647) : (((/* implicit */int) (signed char)118))));
        /* LoopSeq 1 */
        for (unsigned char i_13 = 0; i_13 < 10; i_13 += 3) 
        {
            arr_39 [i_12 - 3] [i_12] [i_13] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_18)) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_9))))));
            /* LoopSeq 2 */
            for (int i_14 = 3; i_14 < 9; i_14 += 2) 
            {
                var_41 += ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(var_11)))) ? (((long long int) var_2)) : (((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) ((/* implicit */int) var_15))) : (var_5)))));
                var_42 = ((/* implicit */_Bool) var_16);
                var_43 = ((/* implicit */unsigned int) ((signed char) var_14));
            }
            for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
            {
                var_44 += ((/* implicit */signed char) ((unsigned long long int) ((unsigned int) var_10)));
                var_45 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) var_17))))) | (((((/* implicit */_Bool) var_8)) ? (var_16) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_15)))))));
                var_46 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (var_16)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) var_4)))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : (var_12)))));
                arr_46 [i_12] [i_15] [i_12] = ((/* implicit */signed char) (-(((/* implicit */int) (_Bool)1))));
                /* LoopSeq 1 */
                for (unsigned short i_16 = 0; i_16 < 10; i_16 += 3) 
                {
                    /* LoopSeq 4 */
                    for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                    {
                        var_47 = ((/* implicit */signed char) (~(((/* implicit */int) var_1))));
                        var_48 = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned long long int) var_5))) ? (var_16) : (((/* implicit */unsigned long long int) ((int) var_7)))));
                    }
                    for (unsigned char i_18 = 0; i_18 < 10; i_18 += 1) 
                    {
                        var_49 += var_6;
                        var_50 += ((unsigned long long int) (!(((/* implicit */_Bool) var_12))));
                    }
                    for (unsigned long long int i_19 = 0; i_19 < 10; i_19 += 2) 
                    {
                        var_51 += ((/* implicit */signed char) ((((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) (signed char)35)) : (((/* implicit */int) (signed char)-54))))) ? (((/* implicit */int) (signed char)-126)) : (((((/* implicit */_Bool) (signed char)-124)) ? (440645287) : (((/* implicit */int) (unsigned short)48577))))));
                        var_52 = ((/* implicit */short) ((long long int) (+(0ULL))));
                        var_53 = ((/* implicit */_Bool) (((~(var_8))) * (((/* implicit */unsigned int) ((int) var_0)))));
                    }
                    for (long long int i_20 = 0; i_20 < 10; i_20 += 3) 
                    {
                        arr_61 [i_12 - 2] [(_Bool)1] [(_Bool)1] [i_13] [i_13] [(signed char)3] [i_12] = ((long long int) ((var_7) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))));
                        arr_62 [i_12] [i_13] [(unsigned short)6] [i_16] [i_12] = ((/* implicit */unsigned short) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (15492656505647882893ULL)));
                        var_54 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(var_12)))) ? (((((/* implicit */_Bool) 10460742800277574508ULL)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)43))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_8))))));
                    }
                    arr_63 [i_12 - 3] [i_12] [i_12] [i_12] [i_12] [i_12 - 3] = ((/* implicit */signed char) (((+(((/* implicit */int) (_Bool)0)))) + (((((/* implicit */int) var_13)) >> (((var_11) + (2347278093101232704LL)))))));
                }
            }
            arr_64 [1ULL] [i_12] [i_12 - 2] = ((/* implicit */unsigned char) ((((/* implicit */int) ((_Bool) var_13))) / ((+(((/* implicit */int) var_2))))));
        }
    }
    for (unsigned char i_21 = 4; i_21 < 9; i_21 += 3) /* same iter space */
    {
        arr_68 [i_21] = ((/* implicit */unsigned long long int) ((max((((/* implicit */unsigned long long int) 2850566009U)), (8ULL))) <= (((/* implicit */unsigned long long int) min((((/* implicit */long long int) (~(((/* implicit */int) var_17))))), (((((/* implicit */_Bool) var_18)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (var_5))))))));
        var_55 = ((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) >= (min((((/* implicit */unsigned long long int) var_1)), (var_16))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_16)) ? (((((/* implicit */int) var_2)) >> (((((/* implicit */int) var_2)) - (221))))) : (((/* implicit */int) var_10))))) : ((~(((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (var_11)))))));
    }
}
