/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46239
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46239 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46239
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
    for (unsigned long long int i_0 = 1; i_0 < 22; i_0 += 3) 
    {
        for (short i_1 = 4; i_1 < 20; i_1 += 3) 
        {
            {
                arr_4 [i_0 - 1] [i_0] [i_0] = var_10;
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 23; i_2 += 3) 
                {
                    for (signed char i_3 = 0; i_3 < 23; i_3 += 2) 
                    {
                        {
                            arr_10 [i_0 - 1] [i_1] [i_3] |= ((/* implicit */signed char) ((min((arr_5 [i_0 + 1] [i_0 - 1] [i_1 + 3]), (((/* implicit */long long int) ((short) 16153957405169182209ULL))))) + (((/* implicit */long long int) min(((-(((/* implicit */int) var_11)))), (((/* implicit */int) (_Bool)1)))))));
                            arr_11 [i_3] [i_2] [i_1 + 3] [i_0 - 1] = ((/* implicit */short) max((((/* implicit */unsigned char) (!(var_12)))), (var_5)));
                            arr_12 [i_0] [i_1] [i_2] = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) arr_8 [i_0 - 1])) ? (arr_5 [i_0 - 1] [i_1 - 2] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0 - 1] [i_0 - 1] [i_3]))))), (((/* implicit */long long int) max(((~(((/* implicit */int) var_12)))), (((/* implicit */int) ((short) arr_7 [i_0] [i_1] [i_2] [i_3]))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)0))))) ? (((((/* implicit */int) (!(((/* implicit */_Bool) var_6))))) & (((/* implicit */int) ((unsigned short) var_18))))) : (((/* implicit */int) (!(((_Bool) var_10)))))));
    var_20 = ((/* implicit */unsigned long long int) var_11);
    var_21 &= ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) min((var_9), (((/* implicit */short) (_Bool)1)))))))) - (((/* implicit */int) (!((!(((/* implicit */_Bool) var_4)))))))));
}
