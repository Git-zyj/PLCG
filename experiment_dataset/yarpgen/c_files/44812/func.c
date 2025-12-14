/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44812
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44812 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44812
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
    /* LoopSeq 2 */
    for (signed char i_0 = 3; i_0 < 13; i_0 += 1) 
    {
        var_11 -= ((/* implicit */short) (+(((/* implicit */int) ((unsigned short) (+(((/* implicit */int) (short)25377))))))));
        arr_3 [i_0 + 3] = ((/* implicit */long long int) ((unsigned int) arr_1 [i_0]));
    }
    for (signed char i_1 = 2; i_1 < 19; i_1 += 2) 
    {
        var_12 = ((/* implicit */signed char) var_8);
        /* LoopSeq 1 */
        /* vectorizable */
        for (int i_2 = 2; i_2 < 20; i_2 += 2) 
        {
            arr_8 [i_1] = ((/* implicit */unsigned int) var_4);
            var_13 = ((/* implicit */short) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_4 [i_2 + 1] [i_2 + 1])) : (((/* implicit */int) arr_4 [i_2 + 3] [i_2 + 2]))));
            arr_9 [(_Bool)1] [i_2] = ((/* implicit */int) var_8);
        }
        arr_10 [i_1 + 2] = ((/* implicit */short) max((max((arr_7 [i_1 + 3]), (((/* implicit */unsigned int) (short)25377)))), (((/* implicit */unsigned int) arr_4 [i_1 - 1] [i_1]))));
        var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) arr_5 [i_1 + 2]))));
        arr_11 [i_1 + 1] = ((/* implicit */signed char) var_5);
    }
    /* LoopSeq 3 */
    /* vectorizable */
    for (short i_3 = 4; i_3 < 21; i_3 += 4) 
    {
        arr_15 [(unsigned char)15] = ((/* implicit */long long int) ((unsigned short) arr_12 [i_3 + 2] [i_3 - 3]));
        arr_16 [i_3] = ((/* implicit */unsigned char) ((((var_8) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (short)(-32767 - 1))))) <= (((/* implicit */int) arr_14 [i_3 - 2]))));
    }
    for (unsigned int i_4 = 0; i_4 < 24; i_4 += 4) /* same iter space */
    {
        arr_20 [i_4] [i_4] = ((/* implicit */_Bool) -1143597497);
        arr_21 [i_4] = ((/* implicit */signed char) (-(((/* implicit */int) ((_Bool) (short)-25361)))));
        /* LoopNest 2 */
        for (unsigned char i_5 = 0; i_5 < 24; i_5 += 2) 
        {
            for (short i_6 = 0; i_6 < 24; i_6 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_7 = 4; i_7 < 20; i_7 += 1) 
                    {
                        for (unsigned short i_8 = 0; i_8 < 24; i_8 += 2) 
                        {
                            {
                                var_15 ^= ((/* implicit */unsigned char) var_10);
                                var_16 = ((/* implicit */long long int) (~(((unsigned int) arr_12 [i_7] [i_7 + 1]))));
                                var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) min(((~(((/* implicit */int) arr_33 [i_7 - 3] [i_7 - 4] [i_7 - 4] [i_7 - 2] [(signed char)4])))), (((/* implicit */int) (!(((/* implicit */_Bool) (short)-11964))))))))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (unsigned char i_9 = 0; i_9 < 24; i_9 += 3) 
                    {
                        var_18 -= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)1654)) ? (((/* implicit */int) (short)-25377)) : (((/* implicit */int) (unsigned short)41193))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_13 [i_5])) && (((/* implicit */_Bool) (short)25377)))))) : (((((/* implicit */_Bool) var_9)) ? (1099511627264ULL) : (((/* implicit */unsigned long long int) arr_32 [i_4] [i_5] [i_6] [(short)1] [i_6]))))));
                        arr_37 [i_6] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) (+((-(((/* implicit */int) (unsigned short)1654))))))) || (((/* implicit */_Bool) (((!(((/* implicit */_Bool) (short)-21043)))) ? (min((((/* implicit */long long int) (signed char)90)), (9223372036854775807LL))) : (((((/* implicit */_Bool) arr_13 [i_4])) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) arr_26 [i_4] [i_5] [i_5] [(_Bool)1]))))))))));
                        var_19 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_23 [0U] [i_4] [i_6])) ? (((/* implicit */int) (signed char)74)) : (((/* implicit */int) arr_24 [i_4] [(unsigned short)21] [i_6]))))) || ((!(((/* implicit */_Bool) 9223372036854775807LL)))));
                        arr_38 [i_4] [i_4] [i_6] [i_9] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((short) (signed char)11))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_30 [i_5] [i_5])) ? (((/* implicit */long long int) ((/* implicit */int) arr_34 [i_9] [i_9] [i_9] [i_9]))) : (arr_19 [i_6])))) ? (((/* implicit */long long int) ((int) var_3))) : (((((/* implicit */_Bool) -1997598430570018013LL)) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)17))))))) : (((/* implicit */long long int) ((/* implicit */int) arr_36 [i_5] [i_9])))));
                    }
                    for (unsigned long long int i_10 = 0; i_10 < 24; i_10 += 2) 
                    {
                        var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)4355))));
                        arr_42 [i_4] [i_5] [i_6] [i_10] = ((/* implicit */unsigned char) var_0);
                    }
                    arr_43 [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((~(10270823217927864991ULL))) ^ (((/* implicit */unsigned long long int) min((arr_19 [i_5]), (((/* implicit */long long int) var_7)))))))) ? (arr_12 [i_4] [i_5]) : (((/* implicit */int) var_7))));
                }
            } 
        } 
        arr_44 [i_4] = ((/* implicit */unsigned short) arr_12 [i_4] [i_4]);
        var_21 = (+(min((((/* implicit */unsigned long long int) var_2)), (arr_28 [i_4] [i_4] [i_4]))));
    }
    for (unsigned int i_11 = 0; i_11 < 24; i_11 += 4) /* same iter space */
    {
        var_22 ^= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)58796)) ? (((/* implicit */long long int) ((/* implicit */int) arr_33 [(signed char)6] [(signed char)6] [(signed char)6] [i_11] [i_11]))) : (arr_19 [i_11])))) ? ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (arr_19 [i_11]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_40 [i_11] [i_11] [i_11] [i_11])) : (((/* implicit */int) arr_33 [i_11] [i_11] [i_11] [i_11] [i_11])))))));
        arr_47 [i_11] [3U] = ((/* implicit */signed char) (-(((((/* implicit */unsigned int) arr_46 [i_11] [i_11])) / (var_6)))));
    }
}
