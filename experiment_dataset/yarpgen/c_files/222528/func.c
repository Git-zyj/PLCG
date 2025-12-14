/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222528
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222528 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222528
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
    var_11 = ((/* implicit */int) var_10);
    var_12 = ((/* implicit */short) min((((/* implicit */int) var_7)), (max(((~(((/* implicit */int) (signed char)-74)))), (((((/* implicit */int) (short)18974)) * (((/* implicit */int) var_7))))))));
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        /* LoopNest 3 */
        for (signed char i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (short i_3 = 0; i_3 < 18; i_3 += 1) 
                {
                    {
                        var_13 = ((/* implicit */short) min((((int) arr_8 [14] [i_1] [i_1] [i_1])), (((/* implicit */int) min((arr_8 [i_0] [i_1] [i_2] [i_3]), (arr_8 [i_0] [i_0] [i_0] [i_2]))))));
                        arr_10 [(short)8] [i_1] [i_1] [(signed char)14] = ((/* implicit */signed char) max(((+(((/* implicit */int) arr_8 [i_3] [7LL] [i_1] [i_0])))), (((/* implicit */int) (_Bool)1))));
                        arr_11 [i_1] [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) == (((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) arr_2 [i_1] [i_1]))))));
                        arr_12 [i_1] [i_1] [i_1] = ((/* implicit */long long int) max((((((/* implicit */_Bool) (unsigned char)34)) ? (((/* implicit */int) min((((/* implicit */unsigned short) (short)-2897)), (arr_1 [i_1])))) : ((+(((/* implicit */int) (_Bool)1)))))), (((/* implicit */int) arr_8 [i_0] [i_2] [i_1] [i_0]))));
                        var_14 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_0 [i_0] [i_0])) ^ ((((_Bool)1) ? (((/* implicit */int) (unsigned char)59)) : (((/* implicit */int) (short)-2897)))))) <= (((((/* implicit */int) (signed char)(-127 - 1))) | (((/* implicit */int) arr_1 [i_0]))))));
                    }
                } 
            } 
        } 
        arr_13 [i_0] = ((max((((11463597918173972168ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-68))))), (((/* implicit */unsigned long long int) (~(140737488355320LL)))))) | (((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)0))))));
    }
    for (short i_4 = 1; i_4 < 20; i_4 += 4) 
    {
        arr_17 [i_4] = ((/* implicit */long long int) ((((/* implicit */unsigned int) (-(((/* implicit */int) arr_15 [i_4] [i_4 - 1]))))) / (((((/* implicit */_Bool) arr_15 [i_4] [i_4 - 1])) ? (3336948429U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_4] [i_4 + 1])))))));
        arr_18 [10U] &= ((/* implicit */_Bool) ((short) (~(arr_16 [i_4 - 1] [(unsigned short)16]))));
    }
    var_15 = ((((/* implicit */int) ((_Bool) ((long long int) 17306923138107321672ULL)))) <= (((/* implicit */int) var_2)));
    var_16 += ((_Bool) (+(((/* implicit */int) var_3))));
}
