/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199520
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199520 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199520
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
    /* LoopSeq 2 */
    for (unsigned int i_0 = 3; i_0 < 18; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned short) (~(((/* implicit */int) min(((unsigned short)0), (min((arr_1 [i_0] [i_0]), ((unsigned short)8))))))));
        arr_3 [i_0 - 2] = ((/* implicit */unsigned int) ((unsigned char) max((arr_1 [i_0 - 3] [i_0 - 3]), (arr_1 [i_0 + 2] [i_0 + 2]))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned short i_2 = 1; i_2 < 15; i_2 += 2) 
        {
            for (unsigned int i_3 = 0; i_3 < 17; i_3 += 4) 
            {
                {
                    arr_11 [i_1] [i_1] = ((/* implicit */long long int) ((signed char) max((12510465101574490187ULL), (((/* implicit */unsigned long long int) arr_6 [i_1])))));
                    var_15 = max((min(((~(((/* implicit */int) arr_1 [i_1] [i_2])))), (((/* implicit */int) min((((/* implicit */unsigned short) arr_4 [i_1] [i_2])), ((unsigned short)9)))))), (min((((/* implicit */int) (_Bool)1)), (604439278))));
                }
            } 
        } 
        arr_12 [i_1] = ((/* implicit */unsigned long long int) max((min((var_1), (((/* implicit */long long int) (_Bool)1)))), (((/* implicit */long long int) min((((/* implicit */short) (signed char)55)), (arr_5 [i_1]))))));
    }
    var_16 = ((/* implicit */_Bool) min((var_0), (((/* implicit */long long int) min((max((((/* implicit */int) (unsigned short)48526)), (-1419053489))), (((/* implicit */int) var_14)))))));
}
