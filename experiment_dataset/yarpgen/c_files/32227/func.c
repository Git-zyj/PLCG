/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32227
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32227 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32227
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
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (short i_2 = 0; i_2 < 16; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 1; i_3 < 15; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 16; i_4 += 1) 
                        {
                            {
                                arr_14 [i_3] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */long long int) (!(((((/* implicit */int) arr_9 [i_1] [i_3 - 1] [i_3] [i_3 - 1])) > (((/* implicit */int) arr_4 [i_3 - 1] [i_3 - 1] [i_3 + 1]))))));
                                var_16 = (unsigned short)14803;
                                var_17 += ((/* implicit */int) (short)-23825);
                            }
                        } 
                    } 
                } 
                arr_15 [i_0] = ((/* implicit */short) max((((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_4)) : ((+(1766128427))))), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (short)-15099)) : (((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [i_0] [i_0]))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_5 = 2; i_5 < 18; i_5 += 1) 
    {
        for (unsigned int i_6 = 0; i_6 < 21; i_6 += 4) 
        {
            {
                var_18 = ((/* implicit */unsigned short) (short)-15094);
                var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) ((arr_17 [i_5] [i_6]) / ((-(arr_17 [i_5] [i_6]))))))));
                var_20 -= ((/* implicit */unsigned short) max(((short)-15099), ((short)-15116)));
            }
        } 
    } 
    var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) ((((/* implicit */long long int) var_5)) > (min((((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (short)-26690))))), (max((6288571665948439771LL), (((/* implicit */long long int) 2805442210U)))))))))));
    /* LoopSeq 2 */
    for (unsigned long long int i_7 = 1; i_7 < 16; i_7 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned short i_8 = 0; i_8 < 17; i_8 += 1) 
        {
            for (unsigned long long int i_9 = 2; i_9 < 16; i_9 += 1) 
            {
                {
                    var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max(((short)26690), (arr_23 [i_7] [i_8] [i_9])))) ? ((~(((/* implicit */int) (unsigned short)58571)))) : (((/* implicit */int) arr_16 [i_9]))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) max(((unsigned short)24306), (((/* implicit */unsigned short) (short)15094)))))) % (((16786978573280325411ULL) % (((/* implicit */unsigned long long int) 2949456550U)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_26 [i_9 - 2] [i_9 - 1]))) | (var_2))))));
                    var_23 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)16052))))) * (((arr_21 [i_7 - 1]) % (arr_21 [i_7 - 1])))));
                }
            } 
        } 
        /* LoopSeq 2 */
        for (short i_10 = 3; i_10 < 14; i_10 += 4) 
        {
            arr_32 [i_7] [i_7] = ((/* implicit */int) arr_17 [i_7] [(short)18]);
            arr_33 [i_7] [i_10] = ((/* implicit */long long int) max((((((/* implicit */unsigned int) ((/* implicit */int) (short)-15099))) | (arr_25 [i_7] [i_7 + 1]))), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) var_5)) > (12775258071781207621ULL))))));
        }
        /* vectorizable */
        for (short i_11 = 0; i_11 < 17; i_11 += 4) 
        {
            /* LoopNest 2 */
            for (long long int i_12 = 1; i_12 < 16; i_12 += 3) 
            {
                for (long long int i_13 = 0; i_13 < 17; i_13 += 4) 
                {
                    {
                        arr_40 [i_7] [i_7] [i_11] [i_12] [i_13] = ((/* implicit */unsigned int) (~(3823119732058580779ULL)));
                        var_24 = ((/* implicit */int) var_8);
                    }
                } 
            } 
            /* LoopNest 2 */
            for (unsigned short i_14 = 0; i_14 < 17; i_14 += 1) 
            {
                for (unsigned int i_15 = 0; i_15 < 17; i_15 += 4) 
                {
                    {
                        var_25 = ((/* implicit */unsigned int) var_0);
                        /* LoopSeq 3 */
                        for (unsigned int i_16 = 1; i_16 < 16; i_16 += 1) 
                        {
                            arr_48 [i_16] [i_11] [i_14] [i_15] [i_16] [i_14] [i_15] = ((/* implicit */long long int) arr_23 [i_7] [i_16 - 1] [i_14]);
                            arr_49 [i_7] [i_14] [i_15] [i_16] = ((/* implicit */short) ((((/* implicit */int) var_1)) * (((/* implicit */int) (short)24620))));
                            var_26 = ((/* implicit */unsigned int) min((var_26), (((/* implicit */unsigned int) (short)-15094))));
                            var_27 = ((/* implicit */int) (short)-26690);
                            var_28 += ((/* implicit */unsigned short) (((+(((/* implicit */int) (short)15090)))) | ((+(((/* implicit */int) (short)-15099))))));
                        }
                        for (unsigned short i_17 = 0; i_17 < 17; i_17 += 1) 
                        {
                            arr_53 [i_7] [i_7] [i_7] [i_7] = arr_44 [i_7 - 1] [i_7] [i_7 + 1];
                            arr_54 [i_7] [i_11] [i_14] [i_15] [i_17] = ((/* implicit */long long int) (short)-15091);
                        }
                        for (unsigned short i_18 = 0; i_18 < 17; i_18 += 4) 
                        {
                            var_29 -= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)27529))))) % (671840086785405099ULL)));
                            var_30 = ((/* implicit */long long int) min((var_30), (((/* implicit */long long int) var_15))));
                            arr_57 [i_18] [i_14] [i_11] [i_7] = ((/* implicit */short) ((arr_21 [i_7 - 1]) > (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_39 [i_7])))))));
                        }
                    }
                } 
            } 
        }
    }
    /* vectorizable */
    for (unsigned int i_19 = 0; i_19 < 21; i_19 += 1) 
    {
        var_31 ^= ((/* implicit */short) ((((/* implicit */_Bool) (short)-7421)) ? (((/* implicit */int) arr_58 [i_19] [i_19])) : (((/* implicit */int) arr_58 [i_19] [i_19]))));
        var_32 ^= ((/* implicit */long long int) (-(((/* implicit */int) arr_16 [(short)16]))));
    }
}
