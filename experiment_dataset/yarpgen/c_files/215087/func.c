/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215087
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215087 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215087
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
    var_17 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (~(0)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (var_7))) > (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) ((int) 2)))))));
    var_18 ^= ((/* implicit */int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (-1) : (((/* implicit */int) var_13))))) || (((/* implicit */_Bool) var_6)))) ? (min((((/* implicit */unsigned int) min((var_12), (var_8)))), (((var_10) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (var_0))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))));
    /* LoopSeq 2 */
    for (short i_0 = 1; i_0 < 21; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) ((((/* implicit */int) ((short) max(((signed char)-57), (((/* implicit */signed char) (_Bool)1)))))) << (((((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0])) & (((/* implicit */int) (signed char)14))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0 - 1]))) : (var_6))) + (810315556690691246LL)))));
        var_19 = ((/* implicit */signed char) var_6);
        var_20 = ((/* implicit */long long int) var_2);
    }
    for (short i_1 = 0; i_1 < 12; i_1 += 2) 
    {
        var_21 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_1])) | (((/* implicit */int) (_Bool)0)))))));
        arr_5 [11LL] = ((/* implicit */unsigned int) (+(((/* implicit */int) ((short) min((arr_1 [i_1]), (arr_4 [i_1] [i_1])))))));
    }
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_2 = 2; i_2 < 24; i_2 += 1) 
    {
        arr_9 [i_2] [(short)7] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_7 [i_2]) / (arr_6 [i_2 + 1])))) ? ((+(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) ((var_6) > (((/* implicit */long long int) 703336908)))))));
        var_22 += ((/* implicit */long long int) ((arr_6 [i_2 - 1]) <= (arr_6 [i_2 - 1])));
        /* LoopSeq 4 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            arr_12 [i_2] [i_2] [i_2] = ((/* implicit */signed char) arr_8 [i_2] [i_2 + 1]);
            arr_13 [i_3] [i_2] = ((/* implicit */_Bool) arr_8 [i_2] [i_3]);
            var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) ((((((/* implicit */long long int) 2147483647)) / (arr_7 [(_Bool)1]))) * (((/* implicit */long long int) (+(9U)))))))));
            var_24 = ((/* implicit */unsigned short) (+(arr_11 [i_2])));
        }
        for (long long int i_4 = 2; i_4 < 23; i_4 += 1) 
        {
            /* LoopSeq 4 */
            for (long long int i_5 = 0; i_5 < 25; i_5 += 4) /* same iter space */
            {
                arr_20 [i_5] [i_4] [i_4] &= ((/* implicit */long long int) ((((/* implicit */_Bool) (short)-5535)) ? (((/* implicit */int) arr_16 [i_2] [i_2] [i_2])) : ((+(((/* implicit */int) (signed char)-127))))));
                var_25 = ((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) ((signed char) arr_10 [18]))) : (((/* implicit */int) (signed char)0))));
                var_26 = ((/* implicit */signed char) ((unsigned long long int) (~(((/* implicit */int) (_Bool)0)))));
            }
            for (long long int i_6 = 0; i_6 < 25; i_6 += 4) /* same iter space */
            {
                var_27 = ((/* implicit */long long int) ((signed char) arr_18 [i_2 - 2] [i_2] [i_2]));
                var_28 = ((/* implicit */int) ((arr_23 [i_4] [i_4 - 1] [i_4 + 2] [i_4 - 1]) / (arr_17 [i_4 - 1] [i_4 + 2] [i_4 - 1] [i_4 - 2])));
            }
            for (short i_7 = 0; i_7 < 25; i_7 += 2) 
            {
                var_29 = ((/* implicit */unsigned int) arr_19 [i_2] [i_2] [i_2 - 1] [i_2]);
                arr_28 [i_7] |= ((_Bool) -1LL);
                var_30 = ((((/* implicit */_Bool) arr_23 [i_2 + 1] [i_2 - 2] [i_2 - 2] [i_2 - 2])) || (((/* implicit */_Bool) var_12)));
            }
            for (short i_8 = 0; i_8 < 25; i_8 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned long long int i_9 = 0; i_9 < 25; i_9 += 4) 
                {
                    for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
                    {
                        {
                            arr_38 [i_2] = ((/* implicit */unsigned short) (signed char)114);
                            var_31 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)106)) ? (4294967295U) : (((/* implicit */unsigned int) 32767))))) ? (((((/* implicit */_Bool) arr_25 [i_2] [i_2 + 1] [i_2])) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (signed char)-5)))) : ((+(-1920275444)))));
                            var_32 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_35 [i_10] [i_2] [i_10 - 1] [i_10] [i_10] [i_10 - 1])) ? (4980241159033278LL) : (((/* implicit */long long int) ((/* implicit */int) arr_35 [i_10] [i_2] [i_10 - 1] [i_10] [i_10] [i_10 - 1])))));
                        }
                    } 
                } 
                var_33 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_31 [i_4 + 1])) ? (((/* implicit */int) arr_31 [i_4 + 1])) : (((/* implicit */int) arr_31 [i_4 + 2]))));
            }
            var_34 = var_14;
        }
        for (long long int i_11 = 2; i_11 < 22; i_11 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) 
            {
                for (unsigned short i_13 = 0; i_13 < 25; i_13 += 4) 
                {
                    for (signed char i_14 = 3; i_14 < 23; i_14 += 3) 
                    {
                        {
                            var_35 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) * (arr_18 [(signed char)0] [i_11 + 2] [i_11])))) ? (((/* implicit */long long int) ((/* implicit */int) arr_47 [i_14] [i_14] [i_14 - 1] [(_Bool)1] [i_14]))) : (arr_42 [i_2 - 1])));
                            var_36 = arr_47 [i_14 + 2] [i_14 - 1] [i_14] [i_14] [i_14];
                            arr_49 [i_11 + 3] [i_2] [i_11 + 2] = ((/* implicit */int) ((_Bool) arr_32 [i_14] [i_2]));
                            var_37 = ((((/* implicit */_Bool) ((((/* implicit */int) arr_33 [i_2])) ^ (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) arr_33 [i_2])) : (arr_30 [i_2 - 2]));
                        }
                    } 
                } 
            } 
            /* LoopNest 3 */
            for (short i_15 = 0; i_15 < 25; i_15 += 4) 
            {
                for (short i_16 = 0; i_16 < 25; i_16 += 1) 
                {
                    for (long long int i_17 = 1; i_17 < 23; i_17 += 1) 
                    {
                        {
                            var_38 += ((/* implicit */_Bool) (-(((/* implicit */int) arr_47 [i_2] [i_2 + 1] [i_2] [i_2 - 1] [i_2]))));
                            arr_58 [i_2] [i_2 - 1] [i_2] [i_2 + 1] [i_2 - 1] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_37 [i_2 + 1] [i_2 + 1] [i_2] [i_2]))));
                        }
                    } 
                } 
            } 
        }
        for (long long int i_18 = 2; i_18 < 22; i_18 += 1) /* same iter space */
        {
            var_39 *= ((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1))));
            arr_61 [i_2] [10] = ((/* implicit */_Bool) ((long long int) arr_41 [i_2]));
        }
    }
    for (short i_19 = 1; i_19 < 9; i_19 += 1) 
    {
        arr_65 [i_19 + 1] [i_19] &= ((/* implicit */int) (+(((((/* implicit */_Bool) ((unsigned long long int) (signed char)-115))) ? (max((arr_23 [i_19 - 1] [(_Bool)1] [i_19 - 1] [16]), (arr_14 [i_19]))) : (((/* implicit */long long int) ((var_10) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_5)))))))));
        arr_66 [i_19 + 2] = ((/* implicit */unsigned int) (+(arr_30 [i_19 - 1])));
        /* LoopSeq 2 */
        for (short i_20 = 0; i_20 < 11; i_20 += 1) 
        {
            var_40 = ((/* implicit */unsigned short) 0);
            arr_70 [10] &= ((/* implicit */int) max((((unsigned long long int) ((((/* implicit */int) var_8)) - (((/* implicit */int) (signed char)-115))))), (((/* implicit */unsigned long long int) min((arr_50 [i_19 + 2] [i_19]), (((/* implicit */short) arr_48 [i_19 - 1] [i_19 - 1] [i_19] [14LL] [i_19])))))));
        }
        /* vectorizable */
        for (signed char i_21 = 0; i_21 < 11; i_21 += 3) 
        {
            var_41 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned short) arr_31 [8ULL]))) ? (((((/* implicit */_Bool) var_16)) ? (((/* implicit */long long int) ((/* implicit */int) arr_29 [(short)0]))) : (arr_51 [16U] [i_21] [(_Bool)1] [i_21]))) : (((/* implicit */long long int) ((/* implicit */int) arr_54 [i_19 - 1] [(unsigned char)4])))));
            /* LoopSeq 1 */
            for (short i_22 = 0; i_22 < 11; i_22 += 3) 
            {
                var_42 = ((/* implicit */long long int) (signed char)-116);
                /* LoopNest 2 */
                for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
                {
                    for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) 
                    {
                        {
                            var_43 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_63 [i_19])) ? (arr_11 [i_22]) : (((/* implicit */int) ((short) 18446744073709551596ULL)))));
                            var_44 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 0)) ? (arr_75 [i_19 + 1]) : (((/* implicit */long long int) arr_68 [i_22] [i_19]))));
                            arr_83 [i_22] [i_21] [i_22] = ((((/* implicit */_Bool) arr_15 [(signed char)20])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (short)29523)));
                            arr_84 [i_23] [i_23] [i_22] [1U] [i_23] [i_23] = ((/* implicit */unsigned short) (short)-1);
                        }
                    } 
                } 
                arr_85 [i_22] = ((/* implicit */signed char) arr_63 [i_19 + 2]);
                var_45 |= ((/* implicit */unsigned short) (+(-5632142374711902585LL)));
            }
        }
        var_46 = ((/* implicit */long long int) (+(((/* implicit */int) var_8))));
        var_47 = ((/* implicit */int) max((var_47), (((/* implicit */int) ((((((/* implicit */long long int) ((/* implicit */int) var_10))) <= (((((/* implicit */_Bool) arr_41 [(unsigned short)20])) ? (-9223372036854775797LL) : (((/* implicit */long long int) ((/* implicit */int) arr_24 [(signed char)10] [(_Bool)1] [(_Bool)1] [i_19]))))))) ? (((/* implicit */long long int) ((((/* implicit */int) min(((_Bool)1), (arr_3 [i_19] [i_19])))) & (((/* implicit */int) (_Bool)1))))) : (min((((/* implicit */long long int) (-(((/* implicit */int) arr_24 [i_19 + 2] [10] [i_19] [i_19 - 1]))))), (min((((/* implicit */long long int) var_3)), (arr_7 [i_19]))))))))));
    }
}
