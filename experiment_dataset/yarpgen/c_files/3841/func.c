/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3841
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3841 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3841
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
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (short i_2 = 3; i_2 < 18; i_2 += 2) 
                {
                    for (short i_3 = 0; i_3 < 20; i_3 += 4) 
                    {
                        for (signed char i_4 = 0; i_4 < 20; i_4 += 4) 
                        {
                            {
                                arr_12 [15ULL] [i_1] [i_2] [i_1] [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((var_1) << (((562949953421280ULL) - (562949953421249ULL))))))));
                                var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) ((((((/* implicit */int) (short)(-32767 - 1))) + (2147483647))) << (((((/* implicit */int) (unsigned short)65408)) - (65408))))))));
                            }
                        } 
                    } 
                } 
                var_16 = ((/* implicit */signed char) var_6);
                var_17 = ((/* implicit */short) (!(((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_1] [i_0] [i_0])) && (((/* implicit */_Bool) arr_0 [i_0]))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (int i_5 = 4; i_5 < 21; i_5 += 3) 
    {
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            for (unsigned int i_7 = 0; i_7 < 22; i_7 += 4) 
            {
                {
                    var_18 += ((/* implicit */short) max((((((/* implicit */_Bool) ((long long int) arr_18 [i_7]))) ? (((((/* implicit */_Bool) arr_14 [i_5 - 2])) ? (arr_13 [i_5]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)138))))) : (arr_13 [i_7]))), (((/* implicit */long long int) arr_18 [i_7]))));
                    /* LoopNest 2 */
                    for (int i_8 = 3; i_8 < 20; i_8 += 2) 
                    {
                        for (long long int i_9 = 1; i_9 < 19; i_9 += 3) 
                        {
                            {
                                var_19 = ((/* implicit */long long int) max((var_19), (arr_17 [i_7] [i_7] [i_7])));
                                var_20 = ((/* implicit */int) ((max((((/* implicit */long long int) arr_14 [i_5])), (((8343351890134254834LL) - (arr_17 [i_5] [(unsigned char)19] [i_5]))))) ^ (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) arr_23 [i_5 - 2] [i_6] [i_5 - 2] [i_8] [i_9])) <= (((((/* implicit */_Bool) (unsigned short)128)) ? (-8343351890134254858LL) : (-8343351890134254858LL)))))))));
                                var_21 += ((/* implicit */unsigned long long int) max((((/* implicit */unsigned char) max(((!(((/* implicit */_Bool) var_7)))), (((((/* implicit */_Bool) arr_22 [16] [7U] [i_6] [i_5 + 1])) && (((/* implicit */_Bool) arr_19 [i_9] [i_8 - 3] [(unsigned short)19] [i_6]))))))), (arr_20 [i_7] [i_9] [i_7] [i_8 - 2] [i_9])));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_10 = 0; i_10 < 19; i_10 += 1) 
    {
        for (unsigned short i_11 = 1; i_11 < 18; i_11 += 2) 
        {
            {
                /* LoopSeq 1 */
                for (short i_12 = 0; i_12 < 19; i_12 += 2) 
                {
                    arr_33 [i_11] [i_11] [i_11] [i_11] = ((/* implicit */int) arr_25 [i_11 - 1]);
                    arr_34 [i_12] [i_12] [i_12] = ((/* implicit */int) arr_11 [i_10] [i_10] [i_12] [i_12] [i_12]);
                    var_22 = ((/* implicit */unsigned long long int) min((var_22), (arr_31 [i_10] [i_11] [16LL] [i_10])));
                }
                var_23 += ((/* implicit */_Bool) ((arr_8 [i_10] [10] [10] [i_10]) ? ((~(12472366003424466029ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) ((unsigned char) var_5)))))));
            }
        } 
    } 
}
