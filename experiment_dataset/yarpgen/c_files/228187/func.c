/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228187
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228187 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228187
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
    for (int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (long long int i_1 = 1; i_1 < 18; i_1 += 2) 
        {
            {
                arr_7 [i_1] [i_1] = ((/* implicit */unsigned int) max((14768810620495119980ULL), (1344473155798752679ULL)));
                var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) ((((/* implicit */_Bool) 17102270917910798937ULL)) ? (18158513697557839872ULL) : (288230376151711743ULL))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 3) 
    {
        arr_10 [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) (short)1023)) ? (((/* implicit */long long int) ((/* implicit */int) (short)14730))) : (9223372036854775807LL)));
        /* LoopSeq 3 */
        /* vectorizable */
        for (long long int i_3 = 0; i_3 < 11; i_3 += 1) 
        {
            var_16 = ((/* implicit */unsigned char) (((_Bool)0) ? (17102270917910798937ULL) : (((/* implicit */unsigned long long int) -9223372036854775807LL))));
            var_17 = ((/* implicit */short) ((_Bool) 3643947583U));
            arr_14 [i_2] [i_3] [i_2] = ((/* implicit */short) var_0);
            var_18 += ((/* implicit */unsigned char) ((int) 9223372036854775807LL));
        }
        for (long long int i_4 = 4; i_4 < 10; i_4 += 3) 
        {
            /* LoopSeq 2 */
            for (unsigned short i_5 = 0; i_5 < 11; i_5 += 4) 
            {
                /* LoopSeq 1 */
                for (long long int i_6 = 0; i_6 < 11; i_6 += 3) 
                {
                    var_19 &= ((((max((((/* implicit */unsigned long long int) -9223372036854775807LL)), (1344473155798752679ULL))) * (((/* implicit */unsigned long long int) var_2)))) % (((/* implicit */unsigned long long int) ((/* implicit */int) (short)16319))));
                    var_20 = ((/* implicit */_Bool) var_10);
                }
                var_21 &= ((/* implicit */short) ((9223372036854775807LL) - (9223372036854775807LL)));
                arr_22 [i_5] = ((/* implicit */_Bool) var_1);
            }
            for (signed char i_7 = 2; i_7 < 9; i_7 += 3) 
            {
                /* LoopNest 2 */
                for (unsigned short i_8 = 0; i_8 < 11; i_8 += 3) 
                {
                    for (unsigned long long int i_9 = 0; i_9 < 11; i_9 += 1) 
                    {
                        {
                            arr_30 [i_2] [i_4 + 1] [i_9] = ((/* implicit */signed char) ((short) max((((/* implicit */long long int) (short)24632)), (5829740048493249889LL))));
                            var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) min((1344473155798752679ULL), (16078652739602972031ULL))))));
                            var_23 = ((/* implicit */unsigned long long int) min((((/* implicit */short) (unsigned char)1)), ((short)-16320)));
                            var_24 = (-(((/* implicit */int) (signed char)75)));
                            var_25 |= ((_Bool) (+(17102270917910798937ULL)));
                        }
                    } 
                } 
                arr_31 [i_2] [i_2] = ((/* implicit */long long int) (-(((/* implicit */int) (short)32767))));
            }
            var_26 = ((/* implicit */unsigned int) max((2368091334106579585ULL), (16078652739602972031ULL)));
        }
        for (unsigned long long int i_10 = 1; i_10 < 7; i_10 += 3) 
        {
            /* LoopSeq 1 */
            for (short i_11 = 3; i_11 < 10; i_11 += 2) 
            {
                var_27 = ((/* implicit */unsigned int) ((((/* implicit */int) (short)-8816)) & (((/* implicit */int) (short)-32767))));
                arr_36 [i_2] [i_10] [i_11 - 1] = ((/* implicit */unsigned char) (((-(17102270917910798937ULL))) == (((/* implicit */unsigned long long int) 2840368561U))));
            }
            var_28 -= ((/* implicit */long long int) (!((_Bool)1)));
            var_29 |= ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)192)) || (((/* implicit */_Bool) -2470031991799138704LL))));
            arr_37 [(short)2] [i_10 + 1] [i_10] = ((/* implicit */unsigned long long int) max((((/* implicit */int) (_Bool)1)), (-553395918)));
        }
    }
    /* LoopSeq 1 */
    for (unsigned long long int i_12 = 0; i_12 < 21; i_12 += 3) 
    {
        /* LoopSeq 3 */
        for (short i_13 = 0; i_13 < 21; i_13 += 3) 
        {
            var_30 += ((/* implicit */signed char) max((var_7), (((/* implicit */unsigned long long int) 816143479U))));
            var_31 += ((/* implicit */long long int) ((((/* implicit */int) ((max((-4883106722088410645LL), ((-9223372036854775807LL - 1LL)))) >= (((/* implicit */long long int) ((/* implicit */int) (short)-1)))))) == (((int) 6831098043965007185LL))));
        }
        for (unsigned long long int i_14 = 0; i_14 < 21; i_14 += 3) 
        {
            arr_45 [i_12] [i_14] [i_14] = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)30)) ? (-2470031991799138690LL) : (8646911284551352320LL)));
            var_32 = ((/* implicit */unsigned char) (((_Bool)1) ? (36028797018963967LL) : (((/* implicit */long long int) 1521148218))));
            var_33 = ((/* implicit */signed char) 6554026245719630616ULL);
            var_34 = ((/* implicit */short) max((var_34), (((/* implicit */short) ((long long int) var_11)))));
        }
        /* vectorizable */
        for (short i_15 = 1; i_15 < 20; i_15 += 2) 
        {
            /* LoopSeq 2 */
            for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned long long int i_17 = 0; i_17 < 21; i_17 += 3) 
                {
                    for (long long int i_18 = 0; i_18 < 21; i_18 += 4) 
                    {
                        {
                            arr_57 [i_12] [i_15] [(short)13] [i_17] [i_18] = ((/* implicit */_Bool) ((long long int) (_Bool)0));
                            var_35 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned char)255))));
                        }
                    } 
                } 
                arr_58 [i_12] [i_15] [i_15] = ((/* implicit */unsigned char) var_2);
                var_36 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 16766055592954651320ULL)) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) (signed char)-102))));
                arr_59 [i_15] [i_15] [i_16] = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) > ((-9223372036854775807LL - 1LL))));
            }
            for (unsigned int i_19 = 4; i_19 < 20; i_19 += 3) 
            {
                /* LoopNest 2 */
                for (int i_20 = 0; i_20 < 21; i_20 += 3) 
                {
                    for (int i_21 = 0; i_21 < 21; i_21 += 3) 
                    {
                        {
                            var_37 = ((/* implicit */long long int) min((var_37), (((((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */long long int) 1048560U)) : (549487378432LL))) | (((/* implicit */long long int) ((/* implicit */int) (signed char)28)))))));
                            var_38 = ((/* implicit */_Bool) ((((((/* implicit */int) (signed char)-37)) + (2147483647))) >> (((((/* implicit */int) (unsigned char)192)) - (180)))));
                            arr_67 [i_12] [i_15] [i_15] [i_19] [i_20] [i_21] [i_21] = ((/* implicit */signed char) (((_Bool)1) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned char)10))));
                        }
                    } 
                } 
                var_39 = ((/* implicit */long long int) (-(((/* implicit */int) (short)(-32767 - 1)))));
                arr_68 [i_15] = ((/* implicit */long long int) var_9);
                var_40 -= ((/* implicit */long long int) var_1);
            }
            arr_69 [i_15] [i_15 - 1] = ((/* implicit */unsigned short) (((_Bool)1) ? (((/* implicit */int) (short)-14801)) : (((/* implicit */int) (unsigned char)31))));
            /* LoopSeq 1 */
            for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
            {
                arr_73 [i_15] [i_15] = var_13;
                /* LoopNest 2 */
                for (unsigned long long int i_23 = 0; i_23 < 21; i_23 += 3) 
                {
                    for (long long int i_24 = 1; i_24 < 20; i_24 += 3) 
                    {
                        {
                            arr_80 [i_12] [i_15] [i_22] [i_22] [13ULL] [i_15] [i_24] = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) >= (3117458793U))))) != (3117458793U)));
                            arr_81 [i_15] [(short)19] [i_24] [11U] [i_22] [i_15] [i_15] = ((/* implicit */short) ((((/* implicit */_Bool) (short)-2001)) ? (((/* implicit */int) (unsigned char)63)) : (((/* implicit */int) (unsigned char)14))));
                            var_41 = ((/* implicit */signed char) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) (unsigned char)14))));
                        }
                    } 
                } 
            }
            var_42 = ((/* implicit */long long int) ((-6945414227792551623LL) == (((/* implicit */long long int) ((/* implicit */int) (signed char)51)))));
        }
        var_43 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) -1934437966695341446LL)) ? (((((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) >> (((18159987745800063066ULL) - (18159987745800063059ULL)))))) / (2413082240U))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 6945414227792551622LL))))))));
    }
}
