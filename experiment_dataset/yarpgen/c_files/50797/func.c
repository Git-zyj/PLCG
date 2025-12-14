/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50797
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50797 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50797
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
    var_19 ^= ((/* implicit */int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) var_17)) : (min((max((-8553668829646158100LL), (719624655217634493LL))), (((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned short)4412)))))))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_20 = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_4 [i_1 + 1])), (arr_0 [i_1 + 1])))) ? (((((/* implicit */_Bool) max((var_12), (((/* implicit */unsigned short) arr_3 [i_1]))))) ? (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)17359)) + (((/* implicit */int) (_Bool)1))))) : (((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1]))) + (-9152860173638697088LL))))) : (((/* implicit */long long int) ((/* implicit */int) ((short) max((arr_0 [i_0]), (((/* implicit */unsigned int) -907084272)))))))));
                    var_21 = ((((/* implicit */_Bool) arr_0 [i_1 + 1])) ? (min((arr_0 [i_1 + 1]), (((/* implicit */unsigned int) (unsigned char)1)))) : (max((arr_0 [i_1 + 1]), (arr_0 [i_1 + 1]))));
                    var_22 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)4411)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) max(((unsigned short)4411), ((unsigned short)65535)))) ? (-907084254) : (((/* implicit */int) (unsigned short)4393))))) : (min((((/* implicit */long long int) arr_5 [i_0] [i_0] [i_2] [i_2])), (arr_2 [i_0] [i_2])))));
                    var_23 = ((/* implicit */unsigned long long int) ((var_0) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) arr_5 [i_0] [i_0] [i_1] [i_1 + 1])) != (arr_1 [i_1 + 1] [i_1]))))) : (arr_2 [(unsigned short)4] [i_2])));
                    arr_6 [i_1] = ((/* implicit */unsigned short) ((var_13) * (((var_17) / (var_13)))));
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */int) max((((short) max((var_17), (((/* implicit */int) (unsigned short)61123))))), (((/* implicit */short) var_11))));
    /* LoopNest 2 */
    for (short i_3 = 0; i_3 < 25; i_3 += 3) 
    {
        for (short i_4 = 1; i_4 < 24; i_4 += 3) 
        {
            {
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 25; i_5 += 3) 
                {
                    for (unsigned long long int i_6 = 0; i_6 < 25; i_6 += 2) 
                    {
                        {
                            var_25 = ((/* implicit */short) 907084289);
                            var_26 -= ((/* implicit */unsigned long long int) 730630821);
                            var_27 = arr_22 [i_6];
                            var_28 = ((/* implicit */int) ((unsigned int) ((var_6) ? (max((var_3), (((/* implicit */unsigned int) var_4)))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)4409))))));
                        }
                    } 
                } 
                var_29 = ((/* implicit */signed char) (+(((/* implicit */int) (signed char)(-127 - 1)))));
            }
        } 
    } 
}
