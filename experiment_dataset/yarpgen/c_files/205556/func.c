/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205556
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205556 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205556
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
    for (unsigned char i_0 = 2; i_0 < 15; i_0 += 4) 
    {
        for (int i_1 = 2; i_1 < 14; i_1 += 1) 
        {
            {
                var_11 = ((/* implicit */unsigned short) arr_2 [(_Bool)1]);
                var_12 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) min((arr_3 [i_0 - 2] [i_1]), (((/* implicit */signed char) arr_5 [0ULL] [i_1 + 2] [i_1]))))), (((((/* implicit */_Bool) arr_3 [i_0 + 1] [i_1 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_1 [i_1 - 1])))));
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned short i_3 = 2; i_3 < 14; i_3 += 3) 
                    {
                        {
                            arr_11 [i_3] [i_3 + 1] [i_3] [i_3] = ((-1290906477) > (((/* implicit */int) (unsigned char)3)));
                            arr_12 [(signed char)9] [i_2] [i_2] [i_3] = ((/* implicit */signed char) var_3);
                            arr_13 [(signed char)11] [(signed char)11] [i_0] = max((max((arr_0 [i_2]), (((/* implicit */unsigned long long int) arr_10 [11U] [i_1] [i_1] [i_1 + 1] [i_1])))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */int) (signed char)-95)) : (((/* implicit */int) var_5))))));
                            var_13 = ((/* implicit */unsigned long long int) arr_4 [2ULL] [1]);
                            var_14 -= ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (-(-723837372)))))))) % (max((((/* implicit */unsigned int) arr_3 [i_3 + 1] [i_1 + 1])), (((var_7) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [12ULL] [(signed char)2]))) : (arr_2 [i_0 - 1]))))));
                        }
                    } 
                } 
                arr_14 [i_1 - 1] [i_1] = max((((/* implicit */unsigned long long int) max((((/* implicit */unsigned char) (_Bool)0)), (var_4)))), (min((arr_1 [i_0 + 1]), (((/* implicit */unsigned long long int) -4)))));
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) ((var_3) > (((/* implicit */unsigned int) var_6))))) : (((/* implicit */int) var_5))));
    var_16 = ((/* implicit */_Bool) max((var_1), (((/* implicit */unsigned int) var_9))));
    var_17 = ((/* implicit */unsigned char) ((unsigned long long int) var_1));
}
