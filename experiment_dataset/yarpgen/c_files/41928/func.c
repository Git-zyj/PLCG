/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41928
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41928 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41928
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
    for (short i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            {
                arr_4 [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1))))) ? ((-(((/* implicit */int) arr_2 [i_0] [i_1] [i_1])))) : (((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (((/* implicit */int) (short)-32764)) : (((/* implicit */int) var_1)))))))));
                /* LoopNest 3 */
                for (long long int i_2 = 0; i_2 < 21; i_2 += 1) 
                {
                    for (long long int i_3 = 4; i_3 < 19; i_3 += 4) 
                    {
                        for (short i_4 = 0; i_4 < 21; i_4 += 1) 
                        {
                            {
                                var_18 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)4953)) ? (arr_0 [i_3] [i_3 - 3]) : (min((((((/* implicit */_Bool) (short)-31655)) ? (((/* implicit */long long int) ((/* implicit */int) arr_12 [9LL] [9LL] [i_2] [9LL] [i_4]))) : (arr_0 [i_1] [i_2]))), (((/* implicit */long long int) 4227858432U))))));
                                arr_13 [i_0] [i_1] [i_2] [i_0] [i_3] [i_4] [i_4] = ((/* implicit */signed char) (_Bool)1);
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_5 = 0; i_5 < 21; i_5 += 2) 
                {
                    for (unsigned short i_6 = 4; i_6 < 17; i_6 += 4) 
                    {
                        {
                            var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) (!(((/* implicit */_Bool) arr_2 [i_6] [i_1] [i_5])))))));
                            arr_21 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) max((((/* implicit */int) (!((!(((/* implicit */_Bool) (short)-32765))))))), ((-(((/* implicit */int) ((67108847U) <= (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))))));
                            var_20 = ((/* implicit */signed char) var_10);
                        }
                    } 
                } 
            }
        } 
    } 
    var_21 = ((/* implicit */short) (!((!(((/* implicit */_Bool) var_3))))));
}
