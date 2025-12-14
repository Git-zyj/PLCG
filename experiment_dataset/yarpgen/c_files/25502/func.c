/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25502
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25502 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25502
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
    var_10 = ((/* implicit */unsigned char) var_8);
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 4; i_2 < 14; i_2 += 3) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (long long int i_4 = 0; i_4 < 15; i_4 += 4) 
                        {
                            {
                                var_11 = ((/* implicit */short) ((((/* implicit */_Bool) arr_8 [i_0 - 1] [i_3])) || (((/* implicit */_Bool) max((arr_8 [i_1] [i_3]), (arr_8 [i_0 - 1] [i_4]))))));
                                arr_12 [i_2] [i_1] [i_2] = ((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)77))));
                                var_12 = ((/* implicit */long long int) min((var_12), (((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_1 [i_4])) != (((/* implicit */int) arr_1 [i_1])))))) ^ (((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0] [i_0] [i_3])))))) & (arr_11 [i_0 - 1] [i_0] [i_0 - 1] [i_0 - 1] [i_2 - 1])))))));
                            }
                        } 
                    } 
                } 
                var_13 += ((/* implicit */unsigned short) ((((arr_10 [11ULL] [i_1] [i_1]) + (((((/* implicit */_Bool) arr_0 [i_1])) ? (arr_10 [i_0] [4ULL] [i_0 - 1]) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))))))) % (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_0 - 1] [i_1])) ? (((/* implicit */int) arr_2 [i_0] [i_0] [i_1])) : (arr_3 [i_0] [i_1] [i_1])))) != (((arr_5 [(unsigned short)12]) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0])))))))))));
                arr_13 [i_0] = ((/* implicit */unsigned short) min((((arr_4 [i_0 - 1] [i_1] [i_0]) >> (((arr_11 [i_0 - 1] [i_0 - 1] [i_0] [i_0 - 1] [i_1]) - (5367813575288113879LL))))), (arr_4 [i_0 - 1] [12ULL] [(signed char)13])));
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned short) ((((((/* implicit */unsigned long long int) var_7)) != (min((var_1), (((/* implicit */unsigned long long int) var_0)))))) || (((/* implicit */_Bool) var_0))));
}
