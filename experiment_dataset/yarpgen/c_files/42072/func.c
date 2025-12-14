/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42072
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42072 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42072
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
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned int) ((long long int) 6944288394855890750ULL));
        arr_4 [i_0] = ((/* implicit */unsigned int) 9007199253692416ULL);
    }
    for (unsigned char i_1 = 0; i_1 < 15; i_1 += 1) 
    {
        arr_9 [i_1] [(short)14] = max((((/* implicit */unsigned long long int) (unsigned char)0)), (((((/* implicit */_Bool) arr_8 [i_1] [i_1])) ? (arr_6 [i_1] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_1] [i_1]))))));
        /* LoopNest 2 */
        for (unsigned long long int i_2 = 0; i_2 < 15; i_2 += 3) 
        {
            for (long long int i_3 = 0; i_3 < 15; i_3 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (signed char i_4 = 2; i_4 < 12; i_4 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned char i_5 = 0; i_5 < 15; i_5 += 3) 
                        {
                            var_17 = ((/* implicit */int) (~(var_10)));
                            var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_7 [i_5]) ^ (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (signed char)120)) && (var_13)))))))) ? (((/* implicit */unsigned long long int) ((arr_16 [i_4 - 1] [i_4 + 3] [i_5] [(_Bool)0] [i_5]) >> (((/* implicit */int) var_0))))) : (((unsigned long long int) 0LL)))))));
                            arr_20 [i_1] [3ULL] [i_2] [i_1] [i_1] = ((/* implicit */long long int) (+(((/* implicit */int) min((((/* implicit */unsigned short) max((var_7), (((/* implicit */signed char) var_13))))), ((unsigned short)63060))))));
                        }
                        for (long long int i_6 = 0; i_6 < 15; i_6 += 1) 
                        {
                            var_19 = ((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */_Bool) arr_0 [(unsigned short)20] [i_3])) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_2 [i_1] [i_2]))))) : (9007199253692437ULL))));
                            var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) var_16))));
                            arr_25 [i_2] [i_2] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */long long int) (!(((/* implicit */_Bool) 18446744073709551615ULL))))), (max((-7930010803996699674LL), (((/* implicit */long long int) arr_14 [i_1] [i_2] [i_1] [i_2]))))))) ? (((/* implicit */long long int) ((((arr_12 [i_6] [i_2] [i_2]) % (arr_15 [i_2]))) - (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)81)))))))) : (arr_7 [i_1])));
                            var_21 = ((((/* implicit */unsigned long long int) (-(((arr_7 [i_1]) + (((/* implicit */long long int) ((/* implicit */int) var_2)))))))) % (min(((+(18446744073709551615ULL))), (((/* implicit */unsigned long long int) arr_21 [i_3])))));
                        }
                        var_22 = ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) arr_0 [i_4 + 3] [i_4 - 2])) ? (arr_7 [i_4 - 2]) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_4 + 3] [i_4 + 2]))))));
                        arr_26 [i_1] [i_1] [i_2] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) 13995516398236767312ULL)) ? (((/* implicit */int) (unsigned char)175)) : (((/* implicit */int) (unsigned short)58001))));
                    }
                    var_23 = ((/* implicit */int) ((((/* implicit */_Bool) var_11)) ? (((((((/* implicit */_Bool) arr_15 [i_2])) && (((/* implicit */_Bool) arr_21 [i_1])))) ? (13995516398236767306ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [9ULL] [i_2] [i_3] [i_2]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) (-(0U)))) != (var_11)))))));
                    arr_27 [i_1] [i_2] [i_1] = ((/* implicit */_Bool) arr_1 [i_3]);
                }
            } 
        } 
        var_24 = ((/* implicit */unsigned char) max((((/* implicit */long long int) var_1)), (arr_17 [(unsigned char)10] [i_1] [i_1] [(unsigned char)4] [(short)8])));
        var_25 = ((/* implicit */_Bool) var_7);
    }
    for (int i_7 = 0; i_7 < 15; i_7 += 2) 
    {
        var_26 = ((/* implicit */_Bool) ((short) ((unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)32738))) : (2593753542U)))));
        var_27 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_8 [i_7] [i_7])) : (((/* implicit */int) (unsigned short)7551)))))) ? (((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */int) var_9)) / (((/* implicit */int) (unsigned char)7)))))) : (((((((/* implicit */unsigned long long int) 1701213728U)) * (4451227675472784316ULL))) / (((/* implicit */unsigned long long int) var_3))))));
        var_28 = ((/* implicit */unsigned int) max((var_28), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((unsigned int) ((unsigned char) 0ULL)))) > ((((~(var_4))) % (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_14 [i_7] [i_7] [i_7] [i_7]))) > (arr_7 [i_7]))))))))))));
    }
    /* LoopSeq 3 */
    for (unsigned int i_8 = 2; i_8 < 16; i_8 += 4) 
    {
        /* LoopSeq 2 */
        for (unsigned char i_9 = 2; i_9 < 17; i_9 += 1) 
        {
            /* LoopNest 2 */
            for (long long int i_10 = 1; i_10 < 16; i_10 += 1) 
            {
                for (unsigned char i_11 = 0; i_11 < 18; i_11 += 2) 
                {
                    {
                        var_29 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (var_4) : (((/* implicit */unsigned long long int) 2U))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_37 [i_11])) == (((/* implicit */int) arr_37 [i_8 - 1])))))) : (((((unsigned long long int) 9007199253692423ULL)) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_38 [i_10 - 1] [i_8 - 1])))))));
                        var_30 = ((/* implicit */unsigned int) (~((-9223372036854775807LL - 1LL))));
                        var_31 = ((/* implicit */unsigned int) 9223372036854775807LL);
                    }
                } 
            } 
            /* LoopNest 2 */
            for (signed char i_12 = 0; i_12 < 18; i_12 += 2) 
            {
                for (unsigned int i_13 = 0; i_13 < 18; i_13 += 1) 
                {
                    {
                        arr_51 [i_8] [i_8] [i_12] [i_12] [i_8] = ((/* implicit */_Bool) (+(((((((/* implicit */unsigned long long int) -7474218111228737941LL)) + (11502455678853660871ULL))) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_35 [i_9] [i_9 + 1])))))));
                        var_32 = ((/* implicit */unsigned char) max(((signed char)-43), (((/* implicit */signed char) ((0U) < (((/* implicit */unsigned int) 1213187863)))))));
                    }
                } 
            } 
            arr_52 [i_8] [i_9] = ((/* implicit */int) min((-3312637182878504289LL), (((/* implicit */long long int) -1213187859))));
        }
        for (signed char i_14 = 0; i_14 < 18; i_14 += 4) 
        {
            arr_56 [i_8] [i_8] [(unsigned char)16] = ((/* implicit */short) (-(((((/* implicit */unsigned int) -1771634647)) - (4294967295U)))));
            /* LoopNest 2 */
            for (unsigned short i_15 = 1; i_15 < 17; i_15 += 2) 
            {
                for (unsigned int i_16 = 0; i_16 < 18; i_16 += 2) 
                {
                    {
                        var_33 |= ((/* implicit */unsigned long long int) ((short) ((unsigned short) arr_55 [i_8 - 2] [i_8 - 2])));
                        var_34 = ((/* implicit */unsigned int) min((var_34), (((/* implicit */unsigned int) (-((-(((unsigned long long int) -681035527)))))))));
                        var_35 ^= ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) arr_50 [(_Bool)1] [i_14] [i_15])))) && ((!(((/* implicit */_Bool) arr_45 [i_14]))))));
                    }
                } 
            } 
        }
        arr_62 [i_8 + 2] = ((/* implicit */unsigned char) 9007199253692423ULL);
        /* LoopNest 2 */
        for (long long int i_17 = 1; i_17 < 17; i_17 += 2) 
        {
            for (unsigned short i_18 = 1; i_18 < 17; i_18 += 2) 
            {
                {
                    var_36 = ((/* implicit */unsigned int) var_3);
                    var_37 = ((/* implicit */unsigned long long int) (short)-11342);
                    /* LoopNest 2 */
                    for (unsigned int i_19 = 3; i_19 < 17; i_19 += 1) 
                    {
                        for (unsigned long long int i_20 = 1; i_20 < 15; i_20 += 1) 
                        {
                            {
                                var_38 ^= ((/* implicit */short) max((((/* implicit */long long int) ((((/* implicit */int) arr_69 [i_8] [i_18 - 1] [i_19 - 2] [i_8])) | (((/* implicit */int) arr_69 [i_8] [i_8] [i_18] [(_Bool)1]))))), (((long long int) 0ULL))));
                                var_39 = ((/* implicit */unsigned int) min((var_39), (((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((max((arr_60 [i_17 - 1] [i_8]), (((/* implicit */int) arr_67 [i_8])))) - (((int) var_2))))), (max(((-(6944288394855890745ULL))), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) (_Bool)1)), (9223372036854775788LL)))))))))));
                                var_40 = ((/* implicit */short) min((((/* implicit */int) ((signed char) (!(((/* implicit */_Bool) 4283437588U)))))), (((((/* implicit */_Bool) ((unsigned long long int) var_1))) ? (((/* implicit */int) ((((/* implicit */_Bool) 6614136563000256278ULL)) || (arr_46 [i_8 - 1] [i_18] [7LL])))) : (((/* implicit */int) ((var_13) && (((/* implicit */_Bool) 9223372036854775807LL)))))))));
                                var_41 = ((/* implicit */unsigned int) min((((/* implicit */long long int) max((((/* implicit */int) arr_2 [i_8 - 2] [i_17 + 1])), ((+(((/* implicit */int) (unsigned short)5))))))), (max((((/* implicit */long long int) var_2)), (((((/* implicit */_Bool) 17041369484780618060ULL)) ? (((/* implicit */long long int) var_5)) : ((-9223372036854775807LL - 1LL))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    for (unsigned long long int i_21 = 1; i_21 < 21; i_21 += 2) 
    {
        var_42 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_1 [i_21 + 2])) : (((/* implicit */int) (signed char)104))))));
        arr_76 [i_21] = ((/* implicit */int) ((min(((~(var_11))), (((/* implicit */unsigned long long int) ((short) 0U))))) >= (((/* implicit */unsigned long long int) -931198898339996560LL))));
    }
    for (signed char i_22 = 3; i_22 < 19; i_22 += 2) 
    {
        var_43 = ((/* implicit */long long int) arr_73 [i_22 + 1]);
        var_44 ^= ((/* implicit */unsigned char) ((long long int) -931198898339996560LL));
        var_45 = ((/* implicit */unsigned long long int) ((((long long int) (unsigned char)63)) + (((/* implicit */long long int) ((/* implicit */int) (unsigned char)172)))));
        var_46 = ((/* implicit */short) ((((min(((~(((/* implicit */int) arr_2 [i_22] [i_22])))), (((/* implicit */int) var_6)))) + (2147483647))) << (((((((/* implicit */int) ((unsigned short) arr_74 [i_22 - 1] [i_22]))) << (((((/* implicit */int) var_8)) - (28504))))) - (56064)))));
    }
    var_47 = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) -1LL)))))) < (var_15)));
}
