/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47888
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47888 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47888
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
    var_14 = ((/* implicit */unsigned long long int) ((var_6) / (((int) ((((/* implicit */_Bool) var_8)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-1))))))));
    var_15 = ((/* implicit */unsigned int) var_10);
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) (-(((/* implicit */int) var_4)))))));
        var_17 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_0 [i_0])) <= (((/* implicit */int) arr_0 [i_0]))));
    }
    for (unsigned short i_1 = 0; i_1 < 12; i_1 += 1) /* same iter space */
    {
        var_18 = ((/* implicit */signed char) (+(((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_3 [i_1] [i_1])))) * (((var_3) * (((/* implicit */unsigned int) ((/* implicit */int) (signed char)0)))))))));
        var_19 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_1 [i_1]))));
        arr_4 [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) var_13))))) ? (min((var_9), (((/* implicit */unsigned long long int) arr_2 [i_1])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_1))))))));
        /* LoopSeq 1 */
        for (unsigned char i_2 = 0; i_2 < 12; i_2 += 1) 
        {
            var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) var_1))));
            /* LoopSeq 1 */
            for (unsigned long long int i_3 = 3; i_3 < 11; i_3 += 3) 
            {
                var_21 = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) (~(((/* implicit */int) arr_0 [i_3 - 2]))))), (((((/* implicit */_Bool) 191529205U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)200))) : (2520386501U)))));
                var_22 = ((/* implicit */signed char) arr_5 [i_3] [6U] [i_3 - 2]);
                var_23 &= ((/* implicit */unsigned short) ((unsigned char) (signed char)0));
            }
            var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)15))) < (arr_7 [i_1] [i_1] [i_1]))))))) ? (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) (short)1)) ? (((/* implicit */unsigned int) -1777323669)) : (arr_5 [i_1] [(signed char)1] [i_2])))))) : (((((/* implicit */_Bool) max((((/* implicit */short) (unsigned char)36)), ((short)-12)))) ? (max((((/* implicit */unsigned long long int) var_11)), (11052304156671640078ULL))) : (var_9)))));
        }
        /* LoopNest 2 */
        for (unsigned char i_4 = 3; i_4 < 10; i_4 += 1) 
        {
            for (short i_5 = 0; i_5 < 12; i_5 += 3) 
            {
                {
                    var_25 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_10 [i_4 - 1] [i_4 - 1] [i_5])) ? (arr_10 [i_4 + 2] [6U] [i_5]) : (var_5))) - (min((arr_10 [i_4 - 1] [i_4 - 1] [i_4 - 1]), (((/* implicit */unsigned int) arr_12 [i_4 + 1] [i_4 + 1] [i_5]))))));
                    var_26 = ((/* implicit */int) ((((/* implicit */_Bool) min((-1LL), (((/* implicit */long long int) -1944069961))))) ? (((((/* implicit */_Bool) arr_3 [(unsigned char)9] [i_4 + 1])) ? (arr_3 [i_1] [i_4 - 3]) : (((/* implicit */unsigned int) arr_12 [i_4] [i_4 - 1] [i_4 - 1])))) : (min((arr_3 [i_1] [i_4 - 1]), (((/* implicit */unsigned int) var_7))))));
                    var_27 -= ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((arr_12 [i_1] [i_4] [i_4 + 2]) != (arr_12 [i_1] [i_4 - 1] [i_4 + 2]))))) == (((((/* implicit */_Bool) arr_11 [i_4] [i_4 - 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)21))) : (arr_11 [i_4] [i_4 + 1])))));
                    var_28 = ((/* implicit */int) ((var_0) * (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_7)) ? (arr_11 [i_1] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)7))))) >> (((((((/* implicit */_Bool) 12079516691695412824ULL)) ? (var_1) : (((/* implicit */unsigned int) arr_14 [i_5] [(unsigned short)8])))) - (814086796U))))))));
                }
            } 
        } 
    }
    for (unsigned short i_6 = 0; i_6 < 12; i_6 += 1) /* same iter space */
    {
        var_29 -= ((/* implicit */signed char) ((((/* implicit */int) ((unsigned short) (!(((/* implicit */_Bool) var_0)))))) <= ((-((-(var_12)))))));
        arr_21 [5ULL] = arr_19 [i_6];
        /* LoopSeq 2 */
        for (short i_7 = 1; i_7 < 11; i_7 += 4) 
        {
            var_30 = ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) min((((/* implicit */unsigned int) var_13)), (var_5))))))));
            var_31 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)86))) | (arr_5 [i_7 + 1] [i_7 + 1] [i_7 + 1])))) ? (2538851889399965104ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_10)) <= (((/* implicit */int) (signed char)115))))))));
            var_32 ^= ((int) ((unsigned char) var_5));
        }
        for (int i_8 = 0; i_8 < 12; i_8 += 4) 
        {
            /* LoopSeq 3 */
            for (signed char i_9 = 3; i_9 < 9; i_9 += 1) 
            {
                var_33 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) var_5)) < (var_9))))) + (var_9)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */unsigned int) -1398176806)) : (3501026222U)))) : (max((((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)16)) >= (((/* implicit */int) arr_9 [i_6] [i_8]))))), (min((var_9), (((/* implicit */unsigned long long int) (unsigned short)24499))))))));
                /* LoopSeq 2 */
                for (unsigned int i_10 = 0; i_10 < 12; i_10 += 4) 
                {
                    var_34 = ((/* implicit */short) ((((/* implicit */_Bool) -3700754354987657104LL)) ? (14802245630758867643ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)56)))));
                    var_35 &= ((/* implicit */unsigned short) min((arr_15 [9U] [(unsigned short)11] [i_9 - 2]), (((/* implicit */unsigned int) ((unsigned char) (+(((/* implicit */int) var_13))))))));
                }
                for (long long int i_11 = 3; i_11 < 9; i_11 += 3) 
                {
                    var_36 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) 7207247614068018809ULL)))) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_8)) + (var_12)))) : (((((/* implicit */_Bool) arr_25 [i_6])) ? (var_1) : (((/* implicit */unsigned int) var_12))))))) ? (((/* implicit */int) (short)11666)) : ((~(((/* implicit */int) ((arr_11 [(unsigned short)8] [(unsigned char)2]) <= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)56003))))))))));
                    var_37 = ((/* implicit */signed char) var_10);
                }
                var_38 = ((/* implicit */unsigned int) ((((((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) 14285387084718169773ULL)) ? (-1944069961) : (((/* implicit */int) (unsigned char)245)))) : (((((/* implicit */_Bool) var_2)) ? (arr_18 [i_6] [i_8]) : (((/* implicit */int) arr_24 [i_6] [i_6])))))) + (2147483647))) >> (((/* implicit */int) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_32 [i_6] [i_8] [(short)9] [i_8] [(short)9] [i_6]))))) >= (((((/* implicit */_Bool) arr_10 [i_6] [i_8] [i_6])) ? (arr_20 [i_9 + 2]) : (var_9))))))));
            }
            for (unsigned int i_12 = 2; i_12 < 9; i_12 += 1) 
            {
                var_39 = ((/* implicit */unsigned char) arr_38 [i_6]);
                var_40 = ((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */_Bool) ((var_0) % (((/* implicit */unsigned long long int) -960902228))))) ? (((/* implicit */int) (short)-3843)) : ((-(arr_37 [i_6] [i_8]))))));
                var_41 |= ((/* implicit */short) ((int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_3)) % (var_0)))) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_8))) | (var_1))) : (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)0))))))));
                arr_39 [i_12] = ((/* implicit */long long int) var_2);
                /* LoopSeq 2 */
                for (int i_13 = 0; i_13 < 12; i_13 += 4) 
                {
                    /* LoopSeq 1 */
                    for (short i_14 = 0; i_14 < 12; i_14 += 4) 
                    {
                        var_42 -= ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_43 [i_6] [(signed char)0] [(signed char)0] [i_13] [i_14]))));
                        arr_45 [i_6] [i_12] [i_8] [(signed char)10] [i_8] [i_14] = ((/* implicit */int) var_0);
                        arr_46 [i_12] [i_12] [i_12] [11ULL] = ((/* implicit */unsigned int) (+(arr_29 [i_6] [i_6] [i_6] [i_6] [i_6])));
                    }
                    var_43 = ((/* implicit */unsigned long long int) (((+(((/* implicit */int) var_4)))) / (((((/* implicit */_Bool) 5329507949112553168ULL)) ? (((/* implicit */int) (signed char)22)) : (1056495045)))));
                }
                for (unsigned int i_15 = 0; i_15 < 12; i_15 += 1) 
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_16 = 3; i_16 < 9; i_16 += 1) 
                    {
                        var_44 = ((/* implicit */long long int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) max(((short)-16012), (((/* implicit */short) var_7))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_6])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_33 [i_12]))) : (var_3))))))), (min((((/* implicit */unsigned int) var_6)), (var_1)))));
                        arr_51 [i_12] = ((/* implicit */unsigned long long int) (~(min(((~(((/* implicit */int) (short)28418)))), (((/* implicit */int) arr_1 [i_6]))))));
                        arr_52 [(unsigned short)4] [i_16] [i_12] [i_8] [(unsigned short)4] [(signed char)2] |= min((((/* implicit */unsigned long long int) ((unsigned char) -1))), ((-(var_9))));
                    }
                    var_45 = ((/* implicit */unsigned short) min((-30967416), (((/* implicit */int) (_Bool)0))));
                    var_46 *= ((/* implicit */unsigned char) min((min((var_1), (((/* implicit */unsigned int) -960902211)))), (((/* implicit */unsigned int) var_11))));
                }
            }
            /* vectorizable */
            for (unsigned int i_17 = 2; i_17 < 10; i_17 += 4) 
            {
                arr_55 [i_6] [i_8] [i_17] = ((/* implicit */unsigned short) var_7);
                var_47 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned short) var_7))) <= (arr_12 [i_6] [i_17 - 1] [i_17 + 2])));
            }
            arr_56 [11U] [i_8] &= (unsigned char)0;
        }
    }
    var_48 = ((/* implicit */short) ((signed char) (+(min((var_3), (var_1))))));
}
