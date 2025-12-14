/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25459
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25459 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25459
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
    for (long long int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            {
                arr_5 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1])) ? ((+(arr_3 [i_1]))) : (((/* implicit */int) (!(((/* implicit */_Bool) 268369920)))))));
                arr_6 [16LL] = ((/* implicit */signed char) var_3);
                /* LoopNest 3 */
                for (unsigned short i_2 = 1; i_2 < 17; i_2 += 2) 
                {
                    for (unsigned short i_3 = 1; i_3 < 19; i_3 += 2) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 21; i_4 += 4) 
                        {
                            {
                                var_15 *= ((/* implicit */signed char) ((((/* implicit */_Bool) -778740109)) || (((/* implicit */_Bool) min((-268369899), (((/* implicit */int) (short)-6130)))))));
                                var_16 = ((/* implicit */int) min((((((/* implicit */unsigned int) ((int) 268369899))) & (max((var_14), (((/* implicit */unsigned int) arr_0 [i_1])))))), (max((((/* implicit */unsigned int) min((arr_10 [i_2 + 3]), (((/* implicit */int) var_5))))), (((((/* implicit */unsigned int) ((/* implicit */int) var_13))) | (arr_7 [i_2])))))));
                                var_17 &= ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 46957099)) ? (((/* implicit */int) arr_9 [i_1] [(_Bool)1] [(short)13])) : (268369920)))) ? (arr_3 [i_0]) : (((/* implicit */int) (!(((/* implicit */_Bool) 7333946086666037138LL))))))) | (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) == (arr_10 [i_3]))))));
                                var_18 = ((/* implicit */short) (~(min((min((((/* implicit */int) var_5)), (var_0))), (var_0)))));
                                var_19 += ((/* implicit */unsigned int) min((var_7), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_8)))) >= (var_10))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_6)) ? (268369899) : (max((((/* implicit */int) ((signed char) var_2))), (min((-766590359), (((/* implicit */int) (unsigned char)31))))))));
}
