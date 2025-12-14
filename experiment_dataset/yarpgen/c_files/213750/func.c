/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213750
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213750 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213750
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
    for (short i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            {
                var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) min((((/* implicit */unsigned int) (+(min((var_15), (((/* implicit */int) var_1))))))), (max((((/* implicit */unsigned int) var_9)), (4294967295U))))))));
                arr_5 [i_0] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)1)) ? (-3712725433378530380LL) : (((/* implicit */long long int) (-(((/* implicit */int) (short)6261)))))));
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 20; i_2 += 3) 
                {
                    for (int i_3 = 0; i_3 < 20; i_3 += 2) 
                    {
                        {
                            arr_11 [i_0] [i_1] |= ((/* implicit */unsigned short) 28U);
                            var_21 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_9 [i_0] [i_1] [i_2] [i_3])) <= (((/* implicit */int) ((unsigned short) max((4294967274U), (4294967283U)))))));
                            var_22 = ((/* implicit */int) (+(min((((/* implicit */unsigned int) min((var_14), (((/* implicit */short) arr_6 [i_3] [i_2] [i_0] [i_0]))))), (max((((/* implicit */unsigned int) var_9)), (4294967295U)))))));
                            var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) max((max((((long long int) (unsigned short)55388)), (((/* implicit */long long int) ((((/* implicit */int) var_0)) + (2147483647)))))), (((/* implicit */long long int) arr_9 [i_0] [i_1] [i_2] [(_Bool)1])))))));
                            arr_12 [3] [i_2] [i_2] [i_0] = (-(2518961723U));
                        }
                    } 
                } 
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(0ULL)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 2147483629))))) : (((/* implicit */int) ((((/* implicit */_Bool) 4294967278U)) && (((/* implicit */_Bool) var_11)))))))) ? (((((/* implicit */int) var_5)) + (min((((/* implicit */int) (unsigned short)44976)), (794969622))))) : ((~((-(((/* implicit */int) (short)16256)))))))))));
}
