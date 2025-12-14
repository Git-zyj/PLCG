/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226160
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226160 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226160
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
    for (unsigned char i_0 = 3; i_0 < 21; i_0 += 4) 
    {
        for (long long int i_1 = 2; i_1 < 21; i_1 += 4) 
        {
            {
                arr_4 [i_0] = ((/* implicit */short) (+(max((((/* implicit */unsigned long long int) arr_3 [i_0] [i_0])), (((((/* implicit */_Bool) (unsigned short)12577)) ? (((/* implicit */unsigned long long int) 9223372036854775807LL)) : (2414271126563150110ULL)))))));
                var_16 = ((/* implicit */short) ((unsigned long long int) ((((/* implicit */_Bool) 28ULL)) ? (((/* implicit */int) max((((/* implicit */unsigned short) arr_1 [i_0] [(short)1])), ((unsigned short)62097)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_8))))))));
                arr_5 [i_0] [i_1 + 1] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)190))) >= (var_3))))) | (var_1)));
                var_17 = ((/* implicit */signed char) var_13);
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 4) 
                {
                    for (unsigned int i_3 = 1; i_3 < 20; i_3 += 4) 
                    {
                        {
                            var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)63)))))));
                            arr_12 [i_0] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(4294967290U)))) ? (((/* implicit */long long int) arr_8 [i_0] [i_0] [i_1 - 1] [(unsigned short)7] [i_3])) : (min((((/* implicit */long long int) (+(((/* implicit */int) (signed char)-125))))), ((~(var_8)))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((var_10) | (((/* implicit */long long int) -2068762988))))))) ? (var_1) : (((/* implicit */unsigned long long int) 4967318601807021039LL))));
    var_20 = ((/* implicit */short) (-((((~(var_4))) | (((((/* implicit */_Bool) 16066912825542147595ULL)) ? (var_2) : (var_7)))))));
}
