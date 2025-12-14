/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201033
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201033 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201033
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
    for (unsigned char i_0 = 1; i_0 < 22; i_0 += 4) 
    {
        var_14 *= ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((unsigned char) 13255359705778847039ULL))), (min((((/* implicit */long long int) arr_2 [(unsigned short)16])), (var_7)))))), ((+(arr_1 [20LL] [i_0 - 1])))));
        var_15 |= ((/* implicit */short) ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) var_5)) ? (arr_1 [12] [i_0 - 1]) : (arr_1 [0] [i_0 + 2]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)17335)) ? (9711334930332794651ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [(signed char)14])))))) : (-3902483839295979799LL))))));
        var_16 *= ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0 + 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) var_10)), (arr_0 [i_0]))))) : (max((((/* implicit */unsigned long long int) arr_2 [(signed char)16])), (8735409143376756965ULL)))))) ? ((-(((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))) * (5191384367930704602ULL))))) : (((/* implicit */unsigned long long int) (((~(((/* implicit */int) (_Bool)1)))) ^ ((~(((/* implicit */int) (short)17335))))))));
        arr_3 [i_0] = ((/* implicit */unsigned short) min((max((((long long int) var_6)), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) arr_0 [i_0 + 2])) : (((/* implicit */int) arr_0 [i_0]))))))), (((/* implicit */long long int) (-(((/* implicit */int) ((short) 5191384367930704577ULL))))))));
        var_17 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) (signed char)0)), (max((5191384367930704547ULL), (arr_1 [i_0] [i_0])))));
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_1])) ? (arr_1 [i_1] [i_1]) : (((/* implicit */unsigned long long int) var_0))));
        var_19 *= ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) arr_5 [i_1])));
        arr_6 [i_1] = ((/* implicit */long long int) (~(((/* implicit */int) arr_5 [i_1]))));
    }
    /* vectorizable */
    for (short i_2 = 0; i_2 < 17; i_2 += 4) 
    {
        /* LoopSeq 1 */
        for (short i_3 = 2; i_3 < 16; i_3 += 4) 
        {
            arr_15 [i_2] [i_2] [i_2] = ((/* implicit */long long int) var_10);
            var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) ((((/* implicit */int) arr_7 [i_3 - 2] [(_Bool)1])) + (((((/* implicit */int) arr_7 [i_2] [i_2])) + (((/* implicit */int) arr_2 [i_3])))))))));
        }
        var_21 -= ((/* implicit */_Bool) ((((/* implicit */int) arr_7 [i_2] [i_2])) - (((/* implicit */int) arr_7 [i_2] [i_2]))));
        /* LoopSeq 1 */
        for (unsigned char i_4 = 1; i_4 < 16; i_4 += 4) 
        {
            var_22 -= ((/* implicit */short) arr_17 [i_4 + 1]);
            var_23 = ((/* implicit */int) min((var_23), (((/* implicit */int) ((((/* implicit */_Bool) (((_Bool)1) ? (-91386328) : (((/* implicit */int) (unsigned char)150))))) ? (((/* implicit */unsigned long long int) ((long long int) var_1))) : (((((/* implicit */_Bool) arr_11 [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (arr_11 [i_2]))))))));
        }
        var_24 = ((/* implicit */_Bool) (+(arr_16 [i_2])));
    }
    var_25 = ((/* implicit */long long int) (~((+(((/* implicit */int) ((signed char) var_6)))))));
    var_26 = ((/* implicit */int) ((unsigned int) (unsigned short)57733));
}
