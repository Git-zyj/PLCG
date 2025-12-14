/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23409
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23409 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23409
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
    var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_13)) ? (((((/* implicit */_Bool) var_8)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_16)) != (((/* implicit */int) var_11)))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((max((var_9), (((/* implicit */unsigned int) var_17)))) == (((/* implicit */unsigned int) ((((/* implicit */int) var_15)) - (((/* implicit */int) var_13)))))))))));
    var_19 = ((/* implicit */long long int) var_16);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 20; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_20 ^= ((/* implicit */signed char) (((_Bool)1) ? (((/* implicit */int) min(((signed char)113), (arr_0 [i_1])))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [(signed char)20])) ? (((/* implicit */int) arr_2 [12LL] [i_1])) : (((/* implicit */int) var_4))))) ? ((+(arr_4 [10ULL]))) : (((((/* implicit */_Bool) (signed char)-109)) ? (arr_4 [(_Bool)1]) : (((/* implicit */int) (signed char)-114))))))));
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned int i_3 = 0; i_3 < 22; i_3 += 1) 
                    {
                        {
                            var_21 = ((/* implicit */int) arr_8 [i_2]);
                            arr_10 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_0])) ? (((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_2] [i_3])) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_2]))) : (var_1))) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 - 1])))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (((+(((/* implicit */int) arr_0 [i_3])))) >= (((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_1]))))))))) : (((unsigned int) arr_1 [i_0 + 2]))));
                            var_22 = ((/* implicit */int) (~(min((((/* implicit */unsigned int) arr_2 [i_0] [i_0 - 1])), ((((_Bool)1) ? (16383U) : (((/* implicit */unsigned int) -1880138932))))))));
                        }
                    } 
                } 
                arr_11 [i_0] = ((/* implicit */int) arr_1 [i_0 + 2]);
            }
        } 
    } 
}
