/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223167
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223167 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223167
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
    var_17 = ((/* implicit */signed char) min((16602369425469577016ULL), (((/* implicit */unsigned long long int) (_Bool)1))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 3; i_0 < 22; i_0 += 2) 
    {
        for (short i_1 = 2; i_1 < 21; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 23; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 23; i_3 += 4) 
                    {
                        for (short i_4 = 3; i_4 < 21; i_4 += 4) 
                        {
                            {
                                var_18 |= ((/* implicit */long long int) (-(((/* implicit */int) (short)0))));
                                arr_14 [i_0 + 1] [i_1] [i_2] [i_0 + 1] [i_4] = ((/* implicit */_Bool) arr_3 [i_2]);
                                var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */short) (signed char)-94)), (arr_10 [(_Bool)1] [i_3] [i_1 - 2] [i_0 - 2])))) ? ((+(((/* implicit */int) (short)10)))) : ((+(((/* implicit */int) arr_4 [i_0]))))))) ? (min((((/* implicit */int) min((arr_5 [i_0] [i_3] [i_4]), (arr_1 [i_0 - 1])))), (max((((/* implicit */int) arr_5 [(signed char)8] [21ULL] [3LL])), (arr_0 [i_2]))))) : (((/* implicit */int) ((short) min((((/* implicit */unsigned char) (signed char)12)), (arr_8 [i_0] [i_0] [i_3] [i_4]))))))))));
                                var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) min((((/* implicit */signed char) (_Bool)1)), ((signed char)-77))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_0 - 1] [i_1 - 1] [i_2] [i_4 - 2]))) : (((unsigned long long int) (signed char)-81))));
                            }
                        } 
                    } 
                    arr_15 [i_0] [i_1] [i_1 - 2] [i_2] = ((/* implicit */short) (!(((/* implicit */_Bool) max((((/* implicit */short) ((unsigned char) arr_4 [i_0]))), (arr_6 [i_0] [i_1 + 1] [i_0]))))));
                    arr_16 [i_2] [i_2] = ((/* implicit */unsigned long long int) arr_4 [i_1]);
                    arr_17 [i_2] [i_1] [i_1 + 2] [i_0 - 2] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((_Bool) arr_6 [i_0 - 3] [(_Bool)1] [i_2])))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */signed char) min((((/* implicit */short) ((unsigned char) (_Bool)1))), (var_11)));
}
