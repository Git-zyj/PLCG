/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197992
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197992 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197992
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
    var_17 = ((/* implicit */unsigned char) ((((/* implicit */int) var_13)) == (((/* implicit */int) var_2))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        var_18 = ((/* implicit */unsigned int) min((((/* implicit */long long int) ((((/* implicit */_Bool) (short)(-32767 - 1))) || (((/* implicit */_Bool) arr_1 [i_0 + 1] [i_0]))))), (((((/* implicit */_Bool) arr_1 [i_0 + 1] [i_0])) ? (arr_1 [i_0 + 1] [i_0]) : (arr_1 [i_0 + 1] [i_0])))));
        arr_4 [i_0] [(signed char)14] = ((/* implicit */short) ((unsigned char) (-(arr_2 [i_0 + 1]))));
        /* LoopSeq 1 */
        for (int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            var_19 = ((/* implicit */unsigned int) max(((-(arr_2 [i_0 + 1]))), (((/* implicit */int) ((_Bool) var_7)))));
            /* LoopNest 3 */
            for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 3) 
            {
                for (unsigned int i_3 = 0; i_3 < 16; i_3 += 3) 
                {
                    for (unsigned char i_4 = 3; i_4 < 15; i_4 += 2) 
                    {
                        {
                            var_20 = ((/* implicit */unsigned int) ((unsigned char) min((((((/* implicit */long long int) arr_10 [i_4] [i_2] [12] [i_0])) | (arr_1 [(unsigned char)12] [i_0]))), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_0] [i_2] [i_0] [i_0]))) < (arr_14 [i_0] [i_1] [i_1] [i_1])))))));
                            var_21 += ((/* implicit */long long int) var_0);
                            arr_15 [(short)12] &= max((((/* implicit */long long int) ((((((/* implicit */_Bool) (unsigned char)166)) ? (((/* implicit */int) (unsigned short)25697)) : (var_4))) / (arr_8 [i_0] [4] [i_2] [14U])))), (((((/* implicit */_Bool) arr_7 [(unsigned short)8] [i_1] [(_Bool)1])) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (((((/* implicit */_Bool) arr_5 [1] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_0] [i_0] [7ULL] [i_1] [(unsigned short)1] [i_3] [i_4]))) : (var_6))))));
                            var_22 = ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0] [i_2])) ? ((-(((/* implicit */int) (_Bool)1)))) : (max((arr_10 [i_0] [i_1] [i_1] [i_3]), (((/* implicit */int) arr_13 [i_0] [i_1] [i_1] [i_2] [i_3] [i_4] [i_4 + 1])))))));
                            var_23 |= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_1)) ? (arr_14 [0LL] [i_2] [i_1] [0LL]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [10U]))))) != (((/* implicit */unsigned int) ((((/* implicit */int) arr_6 [i_4 + 1])) & (((/* implicit */int) arr_6 [i_0 + 1])))))));
                        }
                    } 
                } 
            } 
            var_24 = ((/* implicit */unsigned char) 15977987149362826105ULL);
        }
    }
    var_25 = ((/* implicit */int) max((var_25), (((/* implicit */int) (_Bool)1))));
    var_26 *= ((/* implicit */_Bool) var_0);
}
