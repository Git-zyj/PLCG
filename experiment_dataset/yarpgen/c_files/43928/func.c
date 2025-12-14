/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43928
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43928 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43928
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
    for (unsigned char i_0 = 2; i_0 < 19; i_0 += 4) 
    {
        /* LoopSeq 4 */
        for (unsigned int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            var_16 = ((max((var_15), (((/* implicit */unsigned long long int) ((arr_4 [i_1] [i_1]) - (((/* implicit */long long int) ((/* implicit */int) (signed char)-1)))))))) / (((/* implicit */unsigned long long int) arr_2 [i_1] [i_0 - 2] [i_1])));
            arr_6 [i_0] [i_0] &= ((/* implicit */int) max((((arr_3 [i_0 - 1]) >> (((arr_3 [i_0 + 1]) - (2684191856504888977LL))))), (max((((/* implicit */long long int) max((arr_0 [i_1]), (arr_0 [i_0])))), (min((arr_4 [i_0] [i_1]), (((/* implicit */long long int) var_12))))))));
            var_17 = ((/* implicit */unsigned short) arr_3 [i_0 + 1]);
        }
        /* vectorizable */
        for (unsigned short i_2 = 3; i_2 < 17; i_2 += 1) 
        {
            arr_10 [i_2] = (~(((/* implicit */int) arr_0 [i_0 - 1])));
            /* LoopNest 2 */
            for (unsigned int i_3 = 3; i_3 < 19; i_3 += 2) 
            {
                for (int i_4 = 0; i_4 < 20; i_4 += 4) 
                {
                    {
                        var_18 = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_2]))) == ((-9223372036854775807LL - 1LL))))) == (((/* implicit */int) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) arr_5 [i_3])))))));
                        var_19 = ((/* implicit */long long int) ((arr_1 [i_0]) >= ((-(9223372036854775807LL)))));
                        var_20 = ((/* implicit */short) (+(arr_11 [i_2] [i_2 + 2] [i_2 + 3])));
                        var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) ((9223372036854775807LL) <= (((/* implicit */long long int) ((/* implicit */int) (signed char)-79))))))));
                    }
                } 
            } 
            var_22 = ((/* implicit */int) ((unsigned int) arr_3 [i_0 + 1]));
        }
        for (signed char i_5 = 1; i_5 < 19; i_5 += 4) 
        {
            var_23 &= ((/* implicit */short) max((max((arr_2 [i_0] [i_0] [i_5]), (((/* implicit */int) max(((unsigned short)581), (((/* implicit */unsigned short) (signed char)-79))))))), (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) var_10)))))) < (arr_3 [i_5]))))));
            var_24 = ((/* implicit */unsigned int) min((var_24), (((/* implicit */unsigned int) ((((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)0)), (arr_9 [i_0])))) << ((((-(((/* implicit */int) arr_15 [i_5 + 1] [i_5])))) + (13857))))))));
            arr_17 [(signed char)2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_0])) ? (((long long int) max((((/* implicit */long long int) -1079698921)), (529271400153924270LL)))) : (((max((458597884491156606LL), (9223372036854775807LL))) * (((arr_1 [i_5]) / (arr_11 [i_0] [i_0] [i_5 - 1])))))));
            var_25 &= ((/* implicit */unsigned short) (~(((((/* implicit */int) (signed char)-83)) ^ (((/* implicit */int) arr_12 [i_0 - 1] [i_0 - 1]))))));
        }
        for (unsigned long long int i_6 = 0; i_6 < 20; i_6 += 4) 
        {
            /* LoopSeq 2 */
            for (long long int i_7 = 3; i_7 < 19; i_7 += 2) 
            {
                arr_23 [i_0] [i_0] [i_6] &= ((/* implicit */long long int) max((arr_20 [i_0 + 1] [i_0 + 1]), (min((((var_8) == (var_3))), (((var_4) < (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-26153)))))))));
                /* LoopSeq 1 */
                for (long long int i_8 = 0; i_8 < 20; i_8 += 2) 
                {
                    arr_26 [i_0] [i_0] [i_0] [i_0 - 2] [i_0] = ((/* implicit */short) min((((((/* implicit */long long int) var_7)) + (((((/* implicit */long long int) ((/* implicit */int) arr_16 [i_0] [10LL] [i_0]))) - (-9223372036854775797LL))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) min((var_6), (arr_7 [i_6])))))))));
                    var_26 = ((/* implicit */signed char) (+(((/* implicit */int) arr_24 [13U] [i_7 + 1] [(unsigned short)17] [i_7 - 2] [i_7 + 1]))));
                    var_27 &= ((/* implicit */short) max((min((arr_20 [i_7 + 1] [i_0 - 1]), (arr_20 [i_7 - 3] [i_0 - 2]))), (((((var_11) ? (((/* implicit */int) arr_0 [i_7])) : (((/* implicit */int) var_12)))) < (((/* implicit */int) ((unsigned char) arr_3 [(_Bool)1])))))));
                }
            }
            for (int i_9 = 2; i_9 < 18; i_9 += 3) 
            {
                var_28 = ((/* implicit */signed char) (unsigned char)28);
                arr_31 [i_9] [i_0] [i_0] &= ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_14))) : (var_0)))) < (((13097186804516013116ULL) + (((/* implicit */unsigned long long int) var_3))))))) < (((((((/* implicit */int) (unsigned char)50)) != (((/* implicit */int) var_10)))) ? (var_7) : (((/* implicit */int) (unsigned char)243))))));
            }
            arr_32 [i_0 + 1] [i_6] [i_6] = ((/* implicit */signed char) max((((/* implicit */long long int) (~(((/* implicit */int) arr_8 [i_6] [i_0 - 2] [i_0 - 2]))))), (((arr_29 [i_0 - 2] [i_0] [i_0]) * (((/* implicit */long long int) ((/* implicit */int) arr_27 [i_0 - 2] [i_0] [i_0 - 2] [i_0 - 2])))))));
        }
        /* LoopNest 3 */
        for (unsigned char i_10 = 2; i_10 < 17; i_10 += 4) 
        {
            for (unsigned short i_11 = 2; i_11 < 17; i_11 += 4) 
            {
                for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        for (int i_13 = 0; i_13 < 20; i_13 += 4) 
                        {
                            var_29 = ((/* implicit */_Bool) arr_28 [i_0 - 1] [i_11] [i_0 - 1]);
                            var_30 = ((/* implicit */short) ((((((/* implicit */int) arr_12 [i_11 - 2] [i_11 - 2])) + (2147483647))) >> ((((~(var_0))) - (4194943118U)))));
                            arr_42 [i_13] = ((/* implicit */short) (~(((var_15) >> (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_36 [i_12]))) : (var_4)))))));
                            var_31 = ((/* implicit */int) 870602201U);
                        }
                        var_32 = var_10;
                        var_33 = ((/* implicit */unsigned short) min((var_33), (((/* implicit */unsigned short) ((max((((/* implicit */unsigned int) (signed char)-1)), (4294967295U))) >> (((arr_5 [i_0 + 1]) - (710207481))))))));
                        var_34 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)7)) >> (((var_3) - (3235582121U)))))), (max((((/* implicit */unsigned long long int) ((short) 3851409449U))), (min((((/* implicit */unsigned long long int) arr_0 [i_0])), (arr_41 [i_12] [i_10] [i_10] [(unsigned short)15] [i_0] [9ULL])))))));
                    }
                } 
            } 
        } 
        arr_43 [i_0 - 1] = ((/* implicit */signed char) ((7606792533533748894ULL) > (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-1))) % (-4434432004151721656LL))))));
        arr_44 [(short)16] [(unsigned short)6] = ((/* implicit */_Bool) (((~(30))) + (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) arr_2 [i_0] [18U] [i_0])) ? (((/* implicit */int) arr_8 [i_0] [18ULL] [i_0])) : (((/* implicit */int) (unsigned short)65535))))))));
        var_35 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_8 [i_0] [i_0 - 1] [i_0 - 1])) ^ (((/* implicit */int) ((signed char) var_4)))))) ? (var_9) : (((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [(short)15] [i_0]))) ^ (arr_13 [i_0] [i_0] [(unsigned short)4]))) | (((/* implicit */unsigned long long int) ((var_3) & (((/* implicit */unsigned int) ((/* implicit */int) arr_34 [i_0 + 1]))))))))));
    }
    for (unsigned char i_14 = 4; i_14 < 16; i_14 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned int i_15 = 0; i_15 < 19; i_15 += 4) 
        {
            for (long long int i_16 = 0; i_16 < 19; i_16 += 4) 
            {
                {
                    var_36 = ((/* implicit */unsigned long long int) min((var_36), (((/* implicit */unsigned long long int) (((~(((arr_19 [i_15]) % (((/* implicit */long long int) arr_2 [i_14] [i_14] [i_14])))))) * (((/* implicit */long long int) min(((((_Bool)1) ? (((/* implicit */int) arr_16 [i_16] [i_15] [i_14])) : (((/* implicit */int) (unsigned short)15346)))), (((/* implicit */int) ((9223372036854775807LL) <= (((/* implicit */long long int) -249426825)))))))))))));
                    var_37 = ((/* implicit */unsigned short) ((((((var_0) - (((/* implicit */unsigned int) arr_30 [i_14] [i_16])))) * (((/* implicit */unsigned int) (+(((/* implicit */int) var_11))))))) | (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) ((((/* implicit */long long int) ((/* implicit */int) var_14))) + (-2738965618540417728LL))))))));
                    var_38 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_35 [i_14 + 1] [i_14 - 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (arr_35 [i_14 + 3] [i_14 + 3])))) || (((/* implicit */_Bool) min((min((((/* implicit */unsigned short) arr_20 [i_15] [i_16])), (arr_47 [i_14]))), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) (short)-12863))))))))));
                }
            } 
        } 
        arr_53 [i_14] = ((/* implicit */long long int) (+(((/* implicit */int) max((((/* implicit */unsigned short) var_5)), (arr_52 [i_14 - 4] [i_14 - 4]))))));
    }
    /* vectorizable */
    for (long long int i_17 = 4; i_17 < 17; i_17 += 4) 
    {
        /* LoopNest 3 */
        for (int i_18 = 2; i_18 < 19; i_18 += 3) 
        {
            for (unsigned long long int i_19 = 4; i_19 < 19; i_19 += 3) 
            {
                for (long long int i_20 = 0; i_20 < 21; i_20 += 4) 
                {
                    {
                        arr_63 [i_17] [i_19] [i_17] [i_18] [i_17] [i_17] &= ((/* implicit */unsigned short) ((((/* implicit */int) arr_56 [20LL] [i_17])) < (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_60 [i_20]))))));
                        var_39 = ((/* implicit */signed char) min((var_39), (((/* implicit */signed char) ((_Bool) (!(((/* implicit */_Bool) var_9))))))));
                    }
                } 
            } 
        } 
        var_40 = ((/* implicit */int) ((_Bool) arr_61 [i_17 - 3] [i_17] [i_17] [i_17]));
    }
    var_41 = max((((unsigned long long int) -2396924245744134987LL)), (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_6))))));
    /* LoopNest 2 */
    for (int i_21 = 0; i_21 < 14; i_21 += 4) 
    {
        for (_Bool i_22 = 1; i_22 < 1; i_22 += 1) 
        {
            {
                var_42 = ((/* implicit */signed char) (unsigned short)581);
                arr_69 [i_22] [i_21] [i_22] = ((/* implicit */unsigned short) min((((/* implicit */long long int) (+(((/* implicit */int) var_6))))), (((long long int) var_11))));
                arr_70 [i_21] [i_21] [i_21] &= ((/* implicit */unsigned int) min((((/* implicit */int) (unsigned short)32110)), (min((249426825), (((/* implicit */int) (unsigned short)65535))))));
            }
        } 
    } 
}
