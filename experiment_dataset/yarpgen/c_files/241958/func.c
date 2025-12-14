/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241958
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241958 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241958
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
    var_18 = (!(((/* implicit */_Bool) ((((/* implicit */long long int) max(((-2147483647 - 1)), (((/* implicit */int) (_Bool)1))))) - (var_5)))));
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        arr_2 [i_0] [1] = ((/* implicit */long long int) min((max((max((140737484161024ULL), (((/* implicit */unsigned long long int) var_14)))), (((/* implicit */unsigned long long int) arr_1 [i_0] [i_0])))), (((/* implicit */unsigned long long int) min((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0]))))));
        var_19 *= ((/* implicit */short) ((((/* implicit */_Bool) min((arr_1 [i_0] [i_0]), (((/* implicit */long long int) (short)32767))))) ? (arr_1 [(_Bool)1] [(_Bool)1]) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) arr_0 [i_0] [i_0])))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_5 [i_1] [i_1] = ((/* implicit */short) (-((+((-(((/* implicit */int) (short)-13312))))))));
        var_20 = ((/* implicit */int) min((((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_12)), (arr_4 [i_1])))) ? (((/* implicit */unsigned long long int) var_0)) : (((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_16))) : (arr_3 [i_1]))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_12)), (arr_4 [i_1])))) ? (((int) arr_3 [15])) : (((/* implicit */int) (unsigned short)19843)))))));
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_2 = 0; i_2 < 16; i_2 += 4) 
    {
        var_21 = ((/* implicit */short) arr_3 [i_2]);
        arr_8 [i_2] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_6 [i_2]))));
        /* LoopNest 2 */
        for (long long int i_3 = 0; i_3 < 16; i_3 += 3) 
        {
            for (short i_4 = 0; i_4 < 16; i_4 += 1) 
            {
                {
                    var_22 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) arr_11 [i_3])) : (arr_6 [i_2]))))));
                    var_23 = ((short) ((((/* implicit */_Bool) (short)-11332)) ? (((/* implicit */long long int) ((/* implicit */int) arr_13 [(unsigned short)13] [3ULL] [(short)11] [i_4]))) : (arr_9 [i_2])));
                }
            } 
        } 
        var_24 += ((/* implicit */long long int) arr_13 [i_2] [i_2] [i_2] [i_2]);
        var_25 = ((/* implicit */short) var_0);
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        var_26 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) (short)-11317)))))));
        var_27 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)14837)))))) <= (-11LL)));
        var_28 = ((/* implicit */short) arr_10 [i_5]);
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 15; i_6 += 2) 
        {
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                for (unsigned long long int i_8 = 0; i_8 < 15; i_8 += 2) 
                {
                    {
                        arr_24 [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)19842)) ? (arr_4 [i_8]) : (arr_4 [i_6])));
                        arr_25 [9ULL] [i_5] = ((/* implicit */unsigned long long int) ((((arr_14 [i_5]) + (9223372036854775807LL))) << (((((((/* implicit */int) var_2)) + (5842))) - (41)))));
                    }
                } 
            } 
        } 
        var_29 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_11 [i_5]))));
    }
}
