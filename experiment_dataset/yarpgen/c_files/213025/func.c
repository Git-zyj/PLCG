/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213025
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213025 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213025
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
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            arr_5 [i_1] [i_1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 0ULL))));
            var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) arr_4 [(unsigned short)1] [i_0]))));
            var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) ((((/* implicit */_Bool) 67108800ULL)) && (((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned short)62863)) ? (((/* implicit */long long int) arr_1 [i_0] [i_0])) : (var_9))) + (((/* implicit */long long int) (-(((/* implicit */int) arr_3 [i_0] [i_1] [i_1])))))))))))));
            arr_6 [i_0] [i_0] [i_1] &= ((/* implicit */short) ((((arr_0 [i_1] [i_1]) + (9223372036854775807LL))) >> (((min((((arr_2 [i_0]) / (((/* implicit */long long int) arr_1 [i_0] [i_1])))), (((/* implicit */long long int) ((arr_1 [i_0] [i_1]) | (((/* implicit */int) arr_3 [i_0] [i_0] [i_0]))))))) + (3374164632LL)))));
        }
        /* LoopSeq 1 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            arr_9 [i_2] [i_2] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((var_1), (((/* implicit */unsigned long long int) arr_8 [i_0] [i_0] [i_2])))))));
            /* LoopNest 2 */
            for (signed char i_3 = 0; i_3 < 15; i_3 += 3) 
            {
                for (long long int i_4 = 1; i_4 < 14; i_4 += 3) 
                {
                    {
                        /* LoopSeq 4 */
                        /* vectorizable */
                        for (short i_5 = 0; i_5 < 15; i_5 += 1) 
                        {
                            var_19 = ((/* implicit */unsigned char) (+(((/* implicit */int) ((((/* implicit */_Bool) -1LL)) && (((/* implicit */_Bool) var_14)))))));
                            var_20 = ((/* implicit */unsigned short) 268435455ULL);
                            var_21 ^= ((/* implicit */unsigned char) (+(((/* implicit */int) arr_11 [i_4 + 1] [i_4 - 1]))));
                        }
                        for (unsigned long long int i_6 = 0; i_6 < 15; i_6 += 4) 
                        {
                            var_22 = ((/* implicit */unsigned long long int) max((var_22), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) var_14))))) ? (((((/* implicit */_Bool) (short)8188)) ? (10538336367118152029ULL) : (((/* implicit */unsigned long long int) -1528970719)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_17 [5ULL] [i_4] [i_3] [i_2] [i_0]))))))) ? (max((((((/* implicit */_Bool) 6564469397465219293ULL)) ? (67108800ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_3] [i_2] [i_3]))))), (((/* implicit */unsigned long long int) arr_0 [i_0] [i_2])))) : (((/* implicit */unsigned long long int) (+(var_11))))))));
                            arr_19 [i_2] [i_2] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((11882274676244332322ULL) - (var_1))), (((((/* implicit */_Bool) arr_0 [i_2] [i_2])) ? (8111830722892212918ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_6])))))))) ? (((/* implicit */int) ((unsigned short) var_3))) : (((((((/* implicit */int) var_12)) + (2147483647))) << (((((/* implicit */int) arr_7 [i_2] [i_2] [(short)5])) - (150)))))));
                            var_23 = ((/* implicit */long long int) var_1);
                        }
                        for (unsigned long long int i_7 = 1; i_7 < 12; i_7 += 4) 
                        {
                            arr_23 [i_2] [i_4] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */_Bool) ((unsigned char) arr_11 [i_3] [(unsigned char)6]))) && (((/* implicit */_Bool) var_2))))) << (((arr_0 [i_2] [i_4]) + (6645514189801619235LL)))));
                            var_24 = ((/* implicit */unsigned char) min(((unsigned short)62858), (var_7)));
                            arr_24 [i_0] [i_2] [i_2] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_17 [i_0] [(short)10] [i_0] [8LL] [i_0])) ? (min((((/* implicit */unsigned long long int) max((arr_4 [i_7] [i_0]), (((/* implicit */int) arr_8 [9] [i_0] [(unsigned char)7]))))), (((6564469397465219293ULL) % (18446744073642442815ULL))))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_21 [i_7 + 1] [i_7 + 2] [i_7] [(signed char)2] [i_7 - 1] [i_7])))))));
                            var_25 = ((/* implicit */signed char) 1243266177);
                            var_26 ^= ((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_2] [i_2] [i_2])))))));
                        }
                        /* vectorizable */
                        for (int i_8 = 0; i_8 < 15; i_8 += 1) 
                        {
                            var_27 ^= ((/* implicit */signed char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-24061))) == (8238547295874245582ULL))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-24070))) - (var_1))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_12 [i_0] [i_0] [12ULL] [i_0])))))));
                            var_28 = ((/* implicit */unsigned short) max((var_28), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_12 [i_0] [i_4 - 1] [i_4] [4])) : (((/* implicit */int) arr_12 [i_0] [i_4 - 1] [i_3] [i_4])))))));
                            var_29 = ((/* implicit */int) arr_10 [i_4 + 1]);
                            var_30 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_12 [i_0] [i_2] [i_3] [i_3])) ? (((/* implicit */int) arr_12 [i_0] [i_2] [i_3] [i_3])) : (((/* implicit */int) arr_8 [i_0] [12ULL] [i_8]))));
                            var_31 += ((/* implicit */unsigned char) ((arr_1 [i_4] [i_4 + 1]) / (arr_1 [i_4] [i_4 + 1])));
                        }
                        var_32 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) arr_2 [i_4 + 1])), (min((((((/* implicit */_Bool) 1243266177)) ? (arr_15 [(unsigned char)11] [(unsigned char)11]) : (((/* implicit */unsigned long long int) var_13)))), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_16 [i_0])), (1506690776342890663LL))))))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (unsigned char i_9 = 4; i_9 < 13; i_9 += 3) 
            {
                for (long long int i_10 = 1; i_10 < 13; i_10 += 4) 
                {
                    {
                        var_33 = ((/* implicit */int) min((var_33), (((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_9 + 2] [i_10 + 1] [i_10 + 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_22 [i_9 - 3] [i_2] [i_10 + 2] [i_10 + 2] [i_9] [i_0])))))) : (3479653345U))))));
                        var_34 ^= ((/* implicit */unsigned char) (short)14648);
                        var_35 = ((/* implicit */unsigned long long int) max((var_35), (((/* implicit */unsigned long long int) ((min((((/* implicit */int) ((unsigned char) (signed char)-79))), (-1))) < (((/* implicit */int) ((short) min((arr_33 [i_0] [i_2] [i_9 - 2] [i_0] [i_0]), (4395899027456LL))))))))));
                    }
                } 
            } 
            var_36 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [11ULL])) ? (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-58))))) : (((/* implicit */int) (short)-19236))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((var_0) ? (-4395899027456LL) : (((/* implicit */long long int) ((/* implicit */int) arr_25 [i_0]))))))))) : (((/* implicit */int) ((signed char) (!(((/* implicit */_Bool) 1243266177))))))));
        }
    }
    var_37 = ((/* implicit */unsigned long long int) max((var_37), (((((/* implicit */_Bool) ((long long int) (~(((/* implicit */int) (unsigned short)62867)))))) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) var_15)) : (var_2))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))));
    var_38 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((((/* implicit */long long int) (~(((/* implicit */int) var_16))))) ^ (((((/* implicit */long long int) ((/* implicit */int) var_10))) & (-4395899027456LL)))))) : ((~(((((/* implicit */unsigned long long int) ((/* implicit */int) var_16))) | (var_6)))))));
    var_39 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) -1243266167))));
    var_40 = ((/* implicit */unsigned int) ((unsigned long long int) min((max((var_1), (((/* implicit */unsigned long long int) 0)))), (((/* implicit */unsigned long long int) var_8)))));
}
