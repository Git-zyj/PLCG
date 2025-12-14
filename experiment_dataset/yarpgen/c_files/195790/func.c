/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195790
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195790 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195790
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
    var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)75)) ? (((((/* implicit */_Bool) ((unsigned long long int) (unsigned char)67))) ? (267386880) : (((((/* implicit */_Bool) -1913608043938294486LL)) ? (((/* implicit */int) (unsigned char)188)) : (((/* implicit */int) (unsigned char)6)))))) : (((/* implicit */int) (unsigned short)605))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 1; i_0 < 9; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                {
                    var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) ((((((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))) : (var_5))) < (((/* implicit */unsigned long long int) arr_4 [(unsigned char)10] [i_2])))) ? (min((12740550403194951545ULL), (((/* implicit */unsigned long long int) (unsigned char)84)))) : (var_9))))));
                    arr_9 [i_0] [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)0))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((1430329329397797281ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0 - 1]))))))) : ((+(((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) & (var_5)))))));
                    var_17 = ((/* implicit */int) max((var_17), (arr_5 [i_0])));
                }
            } 
        } 
    } 
}
