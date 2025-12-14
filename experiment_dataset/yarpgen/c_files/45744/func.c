/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45744
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45744 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45744
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
    for (long long int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 20; i_2 += 2) 
            {
                {
                    var_14 = ((/* implicit */long long int) ((_Bool) ((((/* implicit */_Bool) 1227565882898031861ULL)) ? (arr_8 [i_1 - 1] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)67))))));
                    /* LoopSeq 2 */
                    for (unsigned int i_3 = 0; i_3 < 20; i_3 += 1) 
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned long long int i_4 = 0; i_4 < 20; i_4 += 1) 
                        {
                            var_15 = ((/* implicit */unsigned short) (-(17219178190811519754ULL)));
                            arr_13 [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) (-(arr_3 [i_1] [i_1])));
                        }
                        arr_14 [i_1] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) (~(arr_9 [i_1 - 1] [i_1] [i_1 - 1] [i_1 - 1])))), (((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [i_0])) / (((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [(_Bool)1] [i_0]))))) * (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)36014))) % (17219178190811519754ULL)))))));
                        /* LoopSeq 3 */
                        for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
                        {
                            arr_17 [i_1] = ((/* implicit */unsigned char) min(((unsigned short)29502), (((/* implicit */unsigned short) (unsigned char)0))));
                            var_16 = ((/* implicit */unsigned char) 16777215U);
                            arr_18 [i_5] [i_5] [i_1] [i_1] [5ULL] [i_0] = ((/* implicit */unsigned short) arr_2 [i_5]);
                        }
                        /* vectorizable */
                        for (unsigned short i_6 = 0; i_6 < 20; i_6 += 4) 
                        {
                            arr_23 [i_1] [(_Bool)1] [i_2] [i_6] [15U] = ((((unsigned int) (unsigned short)20)) ^ (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-126))));
                            arr_24 [i_2] [i_1] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)-126)) ? (17219178190811519755ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_1] [i_3] [i_1] [i_3] [i_2] [i_1] [i_0])))));
                        }
                        for (unsigned short i_7 = 2; i_7 < 19; i_7 += 1) 
                        {
                            var_17 -= ((/* implicit */unsigned short) max(((-(arr_22 [i_2] [(unsigned char)14] [i_1 - 1] [(_Bool)1] [i_7]))), (((/* implicit */int) max((((/* implicit */unsigned short) (signed char)-127)), ((unsigned short)36014))))));
                            arr_28 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (!((_Bool)1)))), (((17219178190811519759ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)11)))))))) ? (((/* implicit */int) (unsigned char)137)) : (((/* implicit */int) ((_Bool) (~(((/* implicit */int) (_Bool)1))))))));
                        }
                    }
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        var_18 = max((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0))) * (arr_0 [i_1 - 1] [i_1 - 1]))), (((/* implicit */unsigned long long int) ((arr_9 [i_1] [i_1] [i_1] [i_0]) ^ (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_15 [i_0] [i_0] [9ULL] [(_Bool)1] [i_8] [9ULL] [13U])) || (((/* implicit */_Bool) 1227565882898031870ULL))))))))));
                        var_19 = ((/* implicit */unsigned char) ((signed char) min(((((_Bool)0) ? (((/* implicit */int) (unsigned short)36029)) : (((/* implicit */int) (unsigned char)134)))), ((-(((/* implicit */int) (_Bool)1)))))));
                    }
                }
            } 
        } 
    } 
    var_20 = var_13;
    var_21 = ((/* implicit */signed char) (~(((/* implicit */int) (_Bool)1))));
}
