/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31235
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31235 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31235
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
    var_15 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */int) (_Bool)0)) - (((/* implicit */int) var_11)))) >= (((/* implicit */int) var_12)))))) | (var_7)));
    var_16 = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) var_0)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) (short)-1))))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)48))))) ^ ((+(max((((/* implicit */long long int) var_7)), (var_1)))))));
    var_17 = ((/* implicit */short) (+(var_9)));
    var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)49)) ? (((/* implicit */int) (_Bool)1)) : ((+(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)65475)))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(arr_0 [7ULL] [i_0])))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
        arr_3 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_2 [9ULL] [(short)9])) : (((/* implicit */int) arr_1 [(short)1]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (short)-1))))) : (((/* implicit */int) (unsigned char)4))));
        /* LoopSeq 3 */
        for (unsigned int i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            arr_6 [i_0] [i_0] [i_0] = ((/* implicit */short) (~(4294967295U)));
            arr_7 [16U] [i_1] [i_1] = arr_1 [i_1];
            /* LoopNest 3 */
            for (long long int i_2 = 0; i_2 < 19; i_2 += 4) 
            {
                for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                {
                    for (int i_4 = 0; i_4 < 19; i_4 += 3) 
                    {
                        {
                            var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) (~(9223372036854775807LL)))))))));
                            var_21 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_14)) || (((/* implicit */_Bool) 16775168U))));
                            var_22 = ((/* implicit */unsigned long long int) (!(((((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_4] [i_3] [4U] [i_2] [i_1] [(_Bool)1] [13ULL]))) > (arr_14 [i_0] [(unsigned short)5] [i_0])))));
                        }
                    } 
                } 
            } 
        }
        for (unsigned long long int i_5 = 1; i_5 < 18; i_5 += 1) 
        {
            arr_18 [(unsigned char)11] [18ULL] = ((/* implicit */unsigned char) ((var_13) || (((/* implicit */_Bool) arr_8 [i_5 + 1] [i_5 - 1] [(unsigned char)5]))));
            /* LoopSeq 1 */
            for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
            {
                var_23 = ((/* implicit */long long int) (+(((((/* implicit */_Bool) arr_15 [(unsigned char)13])) ? (((/* implicit */int) (unsigned char)164)) : (((/* implicit */int) (unsigned short)32768))))));
                var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) ((arr_12 [(short)15] [11ULL]) + (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [(unsigned short)9] [i_5] [i_6 - 1]))))))));
            }
        }
        for (unsigned int i_7 = 2; i_7 < 18; i_7 += 4) 
        {
            var_25 |= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_20 [4] [i_7 - 1] [i_7 + 1])) ? (arr_11 [(unsigned char)0] [i_7 - 1] [i_7 - 1] [i_7]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_7] [i_7 + 1] [i_7 + 1])))));
            var_26 = ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned long long int) var_14)))));
            /* LoopNest 2 */
            for (signed char i_8 = 3; i_8 < 18; i_8 += 3) 
            {
                for (signed char i_9 = 0; i_9 < 19; i_9 += 1) 
                {
                    {
                        var_27 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [17ULL] [i_7 - 1])) ? (arr_14 [i_0] [i_0] [i_8]) : (((/* implicit */unsigned int) (+(arr_25 [i_0] [i_7] [(unsigned char)3]))))));
                        var_28 = (~(((var_5) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_9] [(_Bool)1] [11LL]))))));
                        /* LoopSeq 2 */
                        for (unsigned long long int i_10 = 1; i_10 < 18; i_10 += 1) 
                        {
                            var_29 = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) var_14))))) | (((/* implicit */int) var_2))));
                            var_30 = var_1;
                        }
                        for (unsigned short i_11 = 0; i_11 < 19; i_11 += 3) 
                        {
                            var_31 = ((/* implicit */_Bool) var_12);
                            var_32 = ((/* implicit */unsigned long long int) ((4294967281U) << (((var_6) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (_Bool)1))))));
                            var_33 = ((/* implicit */unsigned int) max((var_33), (((unsigned int) 0ULL))));
                        }
                    }
                } 
            } 
            var_34 ^= ((/* implicit */signed char) ((short) (short)0));
        }
    }
    for (int i_12 = 0; i_12 < 21; i_12 += 1) 
    {
        arr_39 [i_12] = ((((((/* implicit */_Bool) 6572870962306521593LL)) ? (((/* implicit */long long int) ((/* implicit */int) (short)0))) : (4400584839453939277LL))) * (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (_Bool)1))))));
        /* LoopSeq 2 */
        for (unsigned int i_13 = 0; i_13 < 21; i_13 += 1) 
        {
            arr_42 [i_12] [1] = ((/* implicit */unsigned char) (~(max((((/* implicit */long long int) max((((/* implicit */unsigned int) arr_41 [i_12] [i_13])), (arr_38 [i_13])))), (arr_40 [i_12])))));
            var_35 = ((/* implicit */_Bool) 0LL);
        }
        for (unsigned long long int i_14 = 0; i_14 < 21; i_14 += 1) 
        {
            arr_46 [i_12] = ((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) 0U)), (arr_36 [i_12])))))))));
            arr_47 [(short)13] [(unsigned char)0] [i_12] = arr_44 [i_12] [14LL] [i_12];
            var_36 = ((/* implicit */_Bool) arr_40 [i_12]);
        }
        var_37 |= ((/* implicit */short) ((arr_45 [(unsigned short)14] [i_12] [(unsigned short)14]) ? ((+(((/* implicit */int) (_Bool)1)))) : (((int) arr_43 [i_12] [i_12]))));
    }
}
