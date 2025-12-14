/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203223
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203223 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203223
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
    var_15 = ((/* implicit */unsigned char) var_5);
    /* LoopNest 3 */
    for (unsigned short i_0 = 1; i_0 < 13; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            for (unsigned int i_2 = 2; i_2 < 13; i_2 += 4) 
            {
                {
                    var_16 &= ((/* implicit */int) ((signed char) ((short) max((var_0), (((/* implicit */unsigned short) (signed char)-81))))));
                    arr_11 [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((short) min((((/* implicit */int) var_7)), (var_1)))))));
                    var_17 = max((max((((/* implicit */unsigned int) var_12)), (3005983394U))), ((~((~(arr_2 [i_0]))))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) max((((/* implicit */int) (_Bool)0)), ((~(((/* implicit */int) (unsigned char)52))))))) > (5375194369374297753ULL)));
}
