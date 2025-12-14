/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48669
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48669 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48669
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
    var_11 = ((/* implicit */signed char) max((var_11), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((127ULL) * (((/* implicit */unsigned long long int) var_8)))) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))));
    /* LoopSeq 4 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 3; i_1 < 20; i_1 += 4) 
        {
            for (unsigned char i_2 = 1; i_2 < 21; i_2 += 2) 
            {
                {
                    arr_8 [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) (unsigned char)96);
                    arr_9 [i_1] [i_1] [i_1] [i_2] = ((/* implicit */unsigned short) ((((_Bool) (signed char)-33)) || (((/* implicit */_Bool) var_1))));
                    var_12 ^= ((/* implicit */_Bool) (short)32753);
                    var_13 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned char)31))));
                }
            } 
        } 
        arr_10 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(arr_5 [i_0] [i_0 + 1])))) ? (((arr_5 [i_0] [i_0]) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))) : (((/* implicit */unsigned long long int) var_8))))) ? ((((_Bool)1) ? (((/* implicit */int) arr_6 [3U] [i_0 + 1])) : (((/* implicit */int) (_Bool)1)))) : ((+(((/* implicit */int) var_6))))));
        var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) var_2))))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)92))))) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)107))) : (var_8)))))) ? ((~(((/* implicit */int) min((var_5), (((/* implicit */unsigned short) (short)25588))))))) : (((((/* implicit */_Bool) arr_2 [(_Bool)1])) ? (((/* implicit */int) arr_2 [(_Bool)0])) : (((/* implicit */int) arr_2 [(unsigned short)18]))))));
    }
    for (unsigned char i_3 = 1; i_3 < 14; i_3 += 4) 
    {
        var_15 = arr_2 [12LL];
        var_16 = ((/* implicit */unsigned short) min((((((/* implicit */int) var_10)) >> (((((/* implicit */int) arr_12 [i_3 - 1] [i_3])) + (30600))))), (((((/* implicit */int) arr_12 [i_3 + 1] [i_3 + 1])) * (((/* implicit */int) arr_12 [i_3 - 1] [i_3 + 2]))))));
    }
    /* vectorizable */
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
    {
        arr_16 [i_4] = ((/* implicit */unsigned char) arr_6 [i_4] [i_4]);
        /* LoopNest 2 */
        for (signed char i_5 = 4; i_5 < 17; i_5 += 4) 
        {
            for (signed char i_6 = 1; i_6 < 16; i_6 += 4) 
            {
                {
                    arr_22 [i_4] [i_6] [i_4] [i_4] = ((/* implicit */_Bool) ((unsigned char) arr_19 [i_5 - 4] [i_6] [11ULL]));
                    arr_23 [i_5] [(unsigned char)7] [i_6] = var_0;
                    arr_24 [i_6] [(unsigned char)0] [i_6] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_5 + 1]))) != (var_3)));
                    /* LoopSeq 1 */
                    for (unsigned short i_7 = 0; i_7 < 18; i_7 += 4) 
                    {
                        arr_27 [i_4] [i_4] [i_4] [i_6] = (-(var_8));
                        arr_28 [(short)17] [i_6] [i_6] [(short)17] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_5 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_6]))) : (4294967294U)));
                    }
                    arr_29 [i_4] [i_5] [i_6] [i_6] = ((/* implicit */int) arr_20 [i_6 + 1]);
                }
            } 
        } 
    }
    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) /* same iter space */
    {
        var_17 -= ((/* implicit */unsigned long long int) min((((/* implicit */int) (_Bool)0)), ((~(((/* implicit */int) (signed char)-117))))));
        var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)12))) : (arr_5 [i_8] [i_8])))) ? (arr_5 [i_8] [i_8]) : (((arr_5 [i_8] [i_8]) ^ (arr_5 [i_8] [i_8])))));
        var_19 -= ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) max((((/* implicit */int) arr_26 [i_8] [(unsigned char)4] [i_8] [i_8] [i_8])), (((((/* implicit */_Bool) arr_25 [(unsigned char)0] [i_8] [i_8] [(signed char)2] [i_8] [i_8])) ? (((/* implicit */int) (unsigned char)223)) : (((/* implicit */int) var_9))))))), (((((/* implicit */_Bool) (+(((/* implicit */int) arr_3 [i_8]))))) ? (arr_25 [i_8] [i_8] [i_8] [(unsigned char)0] [(unsigned char)14] [(unsigned char)14]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))));
    }
}
