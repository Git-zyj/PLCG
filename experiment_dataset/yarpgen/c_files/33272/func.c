/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33272
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33272 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33272
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
    var_12 = ((/* implicit */short) var_10);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 1; i_1 < 17; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((arr_0 [i_0]) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_0] [(signed char)14])) && (((/* implicit */_Bool) arr_1 [5LL] [5LL]))))))))) ? (((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_0 [i_0]) : (arr_0 [i_0]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))));
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned char i_3 = 1; i_3 < 16; i_3 += 1) 
                    {
                        {
                            var_13 = ((/* implicit */unsigned char) max((var_13), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_2 [i_0] [i_0])))))));
                            var_14 = ((/* implicit */unsigned long long int) min((var_14), (((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_2] [i_3])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [(signed char)4] [(unsigned short)4] [i_2]))) : (695755104U)))) ? ((-(arr_9 [i_1 + 1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min(((_Bool)1), (var_10)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(max(((_Bool)1), ((_Bool)1))))))) : (min((((/* implicit */unsigned long long int) ((unsigned char) var_4))), ((-(8126033467794454250ULL)))))))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (long long int i_4 = 0; i_4 < 18; i_4 += 1) 
                {
                    for (unsigned int i_5 = 0; i_5 < 18; i_5 += 3) 
                    {
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            {
                                arr_19 [i_6] [i_0] [i_4] [i_0] [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((unsigned char) (-(((/* implicit */int) var_0))))))));
                                var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) arr_1 [i_0] [i_0]))));
                            }
                        } 
                    } 
                } 
                arr_20 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned char)0))));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned int) min((var_16), (var_3)));
    var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) var_3)) / (15776352084847852207ULL))))));
}
