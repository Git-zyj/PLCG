/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191547
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191547 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191547
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
    for (long long int i_0 = 3; i_0 < 17; i_0 += 2) 
    {
        for (int i_1 = 3; i_1 < 16; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 3; i_2 < 17; i_2 += 2) 
                {
                    for (long long int i_3 = 1; i_3 < 18; i_3 += 4) 
                    {
                        {
                            arr_11 [i_1] [i_3] [i_2] = ((((/* implicit */_Bool) (signed char)-104)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (signed char)74)) : (((/* implicit */int) var_3))))) : (((((/* implicit */_Bool) (+(((/* implicit */int) var_9))))) ? (var_17) : (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)255))))))));
                            arr_12 [i_1] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) min((var_7), (((/* implicit */unsigned long long int) (unsigned short)50306))))) ? (((/* implicit */unsigned long long int) var_17)) : (((((/* implicit */_Bool) (unsigned char)239)) ? (15760999096253957076ULL) : (((/* implicit */unsigned long long int) 4294967295U)))))) + (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)138)) | ((-(((/* implicit */int) (short)-7182)))))))));
                        }
                    } 
                } 
                arr_13 [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) (unsigned char)63)), (3713959607U)));
                arr_14 [(short)0] = ((((/* implicit */_Bool) var_18)) ? (((((/* implicit */_Bool) (signed char)58)) ? (551040225U) : (((((/* implicit */_Bool) var_14)) ? (4294967295U) : (4086096786U))))) : (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)50306))))));
                /* LoopNest 2 */
                for (unsigned char i_4 = 0; i_4 < 19; i_4 += 2) 
                {
                    for (long long int i_5 = 4; i_5 < 17; i_5 += 3) 
                    {
                        {
                            arr_20 [i_0] [i_1] [i_0] [i_4] [i_4] [i_4] = ((/* implicit */long long int) (-(((/* implicit */int) ((unsigned char) (unsigned short)65535)))));
                            arr_21 [i_4] [i_4] [i_4] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)24922))))) ? (1636121981U) : (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */short) (unsigned char)65)), ((short)-26989)))))))) ? (((/* implicit */int) (unsigned short)37569)) : (((((/* implicit */int) (signed char)127)) - (((/* implicit */int) (unsigned char)32))))));
                            arr_22 [i_4] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-123)) ? (-4308980624754838432LL) : (((/* implicit */long long int) 145817155U))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_20 = ((/* implicit */short) (((!(((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)247))) : (763809038985032646LL)))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1))))) : (max((((/* implicit */unsigned int) (unsigned short)50306)), (var_12)))))) : (4445646623238821547LL)));
    var_21 = ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned int) (signed char)90))))) : (67076096ULL)));
}
