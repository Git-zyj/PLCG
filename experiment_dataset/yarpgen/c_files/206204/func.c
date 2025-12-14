/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206204
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206204 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206204
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
    var_13 = ((/* implicit */unsigned char) (unsigned short)18015);
    /* LoopNest 3 */
    for (short i_0 = 1; i_0 < 15; i_0 += 1) 
    {
        for (signed char i_1 = 3; i_1 < 18; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 19; i_2 += 3) 
            {
                {
                    arr_8 [i_0 + 4] [(short)4] [i_0] [(signed char)2] = ((/* implicit */unsigned short) (+(arr_1 [i_0] [i_0])));
                    arr_9 [i_0] [i_1] [i_2] = ((/* implicit */unsigned char) arr_2 [(_Bool)1]);
                    /* LoopSeq 3 */
                    for (long long int i_3 = 0; i_3 < 19; i_3 += 1) 
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            arr_16 [i_0] [i_0] [(signed char)8] [i_0] = ((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_2] [i_0] [i_4] [i_4]);
                            arr_17 [i_0] [12LL] [i_0] [i_0] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_10 [i_4] [i_4] [i_4] [i_4] [i_4]))));
                            var_14 += ((/* implicit */long long int) ((unsigned long long int) (short)32753));
                            var_15 |= ((/* implicit */_Bool) (unsigned short)17988);
                        }
                        var_16 = ((/* implicit */signed char) ((unsigned char) (+(((/* implicit */int) var_3)))));
                        var_17 = ((/* implicit */signed char) (unsigned short)47533);
                        var_18 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((short) arr_3 [i_0] [i_0] [i_1 - 3]))), ((-(arr_0 [i_0 + 3])))));
                    }
                    for (signed char i_5 = 0; i_5 < 19; i_5 += 2) /* same iter space */
                    {
                        /* LoopSeq 3 */
                        for (short i_6 = 2; i_6 < 17; i_6 += 4) 
                        {
                            var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) arr_10 [i_0] [i_1] [i_2] [i_2] [i_0]))));
                            var_20 = (unsigned short)47536;
                            var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) ((signed char) (~(((/* implicit */int) arr_15 [i_2] [i_0 + 4] [i_1 - 3] [i_6 - 2]))))))));
                        }
                        /* vectorizable */
                        for (short i_7 = 1; i_7 < 18; i_7 += 3) 
                        {
                            var_22 *= ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_11))));
                            arr_26 [i_0] [i_5] [i_5] [11ULL] = ((/* implicit */signed char) arr_15 [i_0] [i_0 + 1] [i_1 - 1] [i_7 - 1]);
                            arr_27 [i_0] = ((/* implicit */unsigned short) ((((int) var_8)) != (((/* implicit */int) arr_13 [i_7] [i_7 + 1] [i_7] [i_7 + 1] [i_7 + 1] [i_7]))));
                        }
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            var_23 = ((/* implicit */unsigned short) (-(((/* implicit */int) ((short) (short)31507)))));
                            var_24 = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_2 [i_0 + 4]))));
                            var_25 = ((/* implicit */unsigned long long int) max((var_25), ((-((-((((_Bool)1) ? (15891884157696488219ULL) : (arr_21 [i_5] [i_5] [i_5] [i_2] [(short)2] [i_5] [i_8])))))))));
                        }
                        var_26 = ((/* implicit */unsigned char) (_Bool)1);
                        var_27 -= ((/* implicit */short) (-(((((/* implicit */_Bool) arr_13 [i_0 + 1] [i_0] [i_0] [i_0] [i_0] [i_0 + 1])) ? (((/* implicit */int) ((unsigned char) arr_18 [i_5] [i_5] [i_5] [i_0]))) : (((/* implicit */int) min(((short)32761), ((short)30727))))))));
                    }
                    for (signed char i_9 = 0; i_9 < 19; i_9 += 2) /* same iter space */
                    {
                        arr_32 [i_0] [i_0] [(unsigned short)12] [i_9] [i_9] [i_1] = ((/* implicit */short) min((((/* implicit */long long int) (~(((/* implicit */int) (short)-26091))))), (((((arr_4 [i_0] [i_1] [i_2]) + (9223372036854775807LL))) >> ((((~(var_8))) + (2089199448)))))));
                        arr_33 [i_0] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) arr_22 [i_0] [i_0] [i_0] [i_0] [i_0]);
                    }
                }
            } 
        } 
    } 
}
