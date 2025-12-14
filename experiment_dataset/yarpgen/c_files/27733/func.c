/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27733
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27733 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27733
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
    for (signed char i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (unsigned char i_1 = 2; i_1 < 16; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 17; i_2 += 2) 
                {
                    for (unsigned char i_3 = 0; i_3 < 17; i_3 += 3) 
                    {
                        for (unsigned int i_4 = 2; i_4 < 14; i_4 += 2) 
                        {
                            {
                                var_10 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) 375055453U)))) == (375055459U)));
                                var_11 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) max((max((var_7), (((/* implicit */long long int) var_1)))), (((/* implicit */long long int) min((var_5), (arr_3 [i_0] [i_0] [i_0]))))))), (((unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (3919911843U) : (((/* implicit */unsigned int) ((/* implicit */int) var_6))))))));
                            }
                        } 
                    } 
                } 
                var_12 = ((/* implicit */long long int) (((-(max((((/* implicit */unsigned int) arr_10 [i_0])), (var_1))))) ^ (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_1 + 1])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (signed char)-127)))))));
                /* LoopSeq 1 */
                for (unsigned long long int i_5 = 0; i_5 < 17; i_5 += 1) 
                {
                    var_13 = ((/* implicit */_Bool) min((var_13), (((/* implicit */_Bool) (+(max((((/* implicit */unsigned long long int) ((int) var_3))), (((((/* implicit */_Bool) 1023ULL)) ? (18446744073709550599ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_1 + 1] [i_1 + 1] [i_5]))))))))))));
                    /* LoopNest 2 */
                    for (short i_6 = 0; i_6 < 17; i_6 += 4) 
                    {
                        for (unsigned int i_7 = 0; i_7 < 17; i_7 += 4) 
                        {
                            {
                                var_14 = ((/* implicit */int) max((((((/* implicit */_Bool) arr_5 [i_5])) ? (18446744073709550606ULL) : (((/* implicit */unsigned long long int) 2111007613U)))), (((/* implicit */unsigned long long int) (short)-27392))));
                                var_15 = ((/* implicit */unsigned int) var_0);
                                var_16 = ((/* implicit */_Bool) min((((/* implicit */long long int) (short)0)), (var_7)));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_8 = 1; i_8 < 13; i_8 += 2) 
                    {
                        for (short i_9 = 1; i_9 < 15; i_9 += 3) 
                        {
                            {
                                var_17 = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */int) (short)-6031)) : (((/* implicit */int) (signed char)-88))));
                                arr_23 [0LL] [i_1 + 1] [7U] [i_1] [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) (+(((/* implicit */int) var_2)))))) ? ((+((+(((/* implicit */int) (_Bool)0)))))) : (((/* implicit */int) arr_6 [3LL] [15] [i_8]))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-15311)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)0))))) ? ((-(4611650834055299072ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1016ULL)) ? (((/* implicit */int) (_Bool)1)) : (1014397682))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_0)) ^ (((/* implicit */int) var_6)))))))) : (((/* implicit */int) (signed char)0))));
    var_19 = (!((!(((/* implicit */_Bool) 2183959705U)))));
}
