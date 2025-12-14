/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193924
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193924 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193924
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
    for (signed char i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_12 += ((/* implicit */signed char) (unsigned char)246);
                    arr_10 [6U] [8U] [i_2] &= ((/* implicit */signed char) var_8);
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 12; i_3 += 4) 
                    {
                        /* LoopSeq 3 */
                        for (unsigned long long int i_4 = 0; i_4 < 12; i_4 += 1) 
                        {
                            arr_17 [i_1] [i_2] = ((/* implicit */unsigned char) (~((~(935910832U)))));
                            var_13 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_11)))))));
                            var_14 = ((/* implicit */unsigned int) ((arr_5 [i_1]) >= (((/* implicit */int) arr_0 [i_0] [i_2]))));
                        }
                        for (unsigned short i_5 = 0; i_5 < 12; i_5 += 4) 
                        {
                            arr_20 [i_0] [i_1] [i_2] [i_3] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)57674)) ? (((/* implicit */int) arr_3 [i_0] [i_0])) : (((/* implicit */int) (signed char)123))));
                            var_15 = ((/* implicit */long long int) min((var_15), (((/* implicit */long long int) var_3))));
                            var_16 = ((/* implicit */long long int) 125829120U);
                            var_17 = ((/* implicit */short) (-(((/* implicit */int) arr_4 [i_2] [i_1] [i_2]))));
                        }
                        for (long long int i_6 = 2; i_6 < 10; i_6 += 3) 
                        {
                            var_18 += ((/* implicit */short) var_4);
                            var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) arr_16 [3LL] [i_1] [i_1] [i_1] [i_3] [i_3] [i_2]))));
                        }
                        arr_23 [i_0] [i_1] = ((/* implicit */_Bool) ((arr_22 [i_1] [1U] [i_1] [i_1] [i_1]) & (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)54693)))));
                        arr_24 [i_1] = arr_1 [i_3];
                        var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)-11593)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-11593))) : (8940776852290392890ULL))))));
                    }
                    for (long long int i_7 = 0; i_7 < 12; i_7 += 2) 
                    {
                        var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) max((((((/* implicit */_Bool) arr_1 [i_1])) && (((/* implicit */_Bool) arr_14 [i_0] [i_1] [i_0] [4] [i_7] [i_0])))), ((!(((/* implicit */_Bool) max((((/* implicit */unsigned char) arr_4 [i_0] [i_0] [i_7])), (arr_1 [i_0])))))))))));
                        var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) ((((/* implicit */int) (signed char)123)) << (((-1076079139) + (1076079143))))))));
                        var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)178)) ? (((/* implicit */int) (signed char)123)) : (((/* implicit */int) (_Bool)1))));
                        var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) (unsigned short)20157))));
                        var_25 *= ((/* implicit */short) (((+(((/* implicit */int) (signed char)123)))) / (((/* implicit */int) (signed char)127))));
                    }
                }
            } 
        } 
    } 
    var_26 -= ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) var_8)), (min((((((/* implicit */_Bool) var_0)) ? (var_3) : (((/* implicit */unsigned long long int) var_6)))), (((/* implicit */unsigned long long int) (_Bool)1))))));
}
