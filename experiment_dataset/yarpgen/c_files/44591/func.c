/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44591
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44591 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44591
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
    var_15 = min((((((/* implicit */long long int) (-(((/* implicit */int) var_12))))) & (max((((/* implicit */long long int) 1580085360U)), (var_10))))), (((/* implicit */long long int) var_8)));
    /* LoopSeq 4 */
    for (short i_0 = 3; i_0 < 16; i_0 += 1) /* same iter space */
    {
        var_16 -= ((/* implicit */unsigned char) var_7);
        /* LoopNest 3 */
        for (short i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 16; i_2 += 2) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        var_17 = ((short) (~(((/* implicit */int) (signed char)-56))));
                        var_18 ^= ((/* implicit */unsigned char) var_7);
                    }
                } 
            } 
        } 
        arr_12 [i_0] = ((/* implicit */signed char) (~(arr_11 [0ULL] [i_0 - 3] [0ULL])));
        arr_13 [i_0] = ((/* implicit */short) (-((-(var_0)))));
        var_19 = ((/* implicit */unsigned long long int) min((var_19), (((((/* implicit */_Bool) var_2)) ? (((unsigned long long int) (unsigned char)81)) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))))));
    }
    for (short i_4 = 3; i_4 < 16; i_4 += 1) /* same iter space */
    {
        arr_18 [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(min((((/* implicit */unsigned long long int) var_14)), (var_3)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) ((_Bool) arr_7 [i_4] [i_4] [6U]))) | ((~(var_9)))))) : (((unsigned long long int) (~(((/* implicit */int) var_11)))))));
        arr_19 [i_4] [0U] = ((/* implicit */unsigned short) max((3750576813982050585ULL), (((/* implicit */unsigned long long int) (_Bool)1))));
        arr_20 [i_4] [i_4] = ((/* implicit */_Bool) (~(((/* implicit */int) var_13))));
        arr_21 [i_4] [i_4] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) max((3750576813982050585ULL), (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL)))))) ? (((((/* implicit */_Bool) arr_11 [0ULL] [i_4] [0ULL])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)83))) : (var_3))) : (((/* implicit */unsigned long long int) (-(var_14)))))), (((/* implicit */unsigned long long int) ((arr_11 [i_4 + 1] [i_4] [2U]) >= (((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [i_4]))))))))));
        arr_22 [i_4] = (!(((/* implicit */_Bool) arr_8 [6] [i_4 - 1] [4] [6] [i_4] [6])));
    }
    for (short i_5 = 3; i_5 < 16; i_5 += 1) /* same iter space */
    {
        var_20 = ((/* implicit */signed char) (~(((/* implicit */int) (!((_Bool)1))))));
        var_21 = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) (~(((/* implicit */int) arr_9 [i_5] [(unsigned char)5] [i_5] [i_5]))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [(unsigned short)8])) ? (-1662470760) : (((/* implicit */int) arr_24 [i_5] [i_5])))))))) : (var_0)));
        var_22 = ((/* implicit */unsigned char) ((((((/* implicit */int) arr_14 [i_5])) >= (((/* implicit */int) ((_Bool) var_7))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_14 [i_5 - 3])), (var_14)))) ? ((+((-9223372036854775807LL - 1LL)))) : (((/* implicit */long long int) ((unsigned int) arr_11 [(short)4] [i_5] [6LL])))))) : (((unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_5] [i_5 - 1])) && (((/* implicit */_Bool) var_4)))))));
    }
    for (unsigned int i_6 = 0; i_6 < 13; i_6 += 2) 
    {
        var_23 = ((/* implicit */_Bool) arr_26 [i_6]);
        var_24 *= ((/* implicit */unsigned long long int) max(((_Bool)1), ((_Bool)1)));
        arr_27 [i_6] = arr_8 [i_6] [(signed char)16] [i_6] [i_6] [i_6] [i_6];
        /* LoopSeq 2 */
        for (int i_7 = 0; i_7 < 13; i_7 += 4) 
        {
            arr_30 [i_6] [i_6] = ((/* implicit */long long int) min((((short) arr_8 [i_6] [i_6] [i_7] [i_7] [i_7] [i_7])), (((/* implicit */short) (!(((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) arr_8 [i_6] [i_6] [i_6] [i_6] [i_6] [(signed char)6])))))))));
            var_25 = ((/* implicit */unsigned char) arr_4 [i_6] [i_6] [i_7]);
            arr_31 [i_6] [i_7] = ((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (arr_5 [i_6] [12] [i_6]) : (((/* implicit */long long int) arr_4 [i_6] [i_7] [i_6]))))))))));
            arr_32 [(signed char)9] [i_6] [7] = ((((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) arr_28 [i_6] [3ULL])) ? (((/* implicit */long long int) arr_4 [i_6] [8U] [i_6])) : (var_10))))) == (max((((/* implicit */int) (_Bool)1)), (-1619140737))));
        }
        for (_Bool i_8 = 0; i_8 < 0; i_8 += 1) 
        {
            arr_36 [i_8 + 1] [(_Bool)1] = ((/* implicit */unsigned int) (((~(((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (unsigned char)177)) : (((/* implicit */int) (signed char)127)))))) != ((~(((/* implicit */int) var_8))))));
            arr_37 [4] [i_8] &= ((/* implicit */int) (((_Bool)1) ? (((/* implicit */unsigned long long int) 3632650926847704715LL)) : (min((((/* implicit */unsigned long long int) (_Bool)1)), (15661951684866377221ULL)))));
        }
    }
}
