/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38380
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38380 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38380
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
    var_18 &= ((/* implicit */signed char) var_4);
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */long long int) ((unsigned int) (~(arr_0 [i_0] [i_0]))));
        arr_5 [i_0] &= max(((+(((((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))) / (arr_1 [i_0]))))), (arr_1 [i_0]));
        var_19 += ((/* implicit */unsigned int) arr_3 [i_0]);
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 11; i_2 += 2) 
            {
                {
                    var_20 -= ((/* implicit */unsigned int) var_3);
                    arr_12 [i_0] [i_2] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned long long int) (signed char)105))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_0] [i_1]))) / (var_10))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_2] [i_0])))));
                    var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) (((-(((/* implicit */int) arr_3 [i_0])))) == (((((/* implicit */int) arr_10 [i_1] [i_1])) << (((((/* implicit */int) var_8)) + (27602))))))))));
                    arr_13 [i_0] [i_0] [(short)1] = ((/* implicit */short) (signed char)-106);
                }
            } 
        } 
        var_22 |= ((/* implicit */unsigned char) ((short) var_13));
    }
    for (unsigned int i_3 = 0; i_3 < 19; i_3 += 3) 
    {
        var_23 -= ((/* implicit */short) ((((/* implicit */_Bool) min((((unsigned int) (unsigned short)42654)), (((/* implicit */unsigned int) (signed char)90))))) ? (((-1LL) & (((/* implicit */long long int) arr_15 [i_3])))) : (((/* implicit */long long int) ((/* implicit */int) (short)(-32767 - 1))))));
        /* LoopNest 3 */
        for (unsigned short i_4 = 4; i_4 < 17; i_4 += 4) 
        {
            for (signed char i_5 = 0; i_5 < 19; i_5 += 2) 
            {
                for (long long int i_6 = 0; i_6 < 19; i_6 += 4) 
                {
                    {
                        arr_25 [i_3] = ((/* implicit */signed char) (((((~(arr_18 [i_3] [i_4 - 3]))) ^ (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_3] [i_4] [i_3] [i_6] [i_6]))) >= (arr_23 [i_3] [i_3] [i_3] [i_3]))))))) >= (((/* implicit */unsigned int) (~((~(((/* implicit */int) var_6)))))))));
                        arr_26 [i_3] [i_3] [i_3] [i_3] |= ((/* implicit */long long int) (short)-32744);
                    }
                } 
            } 
        } 
    }
    /* LoopSeq 2 */
    for (unsigned char i_7 = 0; i_7 < 14; i_7 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned char i_8 = 2; i_8 < 10; i_8 += 1) 
        {
            for (unsigned short i_9 = 0; i_9 < 14; i_9 += 4) 
            {
                {
                    arr_33 [i_7] [(signed char)0] [i_7] [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-107)) ? (0ULL) : (((/* implicit */unsigned long long int) var_4))))) || (((/* implicit */_Bool) ((arr_21 [i_7] [i_7] [i_7]) >> (((arr_27 [i_8] [i_8]) + (8056216363644532284LL))))))))) > (((/* implicit */int) ((((long long int) var_16)) >= (((/* implicit */long long int) ((/* implicit */int) min((var_9), (arr_31 [i_7] [i_8 - 1] [i_9] [i_7]))))))))));
                    arr_34 [i_9] = ((/* implicit */short) ((((/* implicit */unsigned int) ((((/* implicit */int) var_8)) - (((/* implicit */int) var_6))))) <= (((arr_32 [i_8 - 1] [i_8 - 1] [i_8 - 1] [i_8 + 4]) & (((/* implicit */unsigned int) ((/* implicit */int) (short)32751)))))));
                    var_24 = ((/* implicit */int) max((var_24), (arr_15 [i_7])));
                    var_25 += ((/* implicit */unsigned int) var_3);
                }
            } 
        } 
        var_26 = ((/* implicit */signed char) (short)17151);
        arr_35 [i_7] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((short) arr_28 [i_7])))));
    }
    for (long long int i_10 = 1; i_10 < 18; i_10 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_11 = 1; i_11 < 18; i_11 += 4) 
        {
            for (int i_12 = 2; i_12 < 20; i_12 += 1) 
            {
                {
                    var_27 = ((/* implicit */_Bool) min((var_27), (((/* implicit */_Bool) -3595881566857186290LL))));
                    arr_47 [i_12] [i_10] [i_10] = ((/* implicit */unsigned short) min((((/* implicit */int) var_9)), ((+((~(((/* implicit */int) var_14))))))));
                    var_28 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)17844)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_1)))) : (max((((((/* implicit */_Bool) var_16)) ? (arr_42 [i_10] [i_10]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_46 [i_10] [i_10] [i_10] [i_10]))))), (((/* implicit */unsigned int) arr_40 [i_10] [i_10] [i_11]))))));
                    var_29 -= ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */int) arr_43 [i_10])) * (((/* implicit */int) arr_46 [i_10 + 3] [(unsigned short)20] [14] [14])))) <= ((-(((/* implicit */int) var_7)))))))) > (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (signed char)44)) : (((/* implicit */int) (short)32767))))) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-32767))) : (arr_42 [i_10] [(signed char)10]))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_13))))))))));
                }
            } 
        } 
        var_30 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((int) (!(((/* implicit */_Bool) var_6)))))) && ((!(((/* implicit */_Bool) arr_40 [i_10] [i_10 - 1] [i_10 + 3]))))));
        arr_48 [i_10] = ((/* implicit */unsigned long long int) ((long long int) arr_39 [i_10] [i_10]));
        /* LoopSeq 3 */
        /* vectorizable */
        for (long long int i_13 = 0; i_13 < 21; i_13 += 4) 
        {
            /* LoopSeq 1 */
            for (signed char i_14 = 4; i_14 < 17; i_14 += 2) 
            {
                var_31 &= ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) arr_39 [i_10] [i_10])) : (var_4)))));
                arr_55 [i_10] = (~(((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (signed char)-71)) : (((/* implicit */int) (short)26520)))));
                var_32 -= ((/* implicit */short) ((var_2) >> (((arr_45 [i_10 + 3] [i_10 + 3]) - (3085258761U)))));
            }
            var_33 += ((/* implicit */unsigned short) ((int) (~(((/* implicit */int) arr_51 [i_13])))));
            arr_56 [i_10] = ((/* implicit */unsigned char) ((18440997812002071370ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_38 [i_10] [i_10 + 1])))));
            arr_57 [i_10] = ((/* implicit */unsigned long long int) arr_54 [i_10] [i_13]);
        }
        for (unsigned short i_15 = 1; i_15 < 19; i_15 += 4) /* same iter space */
        {
            arr_61 [i_10] [i_15] [i_10] = min((((/* implicit */long long int) arr_51 [i_10 - 1])), (-3693634279226631157LL));
            arr_62 [i_10] = ((/* implicit */_Bool) min((((long long int) arr_36 [i_10 + 1])), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_36 [i_10 - 1])) ? (((/* implicit */int) arr_36 [i_10 + 1])) : (((/* implicit */int) arr_36 [i_10 + 1])))))));
            /* LoopNest 2 */
            for (unsigned short i_16 = 1; i_16 < 19; i_16 += 2) 
            {
                for (unsigned short i_17 = 2; i_17 < 17; i_17 += 4) 
                {
                    {
                        /* LoopSeq 2 */
                        for (unsigned int i_18 = 0; i_18 < 21; i_18 += 2) 
                        {
                            arr_71 [i_10] [i_10] [i_15] [i_16 + 1] [i_10] [i_10] [i_10] = ((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_58 [i_10])))))) < (((arr_42 [i_10] [i_10]) * (((/* implicit */unsigned int) ((/* implicit */int) arr_43 [i_18])))))))), (((((/* implicit */long long int) (~(var_1)))) / (((((/* implicit */_Bool) -305576008)) ? (-7517876901648619799LL) : (((/* implicit */long long int) ((/* implicit */int) arr_51 [i_10])))))))));
                            var_34 -= ((/* implicit */signed char) ((unsigned int) ((long long int) var_1)));
                        }
                        for (unsigned long long int i_19 = 0; i_19 < 21; i_19 += 4) 
                        {
                            arr_74 [15ULL] [i_10] = ((/* implicit */signed char) (+(((/* implicit */int) arr_63 [i_10] [i_10]))));
                            var_35 *= min((((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)32767))) >= (var_3)))) >> ((((-(var_5))) + (3504804168161661519LL)))))), (((unsigned long long int) (signed char)-71)));
                            var_36 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((((/* implicit */long long int) ((arr_39 [(unsigned short)2] [i_15]) % (((/* implicit */int) (unsigned short)43298))))), (min((((/* implicit */long long int) arr_50 [i_10] [i_15] [i_16 - 1])), (var_15))))))));
                        }
                        arr_75 [i_10] [i_10] [i_10] [i_17] [i_10] |= ((/* implicit */signed char) ((int) min((((((/* implicit */long long int) ((/* implicit */int) (short)-32751))) / (var_5))), (((/* implicit */long long int) (_Bool)1)))));
                        arr_76 [i_10] [i_10] [i_10] [i_10] = ((/* implicit */unsigned char) 11916401583843314737ULL);
                        var_37 = ((/* implicit */unsigned int) arr_59 [i_10]);
                        arr_77 [i_10] [i_16] [i_17] = var_4;
                    }
                } 
            } 
            var_38 -= ((/* implicit */signed char) max((((unsigned int) arr_65 [i_10 + 3] [i_10 + 1] [i_10 + 3])), (((/* implicit */unsigned int) var_6))));
        }
        for (unsigned short i_20 = 1; i_20 < 19; i_20 += 4) /* same iter space */
        {
            var_39 = ((/* implicit */unsigned int) ((unsigned short) var_8));
            arr_80 [i_10] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) var_7))) ? (((/* implicit */int) ((((/* implicit */int) arr_64 [i_10 + 2])) == (((/* implicit */int) arr_64 [i_10 + 2]))))) : (((/* implicit */int) ((-186329966901126467LL) < (((/* implicit */long long int) ((/* implicit */int) arr_68 [i_10] [i_10] [i_10]))))))));
            /* LoopNest 2 */
            for (int i_21 = 4; i_21 < 19; i_21 += 1) 
            {
                for (unsigned long long int i_22 = 1; i_22 < 19; i_22 += 4) 
                {
                    {
                        arr_86 [i_10] [i_10] [17LL] [(short)5] = var_11;
                        var_40 = ((/* implicit */unsigned short) min((((/* implicit */long long int) arr_39 [i_10] [i_22])), ((-(((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) arr_60 [i_10]))) : (var_15)))))));
                        arr_87 [i_10] [i_10] [i_10] = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (signed char)-90)) || (((/* implicit */_Bool) arr_58 [i_10])))))) == (min((((/* implicit */unsigned long long int) var_11)), (4342310824085319488ULL)))))) < (((((/* implicit */int) ((short) -3281581830196590886LL))) * (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (signed char)-30)) : (var_12)))))));
                        var_41 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_0))) ^ (arr_50 [i_10 + 3] [i_10] [i_10 + 3])))) ? (min((((/* implicit */unsigned int) (short)29541)), (arr_42 [i_10] [i_10]))) : (((/* implicit */unsigned int) arr_54 [i_10] [i_20 + 1])))))));
                    }
                } 
            } 
        }
    }
}
