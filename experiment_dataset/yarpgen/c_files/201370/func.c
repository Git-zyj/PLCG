/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201370
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201370 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201370
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
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            arr_6 [i_0] [i_1] [10] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_1 [(signed char)12])) ? ((+(var_14))) : (((((/* implicit */_Bool) max((((/* implicit */long long int) -1425310864)), (-8861512181187427423LL)))) ? ((~(((/* implicit */int) arr_5 [(signed char)4] [i_0] [i_1])))) : (((/* implicit */int) (short)21108))))));
            var_17 = ((/* implicit */_Bool) min((max((arr_0 [i_1]), (((/* implicit */unsigned long long int) (short)-17563)))), ((-(arr_0 [i_0])))));
        }
        var_18 = ((/* implicit */unsigned short) max((((((/* implicit */int) var_5)) * ((~(((/* implicit */int) arr_3 [i_0] [i_0] [i_0])))))), (((((/* implicit */int) min((((/* implicit */short) (unsigned char)19)), (arr_3 [i_0] [i_0] [i_0])))) - (((((/* implicit */int) (short)30718)) - (((/* implicit */int) (short)17539))))))));
    }
    for (long long int i_2 = 0; i_2 < 23; i_2 += 1) 
    {
        arr_9 [i_2] [i_2] = ((/* implicit */long long int) var_9);
        /* LoopNest 3 */
        for (long long int i_3 = 0; i_3 < 23; i_3 += 4) 
        {
            for (short i_4 = 0; i_4 < 23; i_4 += 4) 
            {
                for (unsigned short i_5 = 0; i_5 < 23; i_5 += 1) 
                {
                    {
                        var_19 = ((/* implicit */short) ((((/* implicit */_Bool) min(((unsigned short)65298), (arr_7 [i_2])))) ? (max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_8 [i_3] [i_4])) ? (((/* implicit */int) arr_12 [i_2] [i_3] [i_2])) : (((/* implicit */int) var_9))))), (((long long int) arr_12 [i_2] [2LL] [i_2])))) : (((/* implicit */long long int) (-(((/* implicit */int) arr_12 [i_2] [i_4] [i_5])))))));
                        var_20 &= ((/* implicit */unsigned long long int) max((((((/* implicit */int) arr_10 [i_5])) - (((/* implicit */int) var_13)))), (((((/* implicit */int) (signed char)104)) - (var_3)))));
                        var_21 = ((/* implicit */signed char) ((max((((/* implicit */int) (unsigned char)10)), ((~(((/* implicit */int) arr_7 [i_2])))))) * (((/* implicit */int) min((min((arr_15 [i_2] [i_2] [i_5]), (((/* implicit */short) (signed char)-2)))), (((/* implicit */short) max((arr_11 [i_3] [i_3] [i_5]), (arr_11 [i_5] [i_4] [i_2])))))))));
                    }
                } 
            } 
        } 
    }
    var_22 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (((~(((/* implicit */int) (unsigned short)260)))) < (((/* implicit */int) var_2)))))));
    var_23 = ((/* implicit */unsigned char) (unsigned short)231);
}
