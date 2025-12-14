/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228390
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228390 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228390
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
    for (int i_0 = 1; i_0 < 14; i_0 += 4) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned int i_1 = 4; i_1 < 16; i_1 += 2) 
        {
            /* LoopSeq 1 */
            for (unsigned short i_2 = 0; i_2 < 17; i_2 += 1) 
            {
                arr_8 [i_0] [i_1] = ((/* implicit */unsigned long long int) ((unsigned int) ((var_5) ? (1399433264U) : (((/* implicit */unsigned int) ((/* implicit */int) var_13))))));
                /* LoopSeq 2 */
                for (int i_3 = 3; i_3 < 16; i_3 += 4) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_4 = 4; i_4 < 15; i_4 += 4) 
                    {
                        var_17 = arr_3 [i_3];
                        var_18 = ((/* implicit */unsigned int) ((short) var_8));
                    }
                    arr_13 [i_0] [i_0] = ((unsigned long long int) ((unsigned int) 8627123580576153766LL));
                }
                for (int i_5 = 3; i_5 < 16; i_5 += 4) /* same iter space */
                {
                    var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_1])) ? ((~(9223372036854775807LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_10 [i_0 + 2] [i_1] [i_1] [i_2] [i_5])) ? (((/* implicit */int) arr_6 [i_0])) : (arr_16 [i_5] [i_0] [i_2] [i_1] [i_0] [i_0]))))));
                    var_20 = ((/* implicit */unsigned short) arr_3 [i_1 - 1]);
                }
                arr_17 [i_0] [i_1] [i_0] [i_1] = ((/* implicit */signed char) 1968924592);
                arr_18 [i_0] = ((/* implicit */unsigned short) ((unsigned char) arr_11 [i_0] [i_0 - 1] [i_1] [i_1] [i_1 - 3]));
                var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) (((!(((/* implicit */_Bool) (signed char)127)))) ? (((((/* implicit */_Bool) var_16)) ? (var_15) : (((/* implicit */unsigned long long int) -1968924610)))) : (((((/* implicit */_Bool) arr_15 [i_2] [i_2] [i_2] [i_1] [i_0])) ? (var_4) : (((/* implicit */unsigned long long int) 1968924595)))))))));
            }
            var_22 ^= ((unsigned long long int) var_6);
            arr_19 [i_0] [i_1] [i_0] = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) arr_5 [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)44977))) : (4294967295U)))));
        }
        for (unsigned int i_6 = 0; i_6 < 17; i_6 += 2) 
        {
            /* LoopNest 2 */
            for (short i_7 = 1; i_7 < 16; i_7 += 1) 
            {
                for (int i_8 = 1; i_8 < 15; i_8 += 4) 
                {
                    {
                        var_23 = ((/* implicit */unsigned short) ((int) arr_24 [i_0] [i_6] [i_0] [i_6]));
                        var_24 = ((/* implicit */signed char) ((((((/* implicit */long long int) min((var_9), (((/* implicit */unsigned int) arr_9 [i_0] [i_7] [i_6] [i_0]))))) >= (((((/* implicit */_Bool) arr_4 [i_0] [i_7])) ? (((/* implicit */long long int) ((/* implicit */int) (short)-32758))) : (-1604453707475040686LL))))) ? (min((-1968924606), (((/* implicit */int) var_13)))) : (((/* implicit */int) arr_27 [i_0] [i_6] [i_7] [i_8] [i_8] [i_8]))));
                        arr_29 [i_0] [i_6] [i_7 + 1] [i_8 + 2] = ((/* implicit */_Bool) min((((arr_21 [i_7 + 1]) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_22 [i_0]))))) : (arr_3 [i_6]))), (((/* implicit */unsigned long long int) ((arr_24 [i_0] [i_6] [i_7] [i_8]) ? (((/* implicit */int) arr_21 [i_0])) : ((~(((/* implicit */int) (unsigned short)45008)))))))));
                        var_25 = ((/* implicit */signed char) ((((((/* implicit */_Bool) 1968924609)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))) : (((((/* implicit */_Bool) (unsigned short)33152)) ? (((/* implicit */unsigned long long int) var_0)) : (14466543014130717284ULL))))) % (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_23 [i_0 + 1] [i_0] [i_7])))))));
                    }
                } 
            } 
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned long long int i_9 = 0; i_9 < 17; i_9 += 4) /* same iter space */
            {
                var_26 = ((/* implicit */int) min((var_26), (((((/* implicit */int) (unsigned short)20544)) + (((/* implicit */int) arr_1 [i_6]))))));
                /* LoopSeq 1 */
                for (signed char i_10 = 0; i_10 < 17; i_10 += 1) 
                {
                    var_27 = ((/* implicit */int) -2109328846437782730LL);
                    var_28 = ((/* implicit */unsigned int) max((var_28), (((/* implicit */unsigned int) ((signed char) var_7)))));
                    var_29 = ((/* implicit */long long int) 1146022626230968976ULL);
                }
                var_30 = ((/* implicit */short) ((_Bool) ((arr_3 [i_6]) - (20ULL))));
                var_31 = ((/* implicit */short) min((var_31), (((/* implicit */short) var_4))));
            }
            for (unsigned long long int i_11 = 0; i_11 < 17; i_11 += 4) /* same iter space */
            {
                var_32 -= ((/* implicit */unsigned int) (-(min((((/* implicit */long long int) ((((/* implicit */_Bool) 1604453707475040682LL)) ? (((/* implicit */int) (unsigned short)44977)) : (1968924595)))), (arr_37 [i_6] [i_6] [i_11])))));
                var_33 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_37 [i_0] [i_6] [i_6])) ? (((/* implicit */int) ((short) arr_14 [i_0] [i_6]))) : (((((/* implicit */_Bool) arr_4 [i_0] [i_6])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_4 [i_6] [i_0]))))))) - (arr_15 [i_0 + 2] [i_6] [i_11] [i_6] [i_6])));
                arr_38 [i_0] [i_6] = ((/* implicit */unsigned long long int) (~((~((~(arr_14 [i_11] [i_6])))))));
            }
            var_34 = ((/* implicit */_Bool) var_12);
            var_35 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) var_5)), (max((arr_12 [i_6] [i_0] [i_0]), (((/* implicit */long long int) (short)16125))))))) ? (((/* implicit */int) max((arr_23 [i_0 + 2] [i_0] [i_0]), (arr_23 [i_0 + 2] [i_0] [i_0])))) : (((((/* implicit */_Bool) ((unsigned int) arr_22 [i_6]))) ? (var_1) : (((/* implicit */int) max((var_7), ((short)-32765))))))));
        }
        var_36 = ((/* implicit */unsigned int) var_16);
    }
    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
    {
        var_37 = ((/* implicit */unsigned char) arr_0 [i_12]);
        arr_41 [i_12] |= ((/* implicit */signed char) ((long long int) 4294967292U));
    }
    for (short i_13 = 4; i_13 < 13; i_13 += 1) 
    {
        arr_44 [i_13] |= ((/* implicit */unsigned short) (short)32767);
        arr_45 [i_13] [i_13] = ((/* implicit */int) arr_4 [i_13] [i_13]);
        var_38 = ((/* implicit */unsigned int) min((var_38), (((/* implicit */unsigned int) ((signed char) var_6)))));
    }
    var_39 = ((/* implicit */signed char) var_7);
    var_40 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) var_8)), (1604453707475040705LL)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-10)) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) (short)-16128))))) : (var_9)))), (min((((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) 1968924595)) : (var_2))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)44977)))))))));
}
