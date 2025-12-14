/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196410
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196410 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196410
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
    for (long long int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            {
                /* LoopSeq 2 */
                for (long long int i_2 = 3; i_2 < 8; i_2 += 4) 
                {
                    var_20 |= ((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned short)44005)) ? (2147483647LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)729))))) + (((/* implicit */long long int) max(((-2147483647 - 1)), (((/* implicit */int) (_Bool)1)))))));
                    arr_7 [i_2] [i_1] [i_2 - 1] [i_2] = ((/* implicit */signed char) (~((~(((/* implicit */int) (signed char)-1))))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        for (long long int i_4 = 0; i_4 < 10; i_4 += 1) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) max((-9223372036854775802LL), (((/* implicit */long long int) (unsigned short)729)))))));
                                var_22 = ((/* implicit */int) ((unsigned int) max((arr_9 [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_3]), (arr_9 [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_3]))));
                            }
                        } 
                    } 
                }
                for (signed char i_5 = 0; i_5 < 10; i_5 += 1) 
                {
                    /* LoopNest 2 */
                    for (short i_6 = 0; i_6 < 10; i_6 += 4) 
                    {
                        for (long long int i_7 = 0; i_7 < 10; i_7 += 1) 
                        {
                            {
                                var_23 *= ((/* implicit */signed char) (short)32767);
                                var_24 = (-(((((/* implicit */_Bool) (unsigned char)66)) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) ((3504799901154258936ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)173))))))))));
                                var_25 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_6])) ? (var_13) : (((/* implicit */unsigned long long int) arr_1 [i_0]))))) ? ((~(((/* implicit */int) arr_16 [i_1] [i_6] [i_0] [i_0] [i_5] [i_1] [i_1])))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)86)))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_8 = 0; i_8 < 10; i_8 += 2) 
                    {
                        for (long long int i_9 = 1; i_9 < 7; i_9 += 1) 
                        {
                            {
                                arr_23 [i_0] [(short)6] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) var_12);
                                var_26 = ((/* implicit */unsigned char) ((9222809086901354496ULL) > (((/* implicit */unsigned long long int) -141892816))));
                            }
                        } 
                    } 
                }
                arr_24 [i_0] [i_0] [i_0] = arr_6 [i_1];
                arr_25 [i_1] [(unsigned char)3] [i_0] = arr_20 [i_0] [i_0] [(_Bool)1] [(unsigned char)4] [i_1] [i_0];
                var_27 = ((/* implicit */unsigned short) ((((((/* implicit */int) (signed char)-1)) / (((/* implicit */int) (short)8190)))) / (((((/* implicit */_Bool) (unsigned char)50)) ? (((/* implicit */int) (unsigned char)115)) : (((/* implicit */int) (signed char)-9))))));
            }
        } 
    } 
    var_28 = ((/* implicit */unsigned long long int) 3294385041U);
}
