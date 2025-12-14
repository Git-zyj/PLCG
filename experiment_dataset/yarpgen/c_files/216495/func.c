/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216495
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216495 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216495
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
    var_15 = ((/* implicit */short) (~(2097151U)));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (unsigned char i_1 = 3; i_1 < 22; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 23; i_2 += 3) 
            {
                {
                    var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 29LL)) ? (2097147U) : (108008812U)));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 3; i_3 < 22; i_3 += 1) 
                    {
                        for (short i_4 = 1; i_4 < 22; i_4 += 1) 
                        {
                            {
                                var_17 = ((/* implicit */signed char) (~(((/* implicit */int) (unsigned short)65535))));
                                var_18 = ((/* implicit */short) min((((/* implicit */long long int) 4186958480U)), (29LL)));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (unsigned int i_5 = 3; i_5 < 21; i_5 += 4) 
                    {
                        /* LoopSeq 1 */
                        for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                        {
                            arr_17 [i_0] [i_1] [i_2] [i_5 - 3] [i_0] [i_0] = max((((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_1 + 1] [i_5 - 2] [i_6 - 1]))))), ((~(((/* implicit */int) (short)23828)))));
                            arr_18 [i_0] [i_0] [i_1] [i_2] [i_5] [(unsigned short)0] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((731335436579313393LL), (((/* implicit */long long int) arr_2 [i_5 - 2]))))) ? ((-(((/* implicit */int) (short)-23827)))) : (((((/* implicit */_Bool) -30LL)) ? (2147483647) : (((/* implicit */int) (signed char)23))))));
                        }
                        var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) ((18446744073709551615ULL) % (((/* implicit */unsigned long long int) 6092695349460870333LL)))))));
                        var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 5194947251873003212LL)) ? (4611686018427379712LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)164)))));
                        arr_19 [i_0] [i_5] [i_5] [i_5 - 2] [i_2] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 18446744073709551615ULL)) || (((/* implicit */_Bool) (signed char)23))));
                    }
                    for (int i_7 = 0; i_7 < 23; i_7 += 1) 
                    {
                        arr_22 [i_0] [i_2] [i_2] [i_2] [i_1] = ((/* implicit */long long int) var_11);
                        var_21 *= ((/* implicit */unsigned short) ((2147483647U) * (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))));
                    }
                    var_22 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned char)166)) ? (((/* implicit */int) (unsigned short)5135)) : (((/* implicit */int) (_Bool)1)))) / (((/* implicit */int) var_0))));
                }
            } 
        } 
    } 
}
