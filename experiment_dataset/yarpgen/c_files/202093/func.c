/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202093
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202093 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202093
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
    var_17 = ((/* implicit */signed char) ((((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_4))))) % (((((/* implicit */_Bool) var_6)) ? (var_10) : (((/* implicit */unsigned long long int) var_7)))))) ^ (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_14)) ? (max((((/* implicit */long long int) (unsigned short)55637)), (-6159077095645440716LL))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) var_2)))))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 1; i_2 < 24; i_2 += 4) 
                {
                    for (unsigned int i_3 = 2; i_3 < 23; i_3 += 2) 
                    {
                        {
                            /* LoopSeq 2 */
                            /* vectorizable */
                            for (short i_4 = 0; i_4 < 25; i_4 += 4) 
                            {
                                arr_11 [(short)11] [i_3 - 2] [2] [i_2 - 1] [i_1] [i_0] = ((/* implicit */unsigned char) (-(((((/* implicit */int) (short)1646)) - (((/* implicit */int) (_Bool)1))))));
                                arr_12 [i_4] [i_3] [i_2 + 1] [i_1] [i_1] [i_0] = ((/* implicit */unsigned char) (+(((/* implicit */int) (_Bool)1))));
                            }
                            for (short i_5 = 0; i_5 < 25; i_5 += 2) 
                            {
                                arr_17 [(_Bool)1] [i_3 + 2] [i_2 + 1] [(_Bool)1] [i_0] = ((/* implicit */long long int) (+(((/* implicit */int) arr_16 [i_0] [i_2 - 1] [i_3 - 2]))));
                                var_18 += ((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) (-(((/* implicit */int) arr_9 [i_5] [(signed char)10] [i_2] [i_1] [i_0]))))), ((-(var_11))))))));
                                var_19 = ((/* implicit */signed char) ((((/* implicit */long long int) ((unsigned int) min((arr_2 [i_0] [i_0] [i_0]), (((/* implicit */unsigned int) arr_1 [(short)24])))))) | (min((((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) var_11)) : (var_12))), (((/* implicit */long long int) (!(((/* implicit */_Bool) (short)-32760)))))))));
                            }
                            var_20 = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [(unsigned char)10] [i_1]))))) | (((/* implicit */int) arr_0 [(short)8]))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_6 = 0; i_6 < 25; i_6 += 1) 
                {
                    for (unsigned char i_7 = 0; i_7 < 25; i_7 += 4) 
                    {
                        {
                            arr_22 [i_0] [i_0] [i_0] [i_6] = ((/* implicit */int) (short)-32765);
                            arr_23 [i_6] [i_1] [22] [i_6] = ((/* implicit */unsigned short) (-(((((((/* implicit */_Bool) arr_18 [i_6] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_0]))) : (var_10))) >> (((((((/* implicit */_Bool) arr_9 [i_7] [i_6] [i_1] [i_0] [i_0])) ? (arr_21 [i_7] [i_6] [i_1] [i_0]) : (((/* implicit */int) (short)-32760)))) - (814741959)))))));
                        }
                    } 
                } 
                var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */int) arr_6 [i_1])), (((((/* implicit */int) var_14)) ^ (var_0)))))) ? ((+(((((/* implicit */unsigned long long int) var_12)) + (var_2))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((var_10) <= (((/* implicit */unsigned long long int) var_15))))))))));
            }
        } 
    } 
}
