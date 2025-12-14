/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212995
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212995 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212995
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
    for (int i_0 = 4; i_0 < 15; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */signed char) min((((((/* implicit */_Bool) 15960858574912517682ULL)) && (((/* implicit */_Bool) max((2485885498797033934ULL), (2485885498797033924ULL)))))), (((((/* implicit */_Bool) (signed char)21)) || (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (unsigned char)246)), (15960858574912517659ULL))))))));
                var_17 = ((/* implicit */unsigned short) (signed char)110);
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_2 = 0; i_2 < 24; i_2 += 2) 
    {
        for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
        {
            {
                arr_11 [i_3] [i_2] = ((/* implicit */unsigned char) 15960858574912517682ULL);
                var_18 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) max((-9223372036854775785LL), (((/* implicit */long long int) 1171763873))))), (min((((/* implicit */unsigned long long int) -1171763874)), (18446744073709551615ULL)))));
                arr_12 [i_3] = ((/* implicit */unsigned short) max((min((2485885498797033934ULL), (((/* implicit */unsigned long long int) (signed char)-68)))), (((/* implicit */unsigned long long int) ((1171763865) / (((/* implicit */int) (unsigned char)37)))))));
                var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((1209248298905946969LL), (((/* implicit */long long int) 2171147903U))))) && (((/* implicit */_Bool) (signed char)81))));
            }
        } 
    } 
}
