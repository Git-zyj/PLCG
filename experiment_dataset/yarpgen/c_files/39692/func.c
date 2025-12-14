/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39692
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39692 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39692
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
    var_18 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_6))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)79)) ? (((/* implicit */int) (unsigned char)79)) : (((/* implicit */int) (unsigned short)36674)))))))) >> (((2508719483U) * (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0))) >= (var_4)))))))));
    var_19 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (823389595) : (((/* implicit */int) (unsigned char)87))))) || (((/* implicit */_Bool) var_16)))))) - (min((((((/* implicit */long long int) var_4)) % (var_5))), (((/* implicit */long long int) (~(((/* implicit */int) (short)25472)))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 22; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            {
                var_20 = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_0 - 1])) && (((/* implicit */_Bool) var_4))))) ^ (((/* implicit */int) ((((/* implicit */int) arr_6 [i_0 + 1] [i_0 + 1] [i_0 - 1])) < (((/* implicit */int) var_13)))))));
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 23; i_2 += 1) 
                {
                    for (signed char i_3 = 2; i_3 < 20; i_3 += 3) 
                    {
                        {
                            var_21 = ((/* implicit */unsigned short) ((((unsigned long long int) var_2)) * (((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_6 [i_0] [i_2] [i_3 - 1])) / (((/* implicit */int) arr_4 [i_0]))))) * (((17575006175232ULL) * (((/* implicit */unsigned long long int) arr_9 [i_0 + 1]))))))));
                            var_22 -= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((arr_10 [14LL]) & (((/* implicit */long long int) -351079228)))) & (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_1 [i_3 + 2])) == (((/* implicit */int) arr_4 [i_0]))))))))) ? (((/* implicit */int) max(((unsigned short)7245), (((/* implicit */unsigned short) ((signed char) (signed char)-110)))))) : (((((((/* implicit */int) (short)-25473)) ^ (((/* implicit */int) (signed char)-13)))) >> (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (short)31244))) >= (-6003237363201805995LL))))))));
                            var_23 = ((/* implicit */long long int) (~(((((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_7 [(unsigned char)0] [i_1] [i_1]), (((/* implicit */unsigned char) var_17)))))) % (var_12)))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_24 = ((/* implicit */short) var_16);
    var_25 = ((((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */int) (signed char)-109)) < (((/* implicit */int) (unsigned char)148)))))))) ? ((~(var_15))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((var_5), (((/* implicit */long long int) 549513262))))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) ((((/* implicit */int) var_10)) >= (((/* implicit */int) var_16)))))))));
}
