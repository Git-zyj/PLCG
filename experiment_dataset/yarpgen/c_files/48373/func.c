/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48373
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48373 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48373
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
    var_10 *= ((/* implicit */short) var_2);
    var_11 = ((/* implicit */short) max((((/* implicit */int) max((((/* implicit */unsigned short) var_6)), (min((((/* implicit */unsigned short) var_5)), ((unsigned short)63247)))))), (((((((/* implicit */int) var_7)) - (((/* implicit */int) (unsigned char)36)))) & ((+(((/* implicit */int) (unsigned short)63247))))))));
    var_12 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) min((var_1), (((/* implicit */short) var_6))))), ((unsigned short)2293)))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)171)) ? (((/* implicit */int) (unsigned char)219)) : (((/* implicit */int) var_1))))) ? ((-(((/* implicit */int) (unsigned char)202)))) : (((/* implicit */int) max(((unsigned char)171), ((unsigned char)31)))))) : (((/* implicit */int) (unsigned char)227))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (unsigned short i_1 = 2; i_1 < 15; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 16; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 3; i_3 < 15; i_3 += 2) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 16; i_4 += 1) 
                        {
                            {
                                arr_13 [15LL] [i_1 + 1] [i_0] [i_1 + 1] [(signed char)9] = ((/* implicit */_Bool) max((((/* implicit */unsigned short) max(((unsigned char)109), ((unsigned char)19)))), ((unsigned short)65535)));
                                var_13 += ((/* implicit */_Bool) (-((~(((/* implicit */int) ((((/* implicit */_Bool) arr_3 [0ULL] [8ULL])) && (((/* implicit */_Bool) var_0)))))))));
                                arr_14 [i_0] [i_0] [i_2] [i_0] [(unsigned char)8] = ((/* implicit */unsigned short) (+((~(((/* implicit */int) arr_9 [i_0] [(short)9] [4ULL] [i_0] [i_0]))))));
                                arr_15 [14LL] [i_1] [i_2] [i_3] [0ULL] [i_3] [0ULL] |= ((((/* implicit */_Bool) ((((/* implicit */int) max((var_6), (arr_8 [i_0] [i_1] [i_1] [i_4])))) | (((/* implicit */int) arr_8 [i_0] [i_0] [i_1] [(unsigned short)2]))))) ? (min((((/* implicit */long long int) (unsigned char)36)), ((-9223372036854775807LL - 1LL)))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) -4306240126044926232LL)))));
                            }
                        } 
                    } 
                    arr_16 [i_0] = ((/* implicit */unsigned short) ((long long int) ((((/* implicit */_Bool) ((-3403357544769043140LL) % (((/* implicit */long long int) ((/* implicit */int) (unsigned char)150)))))) && (((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))))));
                    var_14 += ((/* implicit */short) ((((((/* implicit */_Bool) (unsigned char)36)) ? (((((/* implicit */_Bool) (unsigned short)63231)) ? (((/* implicit */int) arr_7 [(unsigned short)4] [i_1 - 2] [i_1] [i_2])) : (((/* implicit */int) (unsigned char)146)))) : ((+(((/* implicit */int) (unsigned char)202)))))) - ((+(max((arr_4 [(unsigned char)2] [i_2] [i_1]), (((/* implicit */int) (unsigned char)64))))))));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */long long int) max(((+(((/* implicit */int) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) (unsigned short)44607))))))), (((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)65303))))))))));
}
