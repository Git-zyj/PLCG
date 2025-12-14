/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231984
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231984 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231984
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
    var_13 = ((/* implicit */short) max((min((((/* implicit */long long int) (unsigned short)65521)), (max((((/* implicit */long long int) -692556119)), (var_5))))), (((/* implicit */long long int) ((((/* implicit */int) ((var_11) < (((/* implicit */long long int) ((/* implicit */int) (short)-15398)))))) / (((/* implicit */int) max(((unsigned short)65535), ((unsigned short)65521)))))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 1; i_0 < 17; i_0 += 2) 
    {
        for (long long int i_1 = 2; i_1 < 17; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 18; i_2 += 4) 
            {
                {
                    arr_9 [5] [i_0 + 1] [i_1] [(_Bool)1] = ((/* implicit */int) ((-760663235) > (((/* implicit */int) (!(((/* implicit */_Bool) max((arr_0 [i_1]), (((/* implicit */unsigned int) (short)26043))))))))));
                    arr_10 [i_0] [i_2] = (((!(((/* implicit */_Bool) arr_6 [i_0 - 1] [i_0 - 1] [i_0])))) || ((!(((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_5 [i_0 + 1] [0U])), ((unsigned short)14)))))));
                    arr_11 [i_1] [i_1] = ((/* implicit */short) 0ULL);
                }
            } 
        } 
    } 
}
