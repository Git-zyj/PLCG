/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40730
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40730 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40730
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
    /* vectorizable */
    for (unsigned short i_0 = 3; i_0 < 17; i_0 += 2) /* same iter space */
    {
        arr_3 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_0 + 1])) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0]))))) : (arr_1 [i_0] [i_0])));
        var_19 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_1 [i_0] [i_0 + 1]))));
        var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3572372069U)) ? (722595226U) : (4294967295U)));
        var_21 = (~(arr_2 [i_0 + 1]));
    }
    for (unsigned short i_1 = 3; i_1 < 17; i_1 += 2) /* same iter space */
    {
        var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) min((min((arr_2 [i_1]), (((/* implicit */long long int) arr_0 [i_1 - 2])))), (((/* implicit */long long int) ((((/* implicit */int) arr_5 [0])) | (((/* implicit */int) arr_5 [0LL]))))))))));
        var_23 = ((/* implicit */int) max((var_23), ((-((-(((/* implicit */int) (_Bool)1))))))));
        /* LoopSeq 3 */
        for (long long int i_2 = 0; i_2 < 19; i_2 += 2) 
        {
            /* LoopSeq 1 */
            for (short i_3 = 0; i_3 < 19; i_3 += 1) 
            {
                arr_12 [i_1] [i_1] = ((/* implicit */unsigned short) min((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)25)) ? (arr_1 [i_1] [i_2]) : (arr_1 [i_1] [i_1])))), (arr_2 [(_Bool)1])));
                var_24 = ((/* implicit */long long int) max((arr_10 [i_1] [i_1 - 1] [(unsigned char)1]), (((unsigned short) arr_4 [i_1] [i_1]))));
            }
            var_25 = ((/* implicit */unsigned char) (-((+(227740348U)))));
        }
        /* vectorizable */
        for (short i_4 = 0; i_4 < 19; i_4 += 4) 
        {
            var_26 = ((/* implicit */unsigned short) ((short) (_Bool)1));
            /* LoopSeq 1 */
            for (unsigned char i_5 = 1; i_5 < 17; i_5 += 1) 
            {
                var_27 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) 4067226948U)) ? (arr_8 [i_1] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_1] [i_1] [i_1]))))) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_5 - 1])))));
                var_28 = ((/* implicit */unsigned short) min((var_28), (((/* implicit */unsigned short) (short)1))));
            }
        }
        for (unsigned long long int i_6 = 2; i_6 < 16; i_6 += 3) 
        {
            arr_21 [i_1] [i_1] = ((/* implicit */long long int) 4294967295U);
            /* LoopSeq 2 */
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                arr_25 [i_1 - 2] [i_6 - 2] [i_1] [i_7] = (!(((/* implicit */_Bool) (unsigned short)65535)));
                arr_26 [i_1 - 1] [i_1] [i_1] [i_6] = ((/* implicit */unsigned short) 3417847738U);
                var_29 = ((/* implicit */unsigned short) ((long long int) max((arr_8 [i_1] [i_1]), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)50206)) < (((/* implicit */int) (_Bool)1))))))));
            }
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                var_30 += ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)59777)) ? (max((arr_17 [(unsigned short)16] [i_6] [(unsigned short)16]), (((/* implicit */long long int) arr_1 [(short)16] [16LL])))) : (((/* implicit */long long int) max((722595226U), (((/* implicit */unsigned int) arr_19 [(_Bool)1] [18U])))))))) ? (((long long int) ((((/* implicit */_Bool) 722595226U)) ? (65535U) : (arr_20 [i_1] [i_1] [i_1])))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_23 [i_1] [(_Bool)1] [i_8])))))) < (9187686535668388491LL)))))));
                var_31 = ((/* implicit */unsigned short) (+(((((/* implicit */int) (!(((/* implicit */_Bool) (short)-1))))) * (((((/* implicit */int) arr_10 [i_1] [i_1] [i_8])) | (((/* implicit */int) arr_9 [i_1]))))))));
            }
            var_32 += ((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_18 [16U])))))));
        }
    }
    for (unsigned short i_9 = 3; i_9 < 17; i_9 += 2) /* same iter space */
    {
        arr_32 [(unsigned short)18] = ((((/* implicit */_Bool) (-(((/* implicit */int) arr_27 [4U] [18] [i_9 - 1] [i_9 + 2]))))) ? (((((/* implicit */_Bool) arr_27 [i_9] [18U] [i_9 - 1] [i_9])) ? (((/* implicit */int) arr_27 [0LL] [18LL] [i_9 - 1] [18LL])) : (((/* implicit */int) arr_27 [i_9 - 3] [12ULL] [i_9 - 1] [i_9])))) : (((/* implicit */int) min((arr_27 [i_9] [(unsigned short)12] [i_9 - 1] [(unsigned short)16]), (arr_27 [0] [14LL] [i_9 - 1] [i_9 - 1])))));
        var_33 = ((/* implicit */short) ((unsigned long long int) ((((/* implicit */_Bool) arr_20 [i_9 + 1] [i_9] [i_9])) ? (arr_20 [i_9 + 2] [(_Bool)1] [i_9 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)56438))))));
        var_34 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_8 [i_9 + 1] [0ULL])) ? (((/* implicit */long long int) ((/* implicit */int) ((arr_18 [(unsigned short)2]) >= (((/* implicit */long long int) ((/* implicit */int) arr_6 [(unsigned short)2] [i_9]))))))) : (((((/* implicit */_Bool) arr_0 [i_9 - 1])) ? (1549245542649196147LL) : (((/* implicit */long long int) ((/* implicit */int) arr_31 [i_9] [i_9])))))))));
        var_35 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_29 [i_9 - 2])) || (((_Bool) (~(arr_23 [i_9] [14LL] [i_9 + 2]))))));
    }
    var_36 ^= ((/* implicit */unsigned int) (((((+(var_6))) + (((/* implicit */long long int) ((/* implicit */int) var_1))))) / (((/* implicit */long long int) var_7))));
}
