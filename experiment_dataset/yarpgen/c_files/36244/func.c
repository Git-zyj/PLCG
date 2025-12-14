/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36244
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36244 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36244
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
    var_10 = ((/* implicit */unsigned short) ((((/* implicit */int) var_2)) / (((/* implicit */int) max((max(((unsigned short)49152), (((/* implicit */unsigned short) var_5)))), (((/* implicit */unsigned short) var_6)))))));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 12; i_0 += 4) 
    {
        for (unsigned char i_1 = 3; i_1 < 10; i_1 += 2) 
        {
            for (short i_2 = 3; i_2 < 10; i_2 += 1) 
            {
                {
                    arr_10 [i_0] [(signed char)0] [0U] &= ((/* implicit */long long int) arr_8 [3U] [3U]);
                    /* LoopSeq 4 */
                    for (unsigned int i_3 = 2; i_3 < 13; i_3 += 4) /* same iter space */
                    {
                        /* LoopSeq 2 */
                        for (unsigned short i_4 = 1; i_4 < 12; i_4 += 3) 
                        {
                            arr_16 [i_0] [(signed char)2] [i_2] [i_2] [i_0] = ((/* implicit */short) var_5);
                            var_11 &= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */int) arr_5 [i_2] [i_4])) + (2147483647))) >> (((15730011937146884141ULL) - (15730011937146884139ULL)))))) ? (((/* implicit */int) (unsigned char)141)) : (((/* implicit */int) arr_2 [i_3]))))) ? (((((/* implicit */_Bool) arr_8 [i_1] [i_4 + 1])) ? (((/* implicit */int) arr_8 [i_3] [i_4 + 1])) : (((/* implicit */int) (unsigned short)39945)))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)165)))))));
                        }
                        /* vectorizable */
                        for (unsigned short i_5 = 3; i_5 < 13; i_5 += 2) 
                        {
                            var_12 = ((/* implicit */unsigned short) (signed char)-12);
                            var_13 = ((/* implicit */short) (+(arr_4 [i_2])));
                            arr_21 [i_0] [i_3 - 2] [i_3 - 2] = ((/* implicit */short) ((((/* implicit */int) (unsigned short)65535)) / (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_12 [i_5] [i_3] [(signed char)8] [(unsigned char)7])) : (((/* implicit */int) (unsigned short)65535))))));
                            var_14 = ((/* implicit */unsigned char) (unsigned short)16383);
                            arr_22 [i_1] [i_0] [(short)1] [i_5] = ((/* implicit */signed char) var_3);
                        }
                        arr_23 [(unsigned short)11] [i_1] [i_1] [i_0] [i_1 - 3] = ((/* implicit */unsigned short) arr_5 [(unsigned char)6] [(unsigned char)6]);
                        var_15 -= ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2918668533U)) ? (((((/* implicit */int) (short)-1953)) | (((/* implicit */int) (_Bool)0)))) : (((/* implicit */int) (signed char)55))))), (((unsigned long long int) (+(0ULL))))));
                    }
                    /* vectorizable */
                    for (unsigned int i_6 = 2; i_6 < 13; i_6 += 4) /* same iter space */
                    {
                        var_16 = ((/* implicit */int) ((unsigned short) ((signed char) (short)32759)));
                        var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_12 [i_6 + 1] [i_6 - 1] [i_6 - 2] [i_2])) ? (((/* implicit */int) arr_13 [i_1 + 3] [i_1 + 4] [i_6] [i_1] [i_1])) : (((/* implicit */int) arr_13 [i_1 + 2] [i_1 + 1] [i_6] [i_1] [i_1])))))));
                        var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) var_7))));
                    }
                    /* vectorizable */
                    for (unsigned int i_7 = 2; i_7 < 13; i_7 += 4) /* same iter space */
                    {
                        var_19 = ((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)55))));
                        arr_28 [i_0] [i_1] [i_0] [i_7] = (+(((unsigned int) arr_18 [i_0] [i_0] [11U] [(unsigned short)7] [(signed char)13] [(short)7])));
                    }
                    /* vectorizable */
                    for (unsigned int i_8 = 2; i_8 < 13; i_8 += 4) /* same iter space */
                    {
                        var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) (-(((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */int) (unsigned short)57237)) : (((/* implicit */int) arr_18 [i_0] [(unsigned short)4] [(unsigned short)9] [i_0 - 1] [i_0 - 1] [(short)5])))))))));
                        var_21 = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) (short)1)) ? (((/* implicit */int) (unsigned short)256)) : (((/* implicit */int) (signed char)113))))));
                    }
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) var_3))))) / (((/* implicit */int) var_8))));
}
