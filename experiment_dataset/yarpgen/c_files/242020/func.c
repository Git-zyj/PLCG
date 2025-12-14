/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242020
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242020 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242020
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
    for (unsigned int i_0 = 1; i_0 < 15; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 16; i_2 += 4) 
                {
                    for (long long int i_3 = 1; i_3 < 15; i_3 += 1) 
                    {
                        {
                            arr_9 [i_1] [i_2] [i_0] [i_1] = ((/* implicit */signed char) (_Bool)1);
                            var_13 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)-1))))) ? ((((_Bool)1) ? (-9223372036854775790LL) : (arr_0 [i_0 + 1]))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_4 [i_2] [i_0 + 1])) != (((/* implicit */int) (unsigned char)96))))))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (short i_4 = 0; i_4 < 16; i_4 += 4) 
                {
                    var_14 = ((/* implicit */unsigned char) min((var_14), (arr_2 [i_0] [i_4])));
                    var_15 = ((/* implicit */_Bool) max((((/* implicit */int) arr_5 [i_0 + 1] [i_1] [i_1])), (((((/* implicit */_Bool) ((((/* implicit */int) (signed char)48)) | (((/* implicit */int) (short)32756))))) ? ((~(((/* implicit */int) (short)6369)))) : (((/* implicit */int) var_6))))));
                }
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_5 = 0; i_5 < 18; i_5 += 3) 
    {
        for (long long int i_6 = 4; i_6 < 16; i_6 += 4) 
        {
            {
                var_16 = ((/* implicit */int) (~(arr_12 [i_5])));
                var_17 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) (short)-32752)) : (((((/* implicit */int) (_Bool)1)) ^ ((-2147483647 - 1))))))) ? ((~(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) var_2))));
                var_18 = max((((/* implicit */short) (signed char)122)), ((short)-26007));
            }
        } 
    } 
}
