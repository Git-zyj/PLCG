/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49737
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49737 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49737
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
    var_15 = ((/* implicit */unsigned long long int) var_10);
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        arr_2 [i_0] [6LL] = ((long long int) ((((((/* implicit */_Bool) arr_1 [(unsigned char)14] [(unsigned char)14])) || (((/* implicit */_Bool) arr_1 [i_0] [i_0])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0])))))) : (min((((/* implicit */unsigned long long int) arr_1 [i_0] [i_0])), (arr_0 [15ULL])))));
        arr_3 [i_0] &= ((/* implicit */unsigned long long int) arr_1 [i_0] [i_0]);
    }
    for (unsigned char i_1 = 4; i_1 < 20; i_1 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_2 = 2; i_2 < 20; i_2 += 1) 
        {
            for (long long int i_3 = 0; i_3 < 22; i_3 += 1) 
            {
                {
                    var_16 = ((/* implicit */unsigned char) min((((/* implicit */int) (!(((((/* implicit */int) (unsigned short)38473)) == (((/* implicit */int) (signed char)-3))))))), (((((/* implicit */_Bool) ((unsigned long long int) var_11))) ? ((-(((/* implicit */int) (unsigned char)187)))) : (((/* implicit */int) arr_6 [i_2 - 2] [i_1 - 4]))))));
                    var_17 = ((/* implicit */long long int) var_4);
                }
            } 
        } 
        var_18 = ((/* implicit */unsigned char) ((long long int) ((((/* implicit */int) arr_4 [i_1 + 1])) < (((/* implicit */int) arr_4 [i_1 + 1])))));
        arr_11 [i_1] &= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_1])) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_1])))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)2)) ? (5211505356720550804ULL) : (2804863746609950471ULL)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_1] [19U]))) : (var_12)))) ? (max((((/* implicit */unsigned long long int) (unsigned char)204)), (var_14))) : (((/* implicit */unsigned long long int) arr_10 [i_1] [i_1 - 3] [i_1] [7ULL])))) : (var_7)));
    }
    /* vectorizable */
    for (unsigned short i_4 = 0; i_4 < 11; i_4 += 3) 
    {
        arr_14 [(unsigned char)7] &= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_13 [i_4] [i_4])) ? (arr_13 [i_4] [2ULL]) : (arr_13 [i_4] [i_4])));
        var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) 24LL)) : (arr_13 [i_4] [i_4])))) || (((/* implicit */_Bool) arr_9 [i_4] [i_4] [i_4]))));
    }
}
