/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25995
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25995 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25995
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
    var_10 = ((/* implicit */_Bool) (~(var_1)));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 15; i_2 += 2) 
            {
                {
                    arr_9 [i_0] [i_1] [i_2] [i_0] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [(_Bool)1])) ? (((/* implicit */int) max((arr_2 [i_0]), (((/* implicit */short) var_9))))) : ((+(((/* implicit */int) arr_1 [i_0]))))));
                    arr_10 [i_0] [i_0] [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) -1050725512545010315LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)217))) : (((((/* implicit */_Bool) arr_5 [(unsigned short)0] [i_1])) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_2] [i_2])))))));
                    var_11 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -7580543705641911392LL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [i_2]))) : (90758386627253238LL)))) : (arr_4 [i_2] [i_0] [i_2])))) ? (((/* implicit */int) ((unsigned char) ((signed char) 3541381474U)))) : (((/* implicit */int) (!(((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) var_7)))))))));
                    var_12 -= ((/* implicit */_Bool) arr_7 [i_2] [i_1] [(short)14] [(signed char)3]);
                }
            } 
        } 
        var_13 ^= ((/* implicit */unsigned int) arr_3 [i_0]);
        var_14 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_1 [i_0]))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 198727391278003884ULL)) ? (18446744073709551611ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)14940)))))) ? (((((/* implicit */_Bool) (signed char)-6)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) arr_0 [i_0]))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-6)) ? (((/* implicit */unsigned long long int) 1050725512545010308LL)) : (1393173941473716493ULL)))) ? (1050725512545010330LL) : (((/* implicit */long long int) ((/* implicit */int) var_4)))))));
    }
    for (unsigned int i_3 = 0; i_3 < 25; i_3 += 2) 
    {
        var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) ((arr_11 [i_3] [(signed char)6]) <= (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_3] [1ULL])))))))))));
        var_16 = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_3] [i_3])))))) > (arr_11 [i_3] [(unsigned short)10])));
        var_17 = ((/* implicit */unsigned char) arr_11 [(_Bool)1] [i_3]);
        var_18 = (-(((((/* implicit */_Bool) arr_12 [i_3])) ? (198727391278003884ULL) : (((/* implicit */unsigned long long int) arr_11 [i_3] [i_3])))));
    }
    var_19 = var_9;
}
