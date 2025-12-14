/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234843
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234843 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234843
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
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        arr_2 [i_0] [i_0] = arr_0 [(unsigned char)14];
        /* LoopSeq 2 */
        for (short i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            var_16 = ((/* implicit */short) ((unsigned short) var_5));
            var_17 = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_1 [i_0]))));
            arr_5 [i_0] [(short)5] [i_1] = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (var_1)))));
        }
        for (short i_2 = 0; i_2 < 18; i_2 += 1) 
        {
            arr_8 [i_2] [(unsigned short)0] [i_2] = ((/* implicit */short) ((((((/* implicit */_Bool) (short)-13654)) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) (unsigned short)7)))) | ((~(((/* implicit */int) (unsigned short)0))))));
            /* LoopSeq 2 */
            for (unsigned long long int i_3 = 4; i_3 < 15; i_3 += 1) 
            {
                arr_13 [i_3 - 3] [i_2] [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_12 [i_3 + 3] [i_3 + 3] [i_2]))));
                arr_14 [i_0] [i_0] [i_2] [i_3 - 1] = ((/* implicit */short) (-(((/* implicit */int) arr_1 [i_3 - 4]))));
                var_18 = ((/* implicit */short) ((((((/* implicit */int) var_5)) % (((/* implicit */int) var_6)))) ^ (((/* implicit */int) arr_4 [i_0]))));
            }
            for (short i_4 = 1; i_4 < 17; i_4 += 4) 
            {
                arr_18 [i_2] [i_2] [i_2] [0ULL] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned short)60831))));
                var_19 = ((/* implicit */unsigned short) ((arr_7 [i_4 + 1]) & (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)88)))))));
            }
            var_20 = arr_10 [i_0] [(short)17] [(unsigned short)3];
            arr_19 [(unsigned short)13] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_11 [(unsigned short)7] [(unsigned short)7] [i_0])) : (((/* implicit */int) arr_3 [i_0] [i_2] [i_2]))));
            /* LoopSeq 2 */
            for (unsigned short i_5 = 3; i_5 < 15; i_5 += 4) /* same iter space */
            {
                /* LoopNest 2 */
                for (unsigned long long int i_6 = 3; i_6 < 17; i_6 += 4) 
                {
                    for (short i_7 = 0; i_7 < 18; i_7 += 2) 
                    {
                        {
                            arr_30 [i_2] [i_2] [i_2] [(unsigned short)3] [i_7] [(unsigned short)3] [i_7] = ((/* implicit */unsigned long long int) (unsigned char)243);
                            arr_31 [i_7] [i_2] [i_7] [i_2] [i_2] [(unsigned short)7] [(unsigned short)0] = ((/* implicit */short) (~(((/* implicit */int) arr_23 [i_2] [(unsigned short)3] [i_2] [i_7]))));
                        }
                    } 
                } 
                arr_32 [i_0] [(short)12] [i_2] [(unsigned short)14] = ((/* implicit */unsigned short) (-(((/* implicit */int) var_9))));
            }
            for (unsigned short i_8 = 3; i_8 < 15; i_8 += 4) /* same iter space */
            {
                var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) ((unsigned char) arr_22 [i_2])))));
                arr_36 [(unsigned short)11] [i_2] [(short)0] = (unsigned char)27;
                arr_37 [(short)3] [(short)3] [i_2] = ((/* implicit */unsigned short) (((+(((/* implicit */int) var_10)))) & (((((/* implicit */int) var_13)) & (((/* implicit */int) arr_24 [i_0] [(unsigned short)12] [i_2] [(short)13]))))));
            }
        }
        var_22 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)4)) ? (4251529652161942228ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)16384)))));
        arr_38 [(unsigned short)13] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)29420)) ? (((/* implicit */int) arr_20 [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_20 [i_0] [i_0] [i_0]))));
        arr_39 [i_0] = ((/* implicit */short) (((~(((/* implicit */int) (short)16394)))) <= (((/* implicit */int) (short)7183))));
    }
    for (short i_9 = 1; i_9 < 20; i_9 += 3) 
    {
        var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)216))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_8)) <= (((/* implicit */int) (unsigned char)88)))))) : (max((min((var_4), (((/* implicit */unsigned long long int) (short)0)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)6)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_3)))))))));
        arr_42 [i_9 + 1] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) min(((unsigned short)24059), (((/* implicit */unsigned short) arr_41 [i_9 - 1] [i_9 + 1])))))));
        var_24 = ((/* implicit */short) arr_40 [i_9]);
    }
    var_25 = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */int) min(((short)-7184), (((/* implicit */short) (unsigned char)92))))) == ((+(((/* implicit */int) (short)16391))))))) & (((/* implicit */int) (short)29416))));
    var_26 = var_2;
}
