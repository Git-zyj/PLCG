/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193935
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193935 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193935
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
    for (short i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (signed char i_1 = 1; i_1 < 17; i_1 += 2) 
        {
            {
                arr_4 [i_0] [i_1] [i_0] &= ((/* implicit */unsigned char) ((arr_1 [(short)13]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-34)))));
                arr_5 [i_0] [10U] [i_0] |= ((/* implicit */_Bool) 18446744073709551608ULL);
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 20; i_2 += 2) 
                {
                    for (int i_3 = 0; i_3 < 20; i_3 += 2) 
                    {
                        {
                            arr_14 [i_0] [i_0] = ((/* implicit */unsigned char) max((((/* implicit */long long int) arr_12 [i_0] [0U])), (var_3)));
                            /* LoopSeq 1 */
                            for (unsigned int i_4 = 0; i_4 < 20; i_4 += 2) 
                            {
                                arr_18 [i_0] [i_0] [i_0] [i_0] [i_3] [12] [i_0] = 13850739638836092224ULL;
                                arr_19 [i_0] [(unsigned short)14] [i_3] [i_3] [i_4] = ((/* implicit */int) var_9);
                                arr_20 [i_4] [(signed char)0] [18ULL] [i_2] [(signed char)0] [i_4] |= ((/* implicit */_Bool) (+(var_11)));
                            }
                            arr_21 [i_1] [i_1] [i_1] = ((/* implicit */_Bool) ((short) max((((/* implicit */long long int) ((((/* implicit */_Bool) 125800307U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (4169166975U)))), (max((((/* implicit */long long int) var_9)), (arr_17 [i_0] [i_1] [i_0] [i_1]))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned char i_5 = 1; i_5 < 14; i_5 += 3) 
    {
        arr_24 [i_5] [i_5 + 1] = ((short) (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)199)) & (((/* implicit */int) (short)28187)))))));
        arr_25 [i_5] [i_5] = ((/* implicit */unsigned int) 18LL);
    }
    /* vectorizable */
    for (short i_6 = 0; i_6 < 23; i_6 += 4) 
    {
        arr_28 [i_6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)75)) ? (arr_27 [i_6] [i_6]) : (arr_27 [i_6] [i_6])));
        arr_29 [i_6] = ((/* implicit */unsigned char) arr_26 [i_6] [i_6]);
    }
}
