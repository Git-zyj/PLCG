/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213388
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213388 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213388
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
    for (signed char i_0 = 4; i_0 < 21; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            {
                var_14 = ((/* implicit */signed char) max((var_14), (((/* implicit */signed char) min((8465016550793307845ULL), (((/* implicit */unsigned long long int) min((1139543626), (188231436)))))))));
                var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) min((((/* implicit */signed char) (_Bool)1)), (((signed char) var_10)))))));
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 22; i_2 += 3) 
                {
                    for (unsigned char i_3 = 0; i_3 < 22; i_3 += 2) 
                    {
                        {
                            var_16 = ((/* implicit */unsigned long long int) (unsigned char)16);
                            /* LoopSeq 1 */
                            for (unsigned long long int i_4 = 0; i_4 < 22; i_4 += 3) 
                            {
                                var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)-1)) > ((((_Bool)1) ? (1139543626) : (((((/* implicit */_Bool) (unsigned char)3)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (unsigned char)255))))))));
                                var_18 = ((/* implicit */unsigned long long int) min((var_0), (((/* implicit */int) ((short) (_Bool)1)))));
                            }
                            var_19 = ((/* implicit */unsigned long long int) (+((((+(1139543610))) >> (((min((-1139543610), (((/* implicit */int) (unsigned char)255)))) + (1139543621)))))));
                            arr_12 [i_0 - 3] [i_1] [i_2] [i_3] = ((/* implicit */_Bool) min((((/* implicit */unsigned int) max((((/* implicit */int) (_Bool)1)), (min((575454971), (1023)))))), (((var_12) << (((((((/* implicit */_Bool) (short)2047)) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) var_9))))) + (4076060795003962177LL)))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned short) var_11);
}
