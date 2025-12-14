/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230001
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230001 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230001
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 1; i_0 < 18; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            for (short i_2 = 2; i_2 < 18; i_2 += 2) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned int i_3 = 1; i_3 < 17; i_3 += 2) /* same iter space */
                    {
                        arr_8 [i_0] [i_0] [i_3] [i_3] [i_0 - 1] = ((/* implicit */long long int) var_4);
                        arr_9 [i_0] [i_2] [i_0] [i_0] = ((/* implicit */short) (~(((/* implicit */int) arr_4 [i_0] [i_0] [(unsigned short)7] [i_0]))));
                        var_10 += 18446744073709551600ULL;
                        /* LoopSeq 2 */
                        for (unsigned long long int i_4 = 3; i_4 < 15; i_4 += 3) 
                        {
                            arr_13 [i_0] [i_0] [i_1] [i_0] [(short)2] = ((/* implicit */unsigned long long int) (short)18342);
                            arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_0] [12LL] [i_0]))));
                            var_11 = ((/* implicit */_Bool) max((var_11), (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (~(((/* implicit */int) min((var_9), (((/* implicit */unsigned short) (signed char)0)))))))), (((((/* implicit */unsigned long long int) 7U)) - (arr_0 [i_0 + 1]))))))));
                        }
                        for (unsigned int i_5 = 2; i_5 < 18; i_5 += 3) 
                        {
                            arr_17 [i_3] [i_0] [i_0] = ((/* implicit */signed char) (~(((/* implicit */int) (signed char)-1))));
                            var_12 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) - (max((arr_7 [i_0 + 1] [i_1] [i_3 - 1]), (((unsigned long long int) (short)18342))))));
                            arr_18 [i_0] [i_0] [i_0] [i_0] [i_0 - 1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)0)) ? (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)248)) ^ (((/* implicit */int) arr_11 [i_0 + 1] [i_0] [i_0] [i_0] [i_0] [i_0 + 1] [i_0]))))) ? (min((((/* implicit */int) (short)-2967)), ((-2147483647 - 1)))) : (((((/* implicit */_Bool) 4294967288U)) ? (((/* implicit */int) (signed char)3)) : ((-2147483647 - 1)))))) : (((((/* implicit */_Bool) arr_6 [i_0])) ? ((-(((/* implicit */int) (signed char)106)))) : (((/* implicit */int) arr_12 [i_3] [i_3] [i_3 + 2]))))));
                        }
                    }
                    for (unsigned int i_6 = 1; i_6 < 17; i_6 += 2) /* same iter space */
                    {
                        var_13 = ((/* implicit */long long int) (signed char)-15);
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            arr_24 [i_1] [i_0] = ((/* implicit */long long int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (short)18329))) / (arr_7 [2LL] [i_1] [i_1]))) < (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)9)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-15))) : (var_8))))));
                            var_14 = ((/* implicit */unsigned long long int) arr_5 [i_0]);
                            arr_25 [i_2] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(arr_2 [i_2] [i_1] [i_1])))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_23 [i_7] [i_1] [i_6 + 2] [i_6 + 2] [i_1]))) : ((~(var_8)))));
                            arr_26 [i_7] [i_0] [i_6] [i_2] [i_1] [i_0] [i_0] = ((arr_21 [i_0 - 1] [i_0] [i_0 - 1]) & (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)73)))))));
                        }
                    }
                    var_15 -= ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_1 [i_2] [i_1]))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_0 + 1] [i_0] [i_2] [12U] [0LL] [i_0 - 1])) ? (min((((/* implicit */unsigned int) arr_4 [i_0] [i_1] [i_2] [i_0])), (3108482724U))) : (((/* implicit */unsigned int) (-(((/* implicit */int) (short)18337))))))))));
                }
            } 
        } 
    } 
    var_16 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (min((((/* implicit */unsigned int) (signed char)-47)), (max((((/* implicit */unsigned int) var_9)), (var_8))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_7))))) != (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-15))) : (16ULL)))))))));
    var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)-23683))))) ? (4294967288U) : (((((/* implicit */_Bool) var_8)) ? (max((((/* implicit */unsigned int) (signed char)-1)), (10U))) : (((/* implicit */unsigned int) (-(((/* implicit */int) (short)14391)))))))));
}
