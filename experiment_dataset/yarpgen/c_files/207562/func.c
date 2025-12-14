/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207562
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207562 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207562
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
    var_11 = ((/* implicit */long long int) max((var_11), (var_3)));
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        var_12 = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)21295)) && (((/* implicit */_Bool) 644598477))));
        var_13 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) arr_3 [i_0])) : (var_5))), (((/* implicit */int) ((((/* implicit */int) arr_3 [i_0])) >= (((/* implicit */int) var_7)))))));
    }
    for (short i_1 = 0; i_1 < 21; i_1 += 3) 
    {
        var_14 = ((/* implicit */short) ((8191) + (-8191)));
        var_15 = ((/* implicit */int) ((max(((_Bool)0), ((_Bool)0))) ? (((/* implicit */unsigned long long int) var_5)) : ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((604836806893260533LL) / (((/* implicit */long long int) 1893424514U))))) : (((((/* implicit */_Bool) (short)-19878)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-19878)))))))));
        var_16 = ((/* implicit */unsigned long long int) -1757730316);
    }
    for (short i_2 = 1; i_2 < 12; i_2 += 3) 
    {
        var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-11963)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (var_9)))) ? (((/* implicit */int) arr_4 [i_2 + 2])) : (((((/* implicit */_Bool) var_9)) ? (arr_9 [i_2] [i_2]) : (var_5)))))) ? (-8192) : (((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */long long int) (_Bool)0)), (9223372036854775807LL)))) || ((_Bool)0))))));
        var_18 &= ((/* implicit */unsigned int) var_4);
        /* LoopSeq 2 */
        for (unsigned long long int i_3 = 1; i_3 < 11; i_3 += 2) 
        {
            arr_12 [i_2] [i_2] = ((/* implicit */signed char) (-((-(0ULL)))));
            arr_13 [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) arr_5 [i_2] [i_3 + 3]);
            /* LoopNest 3 */
            for (int i_4 = 0; i_4 < 14; i_4 += 4) 
            {
                for (signed char i_5 = 1; i_5 < 13; i_5 += 3) 
                {
                    for (unsigned short i_6 = 1; i_6 < 13; i_6 += 4) 
                    {
                        {
                            arr_24 [i_2] [i_2] [i_2] [(signed char)10] [i_2] [i_2 + 1] [i_4] &= ((/* implicit */signed char) (~(((/* implicit */int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) arr_18 [i_3 - 1])))))));
                            arr_25 [i_3] [i_3] [i_6] [i_5] [i_6] = var_0;
                            arr_26 [i_6] [i_3] [(short)12] = ((/* implicit */unsigned short) arr_17 [i_2] [i_2 + 2] [i_2 + 1]);
                        }
                    } 
                } 
            } 
        }
        for (unsigned short i_7 = 0; i_7 < 14; i_7 += 1) 
        {
            /* LoopNest 2 */
            for (int i_8 = 0; i_8 < 14; i_8 += 2) 
            {
                for (unsigned int i_9 = 2; i_9 < 13; i_9 += 1) 
                {
                    {
                        arr_37 [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_7] [i_8] [i_2 - 1] = ((((/* implicit */int) ((((/* implicit */int) (unsigned char)77)) <= (((/* implicit */int) (unsigned short)21295))))) >= (((int) 2147483647)));
                        arr_38 [i_2] [i_7] [i_8] [i_8] [i_9] [i_9] = ((((/* implicit */_Bool) 1461595822)) ? (6395004508138214846LL) : (-4864582377687269370LL));
                    }
                } 
            } 
            arr_39 [i_7] = ((/* implicit */unsigned char) max((min((var_6), (((/* implicit */unsigned long long int) (unsigned char)77)))), (8457637085322497509ULL)));
            var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) max((arr_33 [(unsigned short)12] [i_7] [i_7] [(_Bool)1]), (((((/* implicit */long long int) ((/* implicit */int) (signed char)84))) & (arr_33 [(short)0] [i_2] [(short)0] [i_7]))))))));
        }
    }
}
