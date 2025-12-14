/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232842
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232842 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232842
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
    var_13 = ((/* implicit */long long int) (~(((var_1) & (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            /* LoopNest 2 */
            for (long long int i_2 = 0; i_2 < 11; i_2 += 1) 
            {
                for (signed char i_3 = 0; i_3 < 11; i_3 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        for (signed char i_4 = 4; i_4 < 8; i_4 += 2) 
                        {
                            var_14 *= ((/* implicit */signed char) arr_2 [i_0]);
                            var_15 = ((/* implicit */_Bool) var_9);
                            var_16 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((signed char) arr_10 [i_4 - 1] [i_1] [i_2] [(unsigned char)0] [3])))));
                        }
                        var_17 -= ((/* implicit */unsigned int) ((((/* implicit */long long int) (-(arr_6 [i_0] [i_1] [i_3])))) + ((-(((arr_8 [i_0] [i_3]) ? (((/* implicit */long long int) arr_3 [(_Bool)1] [i_1])) : (var_6)))))));
                        var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) ? ((+(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0]))) != (12ULL)))))) : (((/* implicit */int) ((((/* implicit */int) var_4)) != (((/* implicit */int) (signed char)-1))))))))));
                    }
                } 
            } 
            arr_13 [i_0] [i_0] [9] = ((/* implicit */unsigned short) (((~(((41ULL) << (((/* implicit */int) var_3)))))) >> (((((((/* implicit */int) var_3)) << ((((~(var_10))) - (1234329802233402873ULL))))) - (4718588)))));
        }
        arr_14 [(unsigned char)10] [i_0] = ((/* implicit */int) var_0);
        /* LoopNest 3 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            for (signed char i_6 = 3; i_6 < 7; i_6 += 3) 
            {
                for (unsigned long long int i_7 = 0; i_7 < 11; i_7 += 2) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned int i_8 = 0; i_8 < 11; i_8 += 2) 
                        {
                            arr_26 [(unsigned short)9] [i_5] [(_Bool)1] [(_Bool)1] [i_6] [i_7] [i_8] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) || ((!(((/* implicit */_Bool) arr_17 [i_0] [i_6] [i_6] [7]))))));
                            var_19 = ((/* implicit */long long int) (-((-(-1471784011)))));
                        }
                        var_20 ^= ((/* implicit */unsigned char) (~(((((/* implicit */int) arr_8 [i_0] [4ULL])) | (((/* implicit */int) (_Bool)0))))));
                        arr_27 [(unsigned char)8] [4] [i_6] [(signed char)10] = ((/* implicit */int) (signed char)31);
                    }
                } 
            } 
        } 
    }
    for (short i_9 = 0; i_9 < 12; i_9 += 2) 
    {
        arr_31 [(_Bool)1] = ((/* implicit */long long int) (~((+(((((/* implicit */_Bool) 6)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (unsigned char)15))))))));
        var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) var_10))));
        arr_32 [i_9] [i_9] |= (+(((((/* implicit */_Bool) (+(arr_30 [i_9])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_29 [i_9] [i_9]))) : (11091307234920366594ULL))));
        var_22 = ((/* implicit */_Bool) arr_29 [i_9] [i_9]);
    }
    for (signed char i_10 = 1; i_10 < 15; i_10 += 3) 
    {
        var_23 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_33 [4U] [4LL])) ? (((((/* implicit */_Bool) (-(((/* implicit */int) arr_33 [0ULL] [6ULL]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (((((/* implicit */_Bool) arr_33 [(unsigned short)8] [i_10])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_33 [(_Bool)0] [i_10 - 1]))) : (18446744073709551553ULL))))) : (((/* implicit */unsigned long long int) ((int) ((long long int) arr_33 [(unsigned short)2] [(unsigned short)2]))))));
        var_24 = ((/* implicit */long long int) ((((((/* implicit */_Bool) 4505977619681934705LL)) ? (arr_34 [i_10]) : (arr_34 [i_10]))) != (((/* implicit */int) ((((((/* implicit */_Bool) var_12)) ? (arr_34 [i_10]) : (arr_34 [i_10]))) != (((/* implicit */int) var_0)))))));
    }
    var_25 = ((/* implicit */long long int) (+(((/* implicit */int) (!(((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) var_2)))))))));
}
