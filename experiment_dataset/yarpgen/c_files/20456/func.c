/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20456
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20456 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20456
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
    for (unsigned int i_0 = 1; i_0 < 14; i_0 += 3) 
    {
        for (unsigned int i_1 = 1; i_1 < 14; i_1 += 1) 
        {
            {
                var_11 |= ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */_Bool) min((var_9), (((/* implicit */int) (unsigned short)34881))))) || (((((/* implicit */int) (unsigned char)240)) >= (((/* implicit */int) (unsigned char)16))))))) & (((/* implicit */int) var_5))));
                /* LoopNest 2 */
                for (unsigned char i_2 = 1; i_2 < 13; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 3; i_3 < 14; i_3 += 3) 
                    {
                        {
                            var_12 ^= var_10;
                            /* LoopSeq 3 */
                            /* vectorizable */
                            for (unsigned int i_4 = 2; i_4 < 11; i_4 += 4) /* same iter space */
                            {
                                var_13 -= ((/* implicit */short) ((unsigned long long int) ((var_4) / (-15LL))));
                                arr_14 [i_0] [i_0] [(short)2] [i_2] [i_0] [0] = arr_6 [i_0] [i_1 - 1] [i_0];
                                arr_15 [i_0] [i_0] [1U] [i_0] [i_0] = ((/* implicit */unsigned int) ((_Bool) var_10));
                            }
                            for (unsigned int i_5 = 2; i_5 < 11; i_5 += 4) /* same iter space */
                            {
                                var_14 = ((/* implicit */unsigned int) (unsigned char)255);
                                var_15 = ((/* implicit */int) 16086518946366496840ULL);
                            }
                            for (unsigned int i_6 = 2; i_6 < 11; i_6 += 4) /* same iter space */
                            {
                                var_16 *= ((/* implicit */unsigned int) ((var_7) | (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) var_5))))) & (((unsigned int) arr_8 [i_6])))))));
                                var_17 = ((/* implicit */unsigned int) min((var_17), (((unsigned int) max((-14LL), (((/* implicit */long long int) (unsigned short)61124)))))));
                            }
                            arr_20 [i_0 + 1] [i_0] = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)255)) | (((/* implicit */int) arr_0 [i_0]))))) ? (((((/* implicit */_Bool) 17337719973123349180ULL)) ? (arr_10 [i_0] [(signed char)12] [i_1] [i_2] [i_3]) : (var_2))) : (var_7)))));
                        }
                    } 
                } 
                var_18 = ((/* implicit */int) min((var_18), (((/* implicit */int) max((((((18446744073709551615ULL) << (((2031616U) - (2031603U))))) << (((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned char)230)) : (((/* implicit */int) (signed char)-17)))) - (182))))), (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned char)25)))), (((((/* implicit */int) arr_3 [i_0])) & (((/* implicit */int) var_8))))))))))));
                var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) 8363248009614411403ULL))) ? (((((/* implicit */long long int) arr_16 [i_1 + 1] [i_0] [i_0 + 1] [i_0] [i_0 + 1] [i_0])) / (var_4))) : (((/* implicit */long long int) max((((/* implicit */unsigned int) (signed char)60)), (3471261165U))))))) ? (((/* implicit */int) ((((/* implicit */int) (short)28254)) != (((/* implicit */int) ((((/* implicit */int) var_5)) > (((/* implicit */int) var_6)))))))) : (min((((/* implicit */int) (signed char)79)), (-841818246)))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) var_1))));
    var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) max((((/* implicit */unsigned short) (signed char)0)), ((unsigned short)61117)))) * ((-(((/* implicit */int) (short)20030))))))) ? (((((((/* implicit */_Bool) var_9)) ? (9223372036854775805LL) : (var_4))) / (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */short) var_8)), ((short)-32764))))))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
}
