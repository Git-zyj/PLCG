/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2235
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2235 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2235
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
    for (unsigned int i_0 = 3; i_0 < 18; i_0 += 1) 
    {
        var_10 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((var_9), (((/* implicit */int) (unsigned short)54274))))) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_5))) != (((((/* implicit */_Bool) (unsigned short)11261)) ? (2109012428U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0)))))))) : ((~(((/* implicit */int) var_3))))));
        var_11 = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)0)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_7) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [i_0])))))) ? (((int) var_4)) : (((/* implicit */int) (unsigned short)11262))))) : (((unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (var_8))))));
        /* LoopSeq 3 */
        for (long long int i_1 = 2; i_1 < 19; i_1 += 4) 
        {
            arr_7 [i_0] [i_0] [i_0] = ((((/* implicit */_Bool) min(((unsigned char)255), (((/* implicit */unsigned char) (_Bool)1))))) ? (((/* implicit */int) ((((/* implicit */int) (_Bool)0)) >= (-1052884213)))) : (((/* implicit */int) (((!(((/* implicit */_Bool) var_1)))) || (((/* implicit */_Bool) ((signed char) arr_0 [i_0])))))));
            var_12 = ((/* implicit */long long int) ((unsigned short) ((((/* implicit */_Bool) (unsigned short)65535)) ? (3466596551U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0 + 2] [i_1 - 1]))))));
            var_13 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))) >= (((18446744073709551615ULL) % (((/* implicit */unsigned long long int) -897230246))))));
        }
        for (unsigned long long int i_2 = 1; i_2 < 19; i_2 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned short i_3 = 0; i_3 < 20; i_3 += 3) 
            {
                for (unsigned int i_4 = 2; i_4 < 19; i_4 += 1) 
                {
                    {
                        var_14 = max((arr_0 [i_0]), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 0U)) ? (882596398U) : (2331644554U))))))));
                        var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_0)) / (((/* implicit */int) (!(((/* implicit */_Bool) 0U)))))))) ? (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((((/* implicit */int) var_3)) / (var_8)))), (var_1)))) : (arr_0 [i_0])));
                    }
                } 
            } 
            var_16 |= var_3;
            var_17 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_0)) < (((int) 2595723687U)))))) - (max((((((/* implicit */unsigned int) var_8)) * (var_1))), (((/* implicit */unsigned int) arr_11 [i_0 - 3] [i_0] [i_0] [i_0]))))));
            var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) var_0))))) ? (max((((/* implicit */unsigned long long int) arr_12 [i_2 - 1] [i_0 + 1] [(short)10])), (((((/* implicit */_Bool) var_5)) ? (arr_0 [(unsigned short)14]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_2 + 1] [i_0] [i_0 + 1]))))))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)30))))))))));
        }
        for (short i_5 = 1; i_5 < 16; i_5 += 4) 
        {
            arr_18 [i_0] [i_0] [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) ((arr_0 [i_0]) ^ (arr_0 [i_0])))) ? ((~(arr_0 [i_0]))) : (((arr_0 [i_0]) | (arr_0 [i_0])))));
            var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) max((((((/* implicit */_Bool) (+(var_8)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-12379))) : (7686699988266834648ULL))), (((/* implicit */unsigned long long int) arr_13 [i_5 + 2] [i_5 + 3] [i_0 - 2] [i_0 + 2])))))));
            var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) (_Bool)1))));
        }
        var_21 = ((/* implicit */unsigned short) -186798860);
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 17; i_6 += 4) 
    {
        arr_21 [i_6] &= ((/* implicit */unsigned char) ((unsigned int) arr_14 [i_6] [i_6] [i_6] [i_6]));
        var_22 += ((/* implicit */int) ((((((/* implicit */_Bool) var_8)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))))) / (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)22201)))));
        var_23 &= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_1 [i_6] [i_6])) : (((/* implicit */int) arr_3 [i_6] [i_6]))))) >= (((((/* implicit */_Bool) var_1)) ? (arr_0 [i_6]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32767)))))));
    }
    for (unsigned long long int i_7 = 1; i_7 < 21; i_7 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_8 = 0; i_8 < 23; i_8 += 2) 
        {
            arr_27 [i_7 - 1] [i_7 - 1] = ((2595723687U) & (4114923216U));
            /* LoopNest 3 */
            for (unsigned int i_9 = 0; i_9 < 23; i_9 += 4) 
            {
                for (int i_10 = 3; i_10 < 20; i_10 += 2) 
                {
                    for (short i_11 = 0; i_11 < 23; i_11 += 4) 
                    {
                        {
                            var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) arr_36 [i_7] [i_7] [i_7] [i_7 - 1]))));
                            arr_37 [i_7] [i_7] [i_7] [i_7] [i_7] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)0)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)41164))) : (6994625768505718257LL)))) ? (max((3170817661U), (((/* implicit */unsigned int) arr_32 [i_11] [i_11] [i_11])))) : (((arr_31 [i_11] [i_11] [i_9] [i_9] [i_11]) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)54274))) : (4259695485U)))))) ? (((/* implicit */int) ((unsigned char) ((((((/* implicit */int) var_5)) + (2147483647))) >> (((var_1) - (2185910424U))))))) : (((/* implicit */int) (!((!(((/* implicit */_Bool) var_4)))))))));
                            var_25 = ((/* implicit */unsigned long long int) max((((((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (var_9) : (var_8)))) | (var_4))), (((/* implicit */long long int) (+(1754179320))))));
                        }
                    } 
                } 
            } 
        }
        /* LoopSeq 1 */
        for (int i_12 = 1; i_12 < 20; i_12 += 1) 
        {
            arr_40 [i_7] [i_12] = ((/* implicit */unsigned short) ((signed char) var_0));
            arr_41 [i_12] [i_7] = ((/* implicit */int) min((((/* implicit */unsigned long long int) ((unsigned char) (+(1333765607))))), (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_30 [i_7] [i_12] [i_7 - 1] [i_7] [i_12 + 1] [i_7 - 1])) ? (var_8) : (((/* implicit */int) arr_31 [i_7] [i_7] [i_7] [i_12] [(unsigned short)4]))))) / (((unsigned long long int) var_6))))));
            var_26 = ((/* implicit */unsigned short) -1754179321);
        }
    }
    var_27 = ((/* implicit */short) max((((/* implicit */long long int) 1754179321)), (-6947524314153456235LL)));
}
