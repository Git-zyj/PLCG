/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35072
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35072 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35072
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
        for (int i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (signed char i_3 = 0; i_3 < 10; i_3 += 2) 
                    {
                        {
                            var_11 = ((/* implicit */short) (-(((((_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_1 [9LL])))) : (min((arr_6 [i_0] [i_0] [i_0] [i_0]), (((/* implicit */long long int) var_3))))))));
                            arr_9 [i_0] [i_0] = ((/* implicit */_Bool) ((((_Bool) arr_1 [i_0])) ? (((((/* implicit */_Bool) max((((/* implicit */int) (_Bool)1)), (arr_8 [i_0] [i_1] [(unsigned short)3] [i_3] [(short)9])))) ? (((/* implicit */int) ((unsigned short) arr_0 [i_3] [(signed char)7]))) : (((((/* implicit */int) var_8)) + (((/* implicit */int) (unsigned char)149)))))) : ((((+(((/* implicit */int) (unsigned char)162)))) - (((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [0] [i_0] [(signed char)5]))))));
                        }
                    } 
                } 
                var_12 = ((((/* implicit */_Bool) ((arr_7 [(signed char)5] [i_0] [i_0] [i_1] [i_1] [i_1]) ? (((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_1] [(_Bool)1] [i_1])) : (((/* implicit */int) arr_7 [i_0] [i_1] [i_1] [5LL] [i_0] [i_0]))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [i_0] [i_1]))) : (((((/* implicit */_Bool) arr_4 [(_Bool)1])) ? ((+(arr_6 [i_0] [i_0] [i_0] [i_0]))) : (((/* implicit */long long int) (-(((/* implicit */int) arr_3 [i_0] [i_1]))))))));
            }
        } 
    } 
    var_13 = ((((((/* implicit */_Bool) (+(((/* implicit */int) var_10))))) ? ((-(((/* implicit */int) var_10)))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned char)94)) : (((/* implicit */int) var_10)))))) <= (((/* implicit */int) min((var_0), (((/* implicit */signed char) ((_Bool) var_1)))))));
}
