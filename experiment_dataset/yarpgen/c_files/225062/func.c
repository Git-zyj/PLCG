/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225062
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225062 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225062
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
    var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) ((unsigned long long int) min((((/* implicit */unsigned long long int) ((unsigned int) (unsigned short)27561))), (min((((/* implicit */unsigned long long int) var_0)), (15418818491283805065ULL)))))))));
    var_17 = ((/* implicit */unsigned short) (short)20945);
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 19; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 22; i_2 += 2) 
                {
                    for (unsigned long long int i_3 = 4; i_3 < 19; i_3 += 2) 
                    {
                        {
                            var_18 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) 14908360714831437575ULL)) ? (14908360714831437586ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                            var_19 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max(((short)-18), (((/* implicit */short) (unsigned char)94))))) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */int) var_4)) - (((/* implicit */int) (unsigned short)44443))))))) ? (-1538107662155247047LL) : (min((max((var_8), (arr_8 [i_3]))), (((/* implicit */long long int) ((arr_7 [i_3 - 3] [i_1]) | (((/* implicit */int) var_15)))))))));
                            var_20 &= arr_6 [(_Bool)1] [i_3];
                            arr_12 [i_0] [i_0 + 1] [i_1] [i_2] [9LL] [i_3] = ((/* implicit */int) max(((unsigned short)4), (((/* implicit */unsigned short) (short)20940))));
                        }
                    } 
                } 
                arr_13 [i_0] = ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (_Bool)1)), (2179183295U)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)160)) > (min((arr_7 [i_0 + 2] [i_1]), (((/* implicit */int) (short)25281)))))))) : (max((arr_3 [i_0]), (arr_9 [i_0] [i_0] [i_0 + 2] [i_0 + 3] [i_0] [i_0]))));
                arr_14 [i_0] [i_1] [i_1] &= ((/* implicit */short) (((+(((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-20940))) - (5446962255400196493ULL))))) < (((/* implicit */unsigned long long int) ((/* implicit */int) (((~(arr_0 [i_0]))) <= (max((((/* implicit */unsigned long long int) (unsigned short)22941)), (arr_6 [i_0 + 3] [i_1])))))))));
            }
        } 
    } 
    var_21 -= ((((((/* implicit */_Bool) 14908360714831437572ULL)) || (((/* implicit */_Bool) 9435645918175315222ULL)))) ? (min((min((var_5), (((/* implicit */unsigned long long int) (unsigned short)44147)))), (((/* implicit */unsigned long long int) ((unsigned int) (unsigned short)0))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) var_13)), ((unsigned short)28704))))));
}
