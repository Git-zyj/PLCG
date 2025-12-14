/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236260
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236260 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236260
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
    var_12 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */long long int) (~(var_9)))) - (((9151314442816847872LL) - (((/* implicit */long long int) var_1))))))) - (((max((12141421277629826789ULL), (((/* implicit */unsigned long long int) var_9)))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 12141421277629826794ULL))))))))));
    /* LoopSeq 4 */
    for (unsigned int i_0 = 1; i_0 < 17; i_0 += 4) /* same iter space */
    {
        arr_2 [4LL] |= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) (((~(var_9))) & (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [(_Bool)1])))))))) - ((-(((((/* implicit */_Bool) 5961215568696578167LL)) ? (12141421277629826797ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [14LL] [i_0])))))))));
        var_13 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~((~(var_9)))))) ? (((/* implicit */int) ((((((/* implicit */unsigned long long int) arr_1 [i_0])) - (14999484175641890743ULL))) != (((/* implicit */unsigned long long int) (+(arr_1 [i_0]))))))) : (((/* implicit */int) ((((/* implicit */unsigned int) (-(((/* implicit */int) arr_0 [i_0] [i_0 - 1]))))) < ((-(var_0))))))));
        var_14 ^= ((/* implicit */unsigned long long int) (~((+(((arr_1 [4U]) * (arr_1 [0U])))))));
        var_15 = ((/* implicit */short) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_0])) || (var_8)))), (((var_1) * (arr_1 [i_0])))));
    }
    for (unsigned int i_1 = 1; i_1 < 17; i_1 += 4) /* same iter space */
    {
        arr_5 [(unsigned short)11] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((arr_1 [(short)16]) + (var_5)))))))) > (((max((var_1), (891699298U))) ^ (((((/* implicit */unsigned int) ((/* implicit */int) var_4))) * (var_5)))))));
        var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), (var_4))))) - (min((arr_4 [i_1] [i_1 - 1]), (4294967295U))))))));
    }
    for (unsigned int i_2 = 1; i_2 < 17; i_2 += 4) /* same iter space */
    {
        var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((((/* implicit */_Bool) 631773256U)) ? (var_10) : (arr_3 [i_2] [(signed char)3]))) | (arr_3 [i_2 + 1] [i_2 - 1])))) > ((+(((((/* implicit */long long int) arr_1 [(short)4])) & (arr_7 [i_2]))))))))));
        arr_8 [i_2] [i_2] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_2 - 1])) ? (((/* implicit */unsigned long long int) arr_7 [i_2 + 1])) : (18446744073709551615ULL))))));
        var_18 &= ((/* implicit */int) (-(min((((((/* implicit */_Bool) 1U)) ? (arr_6 [i_2]) : (arr_6 [i_2 - 1]))), (((/* implicit */long long int) arr_3 [i_2] [i_2 + 1]))))));
    }
    for (unsigned long long int i_3 = 0; i_3 < 24; i_3 += 3) 
    {
        arr_11 [i_3] [i_3] = ((/* implicit */short) ((((/* implicit */long long int) (~(((32767U) ^ (((/* implicit */unsigned int) var_2))))))) - (((((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) == (14999484175641890746ULL))) ? (2251731094208512LL) : (((/* implicit */long long int) min((((/* implicit */int) arr_9 [i_3])), (var_9))))))));
        var_19 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) min((arr_10 [i_3] [i_3]), (var_8))))) ^ (min((((/* implicit */unsigned int) var_8)), (var_10)))));
        /* LoopNest 3 */
        for (long long int i_4 = 1; i_4 < 23; i_4 += 1) 
        {
            for (short i_5 = 1; i_5 < 23; i_5 += 4) 
            {
                for (short i_6 = 0; i_6 < 24; i_6 += 2) 
                {
                    {
                        var_20 *= ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) (-(var_9)))) : (27U))))));
                        var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) (-((((~(var_9))) - ((+(((/* implicit */int) (signed char)-1)))))))))));
                    }
                } 
            } 
        } 
        var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) min((((arr_14 [i_3] [i_3] [i_3]) - ((+(var_11))))), (((var_10) ^ (min((2986309230U), (((/* implicit */unsigned int) arr_13 [i_3] [i_3])))))))))));
    }
    var_23 ^= ((((((((/* implicit */unsigned int) ((/* implicit */int) var_6))) >= (3928715346U))) ? (min((var_10), (((/* implicit */unsigned int) var_4)))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) var_9)))))))) <= (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_4))) == (var_5))))) != (var_5))))));
}
