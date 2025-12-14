/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31977
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31977 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31977
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
    var_14 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned short) ((((/* implicit */int) var_4)) == (((/* implicit */int) (unsigned short)6)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_3)) <= (((/* implicit */int) var_12)))))) ^ (((unsigned long long int) (short)-30119))))));
    var_15 = ((min((((((/* implicit */_Bool) (short)-30119)) ? (((/* implicit */int) (short)-30119)) : (((/* implicit */int) var_12)))), (((((/* implicit */int) (unsigned short)65533)) + (((/* implicit */int) (short)30099)))))) > (((((/* implicit */_Bool) var_8)) ? ((+(((/* implicit */int) var_6)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_0))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (unsigned short i_1 = 1; i_1 < 14; i_1 += 3) 
        {
            {
                arr_6 [i_0] [i_1] = ((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_1 + 1])) ? (((/* implicit */int) arr_0 [i_1 - 1])) : (((/* implicit */int) arr_0 [i_1 + 1])))));
                arr_7 [i_0] [i_0] = ((/* implicit */unsigned short) max((arr_4 [i_0] [i_0] [i_1]), (((/* implicit */unsigned long long int) (short)-30105))));
            }
        } 
    } 
    /* LoopSeq 3 */
    /* vectorizable */
    for (short i_2 = 3; i_2 < 20; i_2 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned short i_3 = 1; i_3 < 20; i_3 += 3) 
        {
            for (unsigned long long int i_4 = 0; i_4 < 21; i_4 += 3) 
            {
                for (unsigned short i_5 = 4; i_5 < 20; i_5 += 4) 
                {
                    {
                        arr_20 [i_4] = ((/* implicit */short) ((((((/* implicit */int) arr_11 [i_2] [i_2] [i_5 + 1])) >> (((((/* implicit */int) (unsigned short)5432)) - (5432))))) <= (((/* implicit */int) ((unsigned short) arr_10 [i_2])))));
                        arr_21 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */short) ((_Bool) (+(((/* implicit */int) (unsigned short)8128)))));
                        arr_22 [i_2 - 1] [i_3] [i_4] = ((((/* implicit */_Bool) arr_12 [i_2] [i_5 - 3])) ? (((((/* implicit */_Bool) (short)21336)) ? (16420820540095702893ULL) : (var_9))) : (((/* implicit */unsigned long long int) ((var_12) ? (((/* implicit */int) (short)30124)) : (((/* implicit */int) arr_13 [i_4] [i_5 - 1]))))));
                    }
                } 
            } 
        } 
        arr_23 [i_2] [i_2 - 2] = (!((_Bool)1));
    }
    /* vectorizable */
    for (short i_6 = 0; i_6 < 24; i_6 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned short i_7 = 0; i_7 < 24; i_7 += 4) 
        {
            for (unsigned long long int i_8 = 0; i_8 < 24; i_8 += 4) 
            {
                {
                    arr_32 [i_6] [i_6] [i_6] [i_8] = ((/* implicit */_Bool) (-(((/* implicit */int) arr_25 [i_6]))));
                    arr_33 [i_6] [i_7] [i_6] = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_26 [i_6] [i_8]))));
                    arr_34 [i_6] [i_6] [i_8] = ((/* implicit */short) ((((/* implicit */_Bool) (short)2640)) && (((/* implicit */_Bool) (short)8710))));
                }
            } 
        } 
        arr_35 [i_6] = ((/* implicit */short) arr_31 [i_6] [i_6] [i_6] [i_6]);
        arr_36 [i_6] = ((/* implicit */short) (~(((/* implicit */int) arr_29 [i_6] [i_6] [i_6] [i_6]))));
        arr_37 [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_31 [i_6] [i_6] [i_6] [i_6])) + (((/* implicit */int) arr_26 [i_6] [i_6]))));
    }
    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
    {
        arr_40 [i_9] [i_9] = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)35154))))))) ? (((/* implicit */int) ((unsigned short) min((((/* implicit */short) var_12)), (arr_13 [i_9] [i_9]))))) : (((((/* implicit */_Bool) (unsigned short)1792)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) ((short) (short)-31302)))))));
        arr_41 [i_9] = ((/* implicit */short) ((_Bool) (!(((/* implicit */_Bool) 511ULL)))));
    }
}
