/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238446
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238446 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238446
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
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 16; i_0 += 4) 
    {
        for (int i_1 = 2; i_1 < 16; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (unsigned int i_2 = 2; i_2 < 13; i_2 += 4) 
                {
                    for (unsigned short i_3 = 0; i_3 < 17; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 17; i_4 += 3) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned short) -1);
                                arr_13 [i_0] [i_4] [i_1] [(short)13] [i_0] = var_15;
                                arr_14 [i_0] [i_0] [i_1 - 1] [i_2 - 2] [i_3] [i_4] [i_0] = ((/* implicit */short) max((max((arr_6 [(short)3] [i_0] [i_0] [i_1 + 1]), (arr_6 [i_0] [i_0] [i_0] [i_1 - 1]))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0])))))));
                                arr_15 [i_2] [i_0] [i_4] [i_3] [i_4] = 2735868053266808646ULL;
                                var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) (+(((/* implicit */int) (_Bool)1)))))));
                            }
                        } 
                    } 
                } 
                var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -4053346419198482631LL)) ? (((arr_2 [i_0 - 1]) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-13537)) ? (2144372093U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))))) ? (((((/* implicit */_Bool) 692958489U)) ? (-3424427608967188351LL) : (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_1] [i_1 - 1] [i_1 - 2] [i_0 - 1] [i_0] [i_1] [i_1 - 2]))))) : (((/* implicit */long long int) ((0U) + (arr_1 [i_1])))))))));
                /* LoopNest 2 */
                for (long long int i_5 = 0; i_5 < 17; i_5 += 4) 
                {
                    for (unsigned int i_6 = 0; i_6 < 17; i_6 += 4) 
                    {
                        {
                            arr_22 [i_6] [i_0] [i_0] [15ULL] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_19 [i_0 + 1] [i_0 - 1] [i_1 + 1])), (var_15)))) && (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_6] [i_0] [i_0] [i_0]))) | (11246439679433378895ULL))))));
                            /* LoopSeq 4 */
                            for (unsigned long long int i_7 = 0; i_7 < 17; i_7 += 1) /* same iter space */
                            {
                                arr_26 [i_0] [i_0] [i_0] [i_5] [i_0] [i_7] = ((/* implicit */unsigned short) (((_Bool)1) && (((/* implicit */_Bool) ((((((/* implicit */_Bool) var_7)) ? (4027984032U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_0 + 1] [i_1] [i_0 + 1] [i_1]))))) << (((/* implicit */int) (!(((/* implicit */_Bool) arr_16 [i_0]))))))))));
                                arr_27 [8] [8] [11U] [i_0] [11U] [i_0] [11U] = ((/* implicit */unsigned int) var_4);
                            }
                            for (unsigned long long int i_8 = 0; i_8 < 17; i_8 += 1) /* same iter space */
                            {
                                arr_31 [i_5] [i_1 - 1] [(unsigned short)2] [(signed char)16] [i_8] &= -3424427608967188340LL;
                                var_21 -= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_12 [i_0 - 1] [i_1 - 2] [i_1 + 1] [i_6] [i_1 + 1])) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_0 - 1] [i_5] [i_1] [i_1] [i_1]))) : (var_6))) : (((/* implicit */unsigned int) arr_6 [i_0 - 1] [i_5] [i_5] [i_1 - 1]))));
                            }
                            for (unsigned long long int i_9 = 0; i_9 < 17; i_9 += 1) /* same iter space */
                            {
                                arr_35 [i_0] [i_1 - 1] [i_1] [i_1 + 1] [6LL] = ((/* implicit */unsigned int) (unsigned short)65512);
                                var_22 += ((/* implicit */signed char) -3424427608967188360LL);
                            }
                            for (unsigned long long int i_10 = 0; i_10 < 17; i_10 += 1) /* same iter space */
                            {
                                var_23 ^= ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_30 [i_1] [i_1] [i_6] [i_6] [i_10]))));
                                arr_38 [i_0] [i_0] [i_0] = ((/* implicit */short) -3424427608967188340LL);
                            }
                        }
                    } 
                } 
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned long long int) var_16);
    var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) (-(((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (short)32767)) < (((/* implicit */int) (unsigned short)52075)))))) | (var_9))))))));
    var_26 = ((/* implicit */int) 5913177403608291157ULL);
}
