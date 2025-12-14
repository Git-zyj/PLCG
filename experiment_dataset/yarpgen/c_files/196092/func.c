/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196092
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196092 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196092
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
    var_18 = ((/* implicit */long long int) var_16);
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        arr_3 [i_0] [i_0] = (~(((/* implicit */int) (unsigned char)186)));
        var_19 = ((/* implicit */unsigned int) ((((((/* implicit */int) (short)-4)) + (2147483647))) << (((((arr_1 [i_0] [i_0]) & (-1458903401))) - (706049)))));
        var_20 = ((/* implicit */short) min((var_20), ((short)15)));
        var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_2 [i_0]))));
    }
    for (int i_1 = 0; i_1 < 20; i_1 += 2) 
    {
        var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (short)-13))) % ((-(arr_7 [i_1])))))) ? (((/* implicit */long long int) (-((-(((/* implicit */int) (unsigned short)45871))))))) : (max((arr_7 [i_1]), (arr_7 [i_1])))));
        arr_8 [(signed char)16] = ((/* implicit */_Bool) (short)4088);
    }
    /* LoopNest 2 */
    for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 1) 
    {
        for (unsigned short i_3 = 1; i_3 < 16; i_3 += 2) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned int i_4 = 3; i_4 < 15; i_4 += 3) /* same iter space */
                {
                    /* LoopSeq 3 */
                    for (signed char i_5 = 3; i_5 < 17; i_5 += 1) 
                    {
                        var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_4] [i_2])) ? (((((((/* implicit */_Bool) arr_0 [i_3 + 3])) ? (var_10) : (((/* implicit */long long int) var_12)))) & (((/* implicit */long long int) ((/* implicit */int) (short)-4088))))) : (((/* implicit */long long int) max((-1971961927), (min((((/* implicit */int) (_Bool)0)), (arr_18 [(signed char)11] [i_4]))))))));
                        var_24 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) max((((/* implicit */int) var_4)), (var_12)))) >= (18446744073709551615ULL)));
                        var_25 = ((/* implicit */_Bool) max((var_25), (((/* implicit */_Bool) ((((/* implicit */int) (short)4088)) & (((/* implicit */int) var_11)))))));
                    }
                    for (long long int i_6 = 0; i_6 < 19; i_6 += 2) 
                    {
                        arr_21 [i_6] [i_6] [i_6] [i_2] = ((/* implicit */long long int) var_5);
                        var_26 = ((/* implicit */_Bool) min((var_26), (((/* implicit */_Bool) max((((/* implicit */unsigned int) max((arr_0 [i_3 + 3]), (arr_0 [i_3 + 2])))), ((-(116573131U))))))));
                        var_27 = ((/* implicit */unsigned short) max((var_27), ((unsigned short)65535)));
                        var_28 += ((/* implicit */_Bool) (~((~(max((arr_1 [i_2] [15U]), (((/* implicit */int) (short)-1575))))))));
                    }
                    for (unsigned short i_7 = 0; i_7 < 19; i_7 += 3) 
                    {
                        var_29 = ((/* implicit */unsigned int) max((6ULL), (((/* implicit */unsigned long long int) arr_2 [i_4 - 3]))));
                        var_30 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)20)) ? (var_10) : (var_15)))) ? (14065597489741219597ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */unsigned long long int) var_10))));
                    }
                    arr_24 [i_2] = ((/* implicit */unsigned char) var_11);
                    var_31 = ((/* implicit */signed char) ((((/* implicit */int) var_2)) > (var_12)));
                }
                for (unsigned int i_8 = 3; i_8 < 15; i_8 += 3) /* same iter space */
                {
                    arr_27 [i_3] [i_2] [(unsigned char)0] [8U] = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-22))))) ? (((/* implicit */int) max(((unsigned char)199), (((/* implicit */unsigned char) arr_20 [i_8 + 2] [i_2] [i_2]))))) : (((/* implicit */int) min((((/* implicit */short) (_Bool)0)), ((short)1574))))));
                    arr_28 [i_2] [i_2] = ((/* implicit */long long int) (((!(((/* implicit */_Bool) arr_23 [i_3 + 3] [i_3 + 1])))) ? ((-(((/* implicit */int) arr_23 [i_3 + 3] [i_3 + 1])))) : (((/* implicit */int) max((((/* implicit */short) var_2)), ((short)28))))));
                    /* LoopNest 2 */
                    for (long long int i_9 = 0; i_9 < 19; i_9 += 2) 
                    {
                        for (signed char i_10 = 3; i_10 < 18; i_10 += 3) 
                        {
                            {
                                var_32 = ((/* implicit */unsigned int) (~(((/* implicit */int) max(((unsigned short)19657), ((unsigned short)19634))))));
                                var_33 = ((/* implicit */unsigned short) min((var_33), (((/* implicit */unsigned short) (~(((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)38878))))) ? ((+(((/* implicit */int) var_1)))) : (((/* implicit */int) (short)48)))))))));
                            }
                        } 
                    } 
                    var_34 = ((/* implicit */_Bool) (-(((/* implicit */int) max((((/* implicit */unsigned short) arr_12 [i_8] [i_8] [i_3 + 2])), (arr_23 [i_8 + 4] [i_3 - 1]))))));
                }
                var_35 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_17 [6ULL] [i_2] [i_3] [(signed char)10] [i_2])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_17)))), ((~(((/* implicit */int) arr_17 [5ULL] [i_2] [5ULL] [i_3 + 2] [i_2]))))));
                /* LoopNest 2 */
                for (signed char i_11 = 0; i_11 < 19; i_11 += 1) 
                {
                    for (int i_12 = 0; i_12 < 19; i_12 += 2) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                            {
                                arr_44 [i_2] [i_2] [i_11] [i_2] [i_13] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((max((var_12), (((/* implicit */int) (short)-13)))), ((-(((/* implicit */int) arr_16 [i_12] [i_12] [3ULL] [i_12]))))))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_29 [i_13] [i_12] [i_11] [i_3] [i_2])) || (var_2)))) != (((/* implicit */int) max((((/* implicit */unsigned short) (signed char)126)), ((unsigned short)56221)))))))));
                                arr_45 [i_3 - 1] [i_12] [i_13] [i_11] [i_13] &= ((/* implicit */signed char) (+((~(((/* implicit */int) var_16))))));
                            }
                            arr_46 [i_12] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_10 [i_12]), (arr_10 [i_12])))) ? (((((/* implicit */int) arr_10 [i_12])) + (((/* implicit */int) arr_10 [i_12])))) : (((((/* implicit */int) (short)49)) / (((/* implicit */int) arr_10 [i_12]))))));
                            arr_47 [i_2] = ((/* implicit */int) max(((unsigned short)9314), (((/* implicit */unsigned short) (_Bool)1))));
                            arr_48 [i_11] [i_3 + 3] [i_11] [i_2] = var_15;
                            var_36 = ((/* implicit */signed char) arr_32 [i_3 - 1] [i_2] [i_3] [i_3] [i_12] [i_3 - 1] [i_3 - 1]);
                        }
                    } 
                } 
                var_37 = ((/* implicit */short) (-(((/* implicit */int) (unsigned short)55968))));
                var_38 = ((/* implicit */signed char) max((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)42))))), (((((/* implicit */_Bool) arr_17 [i_3] [i_3] [i_3] [i_3 + 2] [i_3])) ? (((/* implicit */int) arr_17 [(unsigned short)17] [i_3 - 1] [(unsigned short)0] [i_3 + 2] [15LL])) : (((/* implicit */int) (_Bool)0))))));
            }
        } 
    } 
}
