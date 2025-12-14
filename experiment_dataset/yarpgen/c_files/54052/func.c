/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54052
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54052 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54052
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 4; i_0 < 8; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 12; i_2 += 4) 
            {
                {
                    var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) var_6))));
                    var_16 = ((/* implicit */long long int) var_14);
                    var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) var_8))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_3 = 0; i_3 < 11; i_3 += 4) 
    {
        for (unsigned char i_4 = 0; i_4 < 11; i_4 += 4) 
        {
            {
                var_18 = ((/* implicit */long long int) (unsigned short)15314);
                var_19 += ((/* implicit */signed char) (((_Bool)1) ? (((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)43791))))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (((((/* implicit */_Bool) (unsigned short)65535)) ? (8557135797196788355LL) : (((/* implicit */long long int) 13U)))))) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_3] [i_4] [i_4])))));
                arr_14 [i_3] = ((/* implicit */short) min((((/* implicit */int) var_14)), (var_11)));
                arr_15 [i_4] = ((/* implicit */short) ((((/* implicit */int) (!(var_12)))) + (((/* implicit */int) var_12))));
            }
        } 
    } 
    var_20 = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)2172))) < (max(((((((((-9223372036854775807LL - 1LL)) + (9223372036854775807LL))) + (9223372036854775807LL))) << (((((-8890851669790633961LL) + (8890851669790633971LL))) - (10LL))))), (((((/* implicit */_Bool) 1834785292469296992LL)) ? (-3806401296678019542LL) : (8890851669790633961LL)))))));
    var_21 = ((/* implicit */long long int) 4548413901613287257ULL);
}
