/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46146
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46146 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46146
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
    for (int i_0 = 2; i_0 < 15; i_0 += 2) 
    {
        var_14 = ((/* implicit */unsigned long long int) ((unsigned short) (((!(((/* implicit */_Bool) var_0)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_5))))) : (((/* implicit */int) var_11)))));
        var_15 = ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)32)) && (((/* implicit */_Bool) (unsigned char)32)))))) == (min((((((/* implicit */_Bool) arr_2 [i_0 - 2])) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) var_2))))), (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (unsigned char)44))))))));
        arr_3 [i_0] = ((/* implicit */signed char) var_5);
    }
    /* LoopSeq 3 */
    for (int i_1 = 0; i_1 < 10; i_1 += 1) 
    {
        var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) min((((/* implicit */long long int) var_2)), (min((var_12), (((/* implicit */long long int) arr_1 [i_1])))))))));
        var_17 = ((/* implicit */unsigned long long int) ((unsigned short) (+(((/* implicit */int) var_8)))));
        /* LoopNest 3 */
        for (unsigned int i_2 = 0; i_2 < 10; i_2 += 4) 
        {
            for (int i_3 = 0; i_3 < 10; i_3 += 4) 
            {
                for (unsigned short i_4 = 3; i_4 < 8; i_4 += 3) 
                {
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned int i_5 = 0; i_5 < 10; i_5 += 1) 
                        {
                            arr_18 [i_5] [i_3] [i_1] [i_4] [2LL] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_16 [i_5] [i_4 + 2] [(unsigned short)0] [(unsigned char)1])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_12)));
                            var_18 |= ((/* implicit */signed char) ((arr_9 [i_4] [i_4 - 3] [9ULL] [i_1]) * (arr_9 [i_2] [i_4 - 3] [i_2] [i_1])));
                        }
                        /* vectorizable */
                        for (signed char i_6 = 3; i_6 < 9; i_6 += 3) 
                        {
                            arr_23 [(unsigned short)9] [i_2] [i_3] [i_3] [i_6] = ((/* implicit */short) (-(((((/* implicit */_Bool) var_2)) ? (arr_8 [i_3] [i_1]) : (((/* implicit */int) arr_22 [i_1] [i_2] [i_3] [i_4] [i_3] [i_6] [0]))))));
                            var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_7))))) ? ((~(((/* implicit */int) (unsigned short)65535)))) : (-984834569)));
                        }
                        var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((10007620949898636104ULL) ^ (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_6)))))))) || (((/* implicit */_Bool) ((unsigned int) arr_22 [i_4] [(unsigned char)4] [i_4 + 1] [i_4 + 2] [(unsigned short)2] [i_4 + 1] [i_4 - 2])))));
                    }
                } 
            } 
        } 
        var_21 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned short)65535), (((/* implicit */unsigned short) (short)-16185)))))) - (arr_9 [i_1] [i_1] [i_1] [i_1])));
    }
    /* vectorizable */
    for (unsigned int i_7 = 0; i_7 < 12; i_7 += 1) 
    {
        /* LoopSeq 1 */
        for (signed char i_8 = 2; i_8 < 10; i_8 += 1) 
        {
            arr_29 [i_7] [i_7] = (+(((/* implicit */int) arr_28 [i_7])));
            var_22 = ((/* implicit */long long int) (~(((/* implicit */int) arr_1 [i_7]))));
        }
        arr_30 [i_7] = ((/* implicit */long long int) (unsigned char)217);
    }
    /* vectorizable */
    for (unsigned long long int i_9 = 0; i_9 < 12; i_9 += 3) 
    {
        var_23 |= ((/* implicit */signed char) (~(((/* implicit */int) (unsigned short)1))));
        arr_33 [i_9] [i_9] = ((/* implicit */unsigned long long int) var_6);
    }
}
