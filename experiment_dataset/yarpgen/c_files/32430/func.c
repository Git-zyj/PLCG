/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32430
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32430 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32430
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
    /* LoopNest 3 */
    for (long long int i_0 = 1; i_0 < 17; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            for (short i_2 = 2; i_2 < 20; i_2 += 1) 
            {
                {
                    var_13 = ((/* implicit */unsigned long long int) ((((arr_2 [i_0 + 2]) / (((/* implicit */long long int) ((/* implicit */int) max((arr_7 [(short)18] [i_2] [i_1]), (arr_4 [i_0] [i_1] [i_0]))))))) % (((arr_5 [i_0] [i_0]) | (883346562787039387LL)))));
                    arr_8 [i_0] [i_0] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_7 [i_0 + 2] [i_2] [i_2 - 2]), (arr_7 [i_0 + 2] [i_1] [i_2 - 2]))))) ^ (max((((/* implicit */unsigned long long int) var_7)), (var_9)))));
                    arr_9 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_2])) ? (((/* implicit */int) ((short) arr_6 [i_1] [i_1] [i_2 - 1] [i_0 + 1]))) : (((/* implicit */int) min((arr_7 [i_0 + 4] [i_0 + 3] [i_0 + 3]), (arr_7 [i_0 + 4] [i_0 + 4] [i_0 + 2]))))));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */unsigned long long int) (((~((~(((/* implicit */int) var_8)))))) != (((/* implicit */int) max(((short)-21561), ((short)21580))))));
    /* LoopSeq 2 */
    for (long long int i_3 = 2; i_3 < 20; i_3 += 3) /* same iter space */
    {
        var_15 = ((/* implicit */short) max((var_15), (arr_12 [i_3 - 2])));
        arr_13 [i_3] = ((/* implicit */short) ((long long int) var_9));
    }
    for (long long int i_4 = 2; i_4 < 20; i_4 += 3) /* same iter space */
    {
        var_16 = ((/* implicit */short) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_12 [i_4 + 2])) ? (((/* implicit */int) arr_14 [i_4])) : (((/* implicit */int) max((arr_11 [6LL]), (arr_15 [i_4] [i_4]))))))) != (((((/* implicit */_Bool) arr_12 [i_4 - 1])) ? (max((883346562787039387LL), (((/* implicit */long long int) (short)21580)))) : (max((883346562787039410LL), (arr_10 [i_4])))))));
        arr_16 [i_4] [i_4] = ((/* implicit */short) max((((/* implicit */long long int) (short)12956)), (883346562787039387LL)));
        arr_17 [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_12 [i_4 + 1])) / (((/* implicit */int) arr_11 [i_4 + 1]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (max((((/* implicit */unsigned int) arr_11 [i_4])), (var_3)))));
        /* LoopNest 2 */
        for (unsigned int i_5 = 3; i_5 < 19; i_5 += 4) 
        {
            for (long long int i_6 = 0; i_6 < 22; i_6 += 3) 
            {
                {
                    var_17 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) var_0)), ((~(arr_21 [i_5 + 2] [i_5] [i_4 - 1])))));
                    arr_23 [i_5] [i_5 - 2] [i_5] [i_5] = ((/* implicit */unsigned int) min(((~(17512403194310977335ULL))), (((/* implicit */unsigned long long int) ((((((var_4) + (9223372036854775807LL))) << (((((/* implicit */int) (short)21599)) - (21599))))) ^ (((/* implicit */long long int) ((/* implicit */int) arr_20 [i_4 - 1]))))))));
                    var_18 = ((((/* implicit */_Bool) var_7)) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_4 + 1]))) & (var_9))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_22 [i_5]) != (((/* implicit */long long int) ((/* implicit */int) (short)24511))))))));
                }
            } 
        } 
        arr_24 [i_4] |= ((/* implicit */unsigned long long int) var_12);
    }
}
