/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237907
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237907 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237907
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
    for (unsigned int i_0 = 1; i_0 < 14; i_0 += 3) 
    {
        var_11 ^= ((/* implicit */short) ((((arr_1 [i_0 - 1]) / (((/* implicit */unsigned int) (+(536870848)))))) / (2377461325U)));
        var_12 = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)32767))) < (arr_1 [i_0 + 1])))) <= (((((/* implicit */int) ((2377461325U) < (2377461335U)))) >> (((/* implicit */int) ((arr_0 [i_0] [(short)12]) < (1390889919))))))));
        var_13 ^= ((/* implicit */short) (-(((/* implicit */int) ((((/* implicit */int) (short)-32760)) < (((/* implicit */int) var_0)))))));
    }
    for (short i_1 = 0; i_1 < 19; i_1 += 3) 
    {
        var_14 = ((/* implicit */short) (+(((unsigned int) (short)32767))));
        var_15 = ((/* implicit */short) (~(((/* implicit */int) (short)32767))));
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 18; i_2 += 1) 
        {
            for (int i_3 = 2; i_3 < 16; i_3 += 2) 
            {
                {
                    arr_8 [i_2] [i_2 - 1] [i_2 - 1] [i_3 + 3] = ((/* implicit */int) var_5);
                    var_16 = ((int) arr_3 [i_1]);
                }
            } 
        } 
    }
    var_17 = ((1133604437) & (((/* implicit */int) (short)10359)));
    var_18 = ((/* implicit */int) var_6);
    /* LoopSeq 1 */
    for (int i_4 = 4; i_4 < 20; i_4 += 3) 
    {
        arr_12 [i_4] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) (-(2582641671U)))) || (((/* implicit */_Bool) ((((/* implicit */int) var_7)) / (var_4))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (int i_5 = 3; i_5 < 18; i_5 += 1) 
        {
            var_19 -= ((/* implicit */int) ((short) arr_11 [i_5 + 3] [i_5 - 1]));
            var_20 = ((/* implicit */unsigned int) max((var_20), (arr_14 [i_4] [i_4] [(short)13])));
        }
        for (int i_6 = 0; i_6 < 22; i_6 += 1) 
        {
            arr_20 [i_6] = ((/* implicit */short) -1133604436);
            arr_21 [i_6] = ((/* implicit */int) arr_11 [i_4] [i_4]);
        }
        var_21 = ((/* implicit */int) (~(((unsigned int) -1133604438))));
    }
    /* LoopSeq 1 */
    for (unsigned int i_7 = 0; i_7 < 24; i_7 += 4) 
    {
        /* LoopSeq 2 */
        for (unsigned int i_8 = 1; i_8 < 22; i_8 += 2) /* same iter space */
        {
            arr_28 [i_8] [i_8] [i_7] = var_3;
            var_22 = ((/* implicit */unsigned int) (-(arr_26 [i_8])));
            arr_29 [i_7] = ((/* implicit */short) ((int) ((arr_27 [i_8 + 1] [i_8 + 1] [i_8 + 2]) < (arr_27 [i_8 + 1] [i_8 + 1] [i_8 + 1]))));
        }
        for (unsigned int i_9 = 1; i_9 < 22; i_9 += 2) /* same iter space */
        {
            arr_32 [i_9] = ((/* implicit */unsigned int) ((910332814) << (((((unsigned int) 1073217536U)) - (1073217535U)))));
            var_23 = ((/* implicit */short) ((((arr_31 [i_9 + 1] [i_9 + 2] [i_9 - 1]) ^ (((/* implicit */unsigned int) ((/* implicit */int) ((var_6) < (((/* implicit */unsigned int) arr_26 [i_9])))))))) & ((-(var_2)))));
        }
        arr_33 [i_7] &= ((/* implicit */short) ((((var_9) / (((/* implicit */unsigned int) ((/* implicit */int) arr_25 [i_7]))))) >> (((((/* implicit */int) arr_25 [i_7])) - (1938)))));
        arr_34 [i_7] = ((/* implicit */int) ((((/* implicit */_Bool) (~(4161844417U)))) || (((/* implicit */_Bool) (+(arr_31 [i_7] [5] [i_7]))))));
    }
}
