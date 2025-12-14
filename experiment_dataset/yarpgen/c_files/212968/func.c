/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212968
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212968 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212968
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
    var_11 &= ((/* implicit */short) ((((/* implicit */_Bool) 9223372036854775792LL)) ? (0LL) : (((/* implicit */long long int) 3594889881U))));
    var_12 = ((((/* implicit */_Bool) ((((/* implicit */int) var_6)) | (((/* implicit */int) var_2))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_9))))) : (0ULL));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            {
                var_13 *= ((/* implicit */unsigned char) min((var_0), (((((/* implicit */_Bool) -558510344)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_1]))))));
                arr_6 [i_0] [i_0] [i_1] &= ((/* implicit */long long int) 4095);
                var_14 *= ((/* implicit */unsigned char) var_8);
                arr_7 [i_0] [i_0] [i_0] &= ((/* implicit */short) min((558510343), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_3 [i_0] [(unsigned short)19]))))));
                /* LoopSeq 2 */
                for (long long int i_2 = 0; i_2 < 21; i_2 += 1) 
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 2; i_3 < 18; i_3 += 4) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 21; i_4 += 4) 
                        {
                            {
                                var_15 &= ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_0] [i_3 + 3])) ? (-1839353042869409680LL) : (((/* implicit */long long int) ((/* implicit */int) var_5)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_1] [i_3 + 1]))))) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))) != (7LL)))));
                                var_16 = (+(((((/* implicit */_Bool) var_9)) ? (5881153549424572044LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)1))))));
                            }
                        } 
                    } 
                    arr_14 [i_2] [(short)14] [i_0] [i_0] = min((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)222)) & (((/* implicit */int) (_Bool)1))))), (max((arr_4 [i_0] [i_1] [i_0]), (arr_4 [i_0] [i_1] [i_1]))));
                }
                for (unsigned short i_5 = 2; i_5 < 19; i_5 += 3) 
                {
                    arr_17 [i_5] [i_1] [i_5] = ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (_Bool)1)) : (var_3)))) - (((((/* implicit */_Bool) var_8)) ? (min((0LL), (((/* implicit */long long int) (signed char)63)))) : (((/* implicit */long long int) ((/* implicit */int) var_9)))))));
                    var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) 0LL))));
                }
            }
        } 
    } 
}
