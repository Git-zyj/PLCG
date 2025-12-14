/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241895
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241895 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241895
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
    var_13 ^= ((/* implicit */signed char) 4277687171U);
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned long long int) var_12);
        var_14 += ((/* implicit */unsigned long long int) ((signed char) arr_3 [(short)12]));
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            var_15 = ((/* implicit */int) ((arr_3 [i_0]) == (((/* implicit */unsigned int) ((((((/* implicit */int) var_10)) + (2147483647))) << (((((/* implicit */int) arr_6 [i_0] [i_1])) + (111))))))));
            /* LoopSeq 1 */
            for (unsigned char i_2 = 0; i_2 < 18; i_2 += 3) 
            {
                var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_5)))), (((((/* implicit */_Bool) 17280125U)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_11))))))) ? (((max((2251799813685184ULL), (((/* implicit */unsigned long long int) arr_1 [i_2] [i_1])))) + (((/* implicit */unsigned long long int) arr_8 [i_0])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_1)))))))));
                arr_9 [i_0] [(signed char)1] [i_2] = ((/* implicit */signed char) (+(((unsigned int) ((17280125U) / (4277687171U))))));
                arr_10 [i_2] [i_1] [i_1] [i_0] &= ((/* implicit */unsigned long long int) var_0);
                arr_11 [i_1] &= ((/* implicit */signed char) ((unsigned long long int) arr_3 [i_1]));
            }
            /* LoopSeq 1 */
            for (signed char i_3 = 3; i_3 < 16; i_3 += 2) 
            {
                var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) arr_13 [i_0] [i_1]))));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 18; i_4 += 3) 
                {
                    for (signed char i_5 = 0; i_5 < 18; i_5 += 3) 
                    {
                        {
                            arr_18 [0ULL] [i_1] [i_1] [i_1] [i_1] [i_0] [0ULL] = ((/* implicit */signed char) arr_14 [i_0] [i_0] [i_0]);
                            var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) (~(((/* implicit */int) (_Bool)1)))))));
                            arr_19 [i_0] [3U] [i_3] [i_4] [i_5] = ((/* implicit */_Bool) min((((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) var_12)))), (var_9)));
                            arr_20 [i_0] [i_5] [(signed char)4] = ((/* implicit */unsigned int) ((unsigned long long int) max((arr_14 [i_3 - 3] [i_3 - 2] [i_3 - 2]), (2251799813685184ULL))));
                            var_19 = ((/* implicit */signed char) ((((/* implicit */int) (((_Bool)0) && (((/* implicit */_Bool) (signed char)-86))))) % (((((/* implicit */_Bool) arr_17 [i_0] [i_1] [i_0] [i_4] [i_5])) ? (((/* implicit */int) (short)12004)) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_0] [i_1] [9U] [i_4] [i_5]))) < (2807109286U))))))));
                        }
                    } 
                } 
                var_20 = ((((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) -870197978)) ? (18444492273895866431ULL) : (((/* implicit */unsigned long long int) 0U)))))) ? (arr_14 [i_0] [(signed char)16] [i_3]) : (((/* implicit */unsigned long long int) ((unsigned int) (signed char)22))));
            }
        }
    }
}
