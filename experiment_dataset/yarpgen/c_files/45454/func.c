/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45454
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45454 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45454
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
    var_15 = ((/* implicit */signed char) var_14);
    /* LoopNest 3 */
    for (signed char i_0 = 2; i_0 < 12; i_0 += 1) 
    {
        for (signed char i_1 = 4; i_1 < 13; i_1 += 1) 
        {
            for (unsigned short i_2 = 4; i_2 < 14; i_2 += 1) 
            {
                {
                    var_16 -= ((/* implicit */long long int) ((min((((/* implicit */unsigned long long int) var_4)), (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65534))) : (var_6))))) / (((((((/* implicit */unsigned long long int) 2147483647)) <= (var_6))) ? (((/* implicit */unsigned long long int) (-(3401113760U)))) : (((((/* implicit */_Bool) 6U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)1024))) : (var_6)))))));
                    arr_9 [i_1] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 5063070668331804278LL)) ? (0LL) : (((/* implicit */long long int) -862497643))))) ? ((-9223372036854775807LL - 1LL)) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (3401113760U)))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)182))) : (-6459621955661146810LL))));
                    /* LoopSeq 1 */
                    for (unsigned int i_3 = 3; i_3 < 15; i_3 += 1) 
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (int i_4 = 1; i_4 < 15; i_4 += 1) 
                        {
                            var_17 = ((/* implicit */unsigned long long int) ((unsigned char) (unsigned char)6));
                            arr_14 [i_0] [i_0] [i_2 + 1] [14LL] [10ULL] [i_4 - 1] [i_4] &= ((/* implicit */unsigned char) var_3);
                        }
                        for (signed char i_5 = 2; i_5 < 13; i_5 += 2) 
                        {
                            var_18 = ((/* implicit */int) min((var_18), (((((((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-1)) ? (var_12) : (((/* implicit */int) var_0))))) != (((((/* implicit */_Bool) var_8)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)(-127 - 1)))))))) ? ((-(((/* implicit */int) var_4)))) : (((/* implicit */int) (!(((var_6) >= (((/* implicit */unsigned long long int) var_5)))))))))));
                            arr_17 [i_0] [i_0] [i_1] = ((/* implicit */short) ((((/* implicit */unsigned int) (-2147483647 - 1))) * (((((((/* implicit */int) (signed char)-50)) != (((/* implicit */int) (unsigned short)48877)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) -862497643)))))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)248))) : (3401113760U)))))));
                            arr_18 [i_3] [i_1] = ((/* implicit */unsigned char) ((((((((/* implicit */int) var_1)) | (((/* implicit */int) (short)20029)))) + (2147483647))) >> (((((max((((/* implicit */unsigned int) (short)-6227)), (var_8))) ^ (((/* implicit */unsigned int) 467513430)))) - (3827455973U)))));
                        }
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned short i_6 = 2; i_6 < 12; i_6 += 2) 
                        {
                            arr_21 [i_1] [(short)4] [i_2] = ((((((/* implicit */_Bool) (unsigned short)3)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)7))))) - (((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)-86))))));
                            var_19 = ((/* implicit */int) 385213376U);
                            var_20 = var_7;
                            var_21 = ((/* implicit */_Bool) 2887730815U);
                        }
                    }
                }
            } 
        } 
    } 
    var_22 ^= ((/* implicit */int) (unsigned short)37883);
}
