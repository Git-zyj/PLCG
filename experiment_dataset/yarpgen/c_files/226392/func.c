/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226392
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226392 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226392
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
    var_19 = ((/* implicit */int) ((var_6) & (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_9)), (var_6)))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_8)) || (var_0)))) : (((var_2) >> (((((/* implicit */int) (signed char)-45)) + (62))))))))));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 22; i_0 += 1) 
    {
        for (long long int i_1 = 1; i_1 < 21; i_1 += 4) 
        {
            for (unsigned short i_2 = 1; i_2 < 22; i_2 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 1; i_3 < 20; i_3 += 4) 
                    {
                        var_20 &= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_10 [i_1 + 2] [i_1 + 2] [i_1]))))) != ((+(arr_9 [i_3 + 3] [i_2 + 1] [i_0] [i_0])))));
                        var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) (((-(10494837423127525144ULL))) << (((((/* implicit */int) max((max((arr_5 [i_0 - 3] [(short)13]), (((/* implicit */unsigned short) arr_2 [i_3])))), (((/* implicit */unsigned short) arr_2 [i_0 - 1]))))) - (51675))))))));
                        var_22 = ((/* implicit */short) min((var_22), (((short) var_9))));
                        arr_11 [i_0 + 1] [i_0] [(short)18] [16LL] [12LL] |= ((/* implicit */unsigned short) ((((((((((/* implicit */unsigned int) (-2147483647 - 1))) == (var_17))) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0 + 1] [i_3 - 1]))) : (((((/* implicit */_Bool) -1LL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_3]))) : (0LL))))) + (9223372036854775807LL))) >> (((((var_15) ? (((arr_3 [i_0] [i_1 - 1]) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))) : (((/* implicit */unsigned long long int) ((int) arr_3 [i_0] [i_0]))))) - (8782766016291268567ULL)))));
                    }
                    var_23 += (~(min((arr_3 [i_2 - 1] [i_1]), (arr_3 [i_2 + 1] [i_0 - 3]))));
                    var_24 = ((/* implicit */short) ((((((/* implicit */_Bool) 4702705813688343748ULL)) ? (((/* implicit */int) arr_10 [i_0] [i_0 - 1] [i_0 - 1])) : (((/* implicit */int) arr_1 [i_0] [i_0 - 1])))) ^ (((((/* implicit */int) arr_10 [i_1 + 2] [i_0 - 1] [i_2])) >> (((((/* implicit */int) arr_1 [i_2] [i_0 - 1])) - (40263)))))));
                    var_25 = ((/* implicit */unsigned int) min((var_25), (((/* implicit */unsigned int) ((((13744038260021207868ULL) >> (((((/* implicit */int) arr_7 [i_2] [i_2 - 1] [i_1 + 1] [i_0 - 1] [i_0] [(unsigned short)20])) - (36143))))) ^ ((~(((((/* implicit */_Bool) (short)32354)) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [10LL] [i_0]))))))))))));
                }
            } 
        } 
    } 
}
