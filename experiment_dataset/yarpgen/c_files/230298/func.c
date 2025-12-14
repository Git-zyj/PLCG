/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230298
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230298 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230298
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
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                arr_4 [(signed char)10] [i_0] [i_1] = ((/* implicit */unsigned char) max((((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_0)))))))), (max((((/* implicit */long long int) (!(((/* implicit */_Bool) var_9))))), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0]))) : (var_3)))))));
                var_10 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_2 [i_0])) ? ((+(var_5))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned char) var_7))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 13715205062377676795ULL))))) : (((/* implicit */int) ((arr_1 [i_0] [i_1]) > (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_0])))))))))));
                /* LoopSeq 1 */
                for (unsigned short i_2 = 2; i_2 < 14; i_2 += 4) 
                {
                    var_11 = ((/* implicit */long long int) min((var_11), (arr_1 [10] [i_1 - 1])));
                    var_12 = ((/* implicit */signed char) max((var_12), (arr_2 [i_0])));
                    var_13 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0] [i_0])))))))), ((~(max((0ULL), (13066129478835185940ULL)))))));
                    var_14 += ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_4))));
                }
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned int) max(((-(max((18446744073709551597ULL), (((/* implicit */unsigned long long int) 2580320576492414599LL)))))), (var_5)));
    var_16 += ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_7))));
}
