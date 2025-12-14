/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2169
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2169 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2169
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
    var_11 = ((/* implicit */unsigned int) (~(max((((/* implicit */unsigned long long int) ((((/* implicit */int) var_0)) * (((/* implicit */int) var_7))))), (min((4131537657208200778ULL), (((/* implicit */unsigned long long int) (unsigned short)16788))))))));
    var_12 = ((/* implicit */_Bool) var_3);
    /* LoopSeq 3 */
    /* vectorizable */
    for (long long int i_0 = 3; i_0 < 19; i_0 += 1) 
    {
        var_13 = ((((/* implicit */long long int) ((/* implicit */int) var_0))) | (arr_0 [i_0 - 2]));
        arr_2 [i_0] &= ((/* implicit */short) ((((/* implicit */int) ((_Bool) (signed char)19))) >> (((((arr_1 [i_0 - 2]) >> (((/* implicit */int) (unsigned char)0)))) - (2348330897U)))));
        /* LoopNest 3 */
        for (unsigned int i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 20; i_2 += 4) 
            {
                for (unsigned char i_3 = 3; i_3 < 16; i_3 += 1) 
                {
                    {
                        arr_12 [i_0] [(_Bool)1] [i_2] [i_3] |= ((/* implicit */signed char) (short)30388);
                        var_14 = ((/* implicit */long long int) ((((/* implicit */int) (unsigned char)142)) >> (((((/* implicit */int) (unsigned char)255)) - (241)))));
                        var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_10 [i_0] [i_0 - 3] [i_1] [i_3 + 4] [i_3])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (short)32767))));
                        arr_13 [i_3] [i_3] [i_3] [i_3] [i_0 - 2] [i_0 - 2] = ((/* implicit */_Bool) var_10);
                    }
                } 
            } 
        } 
        /* LoopNest 3 */
        for (signed char i_4 = 0; i_4 < 20; i_4 += 4) 
        {
            for (long long int i_5 = 0; i_5 < 20; i_5 += 1) 
            {
                for (int i_6 = 1; i_6 < 17; i_6 += 4) 
                {
                    {
                        arr_22 [i_0] [i_4] [i_5] [i_5] = ((/* implicit */signed char) arr_10 [i_4] [i_5] [i_4] [i_0] [i_4]);
                        /* LoopSeq 1 */
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            arr_27 [i_7] [i_6] = ((/* implicit */unsigned long long int) var_0);
                            var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) arr_9 [i_0 - 3] [i_0 + 1] [i_0 - 1] [i_6 + 1]))));
                        }
                        arr_28 [i_0] [i_4] [i_5] [i_6 - 1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)113)) | (((/* implicit */int) (short)-6623))));
                    }
                } 
            } 
        } 
    }
    for (unsigned long long int i_8 = 0; i_8 < 15; i_8 += 4) 
    {
        arr_31 [i_8] = ((/* implicit */unsigned long long int) arr_24 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8]);
        arr_32 [i_8] = ((/* implicit */unsigned char) var_6);
        arr_33 [i_8] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 14315206416501350840ULL)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (signed char)-81))));
        /* LoopNest 2 */
        for (unsigned char i_9 = 4; i_9 < 14; i_9 += 4) 
        {
            for (signed char i_10 = 2; i_10 < 13; i_10 += 3) 
            {
                {
                    var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((((long long int) arr_17 [i_8] [(unsigned char)7] [i_8])) | (((/* implicit */long long int) ((4294967295U) + (((/* implicit */unsigned int) ((/* implicit */int) (short)-30376))))))))) : (arr_8 [i_8] [i_9 - 4] [i_10 - 2]))))));
                    arr_39 [i_8] [i_9] [i_10] = ((/* implicit */unsigned long long int) arr_5 [i_8]);
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned int i_11 = 1; i_11 < 18; i_11 += 1) 
    {
        arr_44 [i_11 + 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(arr_5 [i_11])))) ? (((/* implicit */int) (unsigned char)4)) : (((/* implicit */int) arr_9 [i_11] [i_11] [i_11] [i_11]))));
        var_18 = (-(arr_43 [i_11 + 1]));
        arr_45 [i_11] &= ((/* implicit */short) var_7);
    }
}
