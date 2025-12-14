/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197197
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197197 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197197
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 4; i_2 < 17; i_2 += 1) 
                {
                    for (unsigned char i_3 = 1; i_3 < 18; i_3 += 1) 
                    {
                        {
                            var_14 = ((/* implicit */unsigned char) ((short) ((((/* implicit */int) ((signed char) (short)32766))) != (((/* implicit */int) (short)3874)))));
                            var_15 ^= ((/* implicit */int) ((unsigned long long int) ((((((((/* implicit */int) (short)-32766)) + (2147483647))) << (((((/* implicit */int) var_13)) - (36986))))) | (((/* implicit */int) arr_9 [i_0] [i_0] [i_1] [i_2 - 4] [(_Bool)1] [i_3])))));
                        }
                    } 
                } 
                var_16 = ((/* implicit */int) max((var_16), ((+(((var_11) / (((/* implicit */int) arr_7 [i_1] [12U]))))))));
                /* LoopSeq 1 */
                for (unsigned long long int i_4 = 1; i_4 < 18; i_4 += 1) 
                {
                    arr_16 [i_0] [10] = ((/* implicit */int) ((unsigned long long int) min((min((1999005846U), (((/* implicit */unsigned int) (signed char)-15)))), (((/* implicit */unsigned int) arr_0 [i_0])))));
                    /* LoopNest 2 */
                    for (long long int i_5 = 0; i_5 < 19; i_5 += 4) 
                    {
                        for (long long int i_6 = 0; i_6 < 19; i_6 += 4) 
                        {
                            {
                                arr_23 [i_0] [i_0] [12U] [i_4 + 1] [i_5] [i_0] [(signed char)18] = ((/* implicit */signed char) arr_20 [i_6] [i_6] [i_5] [i_4 - 1] [i_5] [i_4 - 1] [(_Bool)1]);
                                arr_24 [i_0] [i_0] [i_4] [(unsigned char)15] [i_6] = ((/* implicit */unsigned int) (~(((((/* implicit */int) min(((short)-32744), (((/* implicit */short) arr_22 [i_0]))))) - ((((-2147483647 - 1)) + (((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_0] [(_Bool)1] [i_0]))))))));
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_19 [i_4] [i_4] [(signed char)18] [i_4 - 1] [0] [(_Bool)1])) ? (((/* implicit */int) (short)32731)) : (arr_19 [i_4] [i_4] [i_4] [i_4 + 1] [i_4 + 1] [i_4]))) < (max((arr_19 [i_4] [(_Bool)1] [2ULL] [i_4 - 1] [2ULL] [(short)0]), (((/* implicit */int) (unsigned short)65535)))))))));
                }
            }
        } 
    } 
    var_18 += ((/* implicit */_Bool) (((((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-32766))) : (0U))) > (((/* implicit */unsigned int) ((((/* implicit */_Bool) 12716853084676437678ULL)) ? (((/* implicit */int) (short)-32731)) : (((/* implicit */int) (_Bool)1))))))) ? (((((/* implicit */_Bool) ((var_7) << (((9223372036854775786LL) - (9223372036854775785LL)))))) ? (((/* implicit */int) (_Bool)0)) : (var_4))) : (((/* implicit */int) var_1))));
    var_19 = ((/* implicit */_Bool) var_6);
}
