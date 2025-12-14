/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41236
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41236 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41236
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
    var_13 = ((/* implicit */long long int) var_4);
    var_14 = ((/* implicit */long long int) min((((((/* implicit */_Bool) (+(((/* implicit */int) var_4))))) ? (((/* implicit */int) ((unsigned char) var_1))) : (((/* implicit */int) (!(var_7)))))), (((((var_6) != (((/* implicit */int) var_1)))) ? (min((((/* implicit */int) var_8)), (var_6))) : (var_6)))));
    var_15 |= ((/* implicit */_Bool) ((((_Bool) (short)0)) ? (((((/* implicit */_Bool) max(((unsigned short)55348), ((unsigned short)10187)))) ? ((-(var_9))) : (((/* implicit */int) var_1)))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)55347)) ? (var_11) : (((/* implicit */int) var_1))))) ? (((/* implicit */int) var_1)) : (var_9)))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        arr_4 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_0] [i_0])) | (((arr_1 [i_0] [5]) ? (var_11) : (((/* implicit */int) arr_0 [i_0]))))))) ? ((-(2014668783))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (-2014668771) : (((/* implicit */int) arr_0 [i_0]))))) ? (var_11) : (((((/* implicit */_Bool) arr_2 [(_Bool)1] [i_0])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (unsigned char)112))))))));
        arr_5 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) -2014668780)) ? (((/* implicit */int) ((short) var_1))) : (((/* implicit */int) ((((/* implicit */int) arr_0 [i_0])) == (((/* implicit */int) ((short) (short)-30698))))))));
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_1 = 0; i_1 < 15; i_1 += 4) 
    {
        var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) ((((/* implicit */int) arr_7 [i_1])) - (((/* implicit */int) arr_7 [i_1])))))));
        var_17 = arr_6 [i_1] [i_1];
        /* LoopNest 3 */
        for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                for (long long int i_4 = 0; i_4 < 15; i_4 += 3) 
                {
                    {
                        var_18 = ((/* implicit */short) (~(((1654528592) << (((arr_15 [3ULL] [i_2] [i_3] [i_4]) - (506957915023672016LL)))))));
                        arr_18 [i_1] [i_3] [i_3] [i_4] [i_3] [i_1] = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-126))) ^ ((-(arr_15 [i_1] [i_2] [i_3] [(short)1])))));
                    }
                } 
            } 
        } 
    }
}
