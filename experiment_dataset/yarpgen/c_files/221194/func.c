/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221194
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221194 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221194
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
    var_12 = ((/* implicit */int) ((unsigned char) (unsigned char)2));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            {
                arr_4 [i_1] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((1125899906842496ULL), (((/* implicit */unsigned long long int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_0] [i_0]))) : (arr_0 [i_0] [i_1])))) ? (((/* implicit */int) arr_2 [i_0] [i_0] [(signed char)24])) : (((/* implicit */int) (unsigned short)49538))));
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 25; i_2 += 4) 
                {
                    for (unsigned int i_3 = 0; i_3 < 25; i_3 += 3) 
                    {
                        {
                            var_13 = ((/* implicit */short) ((((arr_1 [i_0]) / (((/* implicit */int) var_6)))) * (((/* implicit */int) arr_3 [i_2] [i_2] [i_2]))));
                            var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_2] [i_0] [i_0])) || (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) max((-3297286217839114815LL), (((/* implicit */long long int) arr_2 [i_3] [i_3] [i_2]))))), (((((/* implicit */_Bool) arr_2 [i_2] [i_1] [i_2])) ? (arr_0 [i_0] [i_2]) : (2128449868917941028ULL)))))))))));
                            var_15 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_7 [i_0] [i_0])) * (((/* implicit */int) arr_7 [(unsigned short)3] [i_3])))))));
                            var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) (_Bool)0))));
                            var_17 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned char)192)) : (((/* implicit */int) (unsigned char)92))))) ? (1417873883) : (((/* implicit */int) arr_2 [i_3] [i_0] [i_0])))) | (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_6)) * (((/* implicit */int) var_8))))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_18 = ((((/* implicit */int) var_8)) >> (((((max((((/* implicit */unsigned long long int) var_4)), (var_5))) * (((/* implicit */unsigned long long int) var_9)))) - (17528212909169283786ULL))));
}
