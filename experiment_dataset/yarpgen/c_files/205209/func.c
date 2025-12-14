/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205209
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205209 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205209
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
    var_19 = ((/* implicit */_Bool) max((((/* implicit */long long int) var_13)), (((long long int) ((var_9) > (var_1))))));
    var_20 = ((/* implicit */long long int) (+(((/* implicit */int) var_3))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            {
                /* LoopSeq 2 */
                for (short i_2 = 0; i_2 < 21; i_2 += 1) /* same iter space */
                {
                    arr_9 [i_1] = ((/* implicit */signed char) arr_5 [i_0] [(short)20]);
                    arr_10 [i_0] [i_1] = ((/* implicit */unsigned long long int) max((4294967295U), (((/* implicit */unsigned int) -1))));
                }
                for (short i_3 = 0; i_3 < 21; i_3 += 1) /* same iter space */
                {
                    arr_15 [i_0] [i_0] [i_1] [i_3] = ((/* implicit */_Bool) arr_2 [i_0]);
                    /* LoopNest 2 */
                    for (signed char i_4 = 0; i_4 < 21; i_4 += 4) 
                    {
                        for (unsigned long long int i_5 = 0; i_5 < 21; i_5 += 4) 
                        {
                            {
                                arr_21 [i_5] [i_4] [i_3] [i_1] [i_0] = ((int) min((max((((/* implicit */long long int) (_Bool)0)), (17592186044415LL))), (((/* implicit */long long int) (signed char)8))));
                                arr_22 [(unsigned char)13] [(unsigned short)15] [i_5] = ((/* implicit */short) (!((_Bool)1)));
                            }
                        } 
                    } 
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (long long int i_6 = 0; i_6 < 21; i_6 += 4) 
                    {
                        arr_27 [i_3] = ((/* implicit */signed char) 7446074204950134356LL);
                        arr_28 [(unsigned char)6] [(unsigned short)17] [i_3] [i_1] &= ((/* implicit */unsigned short) arr_0 [14LL]);
                        arr_29 [i_0] [i_1] [i_1] [i_3] [i_6] = ((((/* implicit */int) arr_0 [i_3])) ^ (((/* implicit */int) arr_6 [i_6] [i_3] [i_1] [i_0])));
                    }
                    for (unsigned int i_7 = 0; i_7 < 21; i_7 += 3) /* same iter space */
                    {
                        arr_32 [i_7] = (signed char)-106;
                        arr_33 [i_0] [i_1] [i_7] [i_1] [i_3] [(unsigned short)7] = ((/* implicit */_Bool) ((unsigned short) (signed char)-8));
                    }
                    for (unsigned int i_8 = 0; i_8 < 21; i_8 += 3) /* same iter space */
                    {
                        arr_37 [i_0] = ((/* implicit */unsigned int) arr_24 [i_8] [19LL] [19LL] [19LL]);
                        arr_38 [i_0] [(_Bool)1] [i_3] [(_Bool)1] [(unsigned char)15] [i_8] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_8] [i_3] [0LL] [i_0]))) < (min((arr_3 [i_8] [i_8]), (((/* implicit */unsigned int) arr_25 [i_8]))))));
                    }
                    arr_39 [i_0] [i_1] [(unsigned char)9] [(unsigned char)9] = 127LL;
                }
                arr_40 [i_1] = (signed char)-8;
            }
        } 
    } 
}
