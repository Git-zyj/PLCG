/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220974
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220974 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220974
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
    var_10 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_6), (((/* implicit */unsigned int) (unsigned short)65535))))) ? (((/* implicit */int) (signed char)10)) : (((/* implicit */int) var_2)))))));
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            for (unsigned int i_2 = 2; i_2 < 23; i_2 += 4) 
            {
                {
                    var_11 ^= ((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0] [i_2]);
                    arr_9 [i_0] = ((/* implicit */signed char) (~(((/* implicit */int) (signed char)0))));
                }
            } 
        } 
        var_12 = ((/* implicit */signed char) min((var_12), (((/* implicit */signed char) ((unsigned short) 11U)))));
        /* LoopSeq 2 */
        for (long long int i_3 = 3; i_3 < 23; i_3 += 3) 
        {
            arr_14 [18LL] &= ((/* implicit */unsigned short) (~(((/* implicit */int) ((unsigned short) (short)-11)))));
            arr_15 [i_3] = ((/* implicit */short) ((unsigned char) (-(arr_5 [i_0] [i_3 - 1]))));
        }
        for (unsigned int i_4 = 0; i_4 < 24; i_4 += 1) 
        {
            arr_18 [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */long long int) min((681895375U), (((/* implicit */unsigned int) (unsigned short)65523))))) - (min((-9019706876181904161LL), (((/* implicit */long long int) arr_4 [i_0]))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_13 [i_4] [i_4]))))) ? (((((/* implicit */_Bool) (unsigned short)31)) ? (2090313523716945660LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-55))))) : (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned char) arr_8 [(unsigned char)12] [i_4] [(unsigned char)12] [i_0])), ((unsigned char)59)))))))) : (3587142811110171330ULL)));
            arr_19 [i_0] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned char) arr_5 [i_0] [i_4]))) ? (var_0) : (min((arr_12 [i_0] [i_0] [i_4]), (arr_12 [i_0] [i_0] [i_4])))));
        }
        arr_20 [i_0] [i_0] = ((/* implicit */int) arr_11 [12U] [12U] [(signed char)14]);
    }
    for (int i_5 = 0; i_5 < 12; i_5 += 4) 
    {
        var_13 = ((/* implicit */short) ((((((/* implicit */int) arr_13 [i_5] [i_5])) | (((/* implicit */int) (short)32767)))) ^ (((/* implicit */int) (unsigned short)65496))));
        var_14 = ((/* implicit */short) ((signed char) (unsigned char)176));
        arr_23 [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)59)) ? (((/* implicit */int) (unsigned char)64)) : (((/* implicit */int) max(((short)18342), (((/* implicit */short) var_7)))))))) ? (((/* implicit */int) arr_8 [i_5] [i_5] [i_5] [i_5])) : (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) 1873320288)) : (arr_0 [i_5] [(unsigned char)19])))))));
    }
    for (signed char i_6 = 0; i_6 < 19; i_6 += 1) 
    {
        /* LoopNest 3 */
        for (signed char i_7 = 4; i_7 < 17; i_7 += 4) 
        {
            for (int i_8 = 0; i_8 < 19; i_8 += 1) 
            {
                for (signed char i_9 = 3; i_9 < 18; i_9 += 1) 
                {
                    {
                        var_15 = ((/* implicit */long long int) min((var_15), (((/* implicit */long long int) 421092658))));
                        arr_32 [i_6] [i_6] [i_6] [i_9 - 2] = ((/* implicit */unsigned short) (~(((((/* implicit */int) max((var_9), (((/* implicit */unsigned char) (_Bool)0))))) & (((/* implicit */int) arr_8 [(unsigned char)18] [i_7] [i_7 - 1] [i_7]))))));
                        var_16 = ((/* implicit */unsigned int) ((unsigned short) ((long long int) arr_8 [i_9] [i_9] [i_9 + 1] [18LL])));
                        arr_33 [i_6] [i_6] = ((/* implicit */int) ((long long int) (unsigned short)62412));
                        arr_34 [i_6] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_24 [i_9 + 1]))) : (arr_26 [i_6]))), (((unsigned int) arr_31 [i_8] [i_7 - 4] [i_9 - 2]))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (signed char i_10 = 0; i_10 < 19; i_10 += 4) 
        {
            for (unsigned int i_11 = 0; i_11 < 19; i_11 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_12 = 0; i_12 < 19; i_12 += 3) 
                    {
                        for (int i_13 = 3; i_13 < 17; i_13 += 3) 
                        {
                            {
                                arr_47 [i_6] [i_10] [i_10] [(_Bool)1] [i_6] [i_6] [i_13] = ((/* implicit */unsigned char) ((((/* implicit */int) min((((/* implicit */unsigned short) (signed char)118)), ((unsigned short)58403)))) / (((((/* implicit */int) ((unsigned short) arr_35 [11LL]))) * ((+(((/* implicit */int) (signed char)(-127 - 1)))))))));
                                var_17 -= ((/* implicit */signed char) ((unsigned char) ((signed char) arr_43 [12ULL] [i_13 + 2] [i_11] [i_13 - 3] [i_13 - 1] [i_13 - 2])));
                            }
                        } 
                    } 
                    var_18 = (!(((/* implicit */_Bool) max((arr_35 [i_10]), (arr_35 [i_6])))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned char i_14 = 0; i_14 < 19; i_14 += 1) 
        {
            for (short i_15 = 0; i_15 < 19; i_15 += 2) 
            {
                {
                    var_19 &= ((/* implicit */unsigned short) ((1456055444U) - (((/* implicit */unsigned int) 775091566))));
                    /* LoopSeq 2 */
                    for (signed char i_16 = 0; i_16 < 19; i_16 += 2) 
                    {
                        var_20 = ((/* implicit */unsigned short) (signed char)118);
                        /* LoopSeq 3 */
                        for (short i_17 = 0; i_17 < 19; i_17 += 1) 
                        {
                            arr_59 [i_17] [i_6] [i_15] [i_6] [(_Bool)0] = ((/* implicit */unsigned long long int) (signed char)-115);
                            arr_60 [i_6] [i_6] [i_6] [i_6] [i_6] = ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_53 [i_6] [i_6] [i_6] [(short)3])) ? (((/* implicit */int) (unsigned short)11300)) : (((/* implicit */int) arr_13 [i_6] [i_6]))))) ? (min((arr_57 [i_17] [(_Bool)1] [17ULL] [(_Bool)1] [(_Bool)1]), (((/* implicit */unsigned int) (unsigned char)255)))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) -32410189888709184LL)))))) - ((-(min((1848458279U), (((/* implicit */unsigned int) var_4)))))));
                            var_21 = ((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)35488))));
                            var_22 = ((/* implicit */unsigned char) ((0LL) < (((/* implicit */long long int) -1418177470))));
                        }
                        /* vectorizable */
                        for (unsigned short i_18 = 2; i_18 < 18; i_18 += 4) 
                        {
                            var_23 = ((/* implicit */unsigned int) ((arr_57 [i_16] [i_18 - 2] [i_18 + 1] [13U] [(signed char)1]) < (((((/* implicit */_Bool) -1115809470502990827LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)55591))) : (4294967275U)))));
                            arr_64 [i_6] [i_6] [i_6] [i_6] [i_6] = ((/* implicit */long long int) arr_35 [i_18 - 1]);
                        }
                        for (signed char i_19 = 0; i_19 < 19; i_19 += 4) 
                        {
                            var_24 &= ((/* implicit */signed char) ((_Bool) 2409200633U));
                            var_25 = ((/* implicit */unsigned int) ((signed char) (_Bool)1));
                            var_26 = ((/* implicit */unsigned char) max((min((((/* implicit */unsigned int) (~(((/* implicit */int) arr_55 [(unsigned short)8] [(unsigned short)8] [i_16]))))), (((((/* implicit */_Bool) arr_51 [i_19] [i_15] [i_6])) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))))))), (arr_50 [i_6])));
                        }
                        var_27 = ((/* implicit */short) min((var_27), (((/* implicit */short) ((unsigned char) ((_Bool) arr_50 [i_15]))))));
                        var_28 = ((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned short)43949))));
                        arr_67 [i_6] = ((/* implicit */signed char) min((144329680), (253952)));
                    }
                    for (unsigned long long int i_20 = 4; i_20 < 16; i_20 += 1) 
                    {
                        arr_70 [i_6] [i_14] [i_15] = max(((~(arr_57 [i_20 - 1] [i_20 - 3] [i_20 + 2] [i_20 + 2] [i_20]))), (((/* implicit */unsigned int) var_7)));
                        arr_71 [i_14] [i_6] [i_14] [i_15] [i_6] [5LL] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (min((((/* implicit */long long int) arr_26 [i_6])), (2090313523716945660LL))) : (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) arr_10 [i_6] [i_6] [i_6])), (var_8)))))))) && (((/* implicit */_Bool) (signed char)-103))));
                        arr_72 [i_14] [i_14] [i_14] [i_6] = ((/* implicit */signed char) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_54 [i_6] [i_20 - 1] [i_20 - 1] [i_20 - 1]))))), (((((/* implicit */_Bool) (signed char)63)) ? (arr_54 [i_14] [i_20 + 2] [i_20 - 4] [i_20 - 1]) : (arr_54 [i_6] [i_20 - 1] [i_20 - 1] [i_20 - 2])))));
                    }
                    arr_73 [i_6] = ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (unsigned char)177)), (3926272532U)))) ? (1142620154U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)21587))));
                }
            } 
        } 
        arr_74 [i_6] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned short) (+(((/* implicit */int) (unsigned char)41)))))) <= (((((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)14)), ((unsigned short)47442)))) - (((/* implicit */int) ((((/* implicit */int) (signed char)-33)) != (((/* implicit */int) arr_10 [i_6] [i_6] [i_6])))))))));
    }
}
