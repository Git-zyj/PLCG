/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229642
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229642 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229642
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
    var_16 = ((/* implicit */short) var_11);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 2; i_1 < 9; i_1 += 1) 
        {
            {
                var_17 &= ((/* implicit */short) ((((/* implicit */_Bool) (+(((((/* implicit */unsigned int) ((/* implicit */int) var_0))) ^ (arr_0 [i_1])))))) ? ((~(((/* implicit */int) max((arr_2 [i_1]), (arr_2 [i_0])))))) : (((((/* implicit */_Bool) (signed char)99)) ? (((/* implicit */int) (signed char)-83)) : (((/* implicit */int) (short)16382))))));
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */int) (+((~(arr_0 [i_1 + 3])))));
                /* LoopNest 2 */
                for (signed char i_2 = 1; i_2 < 11; i_2 += 4) 
                {
                    for (signed char i_3 = 0; i_3 < 12; i_3 += 4) 
                    {
                        {
                            var_18 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_2 [i_1 + 2])) / (((((/* implicit */_Bool) min((2281750384966293544LL), (((/* implicit */long long int) (_Bool)1))))) ? ((~(arr_9 [i_3]))) : (((/* implicit */int) arr_2 [i_1 + 2]))))));
                            var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_12 [i_3] [i_2 - 1] [i_2 - 1] [i_1 + 2] [i_1 + 3] [i_1 + 1]))))) ? (((/* implicit */unsigned int) min((((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_2] [i_3])) ? (((/* implicit */int) arr_10 [i_3] [i_1 - 1] [i_2] [i_3] [i_0])) : (((/* implicit */int) arr_8 [i_0] [i_1 + 2] [i_2] [i_2])))), (((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_3]))))) : (arr_0 [i_2])));
                            arr_14 [i_2] = ((/* implicit */unsigned long long int) arr_12 [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2 + 1] [i_2 - 1]);
                            arr_15 [i_0] [i_1] [i_2 - 1] [i_3] = ((/* implicit */unsigned int) ((((((/* implicit */int) arr_10 [i_2 - 1] [i_1 + 2] [i_1 - 1] [i_1 - 2] [i_1 + 1])) * ((~(((/* implicit */int) var_4)))))) - (((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_3 [i_2] [i_3])) : ((-(((/* implicit */int) (_Bool)1))))))));
                        }
                    } 
                } 
                arr_16 [i_0] = ((/* implicit */signed char) ((int) arr_2 [i_1 - 1]));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((short) ((6193046758313849765LL) - (((/* implicit */long long int) 1179829301)))))) ? (7675454376280293497ULL) : (((/* implicit */unsigned long long int) max((((/* implicit */long long int) (signed char)-38)), (3540038991240996605LL))))));
}
