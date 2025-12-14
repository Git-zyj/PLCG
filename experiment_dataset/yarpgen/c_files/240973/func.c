/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240973
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240973 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240973
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
    for (signed char i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (long long int i_2 = 0; i_2 < 12; i_2 += 3) 
                {
                    var_15 = ((/* implicit */short) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-112)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-113))) : (32768U)))) : (min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_2] [i_1] [i_2])) ? (4294967286U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-69)))))), (((long long int) (signed char)-1))))));
                    var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) arr_3 [2ULL] [i_1] [i_2]))));
                }
                arr_7 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(arr_5 [i_1] [i_1] [i_1])))) ? (max((((/* implicit */unsigned long long int) (+(arr_2 [i_0])))), ((~(2216106738830973045ULL))))) : (((/* implicit */unsigned long long int) max((arr_0 [i_0]), (((/* implicit */long long int) var_10)))))));
                /* LoopNest 2 */
                for (short i_3 = 0; i_3 < 12; i_3 += 4) 
                {
                    for (unsigned int i_4 = 0; i_4 < 12; i_4 += 2) 
                    {
                        {
                            var_17 = ((/* implicit */short) ((((/* implicit */_Bool) ((14578862861154524097ULL) ^ (((/* implicit */unsigned long long int) arr_0 [i_0]))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) >= (4294967271U))))))) : (((4294967269U) | (10U)))));
                            var_18 |= ((/* implicit */signed char) arr_2 [i_0]);
                            var_19 = ((/* implicit */short) ((signed char) arr_1 [i_0]));
                            var_20 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) 10U)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_9 [i_1] [i_1] [i_1] [i_4])) ? (((/* implicit */int) ((short) var_0))) : (((((/* implicit */int) var_13)) % (((/* implicit */int) (short)-10))))))) : (arr_5 [(short)5] [i_1] [i_0])));
                        }
                    } 
                } 
            }
        } 
    } 
    var_21 = ((/* implicit */short) var_14);
    var_22 = ((/* implicit */short) (+(((/* implicit */int) var_6))));
}
