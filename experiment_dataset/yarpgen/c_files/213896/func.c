/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213896
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213896 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213896
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
    var_13 = ((/* implicit */unsigned long long int) (+(((((-588916357) + (2147483647))) << (((((/* implicit */int) (_Bool)1)) - (1)))))));
    /* LoopNest 2 */
    for (short i_0 = 2; i_0 < 21; i_0 += 4) 
    {
        for (unsigned char i_1 = 2; i_1 < 20; i_1 += 4) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (int i_2 = 0; i_2 < 22; i_2 += 4) 
                {
                    var_14 = arr_0 [i_0] [(unsigned char)14];
                    arr_8 [i_0 - 2] [i_0 - 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_2] [i_2]))) | (var_11)))) ? (((/* implicit */int) ((15184543931156111518ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (short)7696)))))) : (((((((/* implicit */int) (short)-7697)) + (2147483647))) << (((/* implicit */int) arr_6 [i_0] [(unsigned char)14]))))));
                    arr_9 [i_1] [i_1] [i_0 + 1] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) var_7)))) ? ((+(((/* implicit */int) var_8)))) : ((~(var_2)))));
                    var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 15184543931156111524ULL)) ? (var_11) : (arr_5 [i_0])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)255)) == (arr_4 [i_0] [i_1 - 2]))))) : ((+(arr_2 [i_1 + 1] [13ULL] [i_1 + 1]))))))));
                }
                var_16 = ((/* implicit */unsigned char) ((15184543931156111518ULL) >> (((((arr_5 [i_0 - 1]) >> (((((/* implicit */int) (short)-7696)) + (7727))))) - (5951720073ULL)))));
                arr_10 [i_0] [i_0] = arr_6 [i_0 + 1] [i_0 + 1];
                var_17 *= ((/* implicit */_Bool) (~(((/* implicit */int) arr_6 [i_1 - 2] [i_0 - 2]))));
            }
        } 
    } 
}
