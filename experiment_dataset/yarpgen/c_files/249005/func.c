/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249005
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249005 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249005
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
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_15 = ((/* implicit */short) (+(((max((arr_6 [i_1] [i_2] [i_1] [i_1]), (arr_6 [i_1] [i_1] [i_2] [15ULL]))) ? (((/* implicit */unsigned long long int) -1301823524)) : (min((((/* implicit */unsigned long long int) -3435356032751563509LL)), (8806951945265361143ULL)))))));
                    var_16 = ((/* implicit */unsigned long long int) min((((/* implicit */int) min((arr_1 [i_1] [i_1]), (((/* implicit */unsigned short) min((var_0), (((/* implicit */short) var_14)))))))), (((((/* implicit */int) arr_6 [i_1] [i_1] [i_2] [i_1])) >> (((/* implicit */int) arr_6 [i_1] [i_1] [i_1] [i_1]))))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 20; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 4; i_4 < 18; i_4 += 1) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned long long int) ((((unsigned int) -3435356032751563509LL)) < (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_4 [i_1])) < (((/* implicit */int) var_13))))))));
                                var_18 = min((((/* implicit */unsigned int) ((arr_7 [i_0] [i_1] [i_4 - 3] [(unsigned char)15]) / (arr_7 [i_0] [i_4] [i_4 - 1] [(unsigned char)19])))), (max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_10 [i_0] [i_1] [i_2] [i_3] [i_1])) : (((/* implicit */int) var_9))))), (var_3))));
                                var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)172)) ? (((((/* implicit */_Bool) ((((/* implicit */int) arr_6 [i_1] [i_1] [i_1] [i_1])) / (((/* implicit */int) (unsigned char)12))))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_4 [i_1])))) : (((/* implicit */int) var_9))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */signed char) (-(((/* implicit */int) (short)-4096))));
}
