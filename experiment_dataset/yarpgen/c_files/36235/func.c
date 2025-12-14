/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36235
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36235 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36235
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
    var_12 = ((/* implicit */unsigned int) (+(((var_4) - ((-(((/* implicit */int) var_3))))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        var_13 = ((/* implicit */int) ((unsigned int) min((((/* implicit */short) arr_1 [i_0])), (arr_0 [i_0] [i_0]))));
        arr_2 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */int) arr_0 [i_0] [i_0])) <= (((/* implicit */int) arr_0 [i_0] [i_0]))))) != (((/* implicit */int) min((((/* implicit */short) arr_1 [i_0])), (arr_0 [i_0] [i_0]))))));
        arr_3 [14U] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((((/* implicit */int) arr_1 [i_0])) * (((/* implicit */int) arr_0 [i_0] [i_0])))) / (((/* implicit */int) arr_0 [i_0] [i_0])))))));
    }
    var_14 += ((/* implicit */signed char) ((var_8) != (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) (+(((/* implicit */int) var_0))))) < (((unsigned int) var_0))))))));
    var_15 = ((/* implicit */short) min((((/* implicit */unsigned int) (+((-(((/* implicit */int) var_3))))))), ((~(min((var_8), (((/* implicit */unsigned int) var_10))))))));
    /* LoopNest 2 */
    for (unsigned int i_1 = 3; i_1 < 16; i_1 += 1) 
    {
        for (short i_2 = 2; i_2 < 14; i_2 += 1) 
        {
            {
                arr_10 [i_1] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((short) arr_5 [i_1]))) ? (((/* implicit */int) arr_6 [i_1] [i_2])) : (((/* implicit */int) min((min((arr_5 [i_1]), (((/* implicit */unsigned short) arr_7 [i_1])))), (min((((/* implicit */unsigned short) arr_9 [i_1] [i_1])), (arr_4 [i_1]))))))));
                var_16 = ((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_1] [i_2 - 1])) && (((/* implicit */_Bool) arr_6 [i_1] [i_2 - 2])))))));
                /* LoopNest 2 */
                for (unsigned long long int i_3 = 1; i_3 < 13; i_3 += 4) 
                {
                    for (int i_4 = 0; i_4 < 17; i_4 += 1) 
                    {
                        {
                            var_17 = (i_1 % 2 == zero) ? (((/* implicit */unsigned short) ((unsigned int) ((((/* implicit */int) arr_7 [i_1])) << (((((((/* implicit */_Bool) var_4)) ? (arr_12 [2ULL] [i_2] [i_3] [i_4]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_2]))))) - (3641886476U))))))) : (((/* implicit */unsigned short) ((unsigned int) ((((((/* implicit */int) arr_7 [i_1])) + (2147483647))) << (((((((((/* implicit */_Bool) var_4)) ? (arr_12 [2ULL] [i_2] [i_3] [i_4]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_2]))))) - (3641886476U))) - (17U)))))));
                            var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) (((((-(((/* implicit */int) ((((/* implicit */int) arr_13 [i_1] [i_2] [i_4])) < (((/* implicit */int) var_10))))))) + (2147483647))) << (((((/* implicit */int) min((((/* implicit */unsigned short) arr_7 [(short)8])), (arr_5 [4U])))) - (5325))))))));
                            arr_16 [i_1] [i_4] = ((/* implicit */unsigned int) min((((/* implicit */signed char) ((((/* implicit */int) arr_13 [i_1 - 2] [i_2 - 1] [i_3 + 1])) >= (((/* implicit */int) arr_13 [i_1 - 1] [i_2 + 1] [i_3 + 3]))))), (arr_13 [i_1 - 3] [i_2 + 2] [i_3 - 1])));
                        }
                    } 
                } 
            }
        } 
    } 
}
