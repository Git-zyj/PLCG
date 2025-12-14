/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189907
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189907 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189907
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
    var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) var_1)) ? (281474976710655LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (var_0) : (var_8))))))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_1)))) : (((/* implicit */int) var_11))));
    /* LoopNest 2 */
    for (signed char i_0 = 4; i_0 < 22; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 1; i_2 < 22; i_2 += 2) 
                {
                    for (long long int i_3 = 2; i_3 < 19; i_3 += 2) 
                    {
                        {
                            arr_14 [i_2] [i_2] [i_2] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (4192204912811999839LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535)))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)30066)) ? (((/* implicit */int) (signed char)-100)) : (((/* implicit */int) (signed char)-1))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 3733588903U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)(-127 - 1)))))) ? (arr_13 [i_0 - 2]) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_13 [i_2])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_1 [(_Bool)1])))))))));
                            var_20 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 6291456U)) ? (((/* implicit */int) (unsigned short)2)) : (((/* implicit */int) (signed char)-7))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-1))) : (((((/* implicit */_Bool) -1)) ? (1021444234U) : (1289814210U)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65531))) : (1213545750U)));
                            var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4856488557596068322LL)) ? (3081421546U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0)))))) ? (((((/* implicit */_Bool) 1945389200U)) ? (12085013670065920990ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (arr_12 [i_0 - 2] [i_0 - 2] [i_2] [i_0 - 2] [i_0 - 2]) : (((/* implicit */unsigned int) arr_10 [8U] [i_1] [8U]))))) : (((((/* implicit */_Bool) 100663296)) ? (var_18) : (((/* implicit */long long int) arr_12 [i_0] [11U] [11U] [(short)19] [i_3])))))))));
                        }
                    } 
                } 
                arr_15 [i_1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551614ULL)) ? (5287649920604699352LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1))))))) ? (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) var_1)) : (arr_10 [i_0] [i_0 + 1] [i_0]))) : (((((/* implicit */_Bool) 1213545750U)) ? (arr_10 [i_0] [i_0 - 4] [i_1]) : (arr_10 [i_0] [i_0 - 4] [i_0])))));
                var_22 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 0LL)) ? (2946581370607364610ULL) : (((/* implicit */unsigned long long int) 134217727U))))) ? (((((/* implicit */_Bool) (short)-25147)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (var_4))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) 4027275715U)) ? (((/* implicit */int) (signed char)0)) : (175259368))))));
            }
        } 
    } 
}
