/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38572
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38572 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38572
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
    var_12 = ((/* implicit */int) var_11);
    var_13 = ((/* implicit */unsigned char) var_4);
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_14 = ((/* implicit */unsigned char) ((((unsigned long long int) (unsigned char)209)) >= (((/* implicit */unsigned long long int) ((((/* implicit */int) ((_Bool) (_Bool)0))) ^ (((/* implicit */int) (_Bool)1)))))));
                    arr_8 [i_2] [(unsigned char)3] [i_2] = ((/* implicit */unsigned char) min((max((((((/* implicit */int) (_Bool)1)) << (((var_6) - (2810740217U))))), (((/* implicit */int) ((_Bool) (_Bool)1))))), (((/* implicit */int) max(((((_Bool)1) || (((/* implicit */_Bool) var_7)))), (arr_2 [(unsigned char)3]))))));
                }
            } 
        } 
        arr_9 [i_0] = (unsigned char)127;
    }
    for (short i_3 = 1; i_3 < 8; i_3 += 3) 
    {
        arr_12 [(unsigned char)1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((arr_6 [22LL]), (arr_6 [(short)18])))) ? (min((((/* implicit */int) arr_4 [i_3 + 2])), (-1776205912))) : (((((/* implicit */int) arr_4 [i_3 + 3])) ^ (((/* implicit */int) arr_4 [i_3 - 1]))))));
        var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) (!((_Bool)1))))));
    }
    for (short i_4 = 1; i_4 < 12; i_4 += 3) 
    {
        /* LoopNest 2 */
        for (long long int i_5 = 0; i_5 < 13; i_5 += 1) 
        {
            for (unsigned int i_6 = 2; i_6 < 12; i_6 += 4) 
            {
                {
                    var_16 = (_Bool)1;
                    /* LoopSeq 1 */
                    for (int i_7 = 1; i_7 < 12; i_7 += 2) 
                    {
                        var_17 = (!(((/* implicit */_Bool) (((_Bool)1) ? (arr_21 [i_4 - 1] [i_5] [i_4] [i_7 - 1]) : (1296688695U)))));
                        arr_26 [i_4 + 1] [i_5] = ((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) -964333604)))))));
                    }
                    arr_27 [i_5] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_21 [i_4] [i_4 + 1] [(_Bool)1] [i_6]) % (((/* implicit */unsigned int) (-(((/* implicit */int) arr_15 [i_5] [i_6 - 1])))))))) ? (max((((0ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */unsigned long long int) (-(var_1)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned short)19236), (((/* implicit */unsigned short) var_2))))))));
                    /* LoopSeq 1 */
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        arr_31 [i_4] [i_4] [i_6] [(unsigned char)6] [i_5] [i_4] = ((/* implicit */unsigned int) min(((unsigned char)255), (((/* implicit */unsigned char) (_Bool)1))));
                        arr_32 [i_4] = ((/* implicit */int) ((max((-517681765), (var_7))) >= ((((_Bool)0) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_22 [i_6 + 1] [i_5] [i_4 - 1]))))));
                    }
                }
            } 
        } 
        var_18 ^= ((/* implicit */unsigned char) ((((/* implicit */unsigned int) var_10)) ^ (max((9U), (3011745481U)))));
    }
}
