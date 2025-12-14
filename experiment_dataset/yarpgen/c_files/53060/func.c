/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53060
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53060 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53060
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
    var_14 = ((/* implicit */unsigned long long int) (~((~(9223372036854775807LL)))));
    /* LoopSeq 4 */
    for (int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) ((_Bool) 9ULL))) : (((/* implicit */int) arr_2 [i_0]))));
        arr_4 [i_0] &= ((/* implicit */unsigned short) (((+(18446744073709551600ULL))) % (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4294967295U)) ? ((+(((/* implicit */int) arr_2 [i_0])))) : (((var_0) & (((/* implicit */int) var_11)))))))));
        arr_5 [i_0] = ((/* implicit */unsigned short) (~((~(((/* implicit */int) arr_2 [i_0]))))));
    }
    for (unsigned short i_1 = 2; i_1 < 22; i_1 += 1) /* same iter space */
    {
        arr_9 [i_1] = ((/* implicit */unsigned int) max((((arr_8 [i_1 - 1]) ? (var_5) : (((((/* implicit */_Bool) 10)) ? (((/* implicit */int) arr_7 [i_1])) : (((/* implicit */int) arr_7 [i_1 - 1])))))), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (signed char)-36)) : (((/* implicit */int) arr_6 [i_1 - 1]))))));
        var_15 = ((/* implicit */unsigned char) max((arr_7 [i_1]), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((18446744073709551613ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)127)))))) && (((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)252))))))))));
        /* LoopNest 2 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (unsigned char i_3 = 1; i_3 < 22; i_3 += 2) 
            {
                {
                    var_16 = ((/* implicit */int) ((var_8) != (((/* implicit */unsigned long long int) 3135853466U))));
                    var_17 -= ((/* implicit */short) min((var_7), (((/* implicit */long long int) ((signed char) (!(((/* implicit */_Bool) arr_10 [i_3] [i_2] [(signed char)2]))))))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned short i_4 = 2; i_4 < 22; i_4 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned int i_5 = 3; i_5 < 21; i_5 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned char i_6 = 1; i_6 < 21; i_6 += 2) 
            {
                for (unsigned long long int i_7 = 0; i_7 < 23; i_7 += 4) 
                {
                    {
                        arr_24 [i_4 - 2] [i_4 - 2] [i_5] [i_7] [(unsigned short)15] = (!(((/* implicit */_Bool) arr_20 [i_6 - 1])));
                        arr_25 [(unsigned short)15] [i_5] [(unsigned short)15] [3] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_19 [i_4 - 2] [i_5 - 2] [i_6 + 2])) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) (short)-31322)))));
                        arr_26 [i_5] [i_5] [i_6 + 1] [(unsigned char)5] = var_10;
                    }
                } 
            } 
            var_18 -= ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)131)) ? (0LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)124)))));
            arr_27 [(_Bool)1] [i_5] = ((/* implicit */short) ((((((/* implicit */int) arr_10 [i_4 - 2] [i_5 - 2] [5LL])) + (2147483647))) >> (((((/* implicit */int) arr_10 [i_4 + 1] [i_5 - 2] [i_5])) + (53)))));
        }
        /* LoopSeq 2 */
        for (signed char i_8 = 2; i_8 < 21; i_8 += 1) 
        {
            var_19 *= ((/* implicit */signed char) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)31322))) : (4ULL)));
            /* LoopNest 2 */
            for (signed char i_9 = 0; i_9 < 23; i_9 += 4) 
            {
                for (unsigned char i_10 = 0; i_10 < 23; i_10 += 3) 
                {
                    {
                        var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) ((18446744073709551607ULL) >> (((((/* implicit */int) (unsigned char)131)) - (85))))))));
                        arr_37 [15ULL] [i_10] [(signed char)1] [i_8] [6LL] = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)125)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))) : (0LL)));
                        var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [i_8 + 2])) ? (((/* implicit */int) arr_7 [i_8 - 1])) : (var_3))))));
                        var_22 &= ((/* implicit */long long int) ((unsigned short) arr_10 [i_4 + 1] [i_4 - 2] [i_8 + 2]));
                    }
                } 
            } 
        }
        for (int i_11 = 1; i_11 < 21; i_11 += 3) 
        {
            arr_41 [i_11] [i_4] &= ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) var_1))))) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (short)-32763))))));
            arr_42 [i_4] = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_28 [i_4] [i_4 - 2]))));
        }
        var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) ((arr_8 [i_4 - 2]) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_4 - 2]))))))));
        arr_43 [0U] = ((((/* implicit */_Bool) arr_12 [9] [(unsigned short)0] [i_4] [i_4])) ? (((/* implicit */int) arr_12 [i_4 + 1] [i_4 + 1] [i_4 + 1] [17LL])) : (var_5));
    }
    for (unsigned short i_12 = 2; i_12 < 22; i_12 += 1) /* same iter space */
    {
        arr_46 [i_12] = ((/* implicit */_Bool) ((((_Bool) arr_19 [(unsigned char)18] [i_12 - 1] [i_12 - 2])) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_19 [i_12] [i_12 - 1] [i_12 - 2])) && (((/* implicit */_Bool) arr_19 [i_12 - 2] [i_12 - 1] [i_12 - 2])))))) : (((-1LL) / (3313892313544063316LL)))));
        arr_47 [i_12] = ((/* implicit */unsigned long long int) (-((-(var_9)))));
        var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) ((((/* implicit */_Bool) (-(arr_20 [i_12 - 1])))) ? (max((((/* implicit */int) arr_28 [i_12 + 1] [i_12 - 2])), (var_10))) : (((/* implicit */int) max((arr_34 [i_12 - 1] [i_12] [i_12]), (arr_44 [i_12])))))))));
        var_25 = ((/* implicit */signed char) var_6);
    }
    var_26 = ((/* implicit */long long int) (~(1U)));
}
