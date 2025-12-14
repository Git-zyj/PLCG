/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241489
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241489 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241489
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
    var_12 = ((/* implicit */short) ((unsigned char) (unsigned char)253));
    /* LoopSeq 4 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (signed char i_1 = 2; i_1 < 14; i_1 += 2) 
        {
            arr_5 [11ULL] [i_1] [i_0] = ((/* implicit */short) ((((/* implicit */int) arr_3 [i_0])) / (arr_2 [i_1 - 1])));
            arr_6 [i_0] = (!(((/* implicit */_Bool) arr_2 [i_1 - 2])));
            var_13 *= ((/* implicit */unsigned int) ((var_4) & (((/* implicit */int) var_2))));
        }
        /* LoopNest 3 */
        for (long long int i_2 = 0; i_2 < 15; i_2 += 3) 
        {
            for (int i_3 = 1; i_3 < 14; i_3 += 3) 
            {
                for (unsigned long long int i_4 = 0; i_4 < 15; i_4 += 4) 
                {
                    {
                        arr_14 [(_Bool)1] [i_0] [i_4] [i_0] = ((/* implicit */unsigned short) arr_9 [i_4]);
                        var_14 = ((/* implicit */unsigned short) var_6);
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        var_15 = ((/* implicit */short) ((unsigned long long int) arr_16 [i_5]));
        var_16 -= ((/* implicit */int) arr_1 [8ULL]);
    }
    for (short i_6 = 0; i_6 < 22; i_6 += 3) 
    {
        arr_20 [i_6] [i_6] = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((_Bool) arr_17 [i_6] [(_Bool)1])))))) + (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 0U)) ? (1410373366) : (((/* implicit */int) arr_19 [i_6]))))) : (((((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_6]))) * (0U)))))));
        var_17 = ((/* implicit */unsigned char) -512780735);
        var_18 = ((_Bool) ((((/* implicit */_Bool) arr_18 [i_6] [i_6])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (var_11)));
    }
    for (long long int i_7 = 0; i_7 < 21; i_7 += 3) 
    {
        var_19 ^= ((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_18 [i_7] [i_7])) : (((/* implicit */int) arr_19 [i_7])))))))));
        var_20 = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) (!((_Bool)1))))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_19 [i_7]))) : (0LL)));
        /* LoopNest 3 */
        for (unsigned long long int i_8 = 0; i_8 < 21; i_8 += 3) 
        {
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                for (int i_10 = 0; i_10 < 21; i_10 += 2) 
                {
                    {
                        arr_33 [14ULL] [i_8] [14ULL] [i_7] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)18))) & (arr_24 [i_7] [i_8] [i_7])))) ? (((var_11) + (((/* implicit */unsigned int) (+(((/* implicit */int) arr_22 [4ULL] [i_8]))))))) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                        var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) ((short) (-(((/* implicit */int) (short)-954))))))));
                        arr_34 [i_7] [i_8] [i_9] [7] = ((/* implicit */_Bool) arr_27 [i_7] [i_8] [i_9] [i_10]);
                        var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((512780711) << (((/* implicit */int) min((var_9), (arr_29 [i_7] [i_7] [i_7] [(unsigned char)12]))))))) ? (((/* implicit */unsigned long long int) ((int) max((((/* implicit */short) (_Bool)1)), ((short)32748))))) : (arr_24 [i_9] [i_8] [i_7])));
                    }
                } 
            } 
        } 
        var_23 = ((/* implicit */int) max((var_23), (max((((/* implicit */int) arr_19 [i_7])), (((((arr_28 [2ULL] [i_7]) + (2147483647))) << (((var_11) - (1487233171U)))))))));
    }
}
