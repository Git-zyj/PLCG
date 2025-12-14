/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226788
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226788 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226788
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
    var_20 = ((/* implicit */long long int) var_0);
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_1] [i_2] = ((/* implicit */long long int) ((((((16273676889036175177ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))) >> (((((/* implicit */int) arr_3 [i_0])) + (85))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1))))) != (arr_2 [i_1])))))));
                    var_21 = ((/* implicit */_Bool) (unsigned char)255);
                    var_22 = ((/* implicit */short) (-((-(((/* implicit */int) arr_7 [i_0] [i_1] [i_1]))))));
                    /* LoopSeq 3 */
                    for (short i_3 = 0; i_3 < 21; i_3 += 4) 
                    {
                        var_23 = ((/* implicit */_Bool) ((max((((/* implicit */long long int) (unsigned char)156)), (2390433666021479316LL))) + (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)241)) ? (arr_1 [i_3]) : (arr_1 [i_1]))))));
                        arr_12 [i_2] [(short)2] [i_2] [i_3] = ((/* implicit */short) (((_Bool)1) ? (8ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                        var_24 |= ((/* implicit */unsigned int) (unsigned char)2);
                    }
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        var_25 ^= ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) var_12))) + (min((((/* implicit */long long int) (+(var_11)))), (-1668740442037544367LL)))));
                        /* LoopSeq 4 */
                        for (long long int i_5 = 1; i_5 < 19; i_5 += 1) /* same iter space */
                        {
                            arr_18 [i_0] [i_0] [i_2] [i_2] [12LL] [i_2] [i_2] = ((/* implicit */_Bool) (~((+(arr_9 [i_0] [i_0] [13ULL] [i_0] [i_5])))));
                            arr_19 [i_2] [i_2] [12ULL] [i_5] = ((/* implicit */int) var_19);
                            var_26 = ((/* implicit */unsigned char) max((var_26), (((/* implicit */unsigned char) ((((/* implicit */int) arr_16 [i_1] [i_1])) >= (((((/* implicit */_Bool) var_14)) ? (arr_9 [i_5 - 1] [i_5 + 1] [i_5 + 1] [(unsigned short)18] [i_5]) : (arr_9 [i_5 + 1] [i_5 + 2] [i_5 + 1] [(short)10] [(short)10]))))))));
                        }
                        for (long long int i_6 = 1; i_6 < 19; i_6 += 1) /* same iter space */
                        {
                            arr_23 [i_0] [i_0] [i_2] [i_0] [i_2] = ((/* implicit */_Bool) 4294967295U);
                            arr_24 [(short)12] &= ((/* implicit */short) (_Bool)0);
                        }
                        for (int i_7 = 2; i_7 < 20; i_7 += 2) 
                        {
                            var_27 -= ((/* implicit */_Bool) (-(max((((/* implicit */long long int) arr_5 [i_7 + 1] [i_7 + 1] [i_7 + 1])), (arr_22 [i_7 + 1] [i_7 + 1] [i_7 - 2])))));
                            arr_28 [i_0] [i_0] [i_0] [i_2] = ((/* implicit */signed char) (~(((/* implicit */int) var_0))));
                        }
                        for (_Bool i_8 = 0; i_8 < 0; i_8 += 1) 
                        {
                            arr_32 [i_2] [i_2] [i_2] [i_4] [i_8 + 1] = ((/* implicit */unsigned short) (-(arr_20 [(signed char)8] [i_2] [i_8 + 1] [i_8] [(_Bool)1])));
                            arr_33 [i_0] [i_1] [(short)17] [i_2] [i_8] = ((/* implicit */short) (unsigned char)1);
                            var_28 = ((/* implicit */unsigned long long int) arr_14 [i_0] [(short)16] [i_4] [i_2]);
                            var_29 = ((/* implicit */unsigned int) (!(((((/* implicit */int) arr_5 [i_0] [i_8 + 1] [i_0])) != (((/* implicit */int) arr_5 [i_2] [i_8 + 1] [i_8 + 1]))))));
                        }
                    }
                    /* vectorizable */
                    for (unsigned short i_9 = 2; i_9 < 17; i_9 += 3) 
                    {
                        var_30 ^= ((/* implicit */short) (~((~(((/* implicit */int) arr_4 [i_0]))))));
                        arr_36 [i_2] [i_2] [i_2] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(109547486U)))) ? (((((/* implicit */int) var_3)) + (((/* implicit */int) (unsigned char)249)))) : (((/* implicit */int) ((signed char) 2631536355415869662LL)))));
                    }
                }
            } 
        } 
    } 
    var_31 += ((/* implicit */_Bool) var_19);
}
