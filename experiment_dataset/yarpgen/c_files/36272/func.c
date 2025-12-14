/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36272
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36272 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36272
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
    var_18 = ((/* implicit */long long int) min(((signed char)-127), (((/* implicit */signed char) (_Bool)1))));
    var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (signed char)-127)), (min((var_4), (((/* implicit */unsigned int) var_17))))))) ? (((/* implicit */unsigned long long int) var_16)) : (15074155837197564491ULL)));
    /* LoopSeq 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 3) 
            {
                {
                    var_20 = ((/* implicit */unsigned int) max(((+((~(7444300000814998070LL))))), (((/* implicit */long long int) min((((var_15) | (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [i_0] [i_1] [(unsigned short)10]))))), (((/* implicit */unsigned int) var_1)))))));
                    arr_8 [i_2] [i_1] [i_0 - 1] &= ((/* implicit */signed char) min((((/* implicit */unsigned long long int) arr_5 [i_0 - 1] [i_0] [i_0 - 1] [i_2])), (min((arr_7 [i_0 - 1] [i_1] [i_1] [i_1 - 1]), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_5 [i_0] [i_0] [15U] [i_2])), (-5766521658030178463LL))))))));
                }
            } 
        } 
        arr_9 [i_0 - 1] = ((/* implicit */unsigned int) ((long long int) max((((short) 4262078699595019392LL)), (((/* implicit */short) arr_1 [i_0 - 1] [i_0 - 1])))));
        arr_10 [i_0 - 1] = ((/* implicit */long long int) ((min((((/* implicit */unsigned int) ((((/* implicit */int) arr_0 [i_0 - 1])) * (((/* implicit */int) arr_3 [i_0]))))), (min((3826485124U), (((/* implicit */unsigned int) (_Bool)0)))))) >> (((unsigned int) (!(((/* implicit */_Bool) arr_2 [(short)1] [i_0])))))));
    }
    for (long long int i_3 = 0; i_3 < 15; i_3 += 1) 
    {
        var_21 = ((/* implicit */_Bool) (+(max((((/* implicit */unsigned long long int) arr_4 [i_3] [i_3] [i_3] [i_3])), (arr_7 [i_3] [i_3] [(unsigned short)13] [i_3])))));
        /* LoopNest 2 */
        for (signed char i_4 = 2; i_4 < 13; i_4 += 3) 
        {
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                {
                    arr_18 [i_3] [i_3] [i_4 + 1] [i_5] = ((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)-126))));
                    var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) max((((/* implicit */unsigned int) (signed char)-97)), (min((arr_2 [i_4] [i_5]), (((/* implicit */unsigned int) arr_1 [i_3] [(short)13])))))))));
                }
            } 
        } 
    }
    var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) (signed char)17))));
}
