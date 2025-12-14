/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26071
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26071 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26071
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
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        var_13 = (((_Bool)0) ? (4294967280U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))));
        /* LoopNest 3 */
        for (short i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            for (short i_2 = 3; i_2 < 8; i_2 += 4) 
            {
                for (signed char i_3 = 2; i_3 < 7; i_3 += 1) 
                {
                    {
                        var_14 -= ((/* implicit */signed char) 8388607U);
                        var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) ((((/* implicit */_Bool) ((arr_8 [i_2] [i_1]) << (((((/* implicit */int) (signed char)-22)) + (27)))))) ? ((+(((/* implicit */int) arr_4 [i_2 - 3] [i_2 + 1] [i_3 + 2])))) : (((/* implicit */int) arr_7 [(short)8] [i_1])))))));
                    }
                } 
            } 
        } 
    }
    for (unsigned int i_4 = 0; i_4 < 25; i_4 += 2) 
    {
        /* LoopNest 2 */
        for (signed char i_5 = 0; i_5 < 25; i_5 += 4) 
        {
            for (unsigned int i_6 = 2; i_6 < 22; i_6 += 4) 
            {
                {
                    arr_16 [i_4] [18U] [i_4] [i_4] = ((/* implicit */unsigned int) arr_11 [i_5]);
                    var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) ((((/* implicit */unsigned int) (-(((/* implicit */int) arr_10 [i_5]))))) > (arr_14 [i_6 - 1] [i_6 + 1] [(signed char)20]))))));
                }
            } 
        } 
        var_17 ^= (-(((((((/* implicit */unsigned int) ((/* implicit */int) (short)6334))) + (arr_15 [i_4] [i_4]))) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_2))))));
        /* LoopNest 2 */
        for (short i_7 = 0; i_7 < 25; i_7 += 4) 
        {
            for (short i_8 = 1; i_8 < 21; i_8 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_9 = 0; i_9 < 25; i_9 += 4) 
                    {
                        for (unsigned int i_10 = 0; i_10 < 25; i_10 += 1) 
                        {
                            {
                                var_18 = ((/* implicit */_Bool) arr_17 [i_9] [i_7]);
                                var_19 = ((/* implicit */_Bool) min((((/* implicit */short) (!(((/* implicit */_Bool) (signed char)4))))), (max(((short)15058), ((short)23637)))));
                                var_20 = ((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1))));
                            }
                        } 
                    } 
                    var_21 ^= ((/* implicit */_Bool) var_3);
                    var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) var_11))))) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) (_Bool)1))));
                }
            } 
        } 
        /* LoopNest 3 */
        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
        {
            for (unsigned int i_12 = 0; i_12 < 25; i_12 += 2) 
            {
                for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                {
                    {
                        var_23 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-20399))) & (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-1))) ^ (arr_20 [i_13])))));
                        arr_41 [i_13] [i_13] [i_12] [i_11] [i_4] [i_4] = ((/* implicit */_Bool) (-((~(((/* implicit */int) var_11))))));
                        var_24 = ((/* implicit */short) ((((((/* implicit */int) (short)-20396)) >= (((/* implicit */int) (signed char)125)))) ? (((arr_20 [i_4]) | (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((arr_38 [i_4] [i_4] [i_4]) && (((/* implicit */_Bool) arr_20 [i_4])))))) > (((var_8) * (((/* implicit */unsigned int) ((/* implicit */int) arr_38 [(_Bool)1] [i_12] [i_13])))))))))));
                    }
                } 
            } 
        } 
    }
    var_25 = ((/* implicit */_Bool) ((((((((/* implicit */int) var_0)) == (((/* implicit */int) (_Bool)1)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (var_4))) >> (((var_12) - (3811780953U)))));
    var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) (-((-(1931456151U))))))));
}
