/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210506
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210506 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210506
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
    for (unsigned int i_0 = 3; i_0 < 13; i_0 += 1) 
    {
        arr_3 [i_0] [i_0] = arr_1 [i_0] [i_0];
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_0 [i_0])))))));
    }
    for (unsigned short i_1 = 1; i_1 < 24; i_1 += 1) 
    {
        var_10 = ((/* implicit */signed char) min((var_10), (((/* implicit */signed char) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_5 [i_1 + 1])) : ((~(((/* implicit */int) var_0)))))))));
        arr_7 [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */int) arr_5 [i_1 - 1])) % (((/* implicit */int) ((short) (unsigned short)13013)))));
    }
    for (signed char i_2 = 0; i_2 < 25; i_2 += 4) 
    {
        var_11 = ((/* implicit */_Bool) var_5);
        var_12 ^= ((/* implicit */signed char) arr_9 [i_2]);
    }
    var_13 = ((/* implicit */_Bool) var_8);
    /* LoopSeq 3 */
    /* vectorizable */
    for (short i_3 = 2; i_3 < 8; i_3 += 4) 
    {
        var_14 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_10 [i_3 + 1] [i_3 + 1])) || (((/* implicit */_Bool) arr_2 [i_3]))));
        var_15 = ((/* implicit */unsigned int) ((arr_11 [i_3 - 1] [i_3 - 1]) + (((/* implicit */int) arr_6 [i_3 - 1] [i_3]))));
        arr_14 [i_3] = ((/* implicit */short) ((((/* implicit */int) (unsigned short)13013)) << (((-1646696796) + (1646696811)))));
        var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)52522)) ? (((/* implicit */int) (unsigned short)38807)) : (((/* implicit */int) (signed char)127))));
    }
    for (int i_4 = 3; i_4 < 11; i_4 += 4) 
    {
        var_17 = ((/* implicit */short) (signed char)-59);
        arr_17 [i_4] = ((/* implicit */unsigned short) (!(max((((((/* implicit */int) var_6)) == (arr_2 [i_4]))), (((_Bool) arr_9 [(signed char)24]))))));
        arr_18 [i_4] [i_4] = ((/* implicit */short) (~(((((/* implicit */_Bool) arr_2 [i_4])) ? (arr_2 [i_4]) : (arr_2 [i_4])))));
    }
    /* vectorizable */
    for (short i_5 = 0; i_5 < 25; i_5 += 1) 
    {
        var_18 = ((/* implicit */short) (~((-(((/* implicit */int) arr_20 [(short)15] [i_5]))))));
        arr_22 [i_5] = ((/* implicit */unsigned short) (((_Bool)0) ? (((/* implicit */int) arr_8 [i_5] [i_5])) : (((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) (short)-18729)) : (((/* implicit */int) (unsigned short)13040))))));
    }
    /* LoopNest 2 */
    for (short i_6 = 0; i_6 < 14; i_6 += 1) 
    {
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_8 = 1; i_8 < 13; i_8 += 2) 
                {
                    for (int i_9 = 0; i_9 < 14; i_9 += 4) 
                    {
                        {
                            var_19 = ((/* implicit */unsigned short) min((((/* implicit */long long int) (-(((/* implicit */int) arr_29 [i_8 - 1] [i_6] [i_6] [(_Bool)1]))))), (var_8)));
                            arr_32 [i_9] [i_9] [(_Bool)1] [i_6] [i_9] [i_6] &= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+((~(((/* implicit */int) (signed char)0)))))))));
                            var_20 = ((signed char) min((((((/* implicit */_Bool) var_5)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) (short)-17673))))), (((/* implicit */long long int) (signed char)47))));
                        }
                    } 
                } 
                var_21 = ((/* implicit */unsigned short) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_25 [i_6] [i_6] [i_6])))))));
                /* LoopNest 2 */
                for (short i_10 = 0; i_10 < 14; i_10 += 3) 
                {
                    for (unsigned int i_11 = 0; i_11 < 14; i_11 += 3) 
                    {
                        {
                            var_22 = ((/* implicit */_Bool) ((unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) var_3))))) % (((arr_8 [i_11] [i_11]) ? (((/* implicit */int) (signed char)1)) : (((/* implicit */int) (unsigned short)62190)))))));
                            arr_38 [i_6] = ((/* implicit */signed char) ((((/* implicit */int) max(((short)-3209), ((short)32750)))) * (((/* implicit */int) (_Bool)1))));
                            arr_39 [i_6] [i_7] [(short)0] [i_6] [i_6] [(signed char)10] = ((/* implicit */int) arr_29 [(short)4] [i_6] [i_6] [(short)4]);
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (unsigned short i_12 = 0; i_12 < 14; i_12 += 3) 
                {
                    arr_43 [4LL] &= ((/* implicit */signed char) arr_26 [(short)4]);
                    var_23 |= ((/* implicit */short) ((((/* implicit */_Bool) ((var_8) / (((/* implicit */long long int) ((/* implicit */int) var_6)))))) ? (((((/* implicit */_Bool) arr_37 [i_6] [i_7] [(short)12] [(_Bool)1])) ? (((/* implicit */int) arr_37 [i_6] [i_6] [8] [i_6])) : (((/* implicit */int) arr_37 [i_6] [i_6] [(unsigned short)4] [i_6])))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)42555)))))));
                }
                /* vectorizable */
                for (signed char i_13 = 1; i_13 < 13; i_13 += 1) 
                {
                    /* LoopSeq 1 */
                    for (signed char i_14 = 1; i_14 < 12; i_14 += 4) 
                    {
                        arr_48 [i_6] [i_7] [i_6] [i_7] = ((/* implicit */_Bool) ((short) ((arr_1 [i_6] [i_7]) ? (101827032) : (((/* implicit */int) arr_45 [i_6] [(unsigned short)11])))));
                        var_24 = ((/* implicit */long long int) arr_41 [(_Bool)1] [(unsigned short)8] [9LL] [i_14]);
                    }
                    arr_49 [i_6] [i_6] [i_6] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_41 [i_13 - 1] [i_13] [i_13 - 1] [i_13 + 1]))));
                }
            }
        } 
    } 
}
