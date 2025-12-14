/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241558
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241558 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241558
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
    var_15 |= ((/* implicit */unsigned char) (+(((/* implicit */int) var_1))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_16 ^= ((((/* implicit */_Bool) (-((+(((/* implicit */int) var_7))))))) ? ((-(((/* implicit */int) var_13)))) : (((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_1))) + (-4757528814821792239LL)))) ? (((((/* implicit */int) arr_0 [i_0])) + (((/* implicit */int) (unsigned char)42)))) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) (unsigned char)25)))))));
            var_17 += ((/* implicit */long long int) ((max((((unsigned int) arr_2 [i_1] [i_1])), (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)0))))))) >> (((/* implicit */int) (unsigned short)0))));
            arr_4 [i_0] [i_0] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [i_0]))))) ? ((~(-6009499082551326159LL))) : (((/* implicit */long long int) ((((/* implicit */int) arr_1 [i_0])) ^ (((/* implicit */int) var_1)))))))) ? (((/* implicit */int) (unsigned char)0)) : (((((/* implicit */int) ((((/* implicit */int) arr_1 [i_1])) == (((/* implicit */int) var_4))))) | (((/* implicit */int) (unsigned char)255))))));
            arr_5 [i_1] [i_0] [i_1] = ((/* implicit */unsigned int) (-(((((/* implicit */int) (!(((/* implicit */_Bool) 6009499082551326165LL))))) * (((/* implicit */int) var_7))))));
        }
        var_18 -= ((/* implicit */int) 0U);
        arr_6 [i_0] |= ((/* implicit */long long int) (~(((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) arr_3 [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_3 [i_0] [i_0] [i_0]))))));
        /* LoopSeq 1 */
        for (int i_2 = 0; i_2 < 13; i_2 += 3) 
        {
            /* LoopNest 2 */
            for (short i_3 = 0; i_3 < 13; i_3 += 4) 
            {
                for (long long int i_4 = 3; i_4 < 12; i_4 += 1) 
                {
                    {
                        var_19 ^= ((/* implicit */int) (unsigned short)0);
                        arr_18 [i_3] [i_3] [i_2] [i_4] [(unsigned char)0] = min((((/* implicit */int) (short)0)), (((int) ((((/* implicit */_Bool) (short)511)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned char)0))))));
                        arr_19 [(_Bool)1] [i_2] [(_Bool)1] [i_0] [i_4 - 1] |= ((((/* implicit */_Bool) var_9)) ? (((((/* implicit */int) arr_15 [i_4 - 2] [i_4 + 1] [i_4 + 1] [i_4 - 3])) - ((((_Bool)1) ? (((/* implicit */int) (unsigned char)255)) : (0))))) : (((((/* implicit */_Bool) arr_1 [i_4 + 1])) ? (((/* implicit */int) arr_0 [i_4 - 3])) : (((/* implicit */int) arr_0 [i_4 - 1])))));
                        arr_20 [i_2] [i_0] [i_2] [i_2] [i_2] &= ((/* implicit */unsigned short) 0U);
                    }
                } 
            } 
            var_20 = ((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(16)))) ? (((/* implicit */int) arr_15 [(short)8] [i_2] [i_2] [i_0])) : (((/* implicit */int) max((((/* implicit */short) arr_15 [i_2] [i_2] [i_0] [i_0])), (var_4))))))) - (max((var_2), (var_9)))));
        }
    }
    for (short i_5 = 0; i_5 < 22; i_5 += 3) 
    {
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 22; i_6 += 2) 
        {
            for (long long int i_7 = 2; i_7 < 21; i_7 += 2) 
            {
                for (long long int i_8 = 0; i_8 < 22; i_8 += 1) 
                {
                    {
                        /* LoopSeq 3 */
                        for (unsigned int i_9 = 0; i_9 < 22; i_9 += 4) 
                        {
                            arr_35 [i_5] [i_6] [i_7 - 1] [i_7 - 1] [i_9] |= ((/* implicit */unsigned int) var_10);
                            arr_36 [i_9] [i_9] [10U] [i_7] [(unsigned char)1] [i_6] [i_5] = ((/* implicit */long long int) ((((/* implicit */_Bool) 4294967295U)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_25 [i_7 - 2] [i_7 + 1] [i_7 - 1])) ? (((/* implicit */int) ((unsigned short) arr_31 [i_6]))) : (((/* implicit */int) ((63U) == (((/* implicit */unsigned int) -1))))))))));
                            var_21 += ((/* implicit */unsigned int) max((((/* implicit */int) var_4)), ((+(((/* implicit */int) var_7))))));
                            var_22 += ((/* implicit */unsigned short) (~((~((~(arr_30 [i_7 + 1] [i_8] [i_9])))))));
                        }
                        for (unsigned int i_10 = 0; i_10 < 22; i_10 += 3) 
                        {
                            var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) arr_23 [i_8])) ? (((/* implicit */long long int) min((var_0), (((/* implicit */int) var_5))))) : (((arr_39 [i_7 + 1] [i_6] [i_7 - 2] [i_8] [i_10]) ^ (((/* implicit */long long int) 18U)))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) max((14), (9)))) > (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0))) % (arr_38 [i_7])))))))));
                            var_24 = ((/* implicit */int) 12U);
                            arr_41 [i_10] [i_10] [i_5] [i_7] [i_7] [i_6] [i_5] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_40 [i_8] [i_8] [i_7 - 1])))))));
                        }
                        for (short i_11 = 3; i_11 < 20; i_11 += 3) 
                        {
                            var_25 -= ((/* implicit */unsigned char) (-((-(((/* implicit */int) var_8))))));
                            arr_45 [i_6] [i_6] = ((/* implicit */int) 6009499082551326158LL);
                        }
                        arr_46 [i_6] [i_7 + 1] [(unsigned char)5] = ((/* implicit */unsigned int) arr_26 [i_5] [i_6] [i_6] [i_8]);
                        arr_47 [(short)11] [(short)11] [i_8] [(short)11] [i_7] [i_7] = ((/* implicit */unsigned short) (+(((/* implicit */int) min((var_12), (var_12))))));
                    }
                } 
            } 
        } 
        var_26 += ((/* implicit */int) ((short) (~(((((/* implicit */_Bool) var_5)) ? (0) : (((/* implicit */int) var_7)))))));
        /* LoopSeq 1 */
        for (int i_12 = 1; i_12 < 20; i_12 += 4) 
        {
            var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)244))))) ? (((((/* implicit */_Bool) arr_38 [i_5])) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_13)) ^ (var_14)))) : (((((/* implicit */_Bool) 4294967295U)) ? (var_9) : (63U))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) 268435455)) ? (var_10) : (((/* implicit */int) max(((_Bool)1), (var_7)))))))));
            var_28 = ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) 213625219)) ? (22) : (((/* implicit */int) (short)12))))))) ? (min((var_11), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (short)-12330)) : (((/* implicit */int) arr_40 [i_5] [(unsigned short)1] [(short)3]))))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_27 [i_5]))));
        }
        var_29 *= ((unsigned short) min((var_2), (4294967295U)));
    }
    var_30 ^= ((/* implicit */int) (+(var_9)));
}
