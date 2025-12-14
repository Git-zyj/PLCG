/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194960
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194960 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194960
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
    var_12 = ((/* implicit */short) min((var_8), (var_8)));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        arr_2 [i_0] = ((min((((/* implicit */unsigned long long int) min((var_6), (((/* implicit */unsigned char) (_Bool)0))))), (arr_1 [i_0]))) % (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)35807))));
        /* LoopSeq 1 */
        for (unsigned int i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            arr_5 [i_0] = ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((var_5), (((/* implicit */unsigned long long int) arr_0 [i_0]))))) ? (((/* implicit */long long int) ((unsigned int) 659850202337412526LL))) : (((-7451085810112918185LL) + (((/* implicit */long long int) ((/* implicit */int) (short)-5565)))))))) + (arr_1 [i_0]));
            /* LoopSeq 1 */
            for (unsigned long long int i_2 = 2; i_2 < 17; i_2 += 3) 
            {
                arr_9 [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) (((+(arr_4 [i_0] [19ULL] [i_2 + 3]))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_2 + 2]))))))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (short i_3 = 2; i_3 < 19; i_3 += 4) /* same iter space */
                {
                    arr_12 [i_3] [i_3] [i_3] [i_3] = ((/* implicit */int) (-(arr_3 [i_2 + 2] [i_3 + 1])));
                    arr_13 [i_0] [i_0] [i_2] [i_3 + 1] = ((/* implicit */unsigned short) (_Bool)1);
                    arr_14 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) arr_4 [i_0] [i_2] [i_2]);
                    arr_15 [i_0] [i_1] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)44992))) + ((~(arr_3 [i_0] [i_0])))));
                }
                for (short i_4 = 2; i_4 < 19; i_4 += 4) /* same iter space */
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned int i_5 = 0; i_5 < 20; i_5 += 3) 
                    {
                        var_13 = ((/* implicit */unsigned long long int) min((var_13), ((((_Bool)1) ? (arr_4 [i_4] [i_4] [i_4 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
                        var_14 -= ((/* implicit */short) ((arr_0 [i_4 + 1]) ? (arr_18 [i_2 + 3] [i_0] [i_0]) : (((/* implicit */int) (_Bool)0))));
                    }
                    for (signed char i_6 = 1; i_6 < 16; i_6 += 3) 
                    {
                        arr_24 [i_0] [i_0] [i_2] [i_4] [(unsigned char)14] = var_9;
                        arr_25 [i_6] [i_1] [i_1] [i_1] [i_0] = min((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_22 [i_0] [i_0] [i_2] [i_2] [i_2 + 3] [(short)4] [i_6 + 3]))) + (max((((/* implicit */long long int) var_8)), (var_7)))))), (((((/* implicit */_Bool) (~(((/* implicit */int) var_4))))) ? (10721063317829888495ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_2] [i_4 - 2] [5] [i_2]))))));
                    }
                    for (short i_7 = 0; i_7 < 20; i_7 += 4) 
                    {
                        arr_29 [i_2 + 3] [i_1] [i_0] = ((/* implicit */short) ((((unsigned int) arr_28 [i_0] [i_2 + 3] [i_1] [i_0])) % ((-(((((/* implicit */unsigned int) ((/* implicit */int) arr_11 [4LL] [i_1] [i_2] [i_4] [4LL] [i_0]))) * (arr_17 [i_0] [i_0] [i_0] [i_0])))))));
                        var_15 *= ((/* implicit */unsigned int) (~((+(((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)245))) : (1ULL)))))));
                    }
                    /* LoopSeq 2 */
                    for (unsigned int i_8 = 2; i_8 < 17; i_8 += 2) 
                    {
                        arr_32 [i_4] [i_8 - 1] = ((_Bool) (~(((arr_23 [i_8] [i_4] [i_2] [i_1] [i_0]) % (((/* implicit */long long int) ((/* implicit */int) arr_20 [i_0] [i_1] [i_2] [i_4 - 1] [6U] [i_8])))))));
                        var_16 *= ((/* implicit */unsigned int) min((var_9), ((-(((((/* implicit */unsigned long long int) -2235024541564799946LL)) + (var_9)))))));
                        var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) (+(((659850202337412526LL) % (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))))));
                    }
                    for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
                    {
                        arr_35 [i_9] [i_9] [i_4] [i_4 + 1] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_23 [i_0] [9] [i_4] [i_9 - 1] [i_9])) ? (arr_23 [i_1] [i_1] [i_1] [i_9 - 1] [i_9]) : (arr_23 [i_9] [i_9] [i_9] [i_9 - 1] [i_9]))) % (((/* implicit */long long int) max((((/* implicit */unsigned int) (short)-1995)), (510U))))));
                        var_18 ^= ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (~(7LL)))), (min((1992479609152071541ULL), (((/* implicit */unsigned long long int) var_7))))));
                        arr_36 [i_1] [i_1] [i_2] [i_4] [i_1] [i_9] = ((/* implicit */unsigned int) min((((((/* implicit */long long int) ((/* implicit */int) arr_8 [i_1] [(short)6] [i_4] [i_4 - 1]))) + (5273692308367547981LL))), (((/* implicit */long long int) max((arr_8 [i_0] [i_4] [i_4] [i_4 - 1]), (((/* implicit */unsigned short) (_Bool)1)))))));
                    }
                    /* LoopSeq 2 */
                    for (unsigned long long int i_10 = 0; i_10 < 20; i_10 += 2) 
                    {
                        arr_39 [i_1] = ((/* implicit */unsigned short) arr_38 [i_4] [i_4] [i_4] [i_4]);
                        arr_40 [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)2))) + (-2235024541564799946LL)));
                    }
                    for (unsigned char i_11 = 3; i_11 < 19; i_11 += 4) 
                    {
                        arr_43 [i_11] [i_4] [i_0] [i_11] [i_1] [i_1] [i_0] = ((/* implicit */signed char) arr_23 [14ULL] [14ULL] [i_1] [14ULL] [i_1]);
                        arr_44 [i_0] [i_0] [i_0] [i_11] [(unsigned char)15] [i_0] [i_0] = ((/* implicit */unsigned char) 441125004U);
                        arr_45 [i_11 - 1] [i_4 - 1] [i_11] [i_0] [i_11] [i_0] [i_0] = var_9;
                    }
                }
                var_19 ^= ((/* implicit */int) (((~(18446744073709551593ULL))) * (min((((/* implicit */unsigned long long int) arr_19 [i_2 + 1] [i_2 - 2] [i_2 + 3] [i_2 + 2] [i_2 - 2])), (var_9)))));
                arr_46 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_30 [i_2 + 1] [i_2 + 1] [i_2 - 1] [i_2 + 1] [i_2]))))) ? (((/* implicit */long long int) (~(((/* implicit */int) arr_30 [i_2 + 1] [i_2] [6] [i_2 + 1] [6]))))) : (((long long int) arr_30 [i_2 + 1] [i_2] [(_Bool)1] [4ULL] [i_2]))));
            }
        }
    }
}
