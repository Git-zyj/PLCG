/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197014
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197014 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197014
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
    var_18 = ((/* implicit */unsigned long long int) var_10);
    var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_3)) : (((((/* implicit */_Bool) var_6)) ? (var_13) : (((/* implicit */int) var_3)))))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 2; i_0 < 7; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            {
                arr_7 [i_0] = ((/* implicit */unsigned int) var_12);
                var_20 = ((/* implicit */signed char) var_0);
                arr_8 [i_1] |= ((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_6 [i_0])) ? (((((/* implicit */_Bool) (unsigned short)65101)) ? (-4418942088801319783LL) : (((/* implicit */long long int) ((/* implicit */int) var_12))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)99)) >= (-1962299502)))))))));
            }
        } 
    } 
    var_21 = ((/* implicit */_Bool) var_2);
    /* LoopNest 2 */
    for (unsigned short i_2 = 0; i_2 < 14; i_2 += 3) 
    {
        for (signed char i_3 = 0; i_3 < 14; i_3 += 2) 
        {
            {
                var_22 *= ((/* implicit */signed char) ((((/* implicit */_Bool) (~(14221345152627390584ULL)))) ? (max((arr_16 [i_2] [i_2] [i_2]), (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (unsigned short)0))))))) : (((/* implicit */unsigned long long int) var_2))));
                var_23 = ((/* implicit */int) min((var_23), (((/* implicit */int) var_17))));
            }
        } 
    } 
}
