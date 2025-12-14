/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245010
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245010 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245010
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
    for (signed char i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                {
                    var_18 = ((/* implicit */int) max((((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)3584)) ? (arr_5 [i_0] [i_0]) : (-1824080694490328285LL))))))), (arr_5 [i_1] [i_2])));
                    arr_7 [i_0] [i_1] = ((/* implicit */unsigned short) max((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-41)) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_2] [i_1] [i_0]))) : (arr_5 [i_1] [i_2])))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_1] [i_1])) && (((/* implicit */_Bool) arr_3 [i_0]))))) : ((+(((/* implicit */int) arr_4 [i_0]))))))), (((long long int) ((((/* implicit */_Bool) 16382U)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [4U]))))))));
                    arr_8 [(unsigned char)13] [i_2] = ((((/* implicit */long long int) -723612466)) - (arr_5 [i_0] [i_1]));
                    arr_9 [i_0] [i_1] = ((/* implicit */long long int) ((((/* implicit */int) ((unsigned short) arr_3 [i_2]))) % (((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) arr_3 [i_0]))))));
                    arr_10 [i_0] [0U] [i_2] [i_2] = (+(8720932900407840107ULL));
                }
            } 
        } 
        arr_11 [i_0] = ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) (signed char)-29))))));
        arr_12 [i_0] [i_0] = ((/* implicit */long long int) (unsigned short)54963);
    }
    for (int i_3 = 0; i_3 < 14; i_3 += 3) /* same iter space */
    {
        arr_17 [i_3] [i_3] |= ((/* implicit */long long int) arr_14 [i_3]);
        var_19 *= ((/* implicit */unsigned long long int) var_13);
        arr_18 [i_3] = arr_5 [i_3] [i_3];
        var_20 = ((/* implicit */unsigned int) (-((((!(((/* implicit */_Bool) 4815439771168654778LL)))) ? (-723612478) : (((/* implicit */int) (short)31678))))));
        arr_19 [i_3] = ((/* implicit */int) ((unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((var_4) ? (var_12) : (((/* implicit */long long int) -460241333)))) : (((/* implicit */long long int) max((((/* implicit */unsigned int) arr_14 [i_3])), (arr_13 [i_3])))))));
    }
    for (int i_4 = 0; i_4 < 14; i_4 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned char i_5 = 0; i_5 < 14; i_5 += 3) 
        {
            for (long long int i_6 = 0; i_6 < 14; i_6 += 1) 
            {
                {
                    var_21 = ((/* implicit */int) ((((((/* implicit */_Bool) arr_24 [i_4] [i_6])) && (((/* implicit */_Bool) (+(((/* implicit */int) arr_22 [i_5]))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((var_12) / (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_4] [i_5])))))) || (((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_3 [i_5])), (arr_21 [i_6] [i_4])))))))) : (var_16)));
                    arr_31 [i_5] [i_5] [(_Bool)1] [i_5] &= ((/* implicit */unsigned short) var_15);
                    var_22 = max((max((4932200794526832267LL), (((/* implicit */long long int) arr_3 [i_4])))), (((/* implicit */long long int) arr_26 [i_4] [i_5] [i_6])));
                }
            } 
        } 
        var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_26 [i_4] [i_4] [i_4])) ? (((/* implicit */int) arr_2 [i_4] [i_4] [i_4])) : (((/* implicit */int) ((short) var_15)))))) ? (((/* implicit */unsigned long long int) ((arr_20 [i_4] [i_4]) - (((/* implicit */unsigned int) ((/* implicit */int) arr_28 [i_4] [6LL] [(unsigned short)0])))))) : (max((((/* implicit */unsigned long long int) (-(arr_15 [i_4] [i_4])))), (var_6)))));
    }
    /* LoopNest 3 */
    for (long long int i_7 = 0; i_7 < 18; i_7 += 3) 
    {
        for (unsigned long long int i_8 = 1; i_8 < 17; i_8 += 2) 
        {
            for (short i_9 = 3; i_9 < 16; i_9 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned int i_10 = 1; i_10 < 17; i_10 += 4) 
                    {
                        arr_41 [i_7] [i_8] [i_9] [i_10 + 1] = ((((/* implicit */long long int) var_8)) % (arr_5 [i_9 + 1] [i_8 - 1]));
                        var_24 = ((/* implicit */long long int) 3504884747U);
                    }
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        arr_44 [i_7] [i_8] [i_8] [i_11] = min((3504884747U), (((/* implicit */unsigned int) 723612460)));
                        var_25 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((arr_37 [i_11] [i_8 + 1] [i_8 + 1] [i_7]) + (((/* implicit */int) arr_40 [i_7] [i_7] [i_7] [(unsigned char)6])))), ((-(((/* implicit */int) var_4))))))) && (((/* implicit */_Bool) var_0))));
                        var_26 = (i_8 % 2 == 0) ? (((/* implicit */int) ((1786783224424776615LL) << (((((((unsigned long long int) 9725811173301711508ULL)) + (((/* implicit */unsigned long long int) ((((/* implicit */int) var_10)) + (((/* implicit */int) arr_39 [i_7] [i_8]))))))) - (9725811173301711718ULL)))))) : (((/* implicit */int) ((1786783224424776615LL) << (((((((((unsigned long long int) 9725811173301711508ULL)) + (((/* implicit */unsigned long long int) ((((/* implicit */int) var_10)) + (((/* implicit */int) arr_39 [i_7] [i_8]))))))) - (9725811173301711718ULL))) - (21ULL))))));
                    }
                    arr_45 [i_8] [i_8] [i_8] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_9]))));
                }
            } 
        } 
    } 
}
