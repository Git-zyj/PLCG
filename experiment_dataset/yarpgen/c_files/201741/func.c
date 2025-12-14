/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201741
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201741 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201741
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
    for (unsigned char i_0 = 2; i_0 < 21; i_0 += 1) 
    {
        var_10 = ((((/* implicit */int) (unsigned short)10337)) <= (((/* implicit */int) (unsigned short)55219)));
        var_11 = ((/* implicit */_Bool) ((((/* implicit */long long int) (((~(((/* implicit */int) var_8)))) | (((/* implicit */int) arr_1 [i_0] [i_0 - 2]))))) | (((((/* implicit */long long int) ((((/* implicit */int) var_8)) & (((/* implicit */int) var_0))))) & (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))) ^ (arr_3 [i_0 + 1])))))));
        /* LoopSeq 4 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            arr_8 [i_0] = max((((/* implicit */long long int) (-(((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_0 [i_0] [(unsigned short)22]))))))), (((long long int) min(((unsigned short)55199), ((unsigned short)10336)))));
            arr_9 [i_0] [i_0] [i_1] = ((/* implicit */unsigned char) max((((/* implicit */long long int) max((((/* implicit */unsigned int) var_9)), (max((((/* implicit */unsigned int) var_0)), (var_7)))))), (arr_3 [i_0 + 2])));
        }
        for (unsigned char i_2 = 3; i_2 < 20; i_2 += 1) 
        {
            /* LoopSeq 3 */
            for (unsigned char i_3 = 1; i_3 < 22; i_3 += 1) 
            {
                var_12 += ((/* implicit */unsigned char) arr_11 [i_0 - 2] [i_2 - 3] [i_3 - 1]);
                var_13 = ((/* implicit */short) (!(((/* implicit */_Bool) ((arr_11 [i_0 + 2] [i_0 + 2] [(short)21]) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [i_2]))) > (arr_14 [i_0 - 1] [i_0] [i_2 - 1] [i_3]))))))))));
                arr_16 [i_0] [i_0] [i_0] [i_3 + 1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_14 [(unsigned char)20] [21ULL] [i_2] [i_2]))));
                arr_17 [i_0] [i_2] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))) % (72057594037927935ULL)));
                var_14 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((arr_4 [i_0] [i_3]), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_0 [i_3] [i_2])))))))) ? (((/* implicit */unsigned long long int) max((((/* implicit */int) arr_7 [i_0] [i_0])), (((((/* implicit */int) (unsigned char)250)) ^ (((/* implicit */int) (unsigned char)195))))))) : ((~(246698915457666573ULL)))));
            }
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                var_15 += ((((((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_4])) ? ((+(var_1))) : (((/* implicit */int) (unsigned char)195)))) != (((((/* implicit */int) (unsigned char)92)) % (((/* implicit */int) (unsigned short)5684)))));
                arr_20 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)55199)) / (((/* implicit */int) (short)17086))))) ? (((((/* implicit */_Bool) min((arr_11 [i_0] [i_0 + 1] [i_0 + 2]), (((/* implicit */unsigned long long int) (unsigned char)0))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_6)) * (((/* implicit */int) arr_0 [i_0 - 2] [i_0 - 2]))))) : (((((/* implicit */_Bool) (unsigned short)10336)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)125))) : (var_7))))) : (((/* implicit */unsigned int) ((int) (-(arr_4 [i_0] [i_2 - 3])))))));
            }
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                var_16 = ((_Bool) max((((/* implicit */unsigned long long int) min((arr_13 [i_0] [i_0] [i_0]), (((/* implicit */short) var_9))))), (6366885234143966831ULL)));
                arr_23 [i_0] = ((/* implicit */int) max((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)10324))) + (((arr_10 [i_0] [i_0] [22ULL]) - (((/* implicit */unsigned long long int) var_1)))))), (((/* implicit */unsigned long long int) min((((var_1) + (((/* implicit */int) var_6)))), (((var_1) + (((/* implicit */int) var_0)))))))));
                arr_24 [i_0] = ((/* implicit */int) (_Bool)0);
            }
            arr_25 [i_0] = ((/* implicit */long long int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) min((arr_14 [i_0] [i_0] [i_0] [i_0 - 2]), (((/* implicit */unsigned long long int) arr_12 [i_0] [i_2] [i_2]))))) ? (((((/* implicit */_Bool) 1048575)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)81)))) : ((~(((/* implicit */int) (unsigned char)106))))))), ((((+(2135141797U))) & (((/* implicit */unsigned int) ((((((/* implicit */int) arr_0 [i_0] [i_2 + 3])) + (2147483647))) >> (((((/* implicit */int) arr_0 [(_Bool)1] [i_0 - 2])) + (14092))))))))));
        }
        for (unsigned int i_6 = 0; i_6 < 23; i_6 += 1) 
        {
            arr_28 [i_0] = ((/* implicit */signed char) (+(((/* implicit */int) arr_21 [i_0] [i_6] [i_0 - 2] [(unsigned char)9]))));
            arr_29 [i_0] [i_0] [i_6] = ((/* implicit */unsigned int) var_6);
            var_17 = ((/* implicit */_Bool) max((max((((/* implicit */unsigned int) arr_0 [i_0 - 1] [i_0 - 2])), (max((((/* implicit */unsigned int) (_Bool)1)), (2135141829U))))), (((/* implicit */unsigned int) (unsigned short)55212))));
            var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) (signed char)35))));
        }
        /* vectorizable */
        for (long long int i_7 = 2; i_7 < 22; i_7 += 3) 
        {
            /* LoopSeq 1 */
            for (short i_8 = 1; i_8 < 22; i_8 += 1) 
            {
                arr_36 [i_0] [i_7] [i_8 + 1] = ((/* implicit */_Bool) (-(((/* implicit */int) var_9))));
                var_19 = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_19 [i_0 - 2] [i_0] [(unsigned char)18] [i_0]))));
                var_20 ^= ((/* implicit */_Bool) arr_32 [i_0 + 2] [i_8 + 1]);
                var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) (!(((_Bool) var_1)))))));
            }
            var_22 = (~(((/* implicit */int) var_2)));
        }
    }
    /* vectorizable */
    for (long long int i_9 = 0; i_9 < 23; i_9 += 2) /* same iter space */
    {
        arr_40 [i_9] = ((/* implicit */unsigned char) ((arr_21 [i_9] [i_9] [i_9] [i_9]) && ((_Bool)1)));
        arr_41 [i_9] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_9))) > (arr_38 [(signed char)7] [i_9]))))) > (arr_4 [(short)7] [i_9])));
        /* LoopSeq 2 */
        for (unsigned char i_10 = 2; i_10 < 22; i_10 += 3) 
        {
            var_23 ^= ((/* implicit */short) arr_33 [i_9] [i_10] [i_10]);
            var_24 ^= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_4)))))));
            arr_46 [i_9] [i_9] [i_9] = ((/* implicit */signed char) (short)1106);
            arr_47 [i_9] [i_9] [(short)15] = ((/* implicit */unsigned char) var_5);
            var_25 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) arr_22 [18ULL] [i_9] [(short)6] [i_9])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (2135141799U)))));
        }
        for (signed char i_11 = 0; i_11 < 23; i_11 += 2) 
        {
            var_26 = ((/* implicit */unsigned short) var_0);
            arr_51 [i_9] [i_11] = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) (unsigned short)32316)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (arr_11 [i_11] [i_11] [i_11])))));
        }
    }
    for (long long int i_12 = 0; i_12 < 23; i_12 += 2) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned char i_13 = 2; i_13 < 20; i_13 += 1) 
        {
            for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
            {
                for (short i_15 = 1; i_15 < 20; i_15 += 3) 
                {
                    {
                        arr_63 [i_14] [i_14] = ((/* implicit */short) (unsigned char)198);
                        arr_64 [i_14] = ((/* implicit */signed char) arr_7 [i_12] [i_12]);
                        arr_65 [i_12] [i_13] [i_14] [22LL] [i_14] = ((/* implicit */long long int) arr_18 [i_12] [i_12] [i_14]);
                    }
                } 
            } 
        } 
        var_27 ^= ((/* implicit */short) (+(((((/* implicit */int) (!(((/* implicit */_Bool) var_6))))) - (((/* implicit */int) var_8))))));
    }
    var_28 = ((/* implicit */unsigned long long int) ((((/* implicit */int) min((max((var_6), (((/* implicit */short) (_Bool)1)))), (((/* implicit */short) ((unsigned char) var_2)))))) == (((/* implicit */int) ((unsigned char) (!(((/* implicit */_Bool) var_8))))))));
    var_29 = ((/* implicit */signed char) var_1);
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_16 = 0; i_16 < 12; i_16 += 1) 
    {
        arr_69 [i_16] = ((/* implicit */unsigned char) var_2);
        /* LoopSeq 1 */
        for (unsigned char i_17 = 2; i_17 < 11; i_17 += 2) 
        {
            arr_73 [i_16] = ((/* implicit */short) (!((!(((/* implicit */_Bool) arr_61 [i_16] [i_16]))))));
            arr_74 [i_16] [i_16] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_50 [i_17] [i_17 - 1] [i_17 - 2]))) : (((((/* implicit */_Bool) 2463310128168492167LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (2135141802U)))));
            arr_75 [i_16] = ((((/* implicit */_Bool) arr_22 [i_17 - 2] [i_17 - 1] [i_17 - 1] [i_17 + 1])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_0)));
        }
        arr_76 [i_16] [i_16] = ((/* implicit */long long int) ((short) var_6));
        arr_77 [i_16] = ((/* implicit */unsigned int) ((-9LL) + (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
    }
}
