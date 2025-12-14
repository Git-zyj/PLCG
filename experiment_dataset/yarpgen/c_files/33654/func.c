/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33654
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33654 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33654
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
    for (int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            {
                arr_6 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_1 [i_0])), (((((/* implicit */unsigned int) arr_5 [i_0] [i_0] [i_0])) / (arr_3 [i_1] [i_0])))))) ? (((/* implicit */unsigned long long int) min((332111808U), (max((((/* implicit */unsigned int) (_Bool)0)), (3962855488U)))))) : ((-(((var_4) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))))));
                var_10 = ((/* implicit */unsigned short) max((min((arr_3 [i_0] [i_0]), (((/* implicit */unsigned int) var_0)))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_1] [i_0])) || (((/* implicit */_Bool) var_8)))))));
                arr_7 [i_1] [(unsigned char)14] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)47130)) ? (7805512556138489146LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65530)))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned long long int i_2 = 0; i_2 < 15; i_2 += 2) 
                {
                    var_11 -= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_0] [i_2]))));
                    var_12 = ((/* implicit */unsigned long long int) ((arr_3 [i_0] [i_1]) % (((/* implicit */unsigned int) ((/* implicit */int) var_3)))));
                    var_13 = ((/* implicit */unsigned long long int) var_5);
                    var_14 &= ((/* implicit */short) var_6);
                    arr_10 [i_0] [i_0] [i_2] = (((!(((/* implicit */_Bool) var_9)))) ? (((/* implicit */int) arr_4 [i_1] [i_2])) : (((-1437935570) & (((/* implicit */int) (unsigned short)23)))));
                }
                /* LoopSeq 2 */
                for (unsigned char i_3 = 2; i_3 < 14; i_3 += 2) 
                {
                    /* LoopNest 2 */
                    for (signed char i_4 = 0; i_4 < 15; i_4 += 1) 
                    {
                        for (unsigned short i_5 = 2; i_5 < 12; i_5 += 1) 
                        {
                            {
                                var_15 += ((/* implicit */int) var_0);
                                var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) ((min((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_5)))), (((/* implicit */int) arr_14 [i_0] [i_3 + 1] [i_3 - 1] [i_5 - 2] [i_5 - 2])))) != (((((/* implicit */_Bool) arr_5 [i_3 - 1] [i_3] [i_3])) ? (((/* implicit */int) max((var_5), (var_7)))) : (((((/* implicit */int) arr_17 [i_5] [i_4] [9LL] [i_1] [14ULL])) ^ (((/* implicit */int) var_0)))))))))));
                                var_17 = (!(var_5));
                            }
                        } 
                    } 
                    arr_18 [i_3] = ((/* implicit */long long int) (~(((/* implicit */int) var_0))));
                    arr_19 [i_0] [i_1] [i_3 - 2] [i_1] = ((/* implicit */unsigned short) (-(((((/* implicit */long long int) 332111808U)) / (-8397288612844737858LL)))));
                }
                /* vectorizable */
                for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                {
                    var_18 = ((/* implicit */_Bool) (-(((var_9) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_6 - 1] [i_6] [(_Bool)1] [i_1] [(_Bool)1])))))));
                    var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_6] [i_1] [i_1] [i_0] [i_0] [i_0]))) : (((var_7) ? (var_4) : (var_9)))));
                    var_20 += ((/* implicit */short) var_4);
                }
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned int) (~(((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (short)23501))))));
    var_22 = ((/* implicit */unsigned int) var_9);
}
