/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235419
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235419 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235419
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
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        var_18 = ((/* implicit */long long int) ((((/* implicit */int) (_Bool)0)) - (((/* implicit */int) max((var_16), (((/* implicit */short) (_Bool)0)))))));
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 19; i_2 += 4) 
            {
                {
                    var_19 = ((/* implicit */unsigned short) arr_6 [i_0] [i_0] [i_1] [i_2]);
                    /* LoopNest 2 */
                    for (short i_3 = 3; i_3 < 18; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 2; i_4 < 16; i_4 += 2) 
                        {
                            {
                                var_20 = ((/* implicit */short) ((((/* implicit */_Bool) ((long long int) (unsigned char)186))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_10 [i_0] [i_3] [i_4])) == (((/* implicit */int) (signed char)-42)))))) : (max((((/* implicit */unsigned long long int) 1179265631U)), (17072833716526142053ULL)))));
                                var_21 = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) min((arr_11 [(signed char)6] [i_2] [i_3 - 2] [i_4 + 3] [i_4 - 1] [i_4]), (min((arr_6 [i_4] [i_2] [i_1] [i_0]), (var_16)))))), (((((/* implicit */_Bool) arr_0 [i_2] [i_4])) ? (var_12) : (((/* implicit */unsigned int) max((((/* implicit */int) arr_11 [(signed char)17] [i_1] [i_1] [i_3 - 2] [i_4] [i_4 - 1])), (-269496810))))))));
                                var_22 = ((/* implicit */unsigned short) min((var_10), ((-(((/* implicit */int) max((var_11), (((/* implicit */signed char) (_Bool)1)))))))));
                                arr_15 [i_3] [i_3] [i_3] = ((/* implicit */int) arr_7 [i_3] [i_4]);
                                arr_16 [i_0] [i_3] = ((/* implicit */long long int) max((((/* implicit */unsigned int) min((65011712), (((/* implicit */int) arr_6 [(short)3] [i_3 - 3] [i_4] [i_3 - 2]))))), (max((((/* implicit */unsigned int) 739946651)), (4194303U)))));
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) max((((/* implicit */signed char) ((((((/* implicit */_Bool) arr_0 [8U] [i_1])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_6)))) != ((~(((/* implicit */int) (_Bool)1))))))), (((signed char) (_Bool)1)))))));
                    var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_0] [i_1])) ? (((/* implicit */int) (short)32758)) : (((/* implicit */int) arr_2 [i_0] [i_1]))))) >= ((~(var_0)))));
                    var_25 += arr_6 [i_0] [i_0] [i_1] [i_0];
                }
            } 
        } 
        var_26 *= ((/* implicit */unsigned short) max((max((((/* implicit */unsigned long long int) (signed char)24)), (max((((/* implicit */unsigned long long int) var_14)), (var_1))))), (((/* implicit */unsigned long long int) max(((signed char)14), (((/* implicit */signed char) (!(((/* implicit */_Bool) (signed char)75))))))))));
    }
    var_27 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */int) (short)16376)) * (((/* implicit */int) (signed char)101))))), (var_2)))) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) (signed char)43)))));
    var_28 = ((/* implicit */int) min((((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned char) var_0))) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (signed char)-14)) : (((/* implicit */int) var_6)))) : (((/* implicit */int) var_11))))), (((((/* implicit */long long int) ((/* implicit */int) min(((signed char)-28), (var_5))))) / (max((((/* implicit */long long int) var_10)), (var_3)))))));
}
