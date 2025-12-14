/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48816
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48816 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48816
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
    var_10 = ((/* implicit */unsigned char) ((unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_7))))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_0)))));
    var_11 = ((/* implicit */unsigned int) (-(((((/* implicit */long long int) ((((/* implicit */_Bool) 735191196)) ? (547221735U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-7832)))))) | (var_4)))));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        var_12 = ((/* implicit */long long int) max((var_12), (((/* implicit */long long int) (!(((/* implicit */_Bool) max(((short)30429), ((short)-30430)))))))));
        /* LoopNest 3 */
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 23; i_2 += 3) 
            {
                for (long long int i_3 = 4; i_3 < 20; i_3 += 2) 
                {
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
                        {
                            var_13 = ((/* implicit */short) ((arr_10 [i_4]) % (arr_10 [i_1])));
                            var_14 = ((/* implicit */signed char) ((long long int) arr_1 [i_3 - 4] [i_4]));
                            var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_3] [i_3] [i_3] [i_0] [i_3 + 3] [i_3 + 1] [i_3])) ? (-754404397048700748LL) : (arr_16 [i_0] [i_0] [i_0] [i_1] [i_0] [i_3 - 4] [i_3]))))));
                        }
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
                        {
                            arr_20 [i_0] [i_3] [i_2] [(short)18] [i_5] = ((/* implicit */_Bool) max((((/* implicit */long long int) arr_1 [i_1] [i_1])), (((((/* implicit */long long int) ((arr_5 [i_0] [i_0] [i_3]) >> (((/* implicit */int) (_Bool)1))))) & (arr_14 [i_0] [i_3] [i_3 - 4] [i_5])))));
                            arr_21 [i_0] [i_1] [22U] [i_3] [i_0] [i_5] = ((/* implicit */unsigned char) (!(((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) >= (arr_10 [i_2]))))) != (((((/* implicit */long long int) ((/* implicit */int) var_7))) - (arr_17 [(short)9] [(short)9] [i_2] [i_2] [i_2] [(short)9])))))));
                            var_16 |= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((((((/* implicit */_Bool) 904367236U)) ? (var_2) : (((/* implicit */long long int) 756228469U)))), (((/* implicit */long long int) arr_11 [i_3 - 4] [i_3 - 3] [i_3] [i_3 - 4])))))));
                        }
                        arr_22 [i_1] [(signed char)5] [i_1] [(signed char)5] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(3389899974U)))) ? (((arr_14 [i_3] [i_0] [i_3] [i_3 + 1]) / (arr_14 [6] [i_0] [i_0] [i_3 - 4]))) : (arr_14 [i_3] [i_0] [i_3] [i_3 - 4])));
                    }
                } 
            } 
        } 
        var_17 = max((max((max((((/* implicit */unsigned long long int) var_9)), (arr_18 [i_0] [i_0] [16]))), (((/* implicit */unsigned long long int) arr_9 [i_0] [i_0] [i_0])))), (((/* implicit */unsigned long long int) max((min((2621702159U), (((/* implicit */unsigned int) (_Bool)1)))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)30429)) && (arr_3 [i_0] [i_0] [i_0]))))))));
    }
    for (unsigned long long int i_6 = 0; i_6 < 23; i_6 += 3) 
    {
        arr_25 [i_6] [(unsigned char)20] &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_6] [i_6] [i_6])) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_3))))) || (((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_6] [i_6])) & (-1453953350)))))))) : (max((((((/* implicit */_Bool) arr_16 [i_6] [i_6] [i_6] [12LL] [i_6] [22LL] [i_6])) ? (arr_15 [i_6] [i_6] [i_6] [4U] [i_6]) : (((/* implicit */long long int) 970093248U)))), (((/* implicit */long long int) ((unsigned char) arr_0 [i_6] [i_6])))))));
        arr_26 [i_6] = (-(min((((/* implicit */long long int) arr_6 [i_6] [i_6] [(signed char)6])), (arr_14 [i_6] [i_6] [i_6] [i_6]))));
        arr_27 [i_6] = ((((/* implicit */_Bool) ((((((/* implicit */long long int) 2590929093U)) == (-6000499947050606478LL))) ? (arr_10 [i_6]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_15 [i_6] [i_6] [i_6] [i_6] [i_6])) ? (arr_14 [i_6] [i_6] [i_6] [i_6]) : (-3148722798236935206LL))))))) && (((/* implicit */_Bool) max((((/* implicit */long long int) max((arr_3 [i_6] [i_6] [i_6]), (arr_9 [i_6] [i_6] [i_6])))), (((((/* implicit */_Bool) (unsigned short)40483)) ? (((/* implicit */long long int) arr_12 [16LL] [i_6] [16LL])) : (arr_17 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6])))))));
    }
    /* vectorizable */
    for (unsigned int i_7 = 0; i_7 < 18; i_7 += 3) 
    {
        arr_30 [i_7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -6000499947050606484LL)) ? (7694648254835452528ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)19)))))) ? (((arr_10 [i_7]) ^ (arr_10 [9U]))) : (((/* implicit */unsigned long long int) 6000499947050606470LL))));
        arr_31 [i_7] |= ((/* implicit */signed char) (~(arr_16 [i_7] [i_7] [i_7] [(short)4] [i_7] [i_7] [i_7])));
        arr_32 [i_7] = ((/* implicit */short) (~(((/* implicit */int) arr_24 [i_7] [i_7]))));
        /* LoopNest 2 */
        for (long long int i_8 = 1; i_8 < 15; i_8 += 2) 
        {
            for (long long int i_9 = 1; i_9 < 16; i_9 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_10 = 1; i_10 < 16; i_10 += 2) 
                    {
                        for (long long int i_11 = 0; i_11 < 18; i_11 += 2) 
                        {
                            {
                                arr_44 [(unsigned char)7] [(_Bool)0] [i_9] [(unsigned char)15] [i_9] = ((/* implicit */unsigned char) (_Bool)1);
                                arr_45 [i_7] [i_7] [(short)16] [i_10] [i_11] [i_11] [i_7] &= ((/* implicit */long long int) (-(((/* implicit */int) ((unsigned char) arr_7 [i_7] [i_7] [i_7] [15U])))));
                            }
                        } 
                    } 
                    arr_46 [i_7] [i_8 + 1] = ((/* implicit */long long int) ((arr_5 [i_8 + 1] [i_9 + 1] [i_9 + 1]) & (arr_5 [i_8 + 1] [i_9 + 2] [i_9 + 1])));
                    /* LoopSeq 2 */
                    for (int i_12 = 0; i_12 < 18; i_12 += 2) /* same iter space */
                    {
                        var_18 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_6 [i_9 + 2] [i_9 + 2] [i_9])) == (((/* implicit */int) arr_7 [i_9 + 2] [i_9 - 1] [i_9] [i_9 + 1]))));
                        var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) ((arr_1 [i_8 - 1] [i_9]) ? (((/* implicit */int) arr_1 [i_8 + 1] [i_12])) : (((/* implicit */int) arr_1 [i_8 + 1] [i_8 + 1])))))));
                        arr_49 [i_7] [i_7] = ((/* implicit */_Bool) (~(arr_12 [i_8 - 1] [i_8 + 1] [i_9 + 2])));
                    }
                    for (int i_13 = 0; i_13 < 18; i_13 += 2) /* same iter space */
                    {
                        var_20 *= ((/* implicit */unsigned short) ((((/* implicit */int) ((_Bool) 970093248U))) == (((/* implicit */int) arr_6 [i_7] [i_9 + 2] [i_13]))));
                        arr_53 [i_7] [i_7] [7LL] [i_7] = ((/* implicit */long long int) ((unsigned long long int) arr_39 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8 + 3]));
                    }
                    var_21 ^= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_29 [i_8 + 3])) ? (arr_14 [i_7] [(_Bool)1] [i_8 + 3] [6ULL]) : (arr_16 [20ULL] [i_7] [i_8] [20] [i_9] [i_9] [22U]))))));
                }
            } 
        } 
    }
}
