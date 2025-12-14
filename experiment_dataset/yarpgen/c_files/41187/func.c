/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41187
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41187 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41187
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
    var_13 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -5332763966412229316LL)) ? (((/* implicit */int) (signed char)64)) : (((/* implicit */int) (signed char)-64))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)100)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)127))) : (arr_5 [i_0] [i_1] [i_1])))) ? (((((/* implicit */_Bool) (short)13398)) ? (-2016578206593663534LL) : (5332763966412229331LL))) : (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) (short)13422)), (var_10)))))));
                var_15 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (arr_1 [i_1]) : (arr_1 [23ULL])))) ? (((/* implicit */int) (!(arr_4 [i_0] [i_1] [i_0])))) : (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_2 [i_0]))))));
                var_16 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) 2016578206593663534LL)) ? (((/* implicit */int) (signed char)-64)) : (((/* implicit */int) (signed char)81))))) ? (994610342208728228ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)72))))), (((/* implicit */unsigned long long int) min((arr_2 [i_0]), ((unsigned char)182))))));
            }
        } 
    } 
}
