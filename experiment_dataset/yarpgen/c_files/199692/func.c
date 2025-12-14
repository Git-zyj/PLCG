/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199692
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199692 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199692
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
    /* LoopSeq 3 */
    for (unsigned char i_0 = 2; i_0 < 15; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 2; i_1 < 17; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 18; i_2 += 1) 
            {
                {
                    var_15 = (unsigned char)172;
                    /* LoopNest 2 */
                    for (signed char i_3 = 3; i_3 < 16; i_3 += 4) 
                    {
                        for (unsigned char i_4 = 4; i_4 < 17; i_4 += 3) 
                        {
                            {
                                arr_16 [i_0] [i_0] [i_2] [i_3] [17LL] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_3 - 3] [i_1 - 1] [i_4 - 2] [i_2] [i_3 - 3])) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 281474976710655ULL)))))) : (((unsigned int) 281474976710653ULL))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [16ULL] [i_1] [i_2] [i_3] [9LL] [i_4] [i_4])) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_0] [i_0] [i_0] [i_0] [(unsigned short)5])))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)14336)) % (((/* implicit */int) (short)14336))))) : (((unsigned long long int) arr_8 [i_0 + 1] [i_1] [12LL] [i_2] [i_3] [13LL]))))));
                                var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_3] [i_3 - 3] [i_3 - 2] [i_3 - 1] [i_3 + 2] [i_3 + 2]))))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_17 = ((/* implicit */unsigned long long int) var_14);
    }
    for (unsigned long long int i_5 = 2; i_5 < 19; i_5 += 4) /* same iter space */
    {
        /* LoopSeq 3 */
        for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
        {
            /* LoopSeq 1 */
            for (int i_7 = 1; i_7 < 17; i_7 += 3) 
            {
                arr_24 [i_6] [i_6] [i_7 + 2] = ((/* implicit */unsigned long long int) var_4);
                /* LoopNest 2 */
                for (int i_8 = 2; i_8 < 17; i_8 += 3) 
                {
                    for (unsigned int i_9 = 1; i_9 < 18; i_9 += 2) 
                    {
                        {
                            var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) arr_27 [1ULL]))));
                            var_19 = ((/* implicit */short) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_28 [i_5] [i_6] [i_9] [i_8] [i_5] [i_5] [i_8])) ? (((/* implicit */unsigned long long int) 4294967280U)) : (18446462598732840985ULL)))))) ? (((((/* implicit */_Bool) ((unsigned long long int) 281474976710653ULL))) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)11)) || (((/* implicit */_Bool) 18446744073709551611ULL)))))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 2401292887U)) && (((/* implicit */_Bool) ((unsigned char) arr_18 [i_6])))))))));
                        }
                    } 
                } 
                var_20 = (+(((((/* implicit */int) arr_20 [i_5 - 2] [i_6 - 1] [i_6])) - (((/* implicit */int) arr_20 [i_5 - 2] [i_6 - 1] [i_6])))));
                var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) ((arr_22 [i_5] [i_5 - 2] [0ULL]) & (((((/* implicit */_Bool) max((var_11), (((/* implicit */unsigned short) var_5))))) ? (18446462598732840960ULL) : (var_8))))))));
                var_22 &= ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_20 [i_5] [i_5] [i_5]))))))), ((~(2618593388200925257ULL)))));
            }
            var_23 = ((/* implicit */_Bool) ((var_10) / (((/* implicit */unsigned int) (~(((/* implicit */int) ((short) var_14))))))));
            var_24 = ((/* implicit */unsigned short) max((((/* implicit */int) (signed char)0)), (-716614628)));
            /* LoopNest 2 */
            for (unsigned short i_10 = 0; i_10 < 20; i_10 += 3) 
            {
                for (short i_11 = 0; i_11 < 20; i_11 += 1) 
                {
                    {
                        var_25 = ((long long int) 0U);
                        /* LoopSeq 1 */
                        for (short i_12 = 4; i_12 < 19; i_12 += 3) 
                        {
                            var_26 = ((/* implicit */signed char) ((_Bool) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_5))))))));
                            var_27 = ((/* implicit */long long int) min((((/* implicit */int) ((((/* implicit */_Bool) arr_33 [i_6] [i_6])) || (((/* implicit */_Bool) arr_33 [i_6] [i_6]))))), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_33 [i_6] [i_6])) : (((/* implicit */int) arr_33 [i_6 - 1] [i_6]))))));
                        }
                        arr_39 [(short)4] [i_6 - 1] [i_10] [(short)4] [i_6] = ((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */int) arr_36 [i_5] [i_5] [i_5] [i_5] [i_5] [i_6])) == (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_19 [i_10])) : (((/* implicit */int) (short)-29716)))))))));
                        arr_40 [i_6] = ((/* implicit */int) arr_29 [i_11] [i_11] [i_6]);
                        var_28 = ((/* implicit */unsigned long long int) min((var_28), (((/* implicit */unsigned long long int) var_13))));
                    }
                } 
            } 
        }
        for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) 
        {
            arr_43 [i_5] [i_13] = ((/* implicit */unsigned short) var_1);
            /* LoopNest 2 */
            for (int i_14 = 4; i_14 < 18; i_14 += 4) 
            {
                for (unsigned short i_15 = 0; i_15 < 20; i_15 += 2) 
                {
                    {
                        var_29 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) arr_19 [i_14 - 4])), (arr_33 [i_5 - 2] [i_14]))))) >= (max((((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (arr_26 [i_5] [i_13 - 1] [i_14] [i_14] [(signed char)0]))), (((/* implicit */long long int) var_14))))));
                        var_30 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) arr_47 [i_13 - 1] [i_14 - 4]))) ? (((/* implicit */int) ((((/* implicit */_Bool) 18446462598732840985ULL)) || (((((/* implicit */int) var_13)) >= (((/* implicit */int) var_14))))))) : (((/* implicit */int) ((signed char) arr_49 [i_13] [(signed char)6] [i_15])))));
                        arr_50 [i_5] [i_13] [i_14 - 2] [(unsigned char)12] = ((/* implicit */signed char) (!((!(((/* implicit */_Bool) var_3))))));
                        var_31 = ((/* implicit */unsigned char) max((arr_26 [i_5] [i_5 - 1] [i_14] [i_15] [i_13 - 1]), (min((arr_26 [(unsigned char)0] [i_5 - 2] [i_14] [i_5] [i_13 - 1]), (arr_26 [6] [i_5 - 2] [i_5 - 2] [i_5] [i_13 - 1])))));
                        var_32 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_6)), (var_10)))) ? (((/* implicit */int) (!(arr_37 [i_5 + 1] [i_5 + 1])))) : (((((/* implicit */_Bool) (unsigned short)10593)) ? (((/* implicit */int) arr_37 [i_14 - 1] [i_15])) : (((/* implicit */int) (short)6734))))));
                    }
                } 
            } 
        }
        for (int i_16 = 0; i_16 < 20; i_16 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned char i_17 = 0; i_17 < 20; i_17 += 2) 
            {
                for (signed char i_18 = 0; i_18 < 20; i_18 += 2) 
                {
                    {
                        var_33 = ((/* implicit */short) min((max((arr_17 [i_5 - 2]), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) -716614628))))))), (min((var_8), (((/* implicit */unsigned long long int) arr_53 [i_5 - 2] [i_5 - 1] [i_5 + 1]))))));
                        var_34 = ((/* implicit */unsigned int) (+(((/* implicit */int) min((arr_28 [i_5] [i_5] [i_5 + 1] [i_5 - 1] [i_5 - 1] [i_5] [i_5]), ((unsigned short)49065))))));
                        var_35 -= ((/* implicit */signed char) var_7);
                        var_36 = ((/* implicit */unsigned short) max((min((((/* implicit */unsigned long long int) (_Bool)1)), (18446744073709551615ULL))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) -2229893741435603216LL)))))));
                    }
                } 
            } 
            var_37 = ((/* implicit */long long int) ((signed char) ((((/* implicit */_Bool) (signed char)0)) || (((/* implicit */_Bool) (unsigned short)10594)))));
        }
        arr_59 [(unsigned short)1] = ((/* implicit */signed char) var_11);
        var_38 = ((/* implicit */int) ((((/* implicit */unsigned long long int) 2229893741435603215LL)) * (15828150685508626358ULL)));
        var_39 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_28 [i_5] [i_5] [i_5 - 2] [i_5 + 1] [i_5 + 1] [i_5] [i_5 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_28 [i_5 + 1] [i_5] [i_5] [i_5 - 2] [i_5 - 1] [i_5] [i_5 - 1]))) : (var_3))))));
        var_40 |= ((/* implicit */unsigned char) min(((~(arr_29 [i_5 - 1] [i_5 - 1] [i_5]))), (((min((arr_22 [i_5 - 2] [i_5] [i_5]), (((/* implicit */unsigned long long int) var_14)))) * (((/* implicit */unsigned long long int) var_3))))));
    }
    for (unsigned long long int i_19 = 2; i_19 < 19; i_19 += 4) /* same iter space */
    {
        var_41 = ((/* implicit */signed char) (+(((/* implicit */int) var_11))));
        var_42 = ((/* implicit */unsigned short) max((var_42), (((/* implicit */unsigned short) (signed char)-3))));
    }
    var_43 = ((/* implicit */unsigned int) var_6);
    var_44 = ((/* implicit */signed char) var_8);
}
