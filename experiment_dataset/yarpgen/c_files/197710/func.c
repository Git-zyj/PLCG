/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197710
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197710 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197710
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
    var_13 |= ((/* implicit */unsigned char) (~(((/* implicit */int) ((((((/* implicit */int) var_0)) | (((/* implicit */int) var_4)))) >= (((((/* implicit */_Bool) (unsigned char)167)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_5)))))))));
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        var_14 = ((/* implicit */long long int) var_8);
        /* LoopSeq 1 */
        for (unsigned short i_1 = 3; i_1 < 15; i_1 += 1) 
        {
            var_15 = ((/* implicit */int) arr_5 [i_0] [i_0]);
            var_16 ^= ((/* implicit */long long int) min((max((arr_5 [i_0] [2LL]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [(short)3] [(signed char)0])) || (((/* implicit */_Bool) (unsigned char)99))))))), (((arr_5 [i_0] [6U]) | (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned char) (signed char)73)), ((unsigned char)50)))))))));
        }
        var_17 = (unsigned char)172;
        /* LoopSeq 1 */
        for (unsigned char i_2 = 0; i_2 < 18; i_2 += 3) 
        {
            arr_10 [(unsigned char)14] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_10)) ? (((((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_2]))) * (arr_7 [i_0] [i_0]))) * (((/* implicit */unsigned int) ((((/* implicit */int) arr_4 [i_2])) / (var_1)))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_0 [i_0] [i_2])) : (((/* implicit */int) (_Bool)1))))) ? (arr_7 [i_0] [(_Bool)1]) : (((/* implicit */unsigned int) ((/* implicit */int) min((var_6), (arr_4 [i_2])))))))));
            var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) 75571675))));
            var_19 = ((/* implicit */signed char) var_11);
        }
    }
    /* vectorizable */
    for (short i_3 = 2; i_3 < 21; i_3 += 1) 
    {
        var_20 = (-(((/* implicit */int) arr_12 [i_3])));
        var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_12 [(_Bool)1])) ? (arr_11 [4LL]) : (((/* implicit */int) (short)23212))))) : (((((/* implicit */_Bool) arr_11 [18])) ? (var_12) : (((/* implicit */long long int) arr_11 [18])))))))));
        var_22 = ((((/* implicit */int) arr_12 [i_3])) ^ (((/* implicit */int) arr_12 [i_3])));
        arr_13 [i_3] = var_7;
        var_23 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) 0)) ? (((/* implicit */int) (unsigned short)39704)) : (-75571676)));
    }
    var_24 = ((/* implicit */unsigned int) max((var_24), (((/* implicit */unsigned int) var_8))));
    var_25 = ((/* implicit */unsigned short) var_9);
}
