/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20675
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20675 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20675
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
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 3; i_2 < 16; i_2 += 1) 
                {
                    for (long long int i_3 = 1; i_3 < 16; i_3 += 1) 
                    {
                        {
                            arr_10 [i_0] [i_1] [7ULL] [i_2] [i_2] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 11ULL)) ? (127U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-54)))))) ? (((arr_7 [0ULL] [i_3 + 1] [i_2 - 1]) - (((/* implicit */unsigned long long int) ((/* implicit */int) (((_Bool)1) && (var_5))))))) : (((/* implicit */unsigned long long int) (~(((((var_2) + (9223372036854775807LL))) << (((/* implicit */int) (_Bool)0)))))))));
                            arr_11 [i_0] [i_2] [i_1] [i_3 - 1] = ((/* implicit */unsigned short) (~(4ULL)));
                        }
                    } 
                } 
                arr_12 [i_0] [4ULL] = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) arr_8 [6ULL])) : (((/* implicit */int) var_16))))) ? (((unsigned long long int) arr_3 [i_0] [i_0] [i_0])) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_17) <= (((/* implicit */unsigned long long int) var_3))))))))));
            }
        } 
    } 
    var_19 = ((/* implicit */signed char) var_9);
    /* LoopNest 2 */
    for (unsigned long long int i_4 = 0; i_4 < 24; i_4 += 3) 
    {
        for (int i_5 = 0; i_5 < 24; i_5 += 1) 
        {
            {
                arr_19 [i_4] [i_5] [i_4] = ((/* implicit */long long int) ((unsigned long long int) ((unsigned int) (+(var_6)))));
                arr_20 [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) 541309400)), (2199023190016LL)))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)129))) : (min((((/* implicit */long long int) ((4294967169U) << (((/* implicit */int) var_5))))), (arr_13 [16])))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
    {
        for (unsigned int i_7 = 0; i_7 < 22; i_7 += 1) 
        {
            {
                arr_27 [i_6] = ((/* implicit */signed char) (+(min((var_18), (((/* implicit */unsigned int) (unsigned char)26))))));
                var_20 = ((/* implicit */signed char) max(((~(((/* implicit */int) arr_21 [i_7])))), (((((/* implicit */int) arr_21 [i_6])) | (((/* implicit */int) arr_21 [i_6]))))));
                var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) ((((/* implicit */_Bool) arr_16 [i_6] [i_6])) ? (((/* implicit */int) ((((/* implicit */_Bool) var_6)) || ((!(((/* implicit */_Bool) var_15))))))) : (((/* implicit */int) min(((unsigned char)246), (((/* implicit */unsigned char) (_Bool)1))))))))));
                arr_28 [i_6] = ((/* implicit */signed char) ((0ULL) | (((/* implicit */unsigned long long int) 4264710225U))));
            }
        } 
    } 
    var_22 = (!(((/* implicit */_Bool) var_16)));
}
