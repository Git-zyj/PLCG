/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44416
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44416 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44416
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
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_3 [i_0])))))));
        var_13 |= ((/* implicit */unsigned long long int) ((((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) arr_1 [i_0] [i_0]))))) < (((unsigned long long int) arr_2 [i_0] [i_0])))) ? (((/* implicit */unsigned int) (~(arr_2 [i_0] [i_0])))) : (min(((+(arr_0 [i_0]))), (((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_0 [i_0]) : (arr_0 [i_0])))))));
        arr_5 [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) min((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0]))))));
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            arr_8 [i_1] [i_0] = ((/* implicit */signed char) (!((!(((/* implicit */_Bool) (-(arr_6 [8LL] [8LL] [8LL]))))))));
            var_14 += ((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_2 [i_1] [i_0]) / (arr_2 [i_1] [i_0])))) ? (((arr_2 [i_0] [i_1]) ^ (arr_2 [i_0] [i_1]))) : (((((/* implicit */_Bool) arr_2 [i_0] [i_1])) ? (arr_2 [i_1] [i_0]) : (arr_2 [i_0] [i_1])))));
        }
        var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) (!(((((/* implicit */int) ((arr_6 [18LL] [(_Bool)1] [(unsigned char)4]) == (arr_0 [i_0])))) != (((/* implicit */int) ((((/* implicit */_Bool) arr_6 [14ULL] [i_0] [i_0])) && (((/* implicit */_Bool) arr_7 [(signed char)10]))))))))))));
    }
    for (unsigned long long int i_2 = 0; i_2 < 13; i_2 += 1) 
    {
        arr_11 [i_2] = (~(arr_6 [i_2] [i_2] [i_2]));
        arr_12 [i_2] = ((/* implicit */unsigned int) (((-(((/* implicit */int) max(((short)22811), ((short)-22818)))))) % (((((arr_2 [i_2] [i_2]) + (2147483647))) >> (((arr_6 [i_2] [i_2] [i_2]) - (2105651529U)))))));
    }
    for (unsigned short i_3 = 1; i_3 < 15; i_3 += 1) 
    {
        var_16 = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_3] [i_3])) ? (((/* implicit */int) arr_3 [i_3])) : (((/* implicit */int) arr_16 [i_3]))))))) ? (((/* implicit */int) min(((short)-22789), (((/* implicit */short) (unsigned char)101))))) : (((/* implicit */int) ((((/* implicit */_Bool) ((arr_3 [i_3 - 1]) ? (arr_2 [i_3] [i_3]) : (arr_2 [i_3] [i_3])))) && (((/* implicit */_Bool) ((arr_15 [i_3] [i_3]) + (arr_0 [i_3])))))))));
        arr_17 [i_3] = ((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_3] [i_3 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_3]))) : (arr_0 [(short)16])))))))));
    }
    var_17 ^= var_1;
    var_18 = ((/* implicit */int) ((((/* implicit */_Bool) ((int) var_0))) || (((/* implicit */_Bool) var_11))));
    var_19 = ((/* implicit */unsigned char) max((((var_10) - (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_10) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_8))))) ? (var_3) : ((+(((/* implicit */int) (short)-22789)))))))));
    var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) var_6))));
}
