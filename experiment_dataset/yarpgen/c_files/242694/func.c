/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242694
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242694 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242694
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
    for (int i_0 = 2; i_0 < 15; i_0 += 4) 
    {
        var_13 *= ((/* implicit */_Bool) ((unsigned short) (short)26909));
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 16; i_2 += 2) 
            {
                {
                    var_14 = ((/* implicit */short) ((((0ULL) >> (((((/* implicit */int) (unsigned short)43687)) - (43651))))) >> (((((/* implicit */int) arr_2 [i_1])) - (4919)))));
                    var_15 = ((/* implicit */short) ((arr_3 [i_2] [i_1] [i_0]) >> (((((((/* implicit */_Bool) ((signed char) arr_1 [i_0]))) ? (((((/* implicit */_Bool) (short)30696)) ? (var_12) : (arr_9 [i_1]))) : (((/* implicit */unsigned long long int) ((var_4) / (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)60597)))))))) - (3863806237972204683ULL)))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (short i_3 = 1; i_3 < 13; i_3 += 2) 
    {
        var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [3ULL] [i_3 - 1] [i_3] [i_3 - 1])) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)21849)) ? (((/* implicit */int) (signed char)-120)) : (((/* implicit */int) var_2))))) : (arr_4 [i_3 + 1])));
        var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)43690)) ? (((((/* implicit */_Bool) (signed char)-123)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-30696))) : (3918683575U))) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_0 [i_3 + 2])) + (((/* implicit */int) (unsigned short)43687)))))));
        var_18 = ((/* implicit */unsigned int) ((arr_1 [i_3 - 1]) + (((/* implicit */long long int) 131464163))));
        arr_14 [i_3] [i_3] = ((/* implicit */unsigned short) arr_3 [i_3 + 1] [12ULL] [i_3]);
        var_19 &= ((((((/* implicit */_Bool) -1)) ? (((/* implicit */int) (unsigned short)43690)) : (((/* implicit */int) (signed char)-16)))) + (((/* implicit */int) (unsigned short)52539)));
    }
    var_20 += ((/* implicit */long long int) var_3);
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_4 = 0; i_4 < 16; i_4 += 4) 
    {
        /* LoopSeq 3 */
        for (short i_5 = 0; i_5 < 16; i_5 += 3) 
        {
            var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) arr_4 [i_4]))));
            var_22 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_4 [i_4])) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_5 [(short)12] [i_5])) : (arr_19 [(signed char)3] [i_5] [i_5])))) : (((((/* implicit */unsigned int) ((/* implicit */int) (short)-30696))) + (3985743975U)))));
        }
        for (unsigned short i_6 = 1; i_6 < 13; i_6 += 3) 
        {
            arr_24 [i_6] [i_6] [i_6] = ((int) ((((/* implicit */int) (unsigned short)43700)) >> (((((/* implicit */int) (unsigned short)3132)) - (3118)))));
            var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) (+(var_12))))));
        }
        for (unsigned long long int i_7 = 0; i_7 < 16; i_7 += 1) 
        {
            var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_25 [i_7] [i_7])))))));
            var_25 &= ((_Bool) ((((/* implicit */_Bool) arr_21 [i_4] [12U] [i_4])) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) var_2)))));
        }
        var_26 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_4])) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))))));
    }
    var_27 = ((/* implicit */unsigned short) ((var_4) + (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) var_3)), (1273989070U))))))))));
    /* LoopSeq 2 */
    for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
    {
        var_28 = ((/* implicit */_Bool) arr_11 [i_8] [i_8]);
        arr_29 [i_8 - 1] [i_8 - 1] = ((/* implicit */short) ((((/* implicit */_Bool) arr_10 [i_8])) ? (max((arr_18 [i_8 - 1] [i_8 - 1]), (((/* implicit */unsigned long long int) (signed char)-120)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)62167)))));
        var_29 = ((/* implicit */unsigned int) min((var_29), (var_4)));
        /* LoopSeq 2 */
        for (short i_9 = 0; i_9 < 11; i_9 += 2) 
        {
            var_30 = ((short) ((signed char) (short)8977));
            var_31 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) min(((unsigned short)65518), (((/* implicit */unsigned short) (signed char)-57))))) : (((/* implicit */int) ((short) var_11)))));
            var_32 = ((/* implicit */unsigned short) max((var_32), (((/* implicit */unsigned short) ((((/* implicit */int) var_9)) >> (((/* implicit */int) ((((/* implicit */unsigned long long int) arr_7 [i_8] [i_8 - 1] [7LL])) == (arr_18 [i_8] [i_8])))))))));
        }
        for (signed char i_10 = 1; i_10 < 10; i_10 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned short i_11 = 2; i_11 < 10; i_11 += 2) 
            {
                /* LoopNest 2 */
                for (unsigned short i_12 = 0; i_12 < 11; i_12 += 1) 
                {
                    for (unsigned short i_13 = 1; i_13 < 10; i_13 += 2) 
                    {
                        {
                            var_33 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */int) ((short) (unsigned char)239))), (arr_17 [i_8 - 1] [i_8 - 1] [i_11 + 1])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)65099)) + (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)41974))) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (-4639530400174127455LL)))))) : (281968836304484127ULL)));
                            var_34 = ((/* implicit */unsigned long long int) -8780505098908747908LL);
                        }
                    } 
                } 
                arr_44 [i_8 - 1] [i_10 - 1] [i_10 - 1] = ((/* implicit */short) ((arr_35 [i_8 - 1] [i_8 - 1] [i_8]) * (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) arr_27 [i_8 - 1] [i_10 - 1])), (arr_21 [i_11] [i_11] [i_11])))))));
                var_35 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_40 [i_10] [i_10 - 1] [i_10 - 1] [i_11 - 1] [i_11 - 1]))) / (((((/* implicit */_Bool) -8780505098908747908LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-5661))) : (4190174563U)))))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned short)12983))));
                arr_45 [i_11] [i_10] [i_11] [i_10] = ((/* implicit */signed char) (unsigned char)118);
                /* LoopNest 2 */
                for (unsigned short i_14 = 0; i_14 < 11; i_14 += 3) 
                {
                    for (short i_15 = 1; i_15 < 10; i_15 += 2) 
                    {
                        {
                            var_36 = ((/* implicit */long long int) ((max(((-(var_12))), (((/* implicit */unsigned long long int) max((2646124733U), (((/* implicit */unsigned int) var_2))))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                            var_37 -= ((/* implicit */signed char) (+(((/* implicit */int) arr_21 [i_8] [10LL] [i_11]))));
                        }
                    } 
                } 
            }
            var_38 = 1838546677U;
            var_39 = min((((/* implicit */unsigned long long int) 1459496789)), (3283472606292011106ULL));
        }
    }
    for (int i_16 = 2; i_16 < 18; i_16 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_17 = 0; i_17 < 19; i_17 += 2) 
        {
            for (unsigned int i_18 = 4; i_18 < 15; i_18 += 4) 
            {
                {
                    arr_61 [11] = ((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */int) (unsigned short)34650)) : (1704456817)))) ? (((/* implicit */int) min((arr_54 [i_17] [i_17] [(unsigned short)0]), (arr_54 [i_18] [i_17] [i_18])))) : (((/* implicit */int) arr_59 [(signed char)1]))))) + (arr_52 [i_17])));
                    var_40 = ((/* implicit */short) (+(((/* implicit */int) min(((short)-1), (((/* implicit */short) (signed char)0)))))));
                    var_41 += ((/* implicit */unsigned char) -1871445166);
                }
            } 
        } 
        /* LoopNest 2 */
        for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
        {
            for (unsigned char i_20 = 1; i_20 < 18; i_20 += 1) 
            {
                {
                    var_42 = ((((/* implicit */int) arr_58 [i_19] [5])) * (((/* implicit */int) var_7)));
                    var_43 = ((/* implicit */signed char) min((var_43), (arr_57 [i_16 + 1] [16LL] [i_16 + 1])));
                }
            } 
        } 
        arr_67 [i_16] [i_16 - 2] &= ((/* implicit */_Bool) min((arr_56 [i_16] [i_16 - 1]), (((/* implicit */unsigned int) min((((/* implicit */unsigned short) arr_57 [i_16 - 1] [i_16 - 1] [i_16])), (arr_54 [i_16] [i_16] [i_16 - 2]))))));
        var_44 = ((/* implicit */unsigned short) min((var_44), (((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */int) arr_57 [i_16] [(short)10] [i_16])), (((((/* implicit */_Bool) arr_66 [(_Bool)1] [i_16] [i_16 - 1] [(_Bool)1])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_58 [(short)9] [i_16]))))))) ? (((((/* implicit */_Bool) ((long long int) arr_56 [i_16] [i_16 + 1]))) ? (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) arr_59 [i_16])), (arr_55 [i_16 + 1] [i_16] [i_16])))) : (max((((/* implicit */unsigned long long int) arr_52 [i_16])), (18446744073709551615ULL))))) : (max((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_66 [(short)0] [6ULL] [i_16 + 1] [i_16]))))), (((unsigned long long int) var_12)))))))));
        arr_68 [i_16] = ((/* implicit */short) (+(max((var_12), (((/* implicit */unsigned long long int) arr_57 [i_16 - 2] [(short)14] [i_16 - 1]))))));
    }
}
