/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29873
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29873 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29873
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
    var_10 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned long long int) max((((/* implicit */short) (signed char)74)), ((short)-26213))))) && (((/* implicit */_Bool) ((unsigned long long int) ((unsigned long long int) var_3))))));
    var_11 = (((!(((/* implicit */_Bool) (signed char)-1)))) ? (max((var_8), (((/* implicit */unsigned long long int) var_0)))) : (((((/* implicit */_Bool) 4494938765170402570ULL)) ? (((13951805308539149045ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (short)8149))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 18328883487409481984ULL)))))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 1; i_0 < 13; i_0 += 2) 
    {
        for (signed char i_1 = 2; i_1 < 15; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 12; i_2 += 3) 
            {
                {
                    var_12 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)-8149)))))) * (((((/* implicit */_Bool) (short)8149)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (var_9))))))));
                    var_13 = ((/* implicit */signed char) var_2);
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 16; i_3 += 4) 
                    {
                        for (short i_4 = 0; i_4 < 16; i_4 += 1) 
                        {
                            {
                                var_14 = max((((short) (short)-7284)), (((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) (short)-1)))))))));
                                arr_14 [i_0] [i_0] [i_2] [i_2] [i_1] = max(((((!(((/* implicit */_Bool) arr_6 [i_0 - 1] [i_0 - 1] [i_0 - 1])))) ? (((((/* implicit */_Bool) (short)8191)) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)4095))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))), (max((max((68719476735ULL), (((/* implicit */unsigned long long int) (signed char)-93)))), (((/* implicit */unsigned long long int) ((short) var_5))))));
                                arr_15 [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0 + 3])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_13 [i_0] [i_1 - 2] [i_0 - 1] [i_0 - 1] [i_4])))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */signed char) var_0);
}
