/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222163
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222163 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222163
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
    var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((var_9), (((/* implicit */unsigned long long int) var_11))))) || (((((((/* implicit */_Bool) (signed char)-22)) ? (17523466567680ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))))) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))));
    var_14 = ((/* implicit */unsigned short) var_10);
    var_15 = ((/* implicit */unsigned char) var_2);
    var_16 = ((/* implicit */unsigned char) var_10);
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (short i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned short i_2 = 0; i_2 < 23; i_2 += 4) 
            {
                for (int i_3 = 0; i_3 < 23; i_3 += 4) 
                {
                    {
                        arr_9 [i_0] [i_0] [i_0] [i_0] [7ULL] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((arr_1 [i_0] [i_1]), (((((/* implicit */_Bool) arr_3 [i_0] [i_0] [(short)3])) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [(_Bool)1] [13] [(unsigned short)10]))) : (arr_1 [i_0] [i_1])))))) && (((/* implicit */_Bool) max((max((((/* implicit */unsigned int) arr_8 [i_0] [i_0])), (arr_2 [i_0]))), (max((2754428095U), (((/* implicit */unsigned int) (short)-30334)))))))));
                        var_17 = ((/* implicit */short) ((unsigned int) arr_0 [i_0]));
                        /* LoopSeq 1 */
                        for (unsigned int i_4 = 2; i_4 < 20; i_4 += 4) 
                        {
                            var_18 = ((/* implicit */short) ((unsigned short) min((((/* implicit */int) max((var_0), (((/* implicit */unsigned char) var_7))))), (((((/* implicit */_Bool) arr_11 [(unsigned short)2] [i_0] [i_2] [i_2] [i_4])) ? (((/* implicit */int) arr_5 [i_0] [i_1] [i_0] [(unsigned char)2])) : (arr_12 [i_0] [i_1] [i_1] [i_3] [i_4]))))));
                            var_19 = max((min((arr_7 [i_0]), (arr_7 [i_0]))), ((-(arr_7 [i_0]))));
                            var_20 |= ((/* implicit */signed char) min((max((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_12)), (arr_2 [i_2])))), (18431950016187101600ULL))), (((/* implicit */unsigned long long int) max((arr_2 [i_4 + 3]), (((/* implicit */unsigned int) var_0)))))));
                        }
                        var_21 = ((/* implicit */unsigned short) var_10);
                    }
                } 
            } 
            var_22 = ((/* implicit */unsigned int) ((signed char) min((var_9), (((/* implicit */unsigned long long int) (_Bool)0)))));
            var_23 = ((/* implicit */unsigned short) max((((/* implicit */short) (_Bool)1)), ((short)9259)));
        }
        var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) (-(arr_7 [(signed char)6]))))));
    }
}
