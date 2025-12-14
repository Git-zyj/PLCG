/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246867
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246867 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246867
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) var_9))));
        var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_10)))) | (arr_1 [(unsigned char)6]))))));
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            arr_4 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_2 [i_0] [i_0] [i_1])) ? (((/* implicit */int) arr_2 [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_2 [i_1] [i_1] [5U]))));
            arr_5 [i_0] [i_0] [i_1] = ((/* implicit */unsigned long long int) var_0);
            /* LoopNest 2 */
            for (long long int i_2 = 0; i_2 < 18; i_2 += 2) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 18; i_3 += 4) 
                {
                    {
                        arr_10 [17ULL] [i_0] [i_1] [i_2] [i_3] [i_3] = ((/* implicit */int) ((unsigned int) ((unsigned int) (signed char)-1)));
                        var_17 = ((/* implicit */unsigned long long int) min((var_17), (var_2)));
                        arr_11 [i_0] [i_0] = ((((/* implicit */int) arr_3 [i_3])) | (((/* implicit */int) (unsigned short)65533)));
                        /* LoopSeq 1 */
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            arr_14 [i_0] [i_0] [i_1] [i_3] [i_4] = ((/* implicit */long long int) arr_0 [i_0]);
                            var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-6)) ? (14U) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))))))));
                            var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-24))) > (12303549046628173133ULL))))));
                        }
                    }
                } 
            } 
        }
        var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) arr_8 [(short)14] [i_0]))));
    }
    var_21 = ((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */_Bool) (unsigned short)65534)) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)44))) ^ (4398046511088ULL))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)0))))))));
}
