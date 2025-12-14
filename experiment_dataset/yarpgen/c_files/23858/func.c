/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23858
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23858 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23858
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
    var_10 &= ((/* implicit */unsigned int) var_4);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            {
                var_11 = ((/* implicit */int) min((((/* implicit */unsigned char) (!(((/* implicit */_Bool) (~(((/* implicit */int) (signed char)1)))))))), (max((arr_0 [i_0] [i_1]), (arr_0 [i_0] [i_0])))));
                var_12 = ((/* implicit */int) min((var_12), (((/* implicit */int) (!(((/* implicit */_Bool) ((-8669841295396455492LL) / (((/* implicit */long long int) 862539600))))))))));
                var_13 ^= ((/* implicit */unsigned char) (-(max((((/* implicit */long long int) var_8)), (var_3)))));
                var_14 = ((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) ((var_4) + (((/* implicit */int) arr_6 [i_0] [i_0] [i_1]))))) ? (max((((/* implicit */int) arr_6 [i_0] [i_1] [i_0])), (var_4))) : (((/* implicit */int) ((var_1) > (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned char i_2 = 0; i_2 < 23; i_2 += 4) 
    {
        var_15 = ((/* implicit */short) -1136732712);
        arr_10 [i_2] = ((/* implicit */_Bool) (-(((/* implicit */int) max((((/* implicit */unsigned char) ((signed char) (signed char)-74))), (arr_9 [i_2]))))));
    }
    for (long long int i_3 = 0; i_3 < 25; i_3 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned short i_4 = 0; i_4 < 25; i_4 += 4) 
        {
            for (int i_5 = 0; i_5 < 25; i_5 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_6 = 0; i_6 < 25; i_6 += 4) 
                    {
                        for (signed char i_7 = 0; i_7 < 25; i_7 += 2) 
                        {
                            {
                                arr_23 [i_3] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (var_3) : (((/* implicit */long long int) arr_17 [i_3] [i_6]))))) ? (min((((unsigned int) (unsigned short)34885)), (((/* implicit */unsigned int) min((-1136732712), (((/* implicit */int) (_Bool)1))))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) ((int) var_8)))))));
                                arr_24 [i_7] [i_6] [i_5] [i_4] [(unsigned char)22] = (-(((/* implicit */int) (unsigned short)63)));
                            }
                        } 
                    } 
                    arr_25 [i_3] = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) var_1))))) == (((/* implicit */int) ((((/* implicit */_Bool) arr_14 [i_3])) && (((/* implicit */_Bool) arr_14 [i_5])))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned short i_8 = 0; i_8 < 25; i_8 += 4) 
        {
            for (unsigned char i_9 = 1; i_9 < 21; i_9 += 4) 
            {
                {
                    var_16 = (+(((((/* implicit */_Bool) (unsigned short)65472)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_22 [i_9 + 3] [i_8] [i_3] [i_8] [i_9 + 3] [(unsigned char)4])))));
                    var_17 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (-(var_5)))) ? (((137438953471LL) % (((/* implicit */long long int) var_5)))) : (((/* implicit */long long int) arr_32 [i_3] [i_9 + 1] [i_9 + 3] [i_9 + 1])))))));
                    /* LoopNest 2 */
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        for (unsigned int i_11 = 0; i_11 < 25; i_11 += 1) 
                        {
                            {
                                arr_40 [i_3] [11ULL] [i_3] [i_10] [i_11] = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) max((((/* implicit */long long int) arr_15 [i_3] [i_3] [(unsigned char)7] [i_3])), (arr_28 [i_3] [i_3])))))) ? ((-(((/* implicit */int) arr_37 [i_9 + 4] [i_10] [i_11] [i_11] [i_11] [i_11] [i_11])))) : (((/* implicit */int) var_0))));
                                var_18 = ((/* implicit */long long int) (_Bool)0);
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    var_19 = ((/* implicit */unsigned short) var_8);
    var_20 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_9))));
}
