/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50376
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50376 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50376
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
    for (int i_0 = 3; i_0 < 16; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            {
                arr_4 [i_1] = ((/* implicit */unsigned int) (!(((((((/* implicit */_Bool) var_5)) ? (arr_2 [i_1]) : (((/* implicit */unsigned long long int) var_6)))) != (((/* implicit */unsigned long long int) arr_3 [i_0 + 1] [i_0 + 2]))))));
                var_13 = ((/* implicit */unsigned char) max((var_13), (((/* implicit */unsigned char) (+(((/* implicit */int) min(((_Bool)1), ((_Bool)1)))))))));
                var_14 += ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)54999)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (((_Bool)1) || ((_Bool)1))))))) ? (14472976095503930705ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-23937)))));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 18; i_2 += 2) 
                {
                    for (signed char i_3 = 0; i_3 < 18; i_3 += 4) 
                    {
                        {
                            var_15 = ((/* implicit */unsigned int) arr_0 [i_0]);
                            var_16 = ((/* implicit */signed char) ((0U) != (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                            var_17 = ((/* implicit */int) ((((int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)114))) > (4294967278U)))) <= (((((/* implicit */_Bool) 33554431U)) ? (((/* implicit */int) ((unsigned char) 1195834343))) : ((+(((/* implicit */int) (_Bool)1))))))));
                            arr_11 [i_0] [i_0 + 1] [i_0] [i_0 - 2] = ((/* implicit */signed char) ((((/* implicit */int) (!(((_Bool) arr_8 [i_0]))))) >= (((/* implicit */int) ((signed char) ((((/* implicit */int) (short)-28451)) != (((/* implicit */int) (_Bool)0))))))));
                            var_18 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) -1LL)) ^ (217699220427691205ULL)));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 20; i_4 += 3) 
    {
        for (unsigned int i_5 = 0; i_5 < 20; i_5 += 3) 
        {
            {
                var_19 = ((/* implicit */unsigned long long int) (signed char)-91);
                var_20 = ((/* implicit */short) max((((/* implicit */int) (_Bool)1)), (-1195834359)));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned int i_6 = 0; i_6 < 17; i_6 += 4) 
    {
        for (short i_7 = 0; i_7 < 17; i_7 += 3) 
        {
            for (unsigned int i_8 = 2; i_8 < 15; i_8 += 3) 
            {
                {
                    var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-2)))))));
                    var_22 ^= ((/* implicit */int) 16862469340505841811ULL);
                    var_23 = ((/* implicit */short) ((((/* implicit */_Bool) arr_16 [i_7] [i_7])) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((short) -6889215126072630027LL))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)64024)) ? (2375145863U) : (0U)))) ? ((((-9223372036854775807LL - 1LL)) ^ (((/* implicit */long long int) 208914249)))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 0U)) || (((/* implicit */_Bool) 4294967295U))))))))));
                }
            } 
        } 
    } 
}
