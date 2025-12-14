/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217383
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217383 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217383
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned int) (((_Bool)1) ? ((((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0]))) : (-5384879927997936051LL))) << (((((((/* implicit */_Bool) 1443243449)) ? (-1443243450) : (((/* implicit */int) (_Bool)1)))) + (1443243487))))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) (((_Bool)1) && ((_Bool)1))))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (int i_1 = 1; i_1 < 9; i_1 += 2) 
        {
            var_13 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_6))) + (var_9)))) ? (((/* implicit */int) arr_4 [i_0] [(unsigned char)0] [i_1 + 1])) : (((/* implicit */int) ((signed char) arr_1 [i_0])))));
            var_14 = (_Bool)1;
        }
    }
    for (long long int i_2 = 0; i_2 < 14; i_2 += 3) 
    {
        arr_8 [i_2] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_7 [i_2])) ? (((((/* implicit */_Bool) ((arr_7 [i_2]) + (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-39)))))) ? (arr_7 [i_2]) : (max((arr_7 [i_2]), (arr_7 [i_2]))))) : (((/* implicit */unsigned long long int) ((unsigned int) (((_Bool)1) ? (arr_6 [i_2] [i_2]) : (arr_6 [i_2] [i_2])))))));
        arr_9 [i_2] = ((/* implicit */unsigned char) ((((/* implicit */int) var_12)) < (((/* implicit */int) (((-(((/* implicit */int) (_Bool)1)))) > ((~(((/* implicit */int) (_Bool)1)))))))));
        var_15 = ((/* implicit */_Bool) var_2);
    }
    for (signed char i_3 = 0; i_3 < 13; i_3 += 2) 
    {
        arr_13 [i_3] &= ((((/* implicit */_Bool) ((short) arr_7 [i_3]))) ? ((+(arr_7 [i_3]))) : (((/* implicit */unsigned long long int) arr_10 [i_3] [i_3])));
        /* LoopNest 2 */
        for (unsigned int i_4 = 0; i_4 < 13; i_4 += 1) 
        {
            for (unsigned int i_5 = 0; i_5 < 13; i_5 += 2) 
            {
                {
                    arr_19 [i_5] [i_5] [i_3] &= ((/* implicit */unsigned short) min((((/* implicit */unsigned int) ((arr_6 [i_3] [(unsigned short)6]) != (((/* implicit */long long int) ((((/* implicit */_Bool) arr_10 [i_5] [i_3])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_4] [i_5]))) : (arr_16 [i_3] [i_4] [i_5]))))))), (((((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) < (arr_16 [i_3] [i_4] [i_5]))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)12))))) : (((unsigned int) (unsigned char)2))))));
                    /* LoopSeq 1 */
                    for (long long int i_6 = 1; i_6 < 9; i_6 += 1) 
                    {
                        arr_23 [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)125))))), (arr_10 [i_5] [i_6])))) && (((/* implicit */_Bool) arr_7 [i_4]))));
                        arr_24 [i_5] [i_5] [i_5] [i_5] |= ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_11 [i_4]))));
                    }
                }
            } 
        } 
    }
    var_16 = ((/* implicit */unsigned short) var_0);
    var_17 = ((/* implicit */unsigned char) var_11);
}
