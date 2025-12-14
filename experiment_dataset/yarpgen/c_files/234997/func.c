/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234997
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234997 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234997
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 17; i_2 += 1) 
                {
                    for (unsigned char i_3 = 0; i_3 < 17; i_3 += 4) 
                    {
                        {
                            /* LoopSeq 3 */
                            for (int i_4 = 1; i_4 < 16; i_4 += 4) /* same iter space */
                            {
                                var_15 -= ((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)21050)))))));
                                arr_11 [i_4] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */unsigned short) arr_8 [i_0] [i_0] [i_0]);
                            }
                            for (int i_5 = 1; i_5 < 16; i_5 += 4) /* same iter space */
                            {
                                arr_14 [i_0] [(unsigned char)9] [(unsigned char)9] [(unsigned char)9] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) (signed char)-38)) ? (((/* implicit */int) (unsigned char)2)) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) arr_8 [i_0] [14ULL] [i_2])) ? (((/* implicit */unsigned long long int) arr_6 [i_0])) : (var_7)))))));
                                var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) var_4))));
                                arr_15 [i_5] [i_5] [i_3] [i_0] [i_1] [i_0] = ((/* implicit */int) (-(-5928749191718213359LL)));
                            }
                            for (int i_6 = 1; i_6 < 16; i_6 += 4) /* same iter space */
                            {
                                arr_19 [i_0] [i_1] = ((/* implicit */_Bool) max((((unsigned long long int) (!(((/* implicit */_Bool) var_14))))), (((/* implicit */unsigned long long int) var_1))));
                                var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) ((((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */short) (unsigned char)118)), ((short)12288))))) : (-756718297786805815LL))) ^ (((/* implicit */long long int) min(((-(((/* implicit */int) arr_5 [i_6] [i_2] [i_2] [i_0])))), (max((((/* implicit */int) arr_18 [i_0] [i_1] [(short)10])), (var_8)))))))))));
                            }
                            var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) min((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (short)12293)) + (((/* implicit */int) arr_17 [i_0] [i_0] [i_0] [i_0] [2LL]))))) ? (((/* implicit */int) (!(var_11)))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_6)) : (arr_16 [i_0] [i_0] [i_0] [i_0] [i_0])))))), ((-(arr_8 [i_0] [i_1] [i_1]))))))));
                            arr_20 [i_2] [i_1] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) (-(max((((/* implicit */long long int) var_6)), (arr_4 [i_0] [i_1] [i_1])))))), (max((min((var_2), (((/* implicit */unsigned long long int) arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))), (((/* implicit */unsigned long long int) ((unsigned char) arr_5 [i_0] [i_0] [i_0] [i_0])))))));
                        }
                    } 
                } 
                arr_21 [i_0] [i_1] [i_1] = (+(((((/* implicit */int) var_6)) + (((/* implicit */int) var_5)))));
                arr_22 [i_1] = ((/* implicit */unsigned char) ((unsigned int) ((int) arr_7 [i_0] [i_1] [i_1])));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) min(((unsigned char)118), ((unsigned char)118))))));
}
