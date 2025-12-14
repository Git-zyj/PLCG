/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247508
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247508 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247508
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
    /* vectorizable */
    for (signed char i_0 = 3; i_0 < 21; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned int) var_7);
        var_13 = ((/* implicit */int) min((var_13), ((((+(((/* implicit */int) arr_2 [6U])))) % (((/* implicit */int) arr_2 [12]))))));
        arr_4 [i_0] = ((/* implicit */short) var_1);
    }
    /* LoopSeq 3 */
    for (int i_1 = 0; i_1 < 14; i_1 += 1) 
    {
        arr_7 [i_1] = ((/* implicit */unsigned long long int) var_8);
        arr_8 [i_1] [i_1] = var_2;
        arr_9 [i_1] [i_1] = ((/* implicit */_Bool) max((((/* implicit */int) ((((/* implicit */_Bool) min((4836650784714277593LL), (((/* implicit */long long int) (short)17965))))) && (((/* implicit */_Bool) ((((/* implicit */int) (short)17984)) / (arr_0 [4U] [i_1]))))))), (((((/* implicit */_Bool) (~(((/* implicit */int) (short)-17970))))) ? (max((var_10), (-769967938))) : (((/* implicit */int) (signed char)-34))))));
    }
    for (unsigned short i_2 = 0; i_2 < 17; i_2 += 1) 
    {
        arr_12 [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) (~(min((var_5), (1461337531)))))) ? (((((((/* implicit */_Bool) arr_11 [(unsigned short)9])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_3))) & (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned int) (+(((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (signed char)-23)) : (((/* implicit */int) arr_1 [i_2])))))))));
        var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((max((((/* implicit */short) var_4)), (var_11))), (((/* implicit */short) (unsigned char)56))))) ? (((/* implicit */int) max(((unsigned short)45675), (((/* implicit */unsigned short) (unsigned char)58))))) : (((/* implicit */int) ((max((((/* implicit */int) arr_11 [i_2])), (1810861872))) == ((~(((/* implicit */int) var_6)))))))));
        /* LoopSeq 3 */
        for (short i_3 = 0; i_3 < 17; i_3 += 1) 
        {
            var_15 += ((/* implicit */short) ((unsigned char) ((((/* implicit */unsigned int) (+(1579154137)))) & (max((((/* implicit */unsigned int) var_11)), (arr_13 [(short)2] [i_3]))))));
            var_16 = ((/* implicit */signed char) max((((((/* implicit */int) ((((/* implicit */int) arr_11 [i_3])) == (((/* implicit */int) var_6))))) % (((((/* implicit */_Bool) -1579154111)) ? (((/* implicit */int) arr_11 [11U])) : (((/* implicit */int) (unsigned short)45675)))))), (((((/* implicit */_Bool) arr_11 [i_3])) ? (((/* implicit */int) ((((/* implicit */_Bool) (short)-17968)) && (var_4)))) : (((/* implicit */int) (unsigned char)54))))));
        }
        for (unsigned short i_4 = 0; i_4 < 17; i_4 += 1) 
        {
            var_17 ^= ((/* implicit */unsigned char) arr_14 [i_2] [i_4]);
            /* LoopSeq 2 */
            for (int i_5 = 2; i_5 < 16; i_5 += 2) 
            {
                arr_21 [i_2] [i_4] [i_5 + 1] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (signed char)-57)) && (((/* implicit */_Bool) var_8)))))) ^ (arr_14 [(_Bool)1] [i_4])))) || (((/* implicit */_Bool) ((((/* implicit */int) (short)32767)) & (((/* implicit */int) (short)-28371)))))));
                var_18 = ((/* implicit */short) ((((/* implicit */_Bool) ((min((1879012419U), (((/* implicit */unsigned int) (signed char)-33)))) - (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (signed char)14)) == (((/* implicit */int) (short)17980))))))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_18 [i_2] [i_4] [i_5 + 1] [i_2]))))) ? (var_9) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_5])))))))) : (((((/* implicit */_Bool) (+(((/* implicit */int) (short)-17980))))) ? (((/* implicit */unsigned int) (-(var_2)))) : (4294967295U)))));
            }
            for (unsigned long long int i_6 = 1; i_6 < 16; i_6 += 2) 
            {
                arr_24 [i_2] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) max((arr_18 [i_6] [i_6] [i_6 - 1] [i_6 + 1]), (arr_18 [i_6 - 1] [i_6] [i_6 - 1] [i_6 + 1])))) ? (((((/* implicit */unsigned int) ((/* implicit */int) (short)28571))) % (max((arr_13 [i_2] [i_4]), (((/* implicit */unsigned int) var_6)))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_2 [i_2])), (arr_16 [i_2])))) ? (((/* implicit */int) ((((/* implicit */int) arr_2 [i_2])) != (((/* implicit */int) var_11))))) : (((/* implicit */int) arr_23 [i_2] [i_4] [i_2])))))));
                /* LoopNest 2 */
                for (unsigned short i_7 = 1; i_7 < 14; i_7 += 2) 
                {
                    for (unsigned int i_8 = 0; i_8 < 17; i_8 += 1) 
                    {
                        {
                            var_19 += ((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_26 [i_8] [i_7 - 1] [i_6] [i_2])) ? (((/* implicit */int) var_6)) : (((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) arr_18 [i_2] [i_6] [4ULL] [i_8])) : (arr_0 [10U] [i_4]))))), (-441251703)));
                            arr_32 [i_2] [5] [i_6] [i_7] [i_2] [i_8] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_4])) ? (((/* implicit */unsigned int) max((((/* implicit */int) arr_28 [i_4] [i_4] [i_6 + 1] [i_2])), (var_10)))) : (1318479466U)));
                            var_20 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) min(((unsigned short)23296), (((/* implicit */unsigned short) arr_26 [i_8] [i_7] [i_2] [i_2]))))) ? (((/* implicit */unsigned long long int) (~(((arr_17 [(unsigned short)10]) ^ (((/* implicit */unsigned int) 441251702))))))) : (((((/* implicit */_Bool) arr_16 [2ULL])) ? (18229450907733544467ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))))));
                            var_21 = ((/* implicit */short) (-(var_10)));
                        }
                    } 
                } 
                var_22 = (~(((((/* implicit */_Bool) arr_25 [i_6] [i_6 - 1] [i_6] [i_6 - 1])) ? (max((arr_10 [(short)4]), (((/* implicit */int) (signed char)56)))) : (((((/* implicit */int) (signed char)-13)) ^ (((/* implicit */int) arr_1 [i_6])))))));
            }
            var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) (~(((/* implicit */int) (_Bool)1)))))));
            /* LoopNest 2 */
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                {
                    {
                        var_24 = ((/* implicit */_Bool) max((var_24), (((max((-1579154120), (var_9))) != (((/* implicit */int) ((((/* implicit */int) arr_11 [i_9])) > (((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (unsigned short)45668)))))))))));
                        arr_38 [6] [i_4] [i_9] [i_2] [i_9] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_10)), (arr_13 [i_2] [i_10])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [i_2] [i_4]))))) : (((/* implicit */int) ((arr_13 [i_2] [i_4]) >= (arr_13 [i_2] [i_2]))))));
                    }
                } 
            } 
        }
        for (unsigned short i_11 = 0; i_11 < 17; i_11 += 3) 
        {
            var_25 = ((/* implicit */int) max((var_25), (((/* implicit */int) var_7))));
            var_26 = ((/* implicit */unsigned int) ((((/* implicit */int) (short)-12184)) / (arr_10 [i_11])));
            var_27 = ((/* implicit */unsigned short) arr_35 [i_2] [i_2] [i_2] [i_2]);
        }
        var_28 = ((/* implicit */unsigned int) arr_18 [(unsigned short)4] [i_2] [i_2] [i_2]);
    }
    for (int i_12 = 0; i_12 < 11; i_12 += 2) 
    {
        var_29 = ((/* implicit */short) var_12);
        var_30 = ((/* implicit */unsigned long long int) max((var_30), (((/* implicit */unsigned long long int) arr_27 [i_12] [i_12] [i_12] [i_12]))));
    }
    var_31 = ((/* implicit */unsigned int) var_6);
    var_32 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((max(((-2147483647 - 1)), (((/* implicit */int) var_8)))), (max((((/* implicit */int) var_6)), (var_5)))))) && (((/* implicit */_Bool) ((((/* implicit */int) (signed char)12)) << (((((/* implicit */int) (unsigned char)56)) - (34))))))));
}
