/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28527
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28527 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28527
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
    var_18 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_7))) ^ (((((/* implicit */_Bool) ((var_14) | (((/* implicit */int) var_8))))) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) var_8)))))));
    var_19 = ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) max((var_9), (((/* implicit */unsigned short) (_Bool)0))))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        var_20 = ((/* implicit */int) arr_2 [i_0] [i_0]);
        arr_4 [i_0] = ((((/* implicit */long long int) ((/* implicit */int) (short)-2232))) == (0LL));
    }
    for (unsigned char i_1 = 0; i_1 < 21; i_1 += 1) 
    {
        var_21 = ((/* implicit */unsigned int) (((+(((/* implicit */int) arr_0 [i_1])))) == (((/* implicit */int) ((((/* implicit */int) arr_2 [i_1] [18U])) == (((((/* implicit */int) var_8)) + (var_16))))))));
        /* LoopSeq 2 */
        for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
        {
            var_22 = ((/* implicit */long long int) var_12);
            arr_9 [i_1] = (_Bool)1;
        }
        /* vectorizable */
        for (short i_3 = 0; i_3 < 21; i_3 += 1) 
        {
            var_23 = ((/* implicit */unsigned short) (+((-(var_17)))));
            arr_14 [15] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((int) var_9))) ? (((/* implicit */int) var_15)) : (arr_7 [i_1] [i_3])));
        }
    }
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
    {
        arr_17 [i_4] [i_4] = ((/* implicit */unsigned short) ((((((/* implicit */int) arr_6 [16])) - (((/* implicit */int) arr_6 [(signed char)14])))) * (((/* implicit */int) arr_6 [4U]))));
        var_24 *= ((/* implicit */unsigned char) ((int) ((((((/* implicit */int) (unsigned char)32)) == (var_11))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [12]))) : (((((/* implicit */_Bool) var_6)) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)230))))))));
    }
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
    {
        var_25 = ((/* implicit */signed char) (short)-2225);
        /* LoopSeq 2 */
        /* vectorizable */
        for (int i_6 = 1; i_6 < 15; i_6 += 1) 
        {
            var_26 = ((/* implicit */_Bool) arr_19 [11]);
            var_27 = ((/* implicit */long long int) min((var_27), (((/* implicit */long long int) 3547586015U))));
            var_28 = ((/* implicit */int) ((var_0) == (((/* implicit */unsigned int) var_16))));
            var_29 = ((/* implicit */long long int) min((var_29), (((/* implicit */long long int) (+((((_Bool)1) ? (((/* implicit */int) (short)2220)) : (((/* implicit */int) (_Bool)1)))))))));
        }
        for (unsigned int i_7 = 0; i_7 < 16; i_7 += 1) 
        {
            var_30 ^= ((/* implicit */int) var_8);
            arr_26 [i_5] [i_5] &= ((/* implicit */unsigned short) ((arr_11 [i_5] [i_7] [(unsigned char)1]) == (((/* implicit */unsigned int) ((((972506175631861155LL) == (((/* implicit */long long int) ((/* implicit */int) arr_13 [14LL] [i_5] [14LL]))))) ? (((((/* implicit */_Bool) -727121398)) ? (((/* implicit */int) arr_20 [i_5])) : (var_16))) : (var_2))))));
            var_31 = ((/* implicit */unsigned short) (~((+(arr_11 [i_5] [i_5] [i_5])))));
            arr_27 [(unsigned short)6] [i_7] [i_5] = (((-(7885138302817097016ULL))) == (((/* implicit */unsigned long long int) 8440279750682792802LL)));
            /* LoopNest 2 */
            for (unsigned short i_8 = 0; i_8 < 16; i_8 += 1) 
            {
                for (short i_9 = 1; i_9 < 14; i_9 += 1) 
                {
                    {
                        var_32 += ((/* implicit */short) var_16);
                        var_33 = ((/* implicit */_Bool) min((var_33), (((/* implicit */_Bool) min((((/* implicit */int) arr_2 [i_7] [i_9])), (max((arr_32 [i_9 - 1] [i_9 + 2] [i_9] [i_9] [(unsigned short)11]), (-16384))))))));
                        var_34 = ((/* implicit */unsigned short) var_3);
                        var_35 = ((/* implicit */unsigned int) min((var_35), (((/* implicit */unsigned int) (((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)50519))) : (3511887369U))) == (((/* implicit */unsigned int) (+(((((/* implicit */_Bool) 7ULL)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned char)0))))))))))));
                    }
                } 
            } 
        }
        var_36 &= ((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned char)238))));
    }
}
