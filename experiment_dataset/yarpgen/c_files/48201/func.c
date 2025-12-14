/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48201
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48201 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48201
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
    var_19 &= ((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned char) max((((/* implicit */long long int) var_2)), (var_18))))) - (((/* implicit */int) var_2))));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 4) /* same iter space */
    {
        var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) -3292671247637729399LL)) ? (-3292671247637729396LL) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) -3292671247637729407LL))))))))));
        var_21 = ((/* implicit */int) var_12);
        var_22 = ((/* implicit */signed char) ((unsigned int) arr_2 [i_0]));
    }
    for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 4) /* same iter space */
    {
        var_23 += ((/* implicit */unsigned long long int) max((((/* implicit */int) ((short) max((3292671247637729391LL), (3292671247637729387LL))))), (max((((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */int) arr_4 [i_1])) : (((/* implicit */int) var_3)))), (((/* implicit */int) arr_3 [i_1]))))));
        var_24 = ((/* implicit */signed char) ((((/* implicit */int) arr_3 [i_1])) == (((/* implicit */int) max((arr_3 [i_1]), (arr_3 [i_1]))))));
        /* LoopSeq 1 */
        for (int i_2 = 0; i_2 < 21; i_2 += 4) 
        {
            /* LoopSeq 2 */
            for (long long int i_3 = 3; i_3 < 20; i_3 += 3) 
            {
                var_25 = ((/* implicit */unsigned short) arr_6 [i_3 - 3] [i_3 - 3] [i_3 - 1]);
                var_26 = ((/* implicit */unsigned short) ((3292671247637729363LL) >> (((((((/* implicit */_Bool) ((-3292671247637729360LL) - (3292671247637729396LL)))) ? (((((/* implicit */long long int) ((/* implicit */int) var_2))) | (-3292671247637729399LL))) : (3292671247637729396LL))) + (77LL)))));
            }
            for (unsigned short i_4 = 0; i_4 < 21; i_4 += 4) 
            {
                var_27 -= ((/* implicit */int) arr_4 [i_1]);
                var_28 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) -3292671247637729399LL)) ? (-3292671247637729382LL) : (3292671247637729370LL)));
            }
            var_29 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_1])) ? (((((/* implicit */_Bool) ((unsigned char) var_1))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */int) arr_1 [i_1] [i_1])) : (((/* implicit */int) arr_8 [i_2]))))) : (((long long int) arr_11 [i_1] [i_1] [i_1])))) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_1] [i_1] [i_1])))));
            /* LoopSeq 1 */
            for (long long int i_5 = 1; i_5 < 20; i_5 += 1) 
            {
                arr_14 [i_1] [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned char) ((int) arr_4 [i_1])))) ? (((/* implicit */int) ((unsigned char) ((var_6) / (((/* implicit */int) arr_5 [i_5])))))) : (((/* implicit */int) ((short) ((_Bool) arr_7 [i_1] [i_5]))))));
                var_30 = ((/* implicit */unsigned int) ((unsigned short) ((signed char) arr_12 [i_5] [i_5] [i_5 - 1] [i_5 + 1])));
                arr_15 [i_5] [i_2] [i_5] = ((long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_7))) >= (((unsigned int) var_18))));
                var_31 = ((/* implicit */_Bool) arr_2 [i_2]);
            }
            var_32 = ((/* implicit */unsigned int) arr_13 [i_1] [i_2]);
            arr_16 [i_1] [i_1] = ((/* implicit */unsigned int) ((((((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1]))) : (max((3292671247637729408LL), (3292671247637729410LL))))) + (9223372036854775807LL))) << (((((/* implicit */int) ((unsigned short) ((int) var_4)))) - (8057)))));
        }
    }
    for (unsigned long long int i_6 = 0; i_6 < 21; i_6 += 4) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned short i_7 = 0; i_7 < 21; i_7 += 1) 
        {
            var_33 -= ((/* implicit */signed char) arr_19 [i_7] [i_6]);
            var_34 = ((/* implicit */signed char) arr_7 [i_6] [i_7]);
        }
        arr_23 [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (var_1)))) ? (((/* implicit */long long int) arr_9 [i_6] [i_6])) : (((var_5) & (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_6] [i_6] [i_6])))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (arr_18 [i_6] [i_6]) : (var_16)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_17)))) : (((unsigned int) var_13)))) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) max((((/* implicit */unsigned long long int) var_1)), (arr_22 [i_6] [i_6] [i_6]))))))));
        /* LoopSeq 3 */
        for (unsigned short i_8 = 1; i_8 < 20; i_8 += 1) 
        {
            var_35 -= ((/* implicit */unsigned int) arr_11 [i_6] [i_8 + 1] [i_8 + 1]);
            arr_27 [i_6] [i_8] [i_6] = ((/* implicit */_Bool) max((min((var_4), (((/* implicit */unsigned long long int) arr_24 [i_8] [i_8 + 1])))), (((/* implicit */unsigned long long int) var_12))));
        }
        for (long long int i_9 = 0; i_9 < 21; i_9 += 4) 
        {
            arr_30 [i_6] = ((arr_22 [i_6] [i_9] [i_9]) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_17))));
            var_36 = ((/* implicit */_Bool) var_8);
            var_37 = ((/* implicit */_Bool) max((var_37), (((/* implicit */_Bool) var_16))));
        }
        for (unsigned short i_10 = 1; i_10 < 20; i_10 += 4) 
        {
            var_38 = ((/* implicit */long long int) arr_26 [i_10]);
            var_39 = ((/* implicit */signed char) max((3292671247637729396LL), (-3292671247637729401LL)));
        }
    }
    var_40 = ((/* implicit */int) ((((/* implicit */_Bool) max((var_11), (var_11)))) ? (((/* implicit */long long int) var_11)) : (((((var_18) + (9223372036854775807LL))) << (((((((/* implicit */int) ((short) 3292671247637729368LL))) + (12262))) - (62)))))));
}
