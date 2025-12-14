/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232656
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232656 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232656
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
    for (unsigned int i_0 = 3; i_0 < 20; i_0 += 3) 
    {
        arr_3 [i_0] |= ((/* implicit */int) ((((/* implicit */_Bool) max((arr_2 [i_0 - 2]), (arr_2 [i_0 - 3])))) && ((!(((/* implicit */_Bool) arr_1 [i_0 - 1]))))));
        var_12 = ((((/* implicit */_Bool) (unsigned char)63)) ? (3161961187148769811ULL) : (3161961187148769811ULL));
    }
    /* vectorizable */
    for (signed char i_1 = 0; i_1 < 11; i_1 += 4) 
    {
        /* LoopNest 3 */
        for (unsigned int i_2 = 3; i_2 < 10; i_2 += 3) 
        {
            for (unsigned char i_3 = 1; i_3 < 7; i_3 += 4) 
            {
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    {
                        arr_14 [i_1] [(unsigned short)10] [i_3] [i_2] = ((/* implicit */unsigned long long int) arr_12 [i_2] [i_1] [7LL] [i_4] [i_2] [i_2]);
                        var_13 = ((/* implicit */_Bool) var_3);
                        var_14 = (unsigned char)59;
                        var_15 += ((/* implicit */unsigned long long int) arr_2 [i_1]);
                        var_16 = ((/* implicit */unsigned long long int) ((arr_10 [i_2 - 1] [i_2] [i_2 - 2]) / (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_2 - 1] [i_2 + 1] [i_2 - 2] [i_3] [i_2] [i_4])))));
                    }
                } 
            } 
        } 
        var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) ((3161961187148769811ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))));
    }
    var_18 = ((/* implicit */unsigned short) var_8);
    var_19 = ((/* implicit */unsigned char) min((3161961187148769811ULL), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned char)104)))))));
}
