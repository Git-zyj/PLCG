/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19922
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19922 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19922
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
    var_15 = var_5;
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        arr_4 [11LL] = ((/* implicit */long long int) ((((/* implicit */int) ((unsigned short) arr_1 [i_0] [2ULL]))) >> ((((~(((var_1) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) (unsigned short)13598)))))) + (13603)))));
        var_16 += ((/* implicit */_Bool) ((1341039723U) & (((/* implicit */unsigned int) ((/* implicit */int) var_0)))));
        arr_5 [i_0] = ((/* implicit */long long int) (-(384U)));
        arr_6 [i_0] [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-3864))) >= (2953927572U)))) & ((~(arr_0 [i_0]))))) >= (((/* implicit */int) (!(((/* implicit */_Bool) -5551998970787606091LL)))))));
        var_17 = var_6;
    }
    /* vectorizable */
    for (unsigned int i_1 = 0; i_1 < 22; i_1 += 1) 
    {
        /* LoopSeq 1 */
        for (signed char i_2 = 2; i_2 < 21; i_2 += 1) 
        {
            /* LoopNest 3 */
            for (long long int i_3 = 1; i_3 < 20; i_3 += 4) 
            {
                for (unsigned int i_4 = 0; i_4 < 22; i_4 += 1) 
                {
                    for (unsigned int i_5 = 0; i_5 < 22; i_5 += 1) 
                    {
                        {
                            var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_12 [i_1] [i_2])) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_5])) || (((/* implicit */_Bool) var_0))))) : (((((/* implicit */int) var_10)) + (((/* implicit */int) var_7))))));
                            var_19 = ((/* implicit */unsigned int) (((((~(((/* implicit */int) var_6)))) + (2147483647))) << (((((/* implicit */int) (_Bool)1)) - (1)))));
                        }
                    } 
                } 
            } 
            /* LoopNest 2 */
            for (unsigned short i_6 = 0; i_6 < 22; i_6 += 4) 
            {
                for (unsigned int i_7 = 0; i_7 < 22; i_7 += 1) 
                {
                    {
                        arr_25 [i_1] [(_Bool)1] [i_2] [i_7] = ((/* implicit */unsigned long long int) arr_11 [i_2]);
                        /* LoopSeq 1 */
                        for (short i_8 = 2; i_8 < 21; i_8 += 3) 
                        {
                            var_20 = ((/* implicit */unsigned int) ((var_12) ? (((((((/* implicit */int) (signed char)-77)) + (2147483647))) << (((((arr_19 [i_2] [i_2] [i_6] [i_6] [i_7] [i_8]) + (5083483619099691156LL))) - (26LL))))) : (((/* implicit */int) (unsigned short)32752))));
                            arr_28 [i_1] [i_2] [(short)19] [i_1] [5LL] = ((/* implicit */short) (+(var_13)));
                        }
                    }
                } 
            } 
        }
        var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_27 [i_1])) * (((/* implicit */int) (_Bool)1))))) ? ((~(((/* implicit */int) (short)1082)))) : (((/* implicit */int) (unsigned short)32752))));
        arr_29 [i_1] [(signed char)16] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) -5551998970787606078LL)) ? (var_5) : (-5551998970787606056LL))) & (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)32752))) != (arr_20 [8] [(unsigned short)0])))))));
    }
    var_22 = ((/* implicit */signed char) var_8);
    var_23 = ((/* implicit */long long int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (short)63))) + (var_4))) - (((/* implicit */unsigned long long int) var_14))));
}
