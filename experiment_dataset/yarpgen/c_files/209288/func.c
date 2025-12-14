/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209288
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209288 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209288
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
    var_11 = ((/* implicit */unsigned char) min((var_11), (((/* implicit */unsigned char) (-(((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)28187))))) <= (((int) var_3))))))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (short i_1 = 4; i_1 < 22; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 23; i_2 += 3) 
            {
                {
                    arr_8 [i_0] [i_0] [(short)0] = ((/* implicit */unsigned long long int) ((int) min((((/* implicit */unsigned long long int) (+(-1)))), (((arr_7 [i_0] [i_0] [i_0] [i_0]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_2] [i_1] [i_0] [i_0]))) : (arr_1 [i_2] [i_2]))))));
                    var_12 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_5))));
                    var_13 = ((/* implicit */long long int) max((min((arr_3 [i_1 + 1] [(short)12] [i_1 - 1]), (arr_3 [i_1 + 1] [(unsigned char)8] [i_1 - 4]))), (arr_3 [i_0] [8LL] [i_2])));
                    /* LoopSeq 1 */
                    for (int i_3 = 0; i_3 < 23; i_3 += 3) 
                    {
                        arr_13 [i_0] [i_2] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) ((((/* implicit */int) arr_0 [i_3])) + (arr_10 [i_1] [i_3] [i_0] [i_3] [i_3]))))) ? (((/* implicit */int) max((((/* implicit */short) arr_5 [i_0] [i_1] [i_0])), (arr_6 [i_0] [i_1] [i_2])))) : (((/* implicit */int) ((unsigned char) arr_11 [i_0] [i_1] [i_0] [i_1])))));
                        var_14 = ((/* implicit */int) min((var_14), (((((/* implicit */int) ((short) ((((/* implicit */_Bool) arr_4 [i_0] [i_2])) || (((/* implicit */_Bool) var_10)))))) % (((/* implicit */int) max((arr_0 [i_1 - 3]), (arr_0 [i_1 - 3]))))))));
                        var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) -4))));
                    }
                    var_16 = ((/* implicit */_Bool) ((short) (unsigned short)58475));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */signed char) max((((/* implicit */short) ((var_4) <= (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_5))))))), (var_9)));
}
