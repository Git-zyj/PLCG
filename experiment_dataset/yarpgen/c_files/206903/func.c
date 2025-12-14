/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206903
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206903 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206903
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
    for (long long int i_0 = 1; i_0 < 11; i_0 += 2) 
    {
        var_10 ^= ((/* implicit */unsigned int) ((min(((-(4294967295U))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_0 [(_Bool)1] [i_0])) : (((/* implicit */int) arr_1 [0ULL]))))))) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0 + 1] [i_0])))));
        var_11 = ((/* implicit */unsigned short) (~(min((((((/* implicit */_Bool) arr_1 [i_0])) ? (653179689926695024ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))))), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) - (9223372036854775807LL))))))));
        arr_3 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_0 [(unsigned short)10] [i_0]))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_2 [i_0 - 1] [7ULL])))) : (max((((/* implicit */long long int) var_5)), (var_6)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_2)) == (((/* implicit */int) arr_0 [i_0] [(unsigned short)9])))))) % (var_0)))) : (((((/* implicit */_Bool) ((long long int) arr_0 [i_0 - 1] [i_0]))) ? (8606152201701279178ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned short)65535), (((/* implicit */unsigned short) (unsigned char)127))))))))));
    }
    for (unsigned long long int i_1 = 3; i_1 < 23; i_1 += 4) 
    {
        var_12 |= ((/* implicit */int) (+(max((var_4), (((/* implicit */unsigned long long int) var_9))))));
        arr_6 [i_1] = ((/* implicit */unsigned short) arr_4 [i_1]);
        arr_7 [i_1 + 1] = ((/* implicit */short) var_1);
    }
    for (unsigned int i_2 = 0; i_2 < 10; i_2 += 2) 
    {
        var_13 = ((/* implicit */unsigned int) min((var_13), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(arr_8 [i_2] [i_2])))) ? (((((/* implicit */_Bool) 3927327486703436764LL)) ? (((/* implicit */int) arr_1 [i_2])) : (((/* implicit */int) (_Bool)0)))) : ((-(arr_5 [i_2]))))))));
        var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)255)) ? ((~(((/* implicit */int) (!(((/* implicit */_Bool) -1809450709))))))) : (((/* implicit */int) (unsigned char)22)))))));
    }
    var_15 |= ((/* implicit */unsigned short) ((long long int) ((((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)15))))) * (((0U) / (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))));
}
