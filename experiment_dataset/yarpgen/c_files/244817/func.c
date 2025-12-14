/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244817
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244817 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244817
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
    /* LoopSeq 1 */
    for (unsigned short i_0 = 2; i_0 < 14; i_0 += 2) 
    {
        var_19 *= ((/* implicit */unsigned short) ((((((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)0))) == (arr_3 [i_0]))) ? (arr_1 [i_0 - 1]) : (arr_2 [i_0 - 2]))) != (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-19))) : (arr_3 [i_0])))) ? (((/* implicit */int) ((((/* implicit */int) (unsigned short)274)) < (arr_2 [i_0])))) : (((/* implicit */int) var_8))))));
        /* LoopNest 2 */
        for (signed char i_1 = 2; i_1 < 12; i_1 += 2) 
        {
            for (short i_2 = 3; i_2 < 13; i_2 += 2) 
            {
                {
                    var_20 = ((/* implicit */signed char) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) min((33423360), (((/* implicit */int) (signed char)-19))))), (arr_6 [i_2 - 1] [i_1]))))));
                    var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) (short)-24308))));
                    var_22 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (0U))))));
                }
            } 
        } 
        arr_9 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (((-2147483647 - 1)) | (arr_4 [i_0])))) ? (((((/* implicit */_Bool) (unsigned short)5449)) ? (((((/* implicit */int) (signed char)-21)) ^ (((/* implicit */int) var_3)))) : (((/* implicit */int) ((var_18) != (((/* implicit */int) (signed char)-3))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0])))))));
        var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */short) (!(((/* implicit */_Bool) arr_2 [(unsigned short)12]))))), (max((var_12), (((/* implicit */short) (signed char)-19))))))) ? ((-(((/* implicit */int) min((var_4), (((/* implicit */short) (signed char)124))))))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_0 - 1] [i_0] [i_0 + 1])) && (((/* implicit */_Bool) arr_8 [i_0 - 1] [i_0] [2ULL])))))));
        var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((signed char) var_2))) ? (arr_6 [i_0 - 2] [i_0 - 2]) : (((/* implicit */unsigned long long int) max((min((((/* implicit */int) (unsigned short)510)), (arr_4 [i_0]))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_0] [8U] [i_0]))))))))));
    }
    var_25 = (-(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (var_5) : (((/* implicit */int) var_2)))))))));
}
