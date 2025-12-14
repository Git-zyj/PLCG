/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217369
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217369 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217369
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
    /* vectorizable */
    for (long long int i_0 = 3; i_0 < 22; i_0 += 3) 
    {
        var_10 = ((/* implicit */signed char) ((((/* implicit */int) arr_1 [i_0 - 1])) | (((/* implicit */int) arr_1 [i_0 - 2]))));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 23; i_2 += 4) 
            {
                {
                    var_11 = ((/* implicit */short) var_7);
                    var_12 = ((/* implicit */int) (-(2020775079U)));
                }
            } 
        } 
        arr_7 [i_0] = ((/* implicit */short) ((((((/* implicit */int) arr_4 [i_0] [i_0])) <= (((/* implicit */int) arr_6 [i_0] [i_0] [i_0] [i_0])))) ? (var_2) : (((/* implicit */unsigned int) (~(((/* implicit */int) arr_4 [(signed char)5] [i_0])))))));
        var_13 = ((((/* implicit */int) arr_0 [i_0 - 3])) * (((/* implicit */int) arr_0 [i_0 + 1])));
    }
    for (short i_3 = 0; i_3 < 23; i_3 += 2) 
    {
        arr_10 [(unsigned char)15] = ((/* implicit */int) max((((/* implicit */long long int) ((short) 1237011928))), (((((/* implicit */_Bool) arr_2 [i_3] [i_3])) ? (((arr_5 [i_3]) ? (((/* implicit */long long int) var_3)) : (4028414701307408986LL))) : (max((arr_3 [i_3] [i_3] [i_3]), (((/* implicit */long long int) (signed char)125))))))));
        arr_11 [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((min((-1), (((/* implicit */int) (signed char)126)))) & (((/* implicit */int) arr_4 [i_3] [i_3]))))) || (((/* implicit */_Bool) ((max((var_7), (((/* implicit */unsigned long long int) (signed char)-126)))) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_3]))))))));
    }
    for (unsigned int i_4 = 0; i_4 < 19; i_4 += 1) 
    {
        var_14 = ((/* implicit */long long int) min((var_14), (((/* implicit */long long int) min((min((((/* implicit */unsigned long long int) (unsigned char)0)), (var_7))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) (signed char)-113))))))))));
        var_15 = ((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) var_6)) >> (((arr_12 [i_4] [i_4]) + (4690026000346169171LL)))))) && (max((var_9), (var_9)))))) << (((/* implicit */int) ((max((var_2), (((/* implicit */unsigned int) var_1)))) > (var_2)))));
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 19; i_5 += 3) 
        {
            for (signed char i_6 = 0; i_6 < 19; i_6 += 2) 
            {
                for (signed char i_7 = 0; i_7 < 19; i_7 += 3) 
                {
                    {
                        arr_24 [i_5] [i_4] = ((/* implicit */short) min((max((573485245), (((/* implicit */int) max((((/* implicit */short) (signed char)126)), ((short)24404)))))), (((/* implicit */int) arr_23 [i_5] [i_5] [i_5] [i_5] [i_5]))));
                        var_16 = ((/* implicit */long long int) var_7);
                    }
                } 
            } 
        } 
        arr_25 [i_4] = ((/* implicit */int) var_0);
    }
    var_17 = ((/* implicit */unsigned char) min((((max((var_0), (((/* implicit */unsigned long long int) 4)))) | (((/* implicit */unsigned long long int) var_1)))), (((/* implicit */unsigned long long int) var_2))));
    var_18 = var_3;
}
