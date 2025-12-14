/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240037
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240037 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240037
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
    for (unsigned int i_0 = 2; i_0 < 24; i_0 += 1) 
    {
        var_10 = ((/* implicit */long long int) min((var_10), (((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [(signed char)5])) | (arr_2 [i_0])))) || (((/* implicit */_Bool) (-(var_9))))))), (var_3))))));
        var_11 = ((/* implicit */_Bool) min((((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) (signed char)127)) : (var_9)))) * (((arr_1 [i_0]) % (((/* implicit */unsigned int) var_9)))))), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) 1645115599U)) ? (((/* implicit */int) (unsigned short)62373)) : ((-2147483647 - 1)))) << (((/* implicit */int) ((((/* implicit */_Bool) var_9)) || ((_Bool)1)))))))));
        var_12 -= ((/* implicit */unsigned short) max((((((arr_2 [i_0]) + (2147483647))) >> (((min((var_8), (((/* implicit */unsigned long long int) arr_2 [i_0])))) - (13941018502967095648ULL))))), (((/* implicit */int) ((var_7) != (arr_1 [i_0 - 1]))))));
        /* LoopSeq 3 */
        for (short i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            /* LoopNest 2 */
            for (short i_2 = 4; i_2 < 24; i_2 += 1) 
            {
                for (signed char i_3 = 0; i_3 < 25; i_3 += 3) 
                {
                    {
                        var_13 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) 6U)) ? (arr_9 [i_2 - 4] [i_1] [i_2 - 1] [i_3] [i_0 + 1]) : (arr_9 [i_2 - 3] [i_1] [i_3] [i_3] [i_0 + 1]))) == (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_5 [i_2 + 1]) < (((/* implicit */long long int) ((/* implicit */int) (short)-1)))))))));
                        arr_11 [i_1] [i_2 + 1] [i_1] [i_0] &= ((/* implicit */signed char) ((unsigned short) ((unsigned short) arr_6 [i_0] [i_0 + 1] [i_2 - 4] [14ULL])));
                    }
                } 
            } 
            var_14 = ((/* implicit */long long int) arr_8 [i_0 - 1] [i_0 - 2] [i_0 - 2]);
        }
        for (int i_4 = 4; i_4 < 24; i_4 += 1) 
        {
            var_15 = ((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) var_9)) + (arr_8 [(unsigned char)13] [i_0] [(unsigned char)13])))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) arr_8 [i_0 - 1] [i_4 - 3] [i_0 - 1])) : (var_3)))))));
            var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) 2147483647))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_4 - 1] [i_0 - 1]))) : (max((arr_9 [(unsigned char)8] [i_4] [(unsigned char)8] [i_0] [(short)4]), (((/* implicit */unsigned long long int) (unsigned short)50532))))))) ? (((/* implicit */int) ((unsigned short) arr_3 [i_4 - 1] [i_4]))) : ((-2147483647 - 1))));
        }
        for (signed char i_5 = 0; i_5 < 25; i_5 += 1) 
        {
            arr_18 [i_0] [5LL] [(_Bool)1] = ((/* implicit */_Bool) min((arr_17 [i_0] [i_5]), (arr_17 [i_5] [i_0 - 2])));
            var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(2147483647)))) ? ((~(arr_2 [i_0 - 1]))) : (-2147483647)))) : (arr_4 [i_0] [i_5]))))));
        }
    }
    var_18 = ((/* implicit */long long int) (+(((/* implicit */int) var_1))));
    var_19 = ((/* implicit */short) var_7);
}
