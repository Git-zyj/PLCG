/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43773
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43773 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43773
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
    var_15 = ((/* implicit */_Bool) var_1);
    /* LoopNest 2 */
    for (long long int i_0 = 2; i_0 < 17; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            {
                var_16 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(127042003U)))) ? (((/* implicit */int) ((((/* implicit */_Bool) max((arr_2 [i_1] [i_1]), (((/* implicit */unsigned int) (unsigned char)0))))) || (((/* implicit */_Bool) arr_3 [i_0] [i_0]))))) : (((/* implicit */int) ((unsigned char) (unsigned short)26799)))));
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 18; i_2 += 3) 
                {
                    for (long long int i_3 = 0; i_3 < 18; i_3 += 1) 
                    {
                        {
                            arr_11 [i_0] [10LL] [i_1] [(unsigned char)14] = ((/* implicit */unsigned short) min(((+(min((var_8), (var_8))))), (((/* implicit */int) ((_Bool) var_8)))));
                            arr_12 [i_0] [i_1] [(unsigned char)9] [i_1] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0 - 2] [i_0 - 1]))));
                            var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) min((((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)26811)) | (((/* implicit */int) (unsigned char)51))))) : (4503599627370240LL))), (((/* implicit */long long int) arr_6 [i_0] [i_0] [i_3])))))));
                            var_18 *= var_5;
                        }
                    } 
                } 
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned char) min((var_9), (((((/* implicit */_Bool) min((var_14), (var_0)))) ? (min((((/* implicit */long long int) var_3)), (var_10))) : (((((/* implicit */_Bool) var_4)) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) var_11)))))))));
}
