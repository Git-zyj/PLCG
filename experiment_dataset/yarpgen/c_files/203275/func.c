/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203275
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203275 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203275
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
    var_18 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)59)) ? (137438953472ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)197)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-68))) : (var_15)));
    var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) var_15)) + (-2840617542080145645LL)));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_0])) && (((/* implicit */_Bool) min((((/* implicit */unsigned short) (unsigned char)59)), ((unsigned short)32760)))))) && (((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */_Bool) 2840617542080145648LL)) || (((/* implicit */_Bool) arr_0 [i_0]))))), (1136564723569463840LL))))));
                arr_4 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? ((~(arr_1 [i_0]))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)65)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)59)) ? (arr_1 [i_1]) : ((~(arr_1 [i_1])))))) : (arr_2 [i_0])));
                var_21 = (unsigned char)236;
            }
        } 
    } 
}
