/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248575
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248575 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248575
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
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        arr_3 [i_0] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1590049580)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (max((((/* implicit */long long int) ((unsigned int) 0LL))), (-3160766974073754069LL)))));
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 16; i_2 += 4) 
            {
                {
                    var_14 = ((/* implicit */int) (((_Bool)1) ? (7964652748345887296LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                    arr_9 [(_Bool)1] [i_1] [i_2] [3U] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (!((_Bool)1))))) + (-3431065018314966988LL)));
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned short i_3 = 0; i_3 < 16; i_3 += 3) 
        {
            for (unsigned short i_4 = 0; i_4 < 16; i_4 += 3) 
            {
                {
                    var_15 += ((/* implicit */short) ((((((/* implicit */_Bool) min((((/* implicit */long long int) var_11)), (7964652748345887301LL)))) && (((((/* implicit */_Bool) 2147483647)) || ((_Bool)1))))) && (((/* implicit */_Bool) ((((4522613451050794640LL) == (4522613451050794652LL))) ? (min((var_8), (9600103194053137028ULL))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) % (11256434658417738820ULL))))))));
                    var_16 = ((/* implicit */short) min((var_16), (((short) ((((/* implicit */_Bool) arr_2 [i_3])) ? (((/* implicit */unsigned long long int) 2147483647)) : (arr_2 [i_0]))))));
                }
            } 
        } 
        arr_14 [i_0] = ((/* implicit */long long int) ((((unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_0] [i_0])))))) / (var_4)));
    }
    var_17 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((var_4) ^ (((/* implicit */unsigned long long int) var_2)))))));
}
