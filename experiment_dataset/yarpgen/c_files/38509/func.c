/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38509
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38509 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38509
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
    var_12 = -60914438;
    var_13 = ((/* implicit */_Bool) max((((/* implicit */long long int) var_1)), (-3224103197488718314LL)));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        var_14 ^= ((/* implicit */long long int) (-(arr_2 [i_0])));
        /* LoopSeq 2 */
        /* vectorizable */
        for (short i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            arr_5 [i_0] [i_0] = 3719564266U;
            /* LoopSeq 2 */
            for (short i_2 = 0; i_2 < 19; i_2 += 1) /* same iter space */
            {
                arr_8 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) arr_4 [i_0] [i_0]);
                var_15 = ((/* implicit */signed char) (+(((/* implicit */int) ((short) arr_1 [i_0])))));
                var_16 = ((/* implicit */unsigned int) ((unsigned char) arr_0 [i_1] [i_1]));
            }
            for (short i_3 = 0; i_3 < 19; i_3 += 1) /* same iter space */
            {
                var_17 = ((/* implicit */unsigned char) (+(((int) -245829823))));
                var_18 *= ((/* implicit */short) ((((/* implicit */_Bool) var_3)) ? ((~(((/* implicit */int) arr_3 [i_0] [i_1] [i_3])))) : (((((/* implicit */_Bool) arr_7 [i_1] [i_1])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [14]))))));
            }
        }
        /* vectorizable */
        for (unsigned int i_4 = 0; i_4 < 19; i_4 += 1) 
        {
            /* LoopSeq 1 */
            for (long long int i_5 = 0; i_5 < 19; i_5 += 4) 
            {
                /* LoopSeq 3 */
                for (int i_6 = 3; i_6 < 18; i_6 += 1) 
                {
                    var_19 *= ((/* implicit */unsigned char) (+(((/* implicit */int) arr_16 [i_0] [i_4] [i_4] [i_4]))));
                    /* LoopSeq 2 */
                    for (unsigned int i_7 = 0; i_7 < 19; i_7 += 3) 
                    {
                        var_20 = ((/* implicit */unsigned long long int) 60914448);
                        arr_22 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_16 [i_4] [i_4] [i_4] [i_4]);
                        arr_23 [i_0] [i_4] [i_0] [i_5] [i_6 - 1] [i_0] [i_7] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_0] [i_0])) ? ((-(((/* implicit */int) arr_10 [i_0] [i_0] [i_6 - 1] [i_0])))) : (((/* implicit */int) arr_13 [i_4] [i_0]))));
                        var_21 -= ((/* implicit */unsigned char) (-((~(-60914438)))));
                        var_22 = ((/* implicit */int) ((((((/* implicit */_Bool) arr_0 [i_0] [i_4])) && (((/* implicit */_Bool) arr_10 [i_0] [i_4] [i_0] [i_5])))) ? (((unsigned int) var_1)) : (((/* implicit */unsigned int) (+(((/* implicit */int) var_8)))))));
                    }
                    for (unsigned short i_8 = 0; i_8 < 19; i_8 += 1) 
                    {
                        var_23 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 8352547092238216687LL)) ? (2587239052U) : (4262032169U))))));
                        arr_27 [i_0] [i_0] [i_0] [i_0] [i_0] [i_8] [i_8] = ((/* implicit */unsigned short) arr_10 [i_0] [i_4] [i_4] [i_0]);
                        var_24 = ((/* implicit */unsigned int) max((var_24), (((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)0)))))));
                        var_25 = ((/* implicit */long long int) arr_13 [i_4] [i_5]);
                    }
                }
                for (short i_9 = 0; i_9 < 19; i_9 += 4) 
                {
                    arr_30 [i_0] [i_0] [i_5] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) var_11))))) ? (((/* implicit */long long int) arr_19 [i_0] [i_0] [i_0] [i_4] [i_5] [i_5] [i_9])) : (8552980604642902257LL)));
                    var_26 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((long long int) 60914437))) ? (((((/* implicit */_Bool) arr_14 [i_5])) ? (8352547092238216683LL) : (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_5] [i_5] [i_5] [i_0]))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_11)) : (var_3))))));
                }
                for (unsigned int i_10 = 0; i_10 < 19; i_10 += 1) 
                {
                    var_27 += ((/* implicit */short) (unsigned char)7);
                    var_28 |= ((/* implicit */unsigned int) arr_12 [i_5] [i_5]);
                    var_29 = ((/* implicit */unsigned long long int) min((var_29), (((/* implicit */unsigned long long int) arr_9 [i_5] [i_4] [i_5] [i_10]))));
                }
                /* LoopSeq 3 */
                for (unsigned long long int i_11 = 2; i_11 < 16; i_11 += 4) /* same iter space */
                {
                    var_30 = (~(((/* implicit */int) var_10)));
                    arr_36 [i_0] [i_11 - 1] [i_11 + 2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_0] [i_4] [i_4] [i_5] [i_11 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_4] [i_4] [i_11 + 3]))) : (8352547092238216687LL)))) ? (((/* implicit */unsigned int) ((int) arr_20 [i_0] [i_0]))) : (arr_31 [i_4] [i_4] [i_4] [i_4])));
                    var_31 += var_6;
                }
                for (unsigned long long int i_12 = 2; i_12 < 16; i_12 += 4) /* same iter space */
                {
                    var_32 = ((/* implicit */signed char) ((((/* implicit */_Bool) 2252258712551784211ULL)) ? ((~(var_7))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)234)) ? (((/* implicit */int) arr_3 [i_0] [i_0] [i_0])) : (((/* implicit */int) (unsigned short)8123)))))));
                    var_33 = ((/* implicit */unsigned int) min((var_33), (((/* implicit */unsigned int) var_8))));
                    var_34 = ((/* implicit */unsigned int) (-(((/* implicit */int) ((4294967295U) < (((/* implicit */unsigned int) ((/* implicit */int) arr_25 [i_0] [i_0]))))))));
                    var_35 = ((/* implicit */unsigned int) ((var_11) ? (((((/* implicit */_Bool) 16194485361157767404ULL)) ? (var_3) : (((/* implicit */int) var_8)))) : (((/* implicit */int) var_8))));
                }
                for (unsigned long long int i_13 = 2; i_13 < 16; i_13 += 4) /* same iter space */
                {
                    var_36 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (short)-15165))));
                    /* LoopSeq 2 */
                    for (unsigned int i_14 = 2; i_14 < 18; i_14 += 3) 
                    {
                        arr_47 [i_0] [i_5] [i_0] [i_13 + 2] [i_14 - 2] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2252258712551784195ULL)) ? (((/* implicit */int) arr_32 [i_0] [i_4] [i_0] [i_13 + 3] [i_14 + 1])) : (((/* implicit */int) arr_17 [i_0] [i_0] [i_5] [i_4] [i_0]))))) : ((-(2252258712551784195ULL)))));
                        arr_48 [i_0] = ((/* implicit */int) arr_34 [i_0] [i_0] [i_0] [i_13 - 1] [i_13 - 1] [i_0]);
                        var_37 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)32812)) ? (var_6) : (var_2)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_4))))) : (((((/* implicit */_Bool) arr_38 [i_0] [i_0] [i_4] [i_5] [i_13 - 1] [i_0])) ? (var_3) : (((/* implicit */int) var_5))))));
                    }
                    for (signed char i_15 = 0; i_15 < 19; i_15 += 4) 
                    {
                        arr_51 [i_0] [i_4] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((var_11) ? (35184372088576LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-33)))))) ? (arr_1 [i_4]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_0] [i_13 + 1] [i_13 + 1] [i_13 + 1])))));
                        var_38 ^= ((/* implicit */int) ((((long long int) (_Bool)0)) + (((/* implicit */long long int) ((int) var_9)))));
                        arr_52 [i_0] [i_0] [i_0] [i_13 + 2] = ((/* implicit */int) var_11);
                    }
                }
                var_39 += ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)32723)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (unsigned char)23))));
                arr_53 [i_0] [i_0] [i_4] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)32723)) ? (arr_1 [i_5]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_46 [i_5] [i_0] [i_5] [i_5] [i_0])))))) ? (((((/* implicit */_Bool) arr_33 [i_0] [i_4] [i_4] [i_5] [i_5] [i_5])) ? (((/* implicit */unsigned long long int) arr_15 [i_0] [i_0] [i_5])) : (arr_4 [i_5] [i_4]))) : (((/* implicit */unsigned long long int) ((((/* implicit */long long int) var_3)) ^ (35184372088576LL))))));
                /* LoopNest 2 */
                for (long long int i_16 = 1; i_16 < 17; i_16 += 3) 
                {
                    for (unsigned long long int i_17 = 0; i_17 < 19; i_17 += 3) 
                    {
                        {
                            var_40 &= ((/* implicit */unsigned short) arr_43 [i_0] [i_4] [i_5] [i_16 + 2] [i_4] [i_5]);
                            var_41 = ((/* implicit */unsigned long long int) arr_29 [i_17] [i_0] [i_5] [i_5] [i_0] [i_0]);
                        }
                    } 
                } 
            }
            arr_59 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-19)) ? (((/* implicit */long long int) ((/* implicit */int) (short)13692))) : ((-(8735870157570298386LL)))));
            arr_60 [i_0] [i_0] [i_4] = ((/* implicit */unsigned char) arr_2 [i_0]);
            var_42 = ((/* implicit */short) ((int) var_11));
        }
        var_43 ^= ((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_56 [i_0] [i_0] [i_0] [i_0] [i_0])), (((((/* implicit */_Bool) (unsigned char)22)) ? (((/* implicit */unsigned int) -153034631)) : (var_6)))))) ? (((((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_57 [i_0] [i_0] [i_0] [i_0]))) : (var_6))) | (var_7))) : (var_1));
        var_44 = ((/* implicit */short) (~(828333801)));
        var_45 = ((/* implicit */int) (((!(((/* implicit */_Bool) min((((/* implicit */int) var_11)), (828333801)))))) ? (arr_58 [i_0] [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) var_10)))))))));
    }
    /* vectorizable */
    for (unsigned long long int i_18 = 2; i_18 < 14; i_18 += 4) 
    {
        /* LoopSeq 2 */
        for (unsigned char i_19 = 0; i_19 < 15; i_19 += 3) 
        {
            arr_67 [i_18] [i_18 - 1] [i_19] = ((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */_Bool) arr_49 [i_18] [i_19])) ? (((/* implicit */unsigned long long int) arr_24 [i_18] [i_18 - 1] [i_18] [i_18] [i_18 - 1])) : (16194485361157767431ULL))));
            var_46 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) arr_57 [i_19] [i_19] [i_19] [i_19])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_56 [i_18] [i_19] [i_18 - 2] [i_19] [i_19]))) : (arr_14 [i_18 - 1]))) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))));
        }
        for (unsigned int i_20 = 0; i_20 < 15; i_20 += 1) 
        {
            arr_72 [i_18] [i_18] = ((/* implicit */unsigned short) arr_24 [i_18 + 1] [i_20] [i_18] [i_18 - 1] [i_18 + 1]);
            arr_73 [i_20] [i_18] = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) (unsigned short)32818)) ? (arr_45 [i_18] [i_18] [i_20] [i_18]) : (((/* implicit */unsigned int) ((/* implicit */int) var_11)))))));
            var_47 = ((/* implicit */unsigned char) ((int) (~(arr_4 [i_18] [i_18]))));
            var_48 = ((/* implicit */long long int) min((var_48), (((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */unsigned int) arr_65 [i_18])) + (arr_18 [i_18] [i_20] [i_18] [i_18] [i_18]))) : (((/* implicit */unsigned int) ((arr_9 [i_18] [i_18 - 1] [i_18 + 1] [i_18]) ? (((/* implicit */int) arr_11 [i_18 + 1] [i_18 + 1] [i_18 - 2])) : (((/* implicit */int) arr_69 [i_20]))))))))));
        }
        var_49 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(444469378333257982ULL)))) ? (((/* implicit */int) arr_55 [i_18])) : ((~(((/* implicit */int) arr_37 [i_18] [i_18 - 1] [i_18 - 2] [i_18] [i_18 - 2] [i_18]))))));
        var_50 = ((/* implicit */unsigned short) min((var_50), (((/* implicit */unsigned short) var_3))));
    }
}
