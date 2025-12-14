/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247157
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247157 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247157
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
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (unsigned short i_1 = 2; i_1 < 12; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */int) (unsigned short)13447);
                arr_4 [i_1] [(short)10] = ((/* implicit */unsigned int) arr_0 [i_0] [i_1]);
                var_17 = ((/* implicit */unsigned char) (~(((((/* implicit */unsigned int) arr_3 [i_1 - 2] [i_1 - 1])) * (2498938057U)))));
                arr_5 [i_0] [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)-18682)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)13438))));
                arr_6 [i_1] = ((((/* implicit */int) (signed char)49)) | (((/* implicit */int) (short)17863)));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned short i_2 = 0; i_2 < 17; i_2 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (int i_3 = 0; i_3 < 17; i_3 += 2) 
        {
            var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) 504403158265495552LL))));
            var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) arr_10 [i_2] [i_3]))));
            arr_12 [i_2] [i_2] = ((/* implicit */unsigned short) arr_11 [i_3]);
            arr_13 [i_2] [5] [5] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_8 [i_3] [i_3])) ? (((/* implicit */unsigned long long int) arr_11 [i_2])) : (arr_8 [i_3] [i_2])));
        }
        var_20 = ((/* implicit */_Bool) min((((/* implicit */short) arr_10 [i_2] [i_2])), (min((((/* implicit */short) var_14)), (((short) (unsigned short)52098))))));
        var_21 = ((/* implicit */long long int) ((18446744073709551611ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) min(((short)508), (((/* implicit */short) (_Bool)1))))))));
    }
    for (unsigned short i_4 = 0; i_4 < 17; i_4 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned int i_5 = 1; i_5 < 16; i_5 += 3) 
        {
            for (int i_6 = 0; i_6 < 17; i_6 += 1) 
            {
                for (int i_7 = 2; i_7 < 16; i_7 += 2) 
                {
                    {
                        var_22 = ((/* implicit */long long int) ((_Bool) (_Bool)1));
                        var_23 = ((/* implicit */unsigned char) ((arr_16 [i_5 - 1] [i_5 - 1]) ^ (min((arr_16 [i_5 - 1] [i_5 + 1]), (arr_16 [i_5 - 1] [i_5 - 1])))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (unsigned char i_8 = 2; i_8 < 14; i_8 += 1) 
        {
            for (_Bool i_9 = 0; i_9 < 0; i_9 += 1) 
            {
                {
                    var_24 = ((/* implicit */unsigned long long int) arr_11 [i_8]);
                    /* LoopNest 2 */
                    for (long long int i_10 = 0; i_10 < 17; i_10 += 4) 
                    {
                        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                        {
                            {
                                var_25 = ((/* implicit */unsigned short) min((((13347819079840708370ULL) & (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_25 [i_10] [i_8 - 2] [i_10] [i_10])) ? (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_8 - 1]))) : (-2082533267640496005LL)))))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)521)))))));
                                arr_32 [i_4] [i_8 - 2] [i_8 - 2] [i_10] [i_11] [i_9] = ((1390953179) << (((((-1369859293) + (1369859304))) - (11))));
                                var_26 += ((/* implicit */unsigned short) ((((/* implicit */int) arr_31 [i_8] [i_8 + 2])) * (((((/* implicit */_Bool) 10U)) ? (((/* implicit */int) arr_28 [i_4] [i_4] [i_11] [(signed char)11] [i_9] [(unsigned short)15])) : (((/* implicit */int) arr_31 [(_Bool)1] [7U]))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
}
