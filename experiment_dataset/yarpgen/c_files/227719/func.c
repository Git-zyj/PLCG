/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227719
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227719 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227719
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
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        var_10 = ((/* implicit */unsigned char) max((var_10), (((/* implicit */unsigned char) ((unsigned int) arr_0 [i_0])))));
        var_11 = ((/* implicit */short) ((unsigned char) ((((/* implicit */_Bool) (signed char)64)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-71))) : (17885315239392553707ULL))));
        var_12 = ((/* implicit */long long int) arr_2 [i_0]);
        var_13 = ((/* implicit */int) max((var_13), (((((/* implicit */_Bool) (+(((/* implicit */int) var_8))))) ? ((+(((/* implicit */int) var_0)))) : (((/* implicit */int) arr_0 [i_0]))))));
    }
    for (signed char i_1 = 0; i_1 < 14; i_1 += 3) 
    {
        var_14 *= ((/* implicit */signed char) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_1])))))));
        /* LoopNest 3 */
        for (long long int i_2 = 2; i_2 < 11; i_2 += 3) 
        {
            for (unsigned long long int i_3 = 0; i_3 < 14; i_3 += 1) 
            {
                for (short i_4 = 0; i_4 < 14; i_4 += 3) 
                {
                    {
                        arr_14 [i_1] [i_1] = ((/* implicit */unsigned short) min(((~((~(((/* implicit */int) (unsigned char)31)))))), (((/* implicit */int) (signed char)-19))));
                        var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_2 + 2] [i_2 + 2])) ? (arr_1 [i_2 - 2] [i_2]) : (arr_1 [i_2 + 3] [i_2])))) && (((/* implicit */_Bool) min((((/* implicit */unsigned int) var_8)), (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-62))) + (var_3)))))))))));
                    }
                } 
            } 
        } 
        var_16 |= (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_1] [i_1] [i_1])) ? (4294967272U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_1] [i_1] [i_1])))))));
    }
    var_17 = ((/* implicit */unsigned char) ((((/* implicit */int) (signed char)-19)) | (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_0)), (var_5)))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) max((var_2), (((/* implicit */short) (signed char)-19)))))))));
    /* LoopSeq 1 */
    for (int i_5 = 0; i_5 < 15; i_5 += 1) 
    {
        var_18 = ((/* implicit */unsigned char) -1);
        arr_18 [i_5] [(unsigned short)6] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_0)), (((((/* implicit */_Bool) 2425202780U)) ? (16931744062702516186ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))))))))));
    }
}
