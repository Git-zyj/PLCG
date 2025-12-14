/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193859
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193859 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193859
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
    for (unsigned int i_0 = 3; i_0 < 17; i_0 += 4) 
    {
        var_13 -= ((/* implicit */unsigned int) max((max((((/* implicit */unsigned long long int) ((3159892135U) + (3159892162U)))), (max((7054113301239228873ULL), (((/* implicit */unsigned long long int) 49905718U)))))), (((/* implicit */unsigned long long int) (-((+(((/* implicit */int) var_1)))))))));
        var_14 = ((/* implicit */short) 1836580143);
        var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) (unsigned short)3226))));
        var_16 -= ((/* implicit */_Bool) (unsigned short)62310);
    }
    for (unsigned short i_1 = 0; i_1 < 23; i_1 += 3) 
    {
        /* LoopSeq 1 */
        for (short i_2 = 0; i_2 < 23; i_2 += 1) 
        {
            var_17 = ((/* implicit */long long int) (+(max((248), ((+(((/* implicit */int) arr_5 [i_1]))))))));
            var_18 = ((/* implicit */_Bool) 17262525679044040365ULL);
            arr_7 [i_2] [i_2] = ((/* implicit */unsigned short) (!(((((/* implicit */_Bool) arr_2 [i_1])) || (((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) var_6))))))));
            /* LoopSeq 1 */
            for (unsigned char i_3 = 2; i_3 < 21; i_3 += 4) 
            {
                var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) min((((((((/* implicit */int) (signed char)42)) * (((/* implicit */int) arr_8 [i_1] [i_1] [i_1] [i_1])))) / ((+(((/* implicit */int) arr_9 [i_1] [i_2] [i_3] [i_3])))))), (max((((/* implicit */int) var_8)), (arr_11 [i_3 + 1] [i_3 + 2] [i_3 - 2] [i_3 - 2]))))))));
                var_20 ^= ((/* implicit */_Bool) var_11);
                arr_12 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) max((-3168763091342355979LL), (((/* implicit */long long int) max((var_6), (arr_6 [i_2]))))))), (min((((/* implicit */unsigned long long int) arr_5 [i_1])), (min((var_10), (((/* implicit */unsigned long long int) (unsigned short)3224))))))));
                arr_13 [i_1] [i_2] [i_3] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_2] [i_3 - 2] [i_3 + 2] [i_2]))))) >> ((((-(-248))) - (221)))));
            }
            arr_14 [i_2] = ((/* implicit */long long int) var_2);
        }
        /* LoopSeq 3 */
        for (short i_4 = 0; i_4 < 23; i_4 += 1) 
        {
            arr_17 [i_4] [i_4] [i_4] |= ((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_1] [i_4] [i_1] [18U])))))));
            var_21 = ((/* implicit */unsigned long long int) arr_10 [i_1] [i_4] [i_1] [i_1]);
        }
        for (unsigned short i_5 = 2; i_5 < 22; i_5 += 2) 
        {
            var_22 = ((/* implicit */unsigned int) (+(((/* implicit */int) var_1))));
            var_23 &= ((/* implicit */short) (signed char)64);
            var_24 ^= ((/* implicit */unsigned short) var_2);
        }
        /* vectorizable */
        for (long long int i_6 = 3; i_6 < 22; i_6 += 4) 
        {
            arr_22 [i_6] [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_11)) | (((((/* implicit */_Bool) arr_16 [i_1] [i_6])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_11))))));
            var_25 ^= ((/* implicit */short) (+(-246)));
        }
        /* LoopNest 3 */
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            for (unsigned short i_8 = 3; i_8 < 21; i_8 += 2) 
            {
                for (long long int i_9 = 0; i_9 < 23; i_9 += 3) 
                {
                    {
                        var_26 *= ((/* implicit */unsigned char) ((9223372036854775797LL) << (((((((((/* implicit */_Bool) var_8)) ? ((-(((/* implicit */int) (unsigned short)3212)))) : (((/* implicit */int) (!(((/* implicit */_Bool) 9223372036854775789LL))))))) + (3253))) - (41)))));
                        arr_30 [i_1] [i_1] [i_7] [i_8] [i_9] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_10 [i_9] [i_8 - 2] [i_8] [i_8]), (arr_10 [i_8] [i_8 + 2] [i_7] [i_7]))))) * (max((((/* implicit */unsigned long long int) var_4)), (20ULL)))));
                        var_27 = ((/* implicit */unsigned long long int) min((var_27), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_1] [i_7] [i_8] [0])) ? (((/* implicit */int) arr_26 [i_1] [i_7] [i_8])) : (((/* implicit */int) var_8)))))));
                        var_28 = ((/* implicit */unsigned char) max((var_28), (((/* implicit */unsigned char) ((_Bool) -248)))));
                        var_29 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_24 [i_8 - 3] [i_7] [i_8]))));
                    }
                } 
            } 
        } 
    }
    for (int i_10 = 0; i_10 < 12; i_10 += 3) 
    {
        var_30 = ((/* implicit */unsigned long long int) arr_15 [i_10]);
        var_31 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min(((short)8792), (((/* implicit */short) (unsigned char)98))))) ? ((+(((/* implicit */int) arr_26 [i_10] [i_10] [i_10])))) : (((/* implicit */int) ((var_4) > (((/* implicit */unsigned int) ((/* implicit */int) arr_26 [i_10] [i_10] [i_10]))))))));
        var_32 = ((/* implicit */unsigned short) max((var_32), (((/* implicit */unsigned short) (((((((~(((/* implicit */int) (_Bool)1)))) + (2147483647))) >> (((max((((/* implicit */unsigned long long int) 3159892135U)), (20ULL))) - (3159892135ULL))))) >> ((((+((-(((/* implicit */int) (signed char)-45)))))) - (26))))))));
        /* LoopSeq 4 */
        for (int i_11 = 0; i_11 < 12; i_11 += 4) 
        {
            var_33 &= ((/* implicit */signed char) 2146959360U);
            arr_36 [i_10] [i_10] [i_10] = ((/* implicit */short) (-(var_0)));
            arr_37 [i_11] [i_11] [i_11] = ((/* implicit */short) arr_24 [i_10] [i_10] [i_11]);
            /* LoopSeq 3 */
            for (long long int i_12 = 1; i_12 < 10; i_12 += 3) 
            {
                var_34 |= ((/* implicit */unsigned short) 18446744073709551615ULL);
                var_35 = ((/* implicit */signed char) (-(((((/* implicit */int) var_8)) * (((/* implicit */int) arr_3 [i_11] [i_12]))))));
            }
            for (unsigned short i_13 = 2; i_13 < 10; i_13 += 2) 
            {
                var_36 = ((/* implicit */int) arr_20 [i_11] [i_11]);
                var_37 += ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)103)))))))), (min((((/* implicit */unsigned long long int) (unsigned short)16)), (var_9)))));
                var_38 = ((/* implicit */unsigned int) 7538565825756230730LL);
            }
            /* vectorizable */
            for (short i_14 = 4; i_14 < 9; i_14 += 3) 
            {
                var_39 *= ((/* implicit */unsigned char) -2089715818);
                var_40 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_40 [i_11] [i_11] [i_14])) ? (((/* implicit */long long int) ((/* implicit */int) arr_43 [i_14 - 2] [i_11] [i_10]))) : (var_3)));
                arr_46 [i_10] [i_11] [i_14] [i_11] |= ((/* implicit */short) (-((-(31ULL)))));
                arr_47 [i_10] [i_10] [i_10] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+(arr_25 [i_10] [i_11] [i_14]))))));
            }
        }
        /* vectorizable */
        for (int i_15 = 2; i_15 < 11; i_15 += 1) 
        {
            /* LoopNest 2 */
            for (int i_16 = 0; i_16 < 12; i_16 += 4) 
            {
                for (signed char i_17 = 2; i_17 < 10; i_17 += 1) 
                {
                    {
                        arr_55 [i_10] [i_17] [i_15] [i_17] [i_17] = ((/* implicit */signed char) ((1135075161U) * (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)28672)))));
                        arr_56 [i_10] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) (+(arr_11 [i_10] [i_15] [i_16] [i_10])))) * (var_10)));
                    }
                } 
            } 
            var_41 = ((/* implicit */_Bool) (-(1406538189U)));
        }
        for (int i_18 = 0; i_18 < 12; i_18 += 4) 
        {
            var_42 = ((/* implicit */unsigned short) var_6);
            var_43 = ((/* implicit */signed char) min((var_43), (((/* implicit */signed char) ((int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-61))) / (max((((/* implicit */unsigned int) arr_58 [i_10])), (var_4)))))))));
        }
        for (int i_19 = 2; i_19 < 10; i_19 += 4) 
        {
            var_44 &= ((/* implicit */int) (!(((780860420451512871ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)239)))))));
            var_45 = ((/* implicit */signed char) min((max((((/* implicit */long long int) arr_32 [i_10])), (((((/* implicit */_Bool) arr_50 [i_19])) ? (((/* implicit */long long int) arr_52 [i_19] [i_10] [i_10])) : (var_3))))), (min((((/* implicit */long long int) var_1)), (arr_60 [i_19] [i_19 + 2])))));
            arr_62 [i_19] [i_19] [i_10] = ((/* implicit */int) max((max((arr_44 [i_10] [i_19 - 2]), (((/* implicit */long long int) -266)))), (((/* implicit */long long int) (-(((/* implicit */int) arr_33 [i_10])))))));
        }
    }
    var_46 = ((/* implicit */long long int) ((var_9) << ((((-(-845685813))) - (845685812)))));
}
