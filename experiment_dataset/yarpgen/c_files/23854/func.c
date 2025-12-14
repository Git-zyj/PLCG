/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23854
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23854 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23854
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
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (short i_1 = 1; i_1 < 11; i_1 += 3) 
        {
            {
                var_14 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) var_10))))), (var_1)))), (((((/* implicit */_Bool) arr_3 [i_1 + 1])) ? (min((((/* implicit */unsigned long long int) 1360376722U)), (var_7))) : (((/* implicit */unsigned long long int) arr_0 [(unsigned char)5]))))));
                var_15 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max(((unsigned short)4096), ((unsigned short)29130)))) ? (((((/* implicit */_Bool) arr_3 [i_0])) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0]))))) : (((/* implicit */long long int) ((/* implicit */int) ((short) arr_3 [i_1 + 1])))))))));
            }
        } 
    } 
    var_16 *= ((/* implicit */short) var_5);
    var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) (signed char)-60))));
    var_18 = ((/* implicit */unsigned long long int) min((var_18), (((min((((var_7) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))), (((/* implicit */unsigned long long int) ((unsigned int) var_1))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) var_4)), (((unsigned short) var_5))))))))));
    /* LoopNest 2 */
    for (unsigned char i_2 = 0; i_2 < 11; i_2 += 3) 
    {
        for (short i_3 = 0; i_3 < 11; i_3 += 4) 
        {
            {
                var_19 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) var_7)) ? (((var_9) - (((/* implicit */long long int) ((/* implicit */int) (short)-3999))))) : (((/* implicit */long long int) min((0U), (((/* implicit */unsigned int) (unsigned short)0))))))), (((/* implicit */long long int) ((((((/* implicit */int) var_5)) >= (((/* implicit */int) (unsigned short)2)))) ? (((int) var_5)) : (((((/* implicit */int) (unsigned short)65516)) | (((/* implicit */int) var_5)))))))));
                arr_9 [i_2] [i_2] = ((/* implicit */short) max((((((/* implicit */_Bool) max((var_3), (((/* implicit */short) (unsigned char)54))))) ? (max((((/* implicit */unsigned long long int) var_0)), (15115048267921789899ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)8))))), (((/* implicit */unsigned long long int) ((_Bool) arr_8 [i_2])))));
            }
        } 
    } 
}
