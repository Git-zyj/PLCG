/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37031
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37031 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37031
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
    var_11 = ((/* implicit */signed char) ((((((((/* implicit */int) (signed char)-56)) + (2147483647))) >> (((((/* implicit */int) var_5)) - (89))))) == ((-(((/* implicit */int) var_2))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            {
                var_12 = ((/* implicit */unsigned int) ((((/* implicit */int) var_4)) / (((((/* implicit */_Bool) min((((/* implicit */long long int) arr_1 [i_1])), (arr_4 [i_0] [i_1] [1ULL])))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) ((arr_0 [i_1] [(signed char)7]) == (((/* implicit */int) var_2)))))))));
                arr_5 [(_Bool)1] [i_0] [i_1] = ((/* implicit */unsigned int) var_8);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 12; i_2 += 3) 
                {
                    for (unsigned long long int i_3 = 3; i_3 < 11; i_3 += 2) 
                    {
                        {
                            arr_12 [i_3] [10] [i_3] [10] &= ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_0 [(unsigned char)7] [i_1])), (((((/* implicit */unsigned int) ((/* implicit */int) var_4))) + (1979977946U)))))) || (((((/* implicit */_Bool) (+(var_10)))) && (((/* implicit */_Bool) var_2))))));
                            var_13 = ((/* implicit */short) var_8);
                            arr_13 [i_0] [i_0] [i_3] [i_3] [i_0] [(_Bool)1] = ((/* implicit */unsigned short) 2314989349U);
                        }
                    } 
                } 
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) var_1)))) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) var_9)))))))))));
}
