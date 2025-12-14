/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3852
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3852 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3852
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
    /* LoopSeq 4 */
    for (long long int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        var_10 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)10)) ? (arr_0 [i_0] [i_0]) : (arr_0 [(short)1] [9])))) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) ((short) arr_1 [i_0])))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned char) arr_1 [i_0]))) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) != (var_4)))) : (((((/* implicit */int) (signed char)(-127 - 1))) / (var_8)))))) : (((((/* implicit */_Bool) arr_1 [i_0])) ? (((((/* implicit */_Bool) arr_0 [(unsigned char)11] [(unsigned char)11])) ? (arr_0 [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [8]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_0 [(short)1] [4ULL])))))));
        var_11 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) arr_0 [i_0] [(unsigned char)8]))) ? (((/* implicit */int) min((((/* implicit */short) var_0)), ((short)32767)))) : ((~(((/* implicit */int) (_Bool)1))))))) ? (arr_0 [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0])))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 2) 
        {
            for (unsigned char i_3 = 2; i_3 < 7; i_3 += 2) 
            {
                {
                    var_12 ^= ((/* implicit */int) arr_7 [i_1] [(short)8]);
                    var_13 = ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_1] [i_3 - 1]))) * (var_6)))) ? (((2097151U) + (var_5))) : (((/* implicit */unsigned int) ((/* implicit */int) min(((short)-11682), (arr_7 [i_3 + 3] [i_1]))))));
                }
            } 
        } 
        var_14 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) (unsigned char)96)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)127))) : (5865546998413833759LL)))));
        var_15 = arr_0 [10U] [10U];
    }
    for (unsigned long long int i_4 = 0; i_4 < 10; i_4 += 1) /* same iter space */
    {
        arr_15 [9] [2ULL] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_14 [i_4])) ? (((/* implicit */int) arr_7 [i_4] [i_4])) : (((/* implicit */int) var_9))))), (((((/* implicit */_Bool) arr_10 [6])) ? (((/* implicit */long long int) arr_14 [(unsigned short)3])) : (-5865546998413833744LL)))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_8 [(short)5] [i_4] [i_4])) ? (((/* implicit */int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) var_4))))) : (var_8)))) : (((unsigned int) ((((/* implicit */_Bool) arr_5 [(unsigned char)3])) ? (arr_0 [i_4] [i_4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)18160))))))));
        /* LoopNest 3 */
        for (unsigned long long int i_5 = 0; i_5 < 10; i_5 += 4) 
        {
            for (long long int i_6 = 3; i_6 < 7; i_6 += 2) 
            {
                for (unsigned long long int i_7 = 0; i_7 < 10; i_7 += 2) 
                {
                    {
                        var_16 = ((/* implicit */long long int) ((max((((var_2) | (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)168))))), (((((/* implicit */_Bool) arr_13 [8ULL])) ? (arr_18 [i_4] [i_5] [i_4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)17))))))) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_6 + 2] [i_6 + 1] [i_6 - 1] [i_6 + 2])))));
                        var_17 = ((/* implicit */int) max((var_17), (min(((((~(((/* implicit */int) (unsigned short)112)))) ^ (((/* implicit */int) (signed char)21)))), (((/* implicit */int) (short)32767))))));
                        /* LoopSeq 1 */
                        for (short i_8 = 2; i_8 < 7; i_8 += 2) 
                        {
                            var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) arr_4 [7U])) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)0))) | (((var_6) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_4] [i_5]))))))))))));
                            var_19 = ((/* implicit */unsigned short) min((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (arr_18 [i_4] [i_5] [i_6 + 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [(signed char)4] [(unsigned short)6])))))) ? (((/* implicit */int) arr_7 [i_6 - 1] [1ULL])) : (((((/* implicit */int) (short)0)) % (((/* implicit */int) var_0))))))), (min((((((/* implicit */_Bool) var_2)) ? (var_4) : (((/* implicit */long long int) (-2147483647 - 1))))), (((/* implicit */long long int) (short)-13))))));
                            arr_28 [i_6] [i_6] = ((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) (-(var_7)))) ? (((/* implicit */int) ((((/* implicit */_Bool) (short)19)) || (((/* implicit */_Bool) arr_26 [4] [i_5] [1] [i_5] [i_8 + 1]))))) : ((-(((/* implicit */int) var_0)))))));
                            arr_29 [i_4] [i_5] [i_5] |= ((/* implicit */short) (unsigned char)60);
                            var_20 = ((/* implicit */unsigned int) (~(((((/* implicit */int) arr_24 [i_6 + 3])) ^ (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_25 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4])) : (arr_21 [i_6])))))));
                        }
                        arr_30 [i_4] [i_7] [i_6 - 3] [i_7] &= ((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_7 [i_6 + 2] [i_6 + 2])) ? (((/* implicit */int) arr_7 [i_6 - 3] [i_6 + 3])) : (((/* implicit */int) arr_24 [i_6 - 2])))), (((/* implicit */int) arr_23 [2ULL] [1U] [2ULL] [1U] [1U] [2ULL]))));
                    }
                } 
            } 
        } 
    }
    for (unsigned int i_9 = 2; i_9 < 21; i_9 += 2) 
    {
        /* LoopNest 3 */
        for (long long int i_10 = 2; i_10 < 20; i_10 += 2) 
        {
            for (short i_11 = 1; i_11 < 18; i_11 += 2) 
            {
                for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                {
                    {
                        var_21 = ((/* implicit */short) ((((((_Bool) var_7)) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_34 [i_11 + 4] [11]))) : (var_2))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (signed char)-20)) : (((/* implicit */int) (short)5))))))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3)) ? (((/* implicit */int) (short)10)) : (((/* implicit */int) (unsigned short)14651))))) < (arr_33 [i_9])))))));
                        arr_45 [i_9] [i_9] [i_9] [i_12] = ((/* implicit */unsigned short) ((max((arr_35 [i_11] [i_9 - 1]), (((/* implicit */unsigned long long int) (-(1038872068)))))) | (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_39 [i_11])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (arr_39 [(unsigned char)18]))))));
                    }
                } 
            } 
        } 
        var_22 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_44 [i_9] [15LL] [15LL])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_31 [i_9 - 2]))) : (min((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)112)) - (((/* implicit */int) (short)-5))))), (((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)24178)))))))));
        /* LoopSeq 2 */
        for (int i_13 = 0; i_13 < 22; i_13 += 2) 
        {
            arr_50 [i_13] = ((/* implicit */int) (short)-8158);
            /* LoopSeq 2 */
            for (short i_14 = 1; i_14 < 21; i_14 += 2) 
            {
                var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_53 [9U] [i_13] [(short)15])) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_31 [(short)18])))))) || (((/* implicit */_Bool) ((((/* implicit */int) (signed char)17)) % (((/* implicit */int) var_3))))))))) : (arr_42 [17ULL] [(signed char)15] [i_13] [i_14 + 1]))))));
                arr_54 [12ULL] [i_9] [i_13] [i_14] &= ((/* implicit */unsigned long long int) (-(((var_7) * (((/* implicit */int) ((-1783529221) > (((/* implicit */int) (unsigned short)50884)))))))));
                var_24 += ((/* implicit */unsigned long long int) (short)28722);
                var_25 = ((/* implicit */short) max((1989267930), (((/* implicit */int) ((((/* implicit */_Bool) (short)-1)) || (((/* implicit */_Bool) arr_53 [i_9 - 2] [i_14 + 1] [i_14])))))));
                arr_55 [i_9 - 2] [(unsigned char)1] &= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (unsigned short)14651)) ? (2147483647) : (((/* implicit */int) (_Bool)1)))) ^ (min((((/* implicit */int) arr_53 [i_14 + 1] [i_14 - 1] [i_14 + 1])), (449377056)))));
            }
            for (int i_15 = 0; i_15 < 22; i_15 += 2) 
            {
                var_26 = ((/* implicit */unsigned char) ((max((((/* implicit */unsigned long long int) ((4194303U) | (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255)))))), (0ULL))) & (((/* implicit */unsigned long long int) var_4))));
                var_27 = ((/* implicit */_Bool) ((554525489U) + (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (short)10)) || (((/* implicit */_Bool) 7030429974473898534ULL))))))));
                var_28 = ((/* implicit */int) max((((/* implicit */unsigned long long int) ((unsigned char) 1163617350601145186LL))), (11416314099235653081ULL)));
            }
        }
        for (int i_16 = 0; i_16 < 22; i_16 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_17 = 3; i_17 < 20; i_17 += 3) 
            {
                for (long long int i_18 = 2; i_18 < 21; i_18 += 2) 
                {
                    {
                        var_29 ^= ((/* implicit */signed char) ((((/* implicit */long long int) (((!(((/* implicit */_Bool) (short)-21023)))) ? (max((var_5), (((/* implicit */unsigned int) var_0)))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 1670004025)) || (((/* implicit */_Bool) (short)-1))))))))) ^ (arr_56 [i_9 + 1] [i_9 + 1] [11LL])));
                        var_30 -= ((/* implicit */int) max((arr_44 [i_9 - 2] [i_9 - 2] [i_17 - 3]), (((/* implicit */unsigned long long int) min((arr_57 [i_9] [i_16] [i_17 - 2] [8]), (arr_57 [i_9] [i_9] [i_17 - 2] [i_17]))))));
                        arr_65 [i_9 - 2] [(signed char)1] = ((/* implicit */short) min((((((/* implicit */unsigned long long int) arr_39 [i_18])) * (var_6))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_59 [i_9 - 2] [i_16])) ? (((/* implicit */int) arr_59 [i_18 + 1] [i_16])) : (((/* implicit */int) arr_59 [i_9] [i_9])))))));
                    }
                } 
            } 
            arr_66 [i_16] = min((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (var_1) : (((/* implicit */int) arr_40 [16ULL]))))) && (((/* implicit */_Bool) arr_32 [i_9 - 1]))))), (min(((-(440884196))), (((/* implicit */int) (_Bool)1)))));
            var_31 = ((/* implicit */short) var_5);
            var_32 = ((/* implicit */unsigned char) min((((/* implicit */long long int) arr_40 [0])), (((((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_36 [i_16] [i_9])) : (((/* implicit */int) (short)-24288))))) % (min((1395787219248446017LL), (((/* implicit */long long int) (unsigned short)50907))))))));
        }
    }
    var_33 = ((/* implicit */short) max((var_33), (((/* implicit */short) max((((min((var_2), (((/* implicit */unsigned long long int) var_5)))) << (((var_6) - (8131437884154685063ULL))))), (1152640029630136320ULL))))));
    var_34 = ((/* implicit */unsigned short) max((((/* implicit */long long int) var_9)), (var_4)));
    var_35 &= var_1;
    var_36 = ((/* implicit */unsigned char) max((var_36), (((/* implicit */unsigned char) min(((-(var_2))), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)192))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) -341462568)) : (var_2))))))))));
}
