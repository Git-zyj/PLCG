/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246142
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246142 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246142
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
    /* LoopSeq 3 */
    for (int i_0 = 1; i_0 < 17; i_0 += 1) 
    {
        var_13 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0 - 1])) | (((/* implicit */int) arr_1 [i_0 - 1]))))) ? (((11233247621906688891ULL) / (min((((/* implicit */unsigned long long int) arr_0 [i_0] [i_0])), (var_7))))) : (((((/* implicit */_Bool) max((arr_0 [i_0] [(signed char)0]), (((/* implicit */int) var_9))))) ? ((-(18446744073709551594ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) arr_1 [i_0 - 1])), ((unsigned short)34862)))))))));
        arr_2 [i_0] |= ((/* implicit */long long int) var_9);
        var_14 = ((/* implicit */unsigned int) min((((/* implicit */long long int) ((((var_12) == (1400947950U))) ? ((+(((/* implicit */int) var_0)))) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_9))) < (var_1))))))), (max((((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (var_10))), (((/* implicit */long long int) arr_0 [i_0 + 1] [i_0 + 1]))))));
        var_15 = ((/* implicit */long long int) max((var_15), (((/* implicit */long long int) ((short) min(((-(-7187493361395245141LL))), (-7187493361395245139LL)))))));
    }
    for (long long int i_1 = 0; i_1 < 20; i_1 += 1) 
    {
        var_16 ^= ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_2))) / (var_5)));
        var_17 ^= ((/* implicit */unsigned int) var_8);
    }
    for (unsigned char i_2 = 0; i_2 < 17; i_2 += 1) 
    {
        var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) min((((var_5) != (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_2] [i_2]))))), (((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) min((7187493361395245162LL), (((/* implicit */long long int) var_11))))))))))));
        var_19 = ((/* implicit */int) max((22ULL), (((/* implicit */unsigned long long int) ((long long int) var_9)))));
        /* LoopNest 3 */
        for (unsigned long long int i_3 = 0; i_3 < 17; i_3 += 1) 
        {
            for (signed char i_4 = 0; i_4 < 17; i_4 += 1) 
            {
                for (unsigned char i_5 = 3; i_5 < 13; i_5 += 4) 
                {
                    {
                        var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) var_6))));
                        var_21 = ((/* implicit */unsigned short) max((((/* implicit */long long int) (+(((/* implicit */int) var_0))))), (((((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) (unsigned short)12331)))) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (arr_7 [2ULL]))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (arr_10 [i_3] [4LL] [i_3] [i_3])))))));
                        var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) (!(((/* implicit */_Bool) (((!((_Bool)1))) ? ((+(var_7))) : (min((18446744073709551612ULL), (((/* implicit */unsigned long long int) var_3))))))))))));
                    }
                } 
            } 
        } 
    }
    var_23 -= ((/* implicit */int) ((24U) | (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)53226)))));
}
