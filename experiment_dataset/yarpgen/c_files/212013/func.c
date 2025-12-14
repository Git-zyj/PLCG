/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212013
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212013 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212013
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
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 10; i_2 += 1) 
                {
                    for (unsigned char i_3 = 0; i_3 < 10; i_3 += 1) 
                    {
                        {
                            arr_10 [i_0] [i_2] = ((/* implicit */unsigned long long int) ((((((/* implicit */int) (unsigned char)5)) * (((/* implicit */int) (_Bool)0)))) / (((((/* implicit */_Bool) max((((/* implicit */unsigned char) arr_8 [i_0] [i_0] [i_1] [i_2] [i_3])), (var_11)))) ? (((/* implicit */int) min((var_4), (arr_7 [i_3] [i_2] [i_1] [i_0])))) : (((/* implicit */int) min((var_6), (arr_0 [i_0] [i_1]))))))));
                            var_12 = ((/* implicit */unsigned char) min((var_12), (((/* implicit */unsigned char) ((((arr_1 [4ULL]) | (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned char) arr_8 [i_0] [i_1] [i_2] [6ULL] [i_0])), (var_4))))))) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))))));
                        }
                    } 
                } 
                arr_11 [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) (!(var_5)));
            }
        } 
    } 
    var_13 += ((/* implicit */unsigned char) var_7);
    var_14 = ((/* implicit */unsigned long long int) var_9);
}
