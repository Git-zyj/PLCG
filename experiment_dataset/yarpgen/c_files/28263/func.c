/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28263
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28263 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28263
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
    var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-13975)) ? (2147483623) : (((/* implicit */int) (unsigned short)49914))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            {
                arr_4 [i_0] = ((/* implicit */int) ((long long int) min((arr_1 [i_0]), (arr_1 [i_0]))));
                arr_5 [i_0] [9] [i_0] = ((/* implicit */unsigned char) (short)30083);
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 15; i_2 += 2) 
                {
                    for (unsigned char i_3 = 4; i_3 < 13; i_3 += 1) 
                    {
                        {
                            arr_10 [i_1] [i_0] [i_0] [i_1] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), ((signed char)9))))) : (max((((/* implicit */long long int) 4193792)), (var_6))))) * (((0LL) % (((/* implicit */long long int) min((arr_0 [i_0]), (((/* implicit */unsigned int) var_1)))))))));
                            var_16 = ((/* implicit */short) min((min((var_2), (-4193792))), (((((((/* implicit */int) (_Bool)0)) > (((/* implicit */int) arr_6 [i_0] [i_1] [i_0] [i_1])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)49914))))) : (((/* implicit */int) (_Bool)0))))));
                            var_17 ^= ((/* implicit */signed char) ((short) var_11));
                        }
                    } 
                } 
            }
        } 
    } 
    var_18 ^= ((/* implicit */unsigned long long int) (-(min((-4193792), (((/* implicit */int) (short)12268))))));
    var_19 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-78))) : (4278190080U))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))))) & (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) min((((/* implicit */short) var_3)), (var_7)))))))));
    var_20 ^= ((/* implicit */_Bool) (unsigned char)255);
}
