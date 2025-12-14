/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48443
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48443 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48443
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
    for (int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 12; i_1 += 3) 
        {
            {
                var_13 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */short) var_11)), ((short)-9098))))) * ((-(arr_2 [i_0])))));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 1) 
                {
                    for (unsigned char i_3 = 1; i_3 < 11; i_3 += 3) 
                    {
                        {
                            var_14 *= ((/* implicit */unsigned short) (unsigned char)67);
                            var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (arr_7 [i_1 + 1] [i_3 + 1])))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) ((_Bool) var_8)))));
                        }
                    } 
                } 
                arr_11 [i_0] [i_1] = ((/* implicit */short) var_7);
                var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) ((((/* implicit */_Bool) 2140201448U)) ? (10350445422009026281ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)118))))))));
                arr_12 [i_0] [i_1] [i_1] = ((/* implicit */unsigned char) (~(((/* implicit */int) min(((unsigned short)18153), (((/* implicit */unsigned short) ((_Bool) (signed char)-97))))))));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((((/* implicit */int) (!(((/* implicit */_Bool) 3910173581U))))), (((int) 536870911)))))));
}
