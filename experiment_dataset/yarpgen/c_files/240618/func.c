/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240618
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240618 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240618
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
    var_15 = ((/* implicit */long long int) min((var_15), ((+(6644364222222036614LL)))));
    /* LoopSeq 2 */
    for (long long int i_0 = 1; i_0 < 12; i_0 += 1) 
    {
        var_16 |= ((/* implicit */int) ((((/* implicit */_Bool) max((8650033117001641422ULL), (((/* implicit */unsigned long long int) (_Bool)1))))) ? (max((((((/* implicit */_Bool) var_5)) ? (arr_1 [i_0] [(signed char)9]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)17180))))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)17189))))))) : (((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) arr_1 [i_0 - 1] [i_0])))) ? (((/* implicit */int) ((((/* implicit */unsigned int) var_2)) < (arr_0 [i_0])))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0 + 1]))))))))));
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned int i_2 = 1; i_2 < 10; i_2 += 1) 
            {
                for (unsigned int i_3 = 0; i_3 < 13; i_3 += 3) 
                {
                    {
                        var_17 = ((/* implicit */int) max((var_17), (((/* implicit */int) (short)17180))));
                        var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) arr_10 [(unsigned char)4] [i_2] [(unsigned char)4]))) ? (((/* implicit */unsigned long long int) arr_11 [i_0] [i_1] [i_1] [i_1] [10LL])) : (975577287615110490ULL)))) ? (max((min((((/* implicit */unsigned long long int) (short)-17189)), (17771072224094208551ULL))), (var_14))) : (((/* implicit */unsigned long long int) ((unsigned int) arr_8 [i_0 - 1] [(unsigned short)12] [(unsigned short)12] [i_0 + 1]))))))));
                    }
                } 
            } 
        } 
        arr_14 [i_0] = ((/* implicit */unsigned char) ((short) (short)-17189));
    }
    for (short i_4 = 4; i_4 < 9; i_4 += 2) 
    {
        var_19 += ((/* implicit */_Bool) min(((-(arr_17 [i_4 - 4]))), ((-(arr_1 [i_4 - 2] [i_4 - 4])))));
        var_20 += (_Bool)1;
    }
    var_21 = ((/* implicit */unsigned long long int) max((var_21), (((((/* implicit */_Bool) var_7)) ? (min((var_6), (var_9))) : (((/* implicit */unsigned long long int) (~((~(0U))))))))));
}
