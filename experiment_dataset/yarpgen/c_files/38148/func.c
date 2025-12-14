/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38148
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38148 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38148
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
    for (long long int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */long long int) max((((((/* implicit */_Bool) min((arr_1 [i_0]), (((/* implicit */unsigned char) (_Bool)1))))) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_0 [i_0]) : (((/* implicit */unsigned long long int) var_1)))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_4))))))), (((/* implicit */unsigned long long int) (~(((long long int) arr_1 [i_0])))))));
        arr_3 [i_0] = ((/* implicit */_Bool) ((short) arr_0 [2ULL]));
    }
    for (long long int i_1 = 3; i_1 < 9; i_1 += 4) 
    {
        arr_6 [i_1] = ((/* implicit */signed char) var_0);
        arr_7 [i_1] [i_1] = ((/* implicit */unsigned char) ((signed char) max((((/* implicit */unsigned int) (short)-32425)), (arr_5 [i_1]))));
        arr_8 [i_1] [i_1] = ((/* implicit */unsigned char) (short)32425);
        /* LoopSeq 1 */
        for (long long int i_2 = 1; i_2 < 7; i_2 += 1) 
        {
            arr_11 [i_1 - 3] [i_1] = ((/* implicit */signed char) (+(((/* implicit */int) var_8))));
            /* LoopNest 3 */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    for (unsigned int i_5 = 0; i_5 < 10; i_5 += 2) 
                    {
                        {
                            var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) (short)32425)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (arr_18 [i_2 - 1] [i_2] [i_2] [i_4] [i_1]))), (((/* implicit */long long int) var_6))))) ? (((((/* implicit */_Bool) ((unsigned long long int) var_3))) ? (arr_0 [i_3]) : (((/* implicit */unsigned long long int) max((3799508884U), (3799508854U)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) ((signed char) arr_0 [1U])))))));
                            arr_20 [i_1 - 1] [i_1] [i_3] [i_4] [i_5] [i_5] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_13 [i_1] [i_1] [i_3] [i_4]), (((/* implicit */unsigned long long int) var_12))))) ? (2048542791423972070LL) : (((/* implicit */long long int) ((/* implicit */int) ((short) arr_4 [i_1]))))))), (((7962605491221600561ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_17 [i_1] [i_1] [i_1] [i_1] [i_5]))))))));
                            arr_21 [9LL] [9LL] [9LL] [i_1] [9LL] = 1632001223316257631ULL;
                            arr_22 [i_1] [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_13)) - (((/* implicit */int) var_9))))) ? (495458427U) : (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */short) var_11)), (max((((/* implicit */short) var_6)), ((short)32417)))))))));
                        }
                    } 
                } 
            } 
            var_15 = ((/* implicit */short) 2048542791423972070LL);
        }
        arr_23 [i_1] = ((/* implicit */unsigned long long int) ((var_0) >= (((/* implicit */long long int) ((/* implicit */int) max((((_Bool) var_1)), (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)32416))) == (var_7)))))))));
    }
    for (short i_6 = 0; i_6 < 20; i_6 += 2) 
    {
        var_16 = ((/* implicit */unsigned long long int) ((long long int) ((max((((/* implicit */unsigned long long int) (short)-32446)), (var_7))) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_25 [i_6])))))));
        /* LoopNest 3 */
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            for (short i_8 = 0; i_8 < 20; i_8 += 1) 
            {
                for (unsigned long long int i_9 = 0; i_9 < 20; i_9 += 1) 
                {
                    {
                        var_17 = ((/* implicit */_Bool) ((((((/* implicit */int) (short)-32421)) + (2147483647))) >> (((((/* implicit */int) ((short) (short)32424))) - (32395)))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (short i_10 = 0; i_10 < 20; i_10 += 2) 
                        {
                            var_18 = (short)-32443;
                            arr_35 [i_6] [i_9] [i_8] [i_8] [(_Bool)1] [i_8] [i_8] = ((/* implicit */signed char) (~(var_1)));
                        }
                        arr_36 [i_6] [i_8] [i_8] [i_9] [i_9] = ((/* implicit */unsigned char) 3799508851U);
                    }
                } 
            } 
        } 
        arr_37 [i_6] [i_6] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) (unsigned char)20))) ? ((+(((/* implicit */int) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) (unsigned char)242))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) arr_31 [i_6]))) : (arr_26 [i_6] [i_6] [i_6])))) ? (((/* implicit */int) min(((signed char)55), (((/* implicit */signed char) var_5))))) : (((/* implicit */int) arr_31 [i_6]))))));
    }
    var_19 = ((/* implicit */unsigned char) var_13);
    var_20 = ((/* implicit */unsigned long long int) min((var_8), (((/* implicit */short) var_5))));
}
