/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23236
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23236 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23236
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
    var_14 = ((/* implicit */long long int) min((3643171243U), (((/* implicit */unsigned int) (signed char)15))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        /* LoopNest 3 */
        for (short i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            for (unsigned short i_2 = 1; i_2 < 9; i_2 += 3) 
            {
                for (unsigned char i_3 = 0; i_3 < 12; i_3 += 3) 
                {
                    {
                        var_15 = (short)-8192;
                        var_16 |= 807761443907243200LL;
                        /* LoopSeq 4 */
                        for (long long int i_4 = 1; i_4 < 10; i_4 += 1) 
                        {
                            arr_11 [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) ((2521675104617353834LL) & (((/* implicit */long long int) ((/* implicit */int) (short)-10268)))));
                            var_17 += ((/* implicit */long long int) var_5);
                            var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) arr_4 [i_3] [i_2 + 1] [(_Bool)1] [i_0]))));
                            var_19 -= ((/* implicit */short) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [i_1] [i_1] [4LL])) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) var_11))))) != (((2685258713U) >> (((482066457568144508LL) - (482066457568144485LL)))))));
                        }
                        for (long long int i_5 = 2; i_5 < 10; i_5 += 2) 
                        {
                            var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_6 [i_2 + 1])) ^ (((/* implicit */int) arr_4 [i_2 + 1] [i_2 + 1] [i_2] [i_5 + 1]))));
                            arr_15 [i_0] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) var_5))))) ? (((/* implicit */int) arr_10 [i_0] [i_0] [9LL] [9LL] [9LL] [i_0] [i_0])) : (((/* implicit */int) var_2))));
                        }
                        for (unsigned int i_6 = 0; i_6 < 12; i_6 += 2) 
                        {
                            var_21 = ((/* implicit */unsigned short) arr_12 [i_0] [i_0] [i_2] [i_3] [i_0]);
                            arr_19 [i_2] [1LL] [i_2] [i_2] [i_2] [i_2] [i_2 - 1] = ((/* implicit */signed char) var_4);
                            arr_20 [i_6] [i_6] |= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [8LL] [5LL])) ? (((/* implicit */int) arr_7 [i_1] [(unsigned char)2] [i_1])) : (((/* implicit */int) arr_10 [(_Bool)1] [(_Bool)1] [(_Bool)1] [i_3] [i_6] [(_Bool)1] [(_Bool)1]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0] [i_1] [i_2]))) : ((+(7ULL)))));
                        }
                        for (short i_7 = 2; i_7 < 10; i_7 += 3) 
                        {
                            var_22 -= ((/* implicit */short) ((((((/* implicit */long long int) ((/* implicit */int) (short)18))) % (1152921504606781440LL))) >= (((/* implicit */long long int) (+(((/* implicit */int) arr_13 [i_0] [4LL] [i_0] [i_2] [i_2] [i_2])))))));
                            var_23 = ((/* implicit */long long int) ((4742643755458092526ULL) >> (((2147483647ULL) - (2147483602ULL)))));
                            var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) var_8))));
                        }
                    }
                } 
            } 
        } 
        var_25 = (-(((long long int) (short)32767)));
        var_26 = ((/* implicit */short) ((((/* implicit */_Bool) 2050027747U)) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) var_11)))));
        arr_23 [(unsigned short)5] [0LL] = var_6;
    }
    var_27 = ((/* implicit */unsigned short) ((((/* implicit */int) ((482066457568144508LL) != (((/* implicit */long long int) ((/* implicit */int) (unsigned short)10273)))))) & (((/* implicit */int) ((4398046511103ULL) < (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (2050027747U) : (1105183686U)))))))));
    var_28 = ((/* implicit */short) ((((/* implicit */_Bool) (short)0)) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) (short)-8210))));
    var_29 = ((/* implicit */unsigned long long int) max((var_29), (((/* implicit */unsigned long long int) var_12))));
}
