/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217432
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217432 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217432
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 8; i_1 += 2) 
        {
            for (int i_2 = 4; i_2 < 9; i_2 += 1) 
            {
                {
                    var_10 ^= ((/* implicit */long long int) (unsigned short)63538);
                    var_11 = ((/* implicit */unsigned long long int) ((unsigned short) max((max((((/* implicit */unsigned int) var_0)), (arr_2 [i_0] [i_1 + 2]))), (arr_2 [i_0] [i_1 - 2]))));
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned int i_3 = 0; i_3 < 11; i_3 += 3) 
    {
        var_12 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(arr_10 [i_3] [i_3])))) ? ((((!(var_9))) ? (((((/* implicit */_Bool) arr_9 [i_3] [i_3])) ? (arr_10 [i_3] [i_3]) : (((/* implicit */unsigned long long int) var_3)))) : (((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)22))) : (4611686018427387904ULL))))) : (min(((-(26ULL))), (((/* implicit */unsigned long long int) (short)-2007))))));
        var_13 = ((/* implicit */_Bool) min((((/* implicit */int) arr_8 [i_3])), (((((/* implicit */_Bool) 262143U)) ? (arr_9 [i_3] [i_3]) : (((/* implicit */int) arr_8 [i_3]))))));
        /* LoopNest 3 */
        for (unsigned int i_4 = 0; i_4 < 11; i_4 += 1) 
        {
            for (unsigned int i_5 = 1; i_5 < 10; i_5 += 2) 
            {
                for (signed char i_6 = 3; i_6 < 9; i_6 += 4) 
                {
                    {
                        arr_18 [i_3] = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_15 [i_3] [i_3] [i_3] [i_3]))));
                        arr_19 [i_6] [i_6 - 3] [i_6] [i_3] [i_6 - 2] [i_6 + 2] = ((/* implicit */_Bool) arr_16 [i_3]);
                        var_14 = min((((((/* implicit */unsigned long long int) min((var_3), (((/* implicit */unsigned int) arr_13 [i_5] [i_5] [i_5] [i_5]))))) - (((unsigned long long int) arr_10 [i_4] [i_6])))), (((((/* implicit */_Bool) ((var_4) / (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_3])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_3] [i_3] [i_3] [i_6]))) : (min((((/* implicit */unsigned long long int) var_1)), (13835058055282163702ULL))))));
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
    {
        var_15 = ((/* implicit */int) min((var_15), (((/* implicit */int) ((long long int) arr_3 [i_7] [6U])))));
        var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) (-((+(((/* implicit */int) var_0)))))))));
    }
    var_17 = (~(var_7));
}
