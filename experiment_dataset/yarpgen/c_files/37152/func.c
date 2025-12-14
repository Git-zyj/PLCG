/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37152
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37152 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37152
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
    var_15 += ((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) min((1019365199U), (1019365199U)))) : (((((/* implicit */long long int) ((int) var_9))) | (var_9))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 19; i_2 += 1) 
                {
                    for (unsigned int i_3 = 0; i_3 < 20; i_3 += 4) 
                    {
                        for (short i_4 = 3; i_4 < 17; i_4 += 3) 
                        {
                            {
                                var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) ((long long int) ((((/* implicit */_Bool) (unsigned short)41038)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1))))))));
                                var_17 = ((((/* implicit */_Bool) var_1)) ? ((((+(1019365199U))) | (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */short) arr_3 [i_0] [i_4 - 1])), (arr_2 [i_0] [i_1] [i_1]))))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_1]))));
                                arr_13 [i_0] [i_0] [i_1] [i_2] [i_3] [i_4 - 3] [i_0] = ((/* implicit */_Bool) arr_12 [i_0] [i_2 - 1] [i_0] [i_2 - 1] [i_2 - 1] [i_3]);
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 20; i_5 += 1) 
                {
                    for (long long int i_6 = 2; i_6 < 18; i_6 += 2) 
                    {
                        {
                            var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_6 + 2] [i_6 - 2])) ? (((/* implicit */int) var_12)) : (((((/* implicit */int) var_10)) | (((/* implicit */int) var_11))))))) ? (min((min((arr_0 [i_6]), (((/* implicit */unsigned long long int) 3275602106U)))), (((/* implicit */unsigned long long int) min((((/* implicit */int) (_Bool)0)), (-784344447)))))) : (((/* implicit */unsigned long long int) min((((/* implicit */int) arr_1 [i_0])), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_3)))))))));
                            var_19 = ((/* implicit */int) max((var_19), ((~(((/* implicit */int) ((signed char) arr_8 [i_0] [i_0])))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned char) ((unsigned short) (+(((/* implicit */int) ((signed char) var_3))))));
}
