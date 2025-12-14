/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189895
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189895 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189895
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
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 17; i_2 += 4) 
                {
                    for (long long int i_3 = 1; i_3 < 14; i_3 += 3) 
                    {
                        {
                            var_11 |= ((/* implicit */long long int) (!((_Bool)1)));
                            var_12 = min((((/* implicit */long long int) min((((/* implicit */int) (short)-7)), (((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) arr_4 [i_0] [i_1] [i_0])) : (((/* implicit */int) arr_4 [i_0] [i_0] [i_0]))))))), (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)65535)) / (((/* implicit */int) (unsigned short)44312))))) ? (arr_11 [i_3] [i_1]) : (min((((/* implicit */long long int) var_8)), (arr_13 [i_1] [i_1] [i_0]))))));
                            /* LoopSeq 1 */
                            for (unsigned short i_4 = 2; i_4 < 16; i_4 += 1) 
                            {
                                var_13 = ((/* implicit */unsigned short) min((var_13), (((/* implicit */unsigned short) min((((int) arr_14 [i_4 + 1] [i_3 + 1] [i_2] [i_3] [i_4])), (((/* implicit */int) ((unsigned short) arr_14 [i_0] [i_1] [i_4 + 1] [i_1] [i_4 - 1]))))))));
                                var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) (-(min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_15 [(short)10] [i_0]))))), (arr_16 [i_0] [i_1] [i_2] [i_3] [(_Bool)1] [i_1] [i_0]))))))));
                            }
                            arr_17 [i_0] [i_3] [i_0] [i_0] = ((/* implicit */unsigned short) min((((/* implicit */long long int) var_8)), (arr_13 [i_0] [i_0] [i_0])));
                            arr_18 [i_0] [(_Bool)1] [(_Bool)1] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_1)), (arr_3 [i_3 + 1])))) ? (((arr_13 [(unsigned short)5] [(unsigned short)5] [i_3]) / (((/* implicit */long long int) ((/* implicit */int) var_4))))) : (max((((/* implicit */long long int) min(((unsigned short)21213), (((/* implicit */unsigned short) var_6))))), (((((/* implicit */_Bool) arr_9 [13U] [i_1] [13U])) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [(unsigned short)7] [i_0]))) : (arr_16 [i_0] [i_1] [i_1] [i_3] [i_1] [(unsigned short)0] [i_1])))))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (long long int i_5 = 4; i_5 < 16; i_5 += 3) 
                {
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        for (unsigned short i_7 = 0; i_7 < 17; i_7 += 3) 
                        {
                            {
                                var_15 = ((((/* implicit */long long int) ((/* implicit */int) arr_24 [i_0] [i_6] [i_6] [i_6] [i_6] [i_0]))) <= ((+(var_9))));
                                arr_28 [11ULL] [i_1] [i_6] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) arr_19 [i_1] [i_1] [i_1]))) : (arr_13 [i_0] [12LL] [i_0])))) ? (((/* implicit */int) ((_Bool) var_0))) : (((/* implicit */int) arr_8 [i_0] [i_0] [(unsigned char)14]))))) ? (6447784219328979507LL) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)44312))))) != (((/* implicit */int) (unsigned short)23257))))))));
                            }
                        } 
                    } 
                } 
                arr_29 [i_0] [i_0] = ((((((/* implicit */_Bool) (-(((/* implicit */int) arr_4 [(unsigned short)4] [i_1] [i_1]))))) && ((!(((/* implicit */_Bool) var_0)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) arr_3 [i_0]))) ? (((/* implicit */int) (unsigned char)182)) : (((/* implicit */int) var_6))))) : (((((/* implicit */long long int) min((((/* implicit */unsigned int) var_6)), (var_7)))) | ((+(var_9))))));
                arr_30 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((short) (_Bool)1));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (long long int i_8 = 1; i_8 < 24; i_8 += 3) 
    {
        arr_34 [i_8] = ((/* implicit */unsigned short) (-(((/* implicit */int) min(((short)12536), ((short)18262))))));
        var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) arr_33 [22LL] [(unsigned char)18]))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned short i_9 = 0; i_9 < 25; i_9 += 1) 
        {
            arr_37 [i_8] [i_8] [i_8] = ((/* implicit */long long int) (short)18262);
            arr_38 [i_8] = ((((((/* implicit */long long int) ((/* implicit */int) (unsigned short)0))) ^ (arr_35 [i_8] [i_8]))) - (((/* implicit */long long int) ((/* implicit */int) (unsigned short)2141))));
        }
    }
}
