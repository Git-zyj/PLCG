/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3243
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3243 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3243
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
    var_15 = ((/* implicit */signed char) (-(((/* implicit */int) var_2))));
    var_16 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_9))) | (((((/* implicit */_Bool) (+(((/* implicit */int) var_1))))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (var_11))) : (((/* implicit */long long int) ((/* implicit */int) var_6)))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned short i_2 = 0; i_2 < 20; i_2 += 2) /* same iter space */
                {
                    var_17 -= ((/* implicit */unsigned short) (signed char)27);
                    var_18 = ((/* implicit */long long int) ((min((arr_6 [i_2] [i_0] [i_0]), (((/* implicit */unsigned int) (-(((/* implicit */int) arr_3 [i_0] [i_0] [i_1]))))))) * (min((((arr_0 [i_0]) ? (arr_6 [i_2] [13LL] [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)23971))))), ((+(arr_4 [i_0] [i_1] [i_1] [i_2])))))));
                }
                for (unsigned short i_3 = 0; i_3 < 20; i_3 += 2) /* same iter space */
                {
                    var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) max((((/* implicit */signed char) arr_0 [(unsigned char)6])), (var_10))))));
                    var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) (signed char)-28)), (max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)8786)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((arr_7 [i_0] [i_1] [i_3]) <= (((/* implicit */long long int) ((/* implicit */int) var_5))))))) : (arr_7 [i_0] [i_1] [14LL])));
                    var_21 += ((/* implicit */signed char) var_12);
                }
                var_22 = ((/* implicit */signed char) (~(((/* implicit */int) (unsigned short)8786))));
            }
        } 
    } 
    var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)56749))) & (var_11))))));
    var_24 &= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_4))));
}
