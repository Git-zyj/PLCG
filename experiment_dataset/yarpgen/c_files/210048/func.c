/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210048
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210048 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210048
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
    /* LoopSeq 4 */
    for (signed char i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */int) var_11);
        arr_3 [i_0] = ((/* implicit */unsigned int) var_0);
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_7 [i_1] = ((/* implicit */long long int) 2812108109U);
        /* LoopSeq 3 */
        for (unsigned short i_2 = 0; i_2 < 23; i_2 += 1) 
        {
            var_14 &= ((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */_Bool) 1073741823U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)77))) : (arr_4 [i_1])))) / (((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_2]))) + (arr_8 [i_1] [i_1] [i_1])))));
            var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) ((((/* implicit */int) (short)-25567)) - (((/* implicit */int) (unsigned short)40166)))))));
            var_16 *= ((/* implicit */unsigned int) ((signed char) ((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned short)255)) : (((/* implicit */int) var_9)))) >> (((((((/* implicit */_Bool) 3221225473U)) ? (1073741823U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)(-127 - 1)))))) - (1073741798U))))));
        }
        /* vectorizable */
        for (unsigned short i_3 = 0; i_3 < 23; i_3 += 1) 
        {
            var_17 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-93))) > (arr_8 [i_1] [i_1] [i_1])));
            var_18 = ((/* implicit */signed char) 3221225475U);
        }
        /* vectorizable */
        for (unsigned int i_4 = 2; i_4 < 22; i_4 += 1) 
        {
            arr_16 [i_1] [(_Bool)1] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) 3221225458U)) ? (((/* implicit */unsigned int) arr_12 [i_4])) : ((~(arr_13 [i_1] [(signed char)4] [i_4])))));
            var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) ((((/* implicit */_Bool) 1073741823U)) || (((/* implicit */_Bool) arr_13 [i_4 + 1] [(signed char)18] [i_4 + 1])))))));
        }
        var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) (+(1073741809U))))));
        /* LoopSeq 2 */
        for (unsigned short i_5 = 2; i_5 < 20; i_5 += 1) 
        {
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned char i_6 = 0; i_6 < 23; i_6 += 1) 
            {
                arr_25 [i_1] [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(770429490U)))) ? (((/* implicit */int) (signed char)74)) : (((/* implicit */int) (signed char)-75))));
                arr_26 [i_1] &= ((/* implicit */int) (~(((((/* implicit */_Bool) 1073741823U)) ? (272087052U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-82)))))));
                var_21 = ((/* implicit */_Bool) ((((/* implicit */int) arr_20 [i_5 + 1] [i_5])) - (((/* implicit */int) arr_20 [i_5 + 2] [i_5 + 2]))));
            }
            for (signed char i_7 = 0; i_7 < 23; i_7 += 1) 
            {
                /* LoopNest 2 */
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    for (unsigned int i_9 = 0; i_9 < 23; i_9 += 1) 
                    {
                        {
                            arr_35 [i_9] [i_5 - 2] [i_9] [(short)1] [(short)1] [(short)1] = ((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)74))));
                            arr_36 [i_9] [i_5 + 3] = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) ((short) arr_30 [i_1] [i_8] [i_9] [i_8] [i_9]))) ? (((/* implicit */int) (signed char)-82)) : (((((/* implicit */_Bool) (unsigned short)504)) ? (((/* implicit */int) (short)-28091)) : (((/* implicit */int) (signed char)(-127 - 1)))))))));
                        }
                    } 
                } 
                var_22 = ((/* implicit */short) (!(((/* implicit */_Bool) (signed char)81))));
                var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)32758)) ? (((/* implicit */int) ((unsigned char) -5464579543680427619LL))) : (((/* implicit */int) (signed char)81))));
            }
            /* LoopSeq 2 */
            for (short i_10 = 0; i_10 < 23; i_10 += 1) 
            {
                /* LoopSeq 3 */
                for (short i_11 = 2; i_11 < 22; i_11 += 1) 
                {
                    arr_42 [i_11] [i_10] [i_1] [i_10] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_14 [i_1]))))) ? (min((-5464579543680427619LL), (((/* implicit */long long int) (short)-31419)))) : (((/* implicit */long long int) ((((/* implicit */int) arr_1 [i_1])) % (((/* implicit */int) arr_14 [i_1])))))));
                    var_24 = ((/* implicit */unsigned char) (((~(((((/* implicit */_Bool) (signed char)56)) ? (((/* implicit */int) (short)127)) : (-1272949722))))) > (((/* implicit */int) arr_34 [i_1] [i_1] [i_1] [i_10] [i_1]))));
                }
                for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                {
                    var_25 = ((/* implicit */_Bool) 268435455LL);
                    arr_46 [i_1] [i_5] [i_10] [i_12] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-82)) ? ((+(((((/* implicit */long long int) 4294967290U)) % (5464579543680427605LL))))) : (((/* implicit */long long int) ((/* implicit */int) arr_44 [i_1] [i_5] [i_10] [i_12])))));
                    arr_47 [i_1] [i_10] [(short)5] [i_12] [9U] [2] = ((/* implicit */unsigned int) arr_40 [(unsigned short)1] [i_5] [i_5 + 3] [i_10] [i_10] [i_12]);
                }
                for (unsigned char i_13 = 0; i_13 < 23; i_13 += 1) 
                {
                    var_26 = ((/* implicit */signed char) (short)32767);
                    arr_50 [i_10] = ((/* implicit */unsigned short) (-(((/* implicit */int) (signed char)-81))));
                    var_27 |= ((/* implicit */long long int) ((unsigned int) (unsigned short)15178));
                }
                arr_51 [i_1] [i_5] [i_1] [4LL] &= arr_5 [i_1];
                var_28 = ((/* implicit */unsigned char) min((var_28), (((/* implicit */unsigned char) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_13))))))))));
                arr_52 [(unsigned short)12] [i_10] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_1] [i_10])) ? (((/* implicit */int) arr_34 [i_1] [i_1] [i_1] [i_10] [i_10])) : (((/* implicit */int) ((((/* implicit */_Bool) (signed char)85)) && (((/* implicit */_Bool) (unsigned short)49130)))))))) ? ((-((+(((/* implicit */int) (signed char)91)))))) : (((/* implicit */int) arr_9 [i_10] [i_10]))));
            }
            for (unsigned char i_14 = 0; i_14 < 23; i_14 += 1) 
            {
                var_29 = ((/* implicit */long long int) max((var_29), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) 3221225452U)) != (((12695975368219050933ULL) >> (((((/* implicit */int) arr_45 [i_5 - 1] [i_5] [i_5 - 2] [i_5 - 2] [(signed char)21])) - (254))))))))));
                var_30 = (((~(arr_33 [i_14] [i_1] [i_5 - 2] [i_5 + 2] [i_1]))) & (((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) 2207150987U)))))))));
                arr_55 [i_1] [i_5 + 1] [i_14] |= ((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)-54))));
                arr_56 [i_1] [i_5 - 1] [i_14] [i_5 - 1] |= ((((/* implicit */_Bool) arr_30 [i_1] [i_5] [i_14] [i_5] [i_5 + 1])) ? (((((/* implicit */_Bool) (unsigned short)44993)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)248))) : (1073741832U))) : ((-(((((/* implicit */_Bool) arr_13 [i_1] [2] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)56))) : (arr_19 [i_5]))))));
            }
        }
        for (unsigned int i_15 = 0; i_15 < 23; i_15 += 1) 
        {
            var_31 = ((/* implicit */unsigned int) ((unsigned long long int) ((((/* implicit */_Bool) 800043267)) || (((/* implicit */_Bool) arr_58 [i_1] [i_15] [i_15])))));
            arr_59 [i_15] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((var_5), (var_5))))));
        }
    }
    for (short i_16 = 0; i_16 < 24; i_16 += 1) 
    {
        var_32 = ((/* implicit */unsigned char) 5464579543680427619LL);
        var_33 ^= ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_62 [i_16])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-81))) : (var_11)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_61 [i_16]))) > (arr_0 [i_16]))))) : (88951324U)))) || (((/* implicit */_Bool) (-(((((/* implicit */_Bool) 3221225452U)) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_60 [i_16])))))))));
    }
    for (signed char i_17 = 0; i_17 < 24; i_17 += 1) 
    {
        var_34 &= ((/* implicit */unsigned int) min((((/* implicit */int) ((((((/* implicit */_Bool) 5464579543680427619LL)) ? (3221225452U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)81))))) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_61 [i_17])))))), (((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (signed char)6)))) : ((-(((/* implicit */int) (signed char)22))))))));
        arr_65 [i_17] = ((/* implicit */unsigned int) -446715164);
        var_35 = ((/* implicit */unsigned long long int) min((var_35), (((/* implicit */unsigned long long int) (signed char)127))));
    }
    var_36 = ((/* implicit */unsigned int) var_6);
    var_37 = ((/* implicit */short) (+(((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) 5750768705490500666ULL)) ? (((/* implicit */unsigned long long int) 2111316065)) : (var_3)))))));
    /* LoopSeq 2 */
    for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
    {
        arr_68 [i_18] &= ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */_Bool) arr_38 [i_18])) && (((/* implicit */_Bool) arr_23 [i_18] [i_18] [i_18]))))) != (((var_6) - (((/* implicit */int) (unsigned short)43475))))));
        arr_69 [i_18] = ((/* implicit */long long int) ((unsigned int) 3917399784U));
        var_38 = ((/* implicit */signed char) min((var_38), (((signed char) ((((/* implicit */int) ((var_7) >= (arr_33 [i_18] [i_18] [i_18] [i_18] [i_18])))) != (((/* implicit */int) ((((/* implicit */_Bool) 2177123465U)) && (((/* implicit */_Bool) (short)-16466))))))))));
        var_39 &= ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned long long int) (signed char)-72))) && (((/* implicit */_Bool) (short)7510))));
    }
    for (unsigned int i_19 = 0; i_19 < 13; i_19 += 1) 
    {
        var_40 = ((/* implicit */short) max((var_40), (((/* implicit */short) max((((/* implicit */unsigned short) (signed char)76)), ((unsigned short)44990))))));
        /* LoopSeq 1 */
        for (int i_20 = 0; i_20 < 13; i_20 += 1) 
        {
            var_41 = ((/* implicit */unsigned int) max((var_41), (((/* implicit */unsigned int) arr_37 [(unsigned short)22]))));
            arr_75 [i_19] [i_20] [i_19] = ((/* implicit */unsigned int) (+(((/* implicit */int) ((((((/* implicit */long long int) 2496987864U)) & (8503523693702184888LL))) != (((((/* implicit */_Bool) var_5)) ? (arr_8 [i_19] [i_20] [i_20]) : (((/* implicit */long long int) var_13)))))))));
        }
    }
    var_42 = ((/* implicit */unsigned int) max((var_42), (((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)64)))))));
}
