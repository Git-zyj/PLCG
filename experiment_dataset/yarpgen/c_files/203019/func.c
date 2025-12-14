/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203019
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203019 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203019
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
    var_15 = ((/* implicit */unsigned int) min((((/* implicit */int) (unsigned char)167)), (13)));
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        var_16 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0]))));
        arr_4 [8] = ((/* implicit */int) (~(((var_9) & (((/* implicit */unsigned long long int) arr_0 [i_0]))))));
    }
    for (unsigned long long int i_1 = 1; i_1 < 10; i_1 += 4) 
    {
        arr_7 [i_1] [i_1] = ((/* implicit */unsigned short) min((((/* implicit */long long int) (short)-8949)), (min((((var_12) - (((/* implicit */long long int) ((/* implicit */int) var_8))))), (((/* implicit */long long int) 1342090577))))));
        var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)27882)) / (((/* implicit */int) (unsigned short)13979))))) ? (arr_6 [i_1 + 2] [i_1 + 2]) : (min((arr_6 [(_Bool)1] [i_1]), (((/* implicit */int) (signed char)57))))))))))));
    }
    for (long long int i_2 = 0; i_2 < 10; i_2 += 4) 
    {
        var_18 ^= ((/* implicit */long long int) ((_Bool) 1138752221U));
        var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) arr_1 [(short)5] [(signed char)0]))));
        /* LoopNest 2 */
        for (unsigned int i_3 = 0; i_3 < 10; i_3 += 4) 
        {
            for (unsigned int i_4 = 0; i_4 < 10; i_4 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 0; i_5 < 10; i_5 += 4) 
                    {
                        for (unsigned long long int i_6 = 0; i_6 < 10; i_6 += 4) 
                        {
                            {
                                var_20 = ((/* implicit */short) ((((/* implicit */_Bool) var_2)) ? ((-(var_9))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (((~(((/* implicit */int) (signed char)-16)))) > (2147483647)))))));
                                var_21 = ((/* implicit */_Bool) 10ULL);
                                var_22 = ((/* implicit */int) var_6);
                                var_23 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-27991)) ? (13072305117033951959ULL) : (((/* implicit */unsigned long long int) ((((-1202354327) + (2147483647))) << (((((/* implicit */int) (short)20)) - (20))))))))) ? (var_13) : (min((26), (((/* implicit */int) var_0)))));
                            }
                        } 
                    } 
                    /* LoopSeq 3 */
                    for (int i_7 = 2; i_7 < 8; i_7 += 4) /* same iter space */
                    {
                        arr_25 [i_2] [i_3] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */int) max(((short)-27978), ((short)-15466)))) * ((-(((/* implicit */int) arr_19 [(short)1] [(unsigned short)8] [i_7] [i_7 + 2] [1LL]))))));
                        arr_26 [i_2] [i_3] [7ULL] [i_2] = ((/* implicit */long long int) (~(((/* implicit */int) (short)-24821))));
                    }
                    for (int i_8 = 2; i_8 < 8; i_8 += 4) /* same iter space */
                    {
                        /* LoopSeq 2 */
                        for (short i_9 = 1; i_9 < 9; i_9 += 4) 
                        {
                            arr_35 [i_2] [(unsigned short)6] [i_2] [i_2] [(unsigned short)6] [i_2] [i_2] = ((/* implicit */unsigned long long int) min((min((((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (short)-22113))))), (((((/* implicit */_Bool) (short)-5)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)47547))) : (var_2))))), ((+((-(var_14)))))));
                            var_24 *= ((/* implicit */unsigned short) max((var_12), (arr_2 [i_3])));
                            arr_36 [i_2] [i_3] [i_3] [i_8] [i_3] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) min((var_12), (((/* implicit */long long int) ((((/* implicit */int) arr_18 [i_8] [i_4] [i_3])) << (((((/* implicit */int) (unsigned short)47579)) - (47553))))))))) != (min((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_13 [6] [i_3] [i_4]))))), (18446744073709551594ULL)))));
                        }
                        for (unsigned long long int i_10 = 1; i_10 < 8; i_10 += 4) 
                        {
                            var_25 = ((((/* implicit */_Bool) (~(((/* implicit */int) (short)9262))))) ? ((~(((/* implicit */int) arr_38 [i_8 - 2] [i_8 - 2] [i_10 - 1] [i_10] [i_10 + 1])))) : (((max((867638292), (((/* implicit */int) var_0)))) | (((/* implicit */int) min((((/* implicit */short) var_4)), (arr_29 [i_2] [(short)8] [i_8] [i_10])))))));
                            arr_39 [(signed char)4] [(short)9] [(short)9] [i_10] = ((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_9 [i_2])))))))) + (((/* implicit */int) ((unsigned char) var_5)))));
                            arr_40 [i_2] [i_3] [i_4] [i_8 - 1] [i_10] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) (short)27982)) || (((/* implicit */_Bool) arr_1 [i_3] [i_4])))))) ? (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) var_5)) ? (14849791050433199563ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [2ULL] [i_3] [i_4] [i_4] [i_4]))))))) : (((arr_37 [7] [i_8] [7] [5] [i_2]) - ((~(((/* implicit */int) arr_29 [i_8] [i_4] [i_3] [i_2]))))))));
                        }
                        var_26 = ((/* implicit */int) 1605924985U);
                        arr_41 [i_3] = ((/* implicit */short) (-(max(((-(((/* implicit */int) var_3)))), (var_13)))));
                    }
                    for (unsigned int i_11 = 0; i_11 < 10; i_11 += 4) 
                    {
                        arr_44 [i_2] [i_3] [i_2] [i_3] = ((/* implicit */short) (-(((/* implicit */int) (short)24808))));
                        var_27 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((max((var_5), (((/* implicit */unsigned long long int) 2)))), (min((var_5), (((/* implicit */unsigned long long int) (_Bool)1))))))) && (((/* implicit */_Bool) -1034919868))));
                        arr_45 [i_2] [i_3] [i_3] [i_4] [i_4] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)57577)) && (((/* implicit */_Bool) (unsigned short)14814))))))))));
                    }
                }
            } 
        } 
    }
}
