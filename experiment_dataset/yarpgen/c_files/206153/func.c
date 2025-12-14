/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206153
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206153 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206153
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
    var_15 = ((/* implicit */unsigned char) min((((/* implicit */long long int) (~(((/* implicit */int) var_7))))), (((((/* implicit */_Bool) (-(var_6)))) ? (((/* implicit */long long int) ((unsigned int) -8326837543865012LL))) : (min((((/* implicit */long long int) var_10)), (8326837543864994LL)))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (short i_1 = 3; i_1 < 12; i_1 += 2) 
        {
            {
                var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) min((((/* implicit */unsigned short) (short)8191)), ((unsigned short)22284)))), (((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)7567))) : (var_8)))))) ? (((/* implicit */int) ((unsigned short) min((((/* implicit */short) (_Bool)1)), (var_0))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [(unsigned char)14] [i_1] [(unsigned char)14]))))))))));
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 15; i_2 += 3) 
                {
                    for (short i_3 = 0; i_3 < 15; i_3 += 4) 
                    {
                        {
                            var_17 ^= var_9;
                            arr_12 [i_3] [i_0] [i_0] [6LL] [i_0] [i_0] = ((/* implicit */long long int) (-(min((arr_7 [i_2] [i_2] [i_2] [i_0]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-7561)) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) : (var_3))))))));
                        }
                    } 
                } 
                var_18 ^= ((/* implicit */signed char) ((unsigned long long int) var_10));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned short i_4 = 0; i_4 < 24; i_4 += 1) 
    {
        for (unsigned int i_5 = 0; i_5 < 24; i_5 += 2) 
        {
            for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 24; i_7 += 4) 
                    {
                        for (long long int i_8 = 0; i_8 < 24; i_8 += 4) 
                        {
                            {
                                var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) ((((/* implicit */int) min(((unsigned short)240), (((/* implicit */unsigned short) arr_23 [(unsigned char)12] [i_5] [(unsigned char)12] [i_6 - 1] [i_6 - 1] [i_8]))))) ^ (((/* implicit */int) min((arr_23 [(unsigned char)10] [(unsigned char)10] [i_6 - 1] [i_6 - 1] [i_6 - 1] [i_8]), (arr_23 [i_4] [(unsigned short)0] [(unsigned short)8] [i_6 - 1] [i_6 - 1] [i_6 - 1])))))))));
                                arr_24 [i_7] [i_7] [(unsigned char)23] [i_7] [(unsigned char)23] [i_4] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) 3194324381U)) ? (arr_14 [i_6 - 1] [i_6 - 1]) : (arr_14 [i_6 - 1] [i_7]))), (arr_14 [i_6 - 1] [i_6 - 1])));
                                var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), (var_10))))))) ? ((+(var_11))) : (((((/* implicit */_Bool) arr_15 [i_7] [i_5] [i_4])) ? ((~(((/* implicit */int) arr_19 [i_4] [i_6 - 1])))) : ((+(((/* implicit */int) arr_19 [i_5] [i_5]))))))));
                                var_21 ^= ((/* implicit */unsigned short) (~(-2606798598280170026LL)));
                                arr_25 [i_4] [i_5] [i_6 - 1] [i_4] [(unsigned short)19] = ((/* implicit */short) ((unsigned short) (~(-1))));
                            }
                        } 
                    } 
                    arr_26 [i_4] [i_4] [i_4] = (((-(min((((/* implicit */long long int) arr_20 [i_6 - 1] [3ULL] [i_6] [0LL] [(short)3] [i_4])), (arr_14 [i_4] [(unsigned char)6]))))) | (((/* implicit */long long int) ((((/* implicit */_Bool) ((short) arr_23 [22LL] [i_6 - 1] [i_5] [i_4] [i_4] [i_4]))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [i_4]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) 2606798598280170025LL)))))))));
                    /* LoopSeq 2 */
                    for (long long int i_9 = 2; i_9 < 21; i_9 += 4) 
                    {
                        var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) min((((((/* implicit */_Bool) (unsigned char)3)) ? (((/* implicit */int) arr_20 [12ULL] [i_6 - 1] [i_6 - 1] [i_6 - 1] [i_6] [i_5])) : (((/* implicit */int) (_Bool)1)))), (((((/* implicit */_Bool) (short)8191)) ? (((/* implicit */int) arr_20 [i_6] [i_6 - 1] [i_6 - 1] [4] [(_Bool)1] [i_9])) : (((/* implicit */int) (_Bool)1)))))))));
                        arr_29 [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_20 [i_6 - 1] [i_6] [i_6 - 1] [i_9 + 2] [i_9 + 1] [i_4])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned short) var_6))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)232))) : (((long long int) (unsigned short)251))))) : (arr_21 [i_4] [i_5] [i_4] [i_9])));
                        arr_30 [i_4] [11ULL] [2LL] [11ULL] = ((/* implicit */_Bool) min((((/* implicit */long long int) min((((/* implicit */unsigned short) (!(arr_19 [i_4] [i_4])))), (var_10)))), (var_3)));
                    }
                    for (unsigned int i_10 = 0; i_10 < 24; i_10 += 4) 
                    {
                        var_23 &= ((/* implicit */unsigned short) (!(arr_23 [i_4] [i_5] [i_5] [i_5] [i_10] [i_5])));
                        arr_33 [i_10] [i_5] [i_6 - 1] [i_4] [(short)22] = ((/* implicit */long long int) ((min((((/* implicit */unsigned long long int) ((short) arr_18 [i_6] [i_6] [i_4] [i_6]))), (arr_17 [i_4] [i_4] [i_4]))) - (var_6)));
                        arr_34 [i_4] [i_5] [i_4] [(unsigned char)20] = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) var_5)), (min(((-(arr_21 [i_4] [5U] [i_5] [i_4]))), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_11)), (-8326837543864995LL))))))));
                    }
                }
            } 
        } 
    } 
}
