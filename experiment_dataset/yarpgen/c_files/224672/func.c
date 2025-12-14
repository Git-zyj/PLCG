/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224672
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224672 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224672
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
    var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) var_2)) : (((((/* implicit */_Bool) (+(var_12)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((12729050405988259320ULL) <= (((/* implicit */unsigned long long int) var_6)))))) : (((var_11) >> (((var_6) - (1405989786)))))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (int i_1 = 1; i_1 < 22; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_17 -= ((/* implicit */int) ((((max((12729050405988259320ULL), (((/* implicit */unsigned long long int) var_1)))) * (((/* implicit */unsigned long long int) min((var_4), (((/* implicit */long long int) var_9))))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_0))))))));
                    var_18 = ((/* implicit */short) min((((-1163652654) / (((/* implicit */int) (_Bool)1)))), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_9))))));
                    var_19 = min(((-(var_2))), (((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_15)))))))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned short i_3 = 1; i_3 < 20; i_3 += 1) 
    {
        for (unsigned char i_4 = 1; i_4 < 20; i_4 += 1) 
        {
            for (unsigned short i_5 = 0; i_5 < 21; i_5 += 3) 
            {
                {
                    arr_14 [i_3 + 1] [i_3 + 1] [i_3] = ((/* implicit */long long int) (-(((/* implicit */int) (signed char)95))));
                    arr_15 [i_3] [11LL] [i_3] = ((/* implicit */short) min((min((8173566822723186423ULL), (((/* implicit */unsigned long long int) (unsigned char)118)))), (((((/* implicit */_Bool) 10273177250986365192ULL)) ? (2ULL) : (((/* implicit */unsigned long long int) 184226670U))))));
                    /* LoopNest 2 */
                    for (unsigned char i_6 = 1; i_6 < 18; i_6 += 1) 
                    {
                        for (unsigned int i_7 = 0; i_7 < 21; i_7 += 2) 
                        {
                            {
                                var_20 = ((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) / (min((((/* implicit */unsigned long long int) max((-738650810), (((/* implicit */int) (signed char)25))))), ((-(14356355914498022693ULL))))));
                                var_21 ^= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) min(((+(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)23610))) <= (8173566822723186423ULL))))))) / ((+(5717693667721292314ULL)))));
                                var_22 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1137557831U)) ? ((+(3292788022612428852ULL))) : (((11124804253890066384ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-31393)))))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)229)) + (((/* implicit */int) (unsigned char)233))))) : (((((/* implicit */_Bool) (short)0)) ? (184226670U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)25)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
