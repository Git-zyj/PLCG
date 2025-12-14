/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218533
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218533 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218533
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
    for (short i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        var_17 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (signed char)-108)) ? (((/* implicit */int) (signed char)-111)) : (((/* implicit */int) (short)32767)))) / (((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0])) || (((/* implicit */_Bool) arr_2 [i_0])))))));
        var_18 &= ((/* implicit */unsigned char) (+(((((/* implicit */int) (unsigned short)46287)) * (((/* implicit */int) (unsigned char)243))))));
        var_19 = ((/* implicit */unsigned long long int) (_Bool)0);
    }
    for (signed char i_1 = 1; i_1 < 8; i_1 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned short i_2 = 3; i_2 < 7; i_2 += 2) 
        {
            for (signed char i_3 = 2; i_3 < 9; i_3 += 3) 
            {
                {
                    var_20 *= ((/* implicit */unsigned long long int) ((signed char) ((((((/* implicit */_Bool) arr_2 [i_2])) ? (((/* implicit */int) (unsigned short)13192)) : (((/* implicit */int) (unsigned short)5)))) >> (((arr_10 [i_3] [i_2] [i_1]) - (3998995475U))))));
                    var_21 = ((/* implicit */unsigned int) arr_6 [i_1 - 1]);
                }
            } 
        } 
        var_22 = ((/* implicit */signed char) arr_10 [i_1] [i_1] [i_1]);
        var_23 = ((/* implicit */unsigned short) arr_4 [i_1]);
    }
    for (short i_4 = 0; i_4 < 22; i_4 += 2) 
    {
        var_24 = ((/* implicit */signed char) arr_14 [i_4]);
        var_25 = ((/* implicit */unsigned short) (signed char)-1);
        var_26 = ((/* implicit */unsigned short) (+(((((/* implicit */long long int) ((/* implicit */int) (unsigned short)65530))) / (arr_13 [i_4])))));
        var_27 ^= ((/* implicit */_Bool) ((((arr_13 [i_4]) < (((/* implicit */long long int) ((((/* implicit */_Bool) 9166113144823613785LL)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_14 [i_4]))))))) ? (((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_14 [(signed char)21]))) - (arr_13 [i_4])))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)60867))))) : (1929828631U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)239)) ? (((/* implicit */int) (unsigned short)32)) : (((/* implicit */int) (signed char)-49)))))));
    }
    /* LoopNest 2 */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        for (unsigned short i_6 = 1; i_6 < 13; i_6 += 3) 
        {
            {
                /* LoopNest 3 */
                for (unsigned short i_7 = 4; i_7 < 14; i_7 += 1) 
                {
                    for (unsigned short i_8 = 2; i_8 < 13; i_8 += 1) 
                    {
                        for (unsigned short i_9 = 0; i_9 < 15; i_9 += 3) 
                        {
                            {
                                arr_31 [i_5] [i_5] [i_8] [i_5] [i_8] [i_6] [i_6] = ((/* implicit */unsigned short) max((min((((/* implicit */unsigned long long int) (short)10255)), (2ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_2))) != (var_16))))));
                                var_28 = ((/* implicit */unsigned short) min((var_28), (((/* implicit */unsigned short) (((~(((/* implicit */int) arr_15 [i_8 + 2])))) * (((/* implicit */int) max(((unsigned short)6522), (arr_29 [i_6] [8ULL] [i_6 - 1] [i_6 - 1] [(_Bool)0] [i_8 - 2])))))))));
                                var_29 = ((/* implicit */signed char) 1732123304U);
                                arr_32 [i_9] [i_6] [i_9] [i_6] [i_9] = min((((/* implicit */unsigned int) (signed char)6)), (max((((unsigned int) (-9223372036854775807LL - 1LL))), (((/* implicit */unsigned int) ((signed char) arr_23 [i_6] [i_6] [i_9]))))));
                            }
                        } 
                    } 
                } 
                var_30 = ((/* implicit */signed char) min((var_30), (((/* implicit */signed char) ((((/* implicit */_Bool) max((arr_25 [i_5] [i_6 + 2] [i_6] [(short)2]), (((/* implicit */unsigned short) (signed char)-123))))) ? (((/* implicit */unsigned int) 687305981)) : (min((((/* implicit */unsigned int) 2064800681)), (((((/* implicit */_Bool) 7575755394783900398LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)72))) : (2218163715U))))))))));
                var_31 -= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_13 [i_5])) ? (((/* implicit */int) arr_19 [4U] [i_6 - 1])) : (((/* implicit */int) ((arr_19 [(signed char)4] [i_6 + 2]) && (((/* implicit */_Bool) (short)-10241)))))));
            }
        } 
    } 
}
