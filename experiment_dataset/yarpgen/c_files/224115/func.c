/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224115
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224115 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224115
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
    var_10 = ((/* implicit */unsigned short) var_5);
    /* LoopNest 3 */
    for (unsigned short i_0 = 2; i_0 < 9; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 4) 
            {
                {
                    var_11 *= ((/* implicit */unsigned char) var_4);
                    /* LoopSeq 3 */
                    for (unsigned short i_3 = 0; i_3 < 12; i_3 += 2) 
                    {
                        arr_11 [i_0 - 2] [0U] [8] [10LL] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) -7958101662845977495LL)) ? (((/* implicit */int) (short)21585)) : (((/* implicit */int) (short)-21585))));
                        var_12 = var_1;
                    }
                    for (short i_4 = 0; i_4 < 12; i_4 += 3) /* same iter space */
                    {
                        var_13 *= ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) var_6))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1939955459)) ? (((/* implicit */long long int) arr_7 [(unsigned short)11] [i_2] [10LL] [(unsigned short)11] [(unsigned short)11])) : (-5720527179045530177LL)))) : (((((/* implicit */_Bool) (unsigned char)152)) ? (((/* implicit */unsigned long long int) arr_7 [i_0 + 2] [i_0 + 3] [i_1] [i_2] [4])) : (var_3)))));
                        var_14 -= ((/* implicit */signed char) ((((/* implicit */_Bool) ((18446744073709551615ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_0 + 1] [i_0 - 1] [i_2] [i_4])))))) ? (((((/* implicit */int) arr_12 [i_0 + 1] [i_0 - 1] [i_0] [i_0 + 1])) % (((/* implicit */int) arr_12 [i_0 + 1] [i_0 - 1] [i_0] [i_0])))) : (((/* implicit */int) arr_12 [i_0 + 1] [i_0 - 1] [i_0] [i_0 + 2]))));
                    }
                    for (short i_5 = 0; i_5 < 12; i_5 += 3) /* same iter space */
                    {
                        var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_0] [9U] [11] [9U])) ? (-1818439338) : (((/* implicit */int) (short)-12874))))) ? ((-(923075581))) : (((((/* implicit */_Bool) var_3)) ? (-923075582) : (arr_9 [i_0 + 2] [i_1] [i_0 + 2])))))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)12873)) ? (3540469979U) : (18U)))) : (arr_14 [i_2] [i_2] [i_1] [i_0]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))));
                        arr_16 [i_0] [i_1] [3ULL] [i_1] = ((/* implicit */signed char) var_0);
                    }
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 12492086807829761031ULL)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (signed char)84))))) < (var_3))))));
    var_17 &= ((/* implicit */long long int) (+(((/* implicit */int) (signed char)-125))));
}
