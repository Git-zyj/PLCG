/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202943
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202943 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202943
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
    for (long long int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            var_18 ^= ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) 9ULL)) ? (((/* implicit */int) (unsigned char)31)) : (((var_17) << (((((/* implicit */int) (unsigned short)11404)) - (11404)))))))));
            arr_6 [(unsigned short)11] [(unsigned char)0] [(unsigned char)17] = ((/* implicit */long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [(unsigned short)15] [3ULL] [9ULL])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_1 [(_Bool)1]))))) || (((/* implicit */_Bool) 16835829180043715878ULL)))) ? (((arr_3 [i_1] [(unsigned short)0] [i_0]) | (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [(_Bool)1] [8LL])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_6))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((arr_2 [12U]) | (((/* implicit */long long int) ((/* implicit */int) var_14))))))))))));
            var_19 = ((/* implicit */long long int) ((max((max((((/* implicit */unsigned long long int) arr_2 [(unsigned char)16])), (arr_3 [2ULL] [(_Bool)1] [17U]))), (((/* implicit */unsigned long long int) var_12)))) >> (((((/* implicit */int) (unsigned char)19)) * (((/* implicit */int) (_Bool)0))))));
        }
        /* LoopSeq 1 */
        for (unsigned short i_2 = 0; i_2 < 18; i_2 += 1) 
        {
            arr_10 [i_2] [13] [(unsigned short)13] = ((/* implicit */long long int) arr_3 [15LL] [3] [16]);
            arr_11 [5LL] [i_2] = ((((arr_3 [8] [4ULL] [9ULL]) * (((/* implicit */unsigned long long int) var_8)))) / (arr_3 [i_0] [i_2] [(unsigned short)12]));
        }
        var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned short) (+(((/* implicit */int) arr_9 [i_0])))))) && (((/* implicit */_Bool) ((((/* implicit */int) arr_5 [(_Bool)1] [i_0])) * (((/* implicit */int) ((var_13) != (((/* implicit */int) arr_1 [5ULL]))))))))));
        /* LoopNest 2 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            for (int i_4 = 0; i_4 < 18; i_4 += 4) 
            {
                {
                    var_21 = ((((/* implicit */_Bool) ((min((((/* implicit */unsigned long long int) var_12)), (var_5))) / (max((var_9), (((/* implicit */unsigned long long int) arr_1 [(_Bool)1]))))))) ? (((/* implicit */long long int) ((unsigned int) ((var_17) << (((((arr_16 [(_Bool)1] [(unsigned char)12] [(_Bool)1] [(_Bool)1]) + (92488002041473866LL))) - (10LL))))))) : ((~(((arr_15 [17] [14] [i_3] [15]) / (arr_15 [(unsigned char)17] [7LL] [i_3] [16LL]))))));
                    var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) max(((-(min((0ULL), (((/* implicit */unsigned long long int) arr_12 [10] [i_0])))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)37812)) + (((/* implicit */int) ((unsigned short) 6807937752659451167LL)))))))))));
                }
            } 
        } 
    }
    var_23 += max((((/* implicit */int) ((_Bool) min((((/* implicit */long long int) var_6)), (var_10))))), (((((/* implicit */int) var_2)) - (min((var_8), (((/* implicit */int) var_14)))))));
}
