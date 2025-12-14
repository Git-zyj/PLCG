/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39184
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39184 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39184
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
    var_17 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_1), (((/* implicit */long long int) var_11))))) ? (max((var_4), (((/* implicit */int) (unsigned char)95)))) : (((/* implicit */int) var_6))))) ? ((~(((((/* implicit */_Bool) (unsigned char)95)) ? (((/* implicit */unsigned long long int) -163464036)) : (18446744073709551615ULL))))) : (((/* implicit */unsigned long long int) (~(var_11))))));
    /* LoopSeq 4 */
    for (unsigned short i_0 = 2; i_0 < 22; i_0 += 4) 
    {
        arr_4 [i_0] &= ((/* implicit */unsigned int) (-(((long long int) ((((/* implicit */_Bool) arr_2 [i_0])) ? (-1819011140) : (((/* implicit */int) var_3)))))));
        arr_5 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 17592186044415ULL)) ? ((~(((/* implicit */int) arr_3 [i_0 - 1] [i_0 - 1])))) : (((/* implicit */int) (unsigned char)171))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 163464015)) ? (225972490) : (((/* implicit */int) (_Bool)1))))) : (((((/* implicit */_Bool) ((var_9) << (((2962613067U) - (2962613067U)))))) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65509)))))));
    }
    /* vectorizable */
    for (unsigned short i_1 = 0; i_1 < 19; i_1 += 4) 
    {
        var_18 = ((/* implicit */int) (~(((var_1) & (((/* implicit */long long int) ((/* implicit */int) var_8)))))));
        arr_8 [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */long long int) (((_Bool)1) ? (var_10) : (((/* implicit */int) arr_7 [i_1]))))) < (((long long int) var_1))));
        arr_9 [i_1] [i_1] = (+(((/* implicit */int) ((signed char) (unsigned char)62))));
    }
    /* vectorizable */
    for (int i_2 = 3; i_2 < 18; i_2 += 4) /* same iter space */
    {
        var_19 &= ((/* implicit */signed char) ((((arr_10 [i_2]) ? (((/* implicit */int) arr_1 [i_2] [i_2])) : (((/* implicit */int) var_3)))) * (((/* implicit */int) ((short) var_5)))));
        var_20 = ((/* implicit */long long int) ((signed char) ((((/* implicit */_Bool) (signed char)59)) && (((/* implicit */_Bool) 966783599)))));
        arr_12 [i_2] = ((/* implicit */_Bool) (~(((((/* implicit */unsigned int) ((/* implicit */int) var_8))) | (arr_11 [(unsigned char)16] [(unsigned char)16])))));
        arr_13 [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446726481523507201ULL)) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)8192)))))) ? ((~(1891963405U))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_2 - 1] [i_2 - 2])))));
        /* LoopSeq 1 */
        for (long long int i_3 = 0; i_3 < 21; i_3 += 2) 
        {
            var_21 ^= ((/* implicit */long long int) ((unsigned int) arr_3 [i_2 - 3] [i_2 - 3]));
            arr_16 [i_2] [i_3] [(unsigned short)11] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) arr_14 [i_2 + 1] [i_3] [i_3]))) ? (arr_11 [i_2 + 3] [i_2 + 3]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_2 - 3])))));
        }
    }
    for (int i_4 = 3; i_4 < 18; i_4 += 4) /* same iter space */
    {
        /* LoopSeq 4 */
        /* vectorizable */
        for (unsigned short i_5 = 0; i_5 < 21; i_5 += 4) /* same iter space */
        {
            var_22 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (arr_2 [i_4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_4] [i_4] [i_4 + 3]))) : (arr_0 [i_4 - 3] [i_4 + 1])));
            arr_24 [i_4] [i_4] [i_4] = ((/* implicit */int) ((long long int) (~(var_13))));
            /* LoopNest 3 */
            for (int i_6 = 1; i_6 < 19; i_6 += 2) 
            {
                for (unsigned int i_7 = 2; i_7 < 20; i_7 += 3) 
                {
                    for (long long int i_8 = 0; i_8 < 21; i_8 += 2) 
                    {
                        {
                            var_23 ^= ((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)211))));
                            arr_32 [i_8] [i_8] [i_7] [i_6] [12U] [i_8] [10LL] |= ((/* implicit */signed char) ((((((/* implicit */unsigned long long int) var_5)) * (17592186044414ULL))) - ((-(var_15)))));
                        }
                    } 
                } 
            } 
        }
        for (unsigned short i_9 = 0; i_9 < 21; i_9 += 4) /* same iter space */
        {
            arr_36 [i_4] [i_4] = ((/* implicit */unsigned int) (-(arr_33 [i_4])));
            var_24 = ((/* implicit */unsigned long long int) arr_26 [i_4 + 1] [i_4] [0LL] [i_4]);
            var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned short) 163464035))) ? (((/* implicit */long long int) (-(((var_4) % (((/* implicit */int) var_12))))))) : (var_5)));
            /* LoopSeq 1 */
            /* vectorizable */
            for (signed char i_10 = 1; i_10 < 19; i_10 += 1) 
            {
                arr_41 [i_4] = ((/* implicit */int) ((var_7) < (arr_34 [i_4 - 3] [i_4 - 3] [i_4 + 1])));
                var_26 = ((/* implicit */unsigned int) (~(520093696LL)));
                /* LoopNest 2 */
                for (long long int i_11 = 0; i_11 < 21; i_11 += 1) 
                {
                    for (unsigned char i_12 = 0; i_12 < 21; i_12 += 1) 
                    {
                        {
                            arr_47 [i_4 + 1] [i_4 + 1] [i_4] [13U] [i_4] = ((/* implicit */long long int) (-(arr_40 [i_4] [i_11])));
                            arr_48 [i_4] [2LL] = ((((/* implicit */_Bool) ((long long int) var_5))) ? (((((/* implicit */_Bool) var_11)) ? (8ULL) : (((/* implicit */unsigned long long int) var_7)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_4]))));
                        }
                    } 
                } 
                arr_49 [i_9] [i_9] |= ((/* implicit */_Bool) ((unsigned short) arr_30 [i_4] [i_10 + 2] [i_4 + 3]));
            }
        }
        for (unsigned short i_13 = 0; i_13 < 21; i_13 += 4) /* same iter space */
        {
            arr_54 [i_4] = var_11;
            /* LoopSeq 1 */
            for (short i_14 = 3; i_14 < 19; i_14 += 1) 
            {
                arr_59 [i_4] [i_4] = ((/* implicit */long long int) (unsigned char)92);
                arr_60 [i_14] [i_4] [i_4] [i_4] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_22 [i_4 - 3] [i_4 + 1]))));
                arr_61 [i_4] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (~(var_10)))))) <= ((-(4294967295ULL)))));
                arr_62 [i_4] = ((/* implicit */unsigned long long int) arr_56 [i_4] [i_13] [18U] [i_14 - 3]);
            }
            var_27 = ((/* implicit */unsigned long long int) min((((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) 4159396731U))))) != (((/* implicit */int) ((short) arr_22 [i_4] [i_4])))))), (var_12)));
        }
        /* vectorizable */
        for (unsigned short i_15 = 0; i_15 < 21; i_15 += 4) /* same iter space */
        {
            arr_65 [i_4] [i_4 - 2] = ((/* implicit */signed char) (-(((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_16))) : (var_15)))));
            /* LoopNest 2 */
            for (unsigned long long int i_16 = 0; i_16 < 21; i_16 += 3) 
            {
                for (long long int i_17 = 0; i_17 < 21; i_17 += 2) 
                {
                    {
                        arr_72 [i_4] [i_15] [i_15] [i_4] [i_16] [i_17] = ((/* implicit */_Bool) arr_27 [i_4] [1U] [i_4] [i_4] [i_17]);
                        var_28 = ((/* implicit */long long int) max((var_28), (((/* implicit */long long int) ((((((/* implicit */_Bool) (signed char)83)) ? (((/* implicit */int) (_Bool)0)) : (var_4))) <= (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_27 [i_16] [i_16] [i_16] [i_16] [i_16]))) < (arr_67 [i_17] [i_15] [i_4])))))))));
                        arr_73 [i_4] [i_4] [i_4] = ((/* implicit */unsigned int) (~((-(var_5)))));
                    }
                } 
            } 
        }
        var_29 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) arr_46 [i_4 - 3] [i_4])), ((unsigned char)95)))) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)125)) || (var_2)))) : (((/* implicit */int) ((_Bool) (-(var_5)))))));
        arr_74 [i_4] [i_4] = ((/* implicit */int) arr_0 [i_4] [i_4]);
    }
    var_30 |= ((/* implicit */unsigned long long int) (+(var_5)));
    var_31 += ((/* implicit */int) max((var_11), (((((/* implicit */_Bool) (unsigned char)125)) ? (11U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)46)))))));
}
