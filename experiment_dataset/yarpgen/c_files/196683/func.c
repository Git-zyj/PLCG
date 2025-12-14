/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196683
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196683 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196683
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
    var_20 = ((108219762607551532ULL) >> (((/* implicit */int) (unsigned short)5)));
    var_21 = ((/* implicit */long long int) var_0);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 1; i_2 < 10; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            arr_14 [i_3] [i_3] [i_3] [i_0] = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((unsigned int) -4460572717961740445LL))), (max((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_6))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) + (var_16)))))));
                            arr_15 [i_3] [i_3] = ((/* implicit */unsigned short) min((((/* implicit */long long int) (~(((/* implicit */int) min((arr_8 [i_3] [i_2 + 2] [i_1] [i_0]), (var_18))))))), (((((/* implicit */_Bool) max((var_1), (((/* implicit */unsigned short) arr_9 [i_0]))))) ? ((~(4460572717961740451LL))) : (((/* implicit */long long int) arr_13 [(unsigned char)8] [i_2 + 1] [i_2 - 1] [i_2 + 1] [(unsigned char)8] [i_0]))))));
                            var_22 = var_14;
                            arr_16 [i_1] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_16)) ? (((unsigned long long int) ((((/* implicit */_Bool) (unsigned short)63417)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_4))))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) min((var_0), (var_1)))))))));
                            arr_17 [i_3] [i_3] = ((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) (-(var_13)))))))));
                        }
                    } 
                } 
                var_23 = ((/* implicit */unsigned int) ((var_10) - (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_0 [i_0])) < (((/* implicit */int) arr_5 [i_0]))))))));
                var_24 = ((/* implicit */_Bool) min((var_24), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) ((((/* implicit */int) var_8)) < (((/* implicit */int) arr_1 [i_0]))))) : (((/* implicit */int) ((unsigned char) var_13)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_1] [i_0])))))) : (((((/* implicit */_Bool) ((unsigned short) arr_5 [i_0]))) ? (((var_19) ? (((/* implicit */unsigned long long int) 4460572717961740445LL)) : (var_13))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_5 [i_0]))))))))))));
            }
        } 
    } 
    var_25 = ((/* implicit */signed char) min(((+(1048574ULL))), (((var_14) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))));
}
