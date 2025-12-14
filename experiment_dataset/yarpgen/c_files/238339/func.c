/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238339
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238339 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238339
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
    var_15 = ((/* implicit */unsigned long long int) 4294967295U);
    var_16 = ((((/* implicit */_Bool) 4294967293U)) ? (1U) : (12894773U));
    var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_7))));
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        var_18 = ((/* implicit */short) ((((/* implicit */_Bool) max((4294967282U), (6U)))) ? ((~(((/* implicit */int) (unsigned char)222)))) : (((/* implicit */int) max((arr_2 [i_0]), (arr_2 [i_0]))))));
        var_19 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0]))) : (4294967275U)))) / ((+(arr_3 [i_0])))));
    }
    for (unsigned int i_1 = 4; i_1 < 22; i_1 += 1) 
    {
        var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) 4294967293U))));
        var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) (~(((/* implicit */int) max((arr_5 [i_1 - 2]), (arr_5 [i_1 + 2])))))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (long long int i_2 = 1; i_2 < 23; i_2 += 1) 
        {
            var_22 = ((/* implicit */long long int) 8734748720620064307ULL);
            /* LoopNest 2 */
            for (signed char i_3 = 0; i_3 < 24; i_3 += 4) 
            {
                for (unsigned short i_4 = 0; i_4 < 24; i_4 += 1) 
                {
                    {
                        var_23 *= ((/* implicit */unsigned int) arr_12 [i_2] [1U] [i_2] [i_2]);
                        var_24 = ((/* implicit */int) min((var_24), (((/* implicit */int) ((((/* implicit */_Bool) 8734748720620064305ULL)) ? (((/* implicit */long long int) 6U)) : (-1LL))))));
                        var_25 &= ((/* implicit */short) arr_4 [i_2] [i_4]);
                    }
                } 
            } 
            var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)-83)) ? (8734748720620064289ULL) : (9711995353089487313ULL)));
            /* LoopSeq 2 */
            for (unsigned long long int i_5 = 1; i_5 < 23; i_5 += 1) 
            {
                arr_20 [i_5] = ((/* implicit */unsigned long long int) arr_4 [i_2 - 1] [(unsigned char)18]);
                var_27 = ((/* implicit */unsigned int) ((_Bool) 4294967293U));
            }
            for (unsigned char i_6 = 2; i_6 < 23; i_6 += 3) 
            {
                var_28 = ((/* implicit */int) ((((((/* implicit */_Bool) var_8)) ? (8734748720620064289ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_2 + 1] [i_2]))))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_1 + 2] [i_1 - 3] [(unsigned short)2] [i_1 + 1])))));
                var_29 = arr_7 [i_2];
            }
        }
    }
    for (unsigned short i_7 = 0; i_7 < 15; i_7 += 1) 
    {
        var_30 *= ((/* implicit */unsigned char) (~(8734748720620064325ULL)));
        var_31 -= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_7])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)104))) : (9711995353089487324ULL)))) ? (((/* implicit */unsigned long long int) min((-1745512289266174732LL), (-8736694179675953686LL)))) : (((((/* implicit */_Bool) arr_17 [i_7] [i_7] [i_7] [i_7])) ? (arr_21 [22U]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)113))))))) != (((unsigned long long int) ((arr_17 [i_7] [3] [i_7] [i_7]) << (((/* implicit */int) arr_7 [i_7])))))));
        /* LoopNest 3 */
        for (unsigned char i_8 = 0; i_8 < 15; i_8 += 2) 
        {
            for (unsigned short i_9 = 0; i_9 < 15; i_9 += 1) 
            {
                for (long long int i_10 = 0; i_10 < 15; i_10 += 1) 
                {
                    {
                        /* LoopSeq 2 */
                        for (int i_11 = 0; i_11 < 15; i_11 += 4) 
                        {
                            var_32 = ((1726459290449879130ULL) & (9711995353089487285ULL));
                            arr_33 [i_9] [i_8] [i_8] [6ULL] [i_8] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_15 [i_9] [i_9])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_9 [i_7] [i_7]), (arr_9 [i_7] [i_9]))))) : (12226033093539933455ULL)));
                        }
                        /* vectorizable */
                        for (long long int i_12 = 0; i_12 < 15; i_12 += 3) 
                        {
                            var_33 ^= ((/* implicit */unsigned char) (+(((/* implicit */int) arr_12 [i_7] [i_8] [(unsigned short)6] [i_10]))));
                            var_34 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)62226))))) ? (((((-1745512289266174763LL) + (9223372036854775807LL))) >> (((arr_23 [(signed char)9]) - (4489075662388083269ULL))))) : (((/* implicit */long long int) 300422453U))));
                        }
                        var_35 -= ((/* implicit */unsigned short) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) max((8734748720620064317ULL), (((/* implicit */unsigned long long int) (unsigned char)73))))) ? (((/* implicit */int) arr_16 [i_7] [i_8] [i_8] [i_8])) : (((((/* implicit */_Bool) arr_34 [i_10] [i_8] [i_8] [i_8] [i_8] [i_8] [i_7])) ? (((/* implicit */int) (signed char)63)) : (((/* implicit */int) (unsigned char)212))))))), (min((((((/* implicit */_Bool) arr_9 [i_9] [i_8])) ? (2030051914U) : (var_10))), (((/* implicit */unsigned int) (unsigned char)12))))));
                        var_36 = ((/* implicit */_Bool) max((((arr_11 [i_7] [i_7] [i_7]) ? (((((/* implicit */_Bool) (unsigned char)238)) ? (((/* implicit */int) arr_34 [(unsigned short)12] [i_9] [i_10] [i_10] [i_7] [i_9] [i_7])) : (((/* implicit */int) (signed char)-89)))) : (((/* implicit */int) arr_31 [i_9] [i_8] [i_8] [i_8] [i_8] [i_8] [i_8])))), (((/* implicit */int) arr_5 [6]))));
                    }
                } 
            } 
        } 
    }
    var_37 = ((/* implicit */signed char) ((unsigned long long int) var_9));
}
