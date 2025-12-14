/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233752
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233752 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233752
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
    var_19 = ((/* implicit */signed char) max((((((/* implicit */_Bool) ((2845700967U) * (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)40490)))))) ? (var_11) : (((/* implicit */int) min(((unsigned char)254), (((/* implicit */unsigned char) var_2))))))), (((min((var_2), ((_Bool)0))) ? (var_11) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned short)4650)) : (((/* implicit */int) var_0))))))));
    var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) -1LL)) ? (max(((+(63LL))), (((/* implicit */long long int) (unsigned short)60867)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)5)) ? (((/* implicit */int) (unsigned short)60867)) : (((/* implicit */int) min((var_13), ((signed char)-5)))))))));
    /* LoopSeq 2 */
    for (signed char i_0 = 2; i_0 < 16; i_0 += 3) 
    {
        var_21 = ((/* implicit */signed char) ((((((((/* implicit */_Bool) arr_0 [i_0])) || (((/* implicit */_Bool) var_14)))) ? (var_14) : (((/* implicit */unsigned long long int) (-(arr_0 [i_0])))))) >= (((/* implicit */unsigned long long int) ((arr_1 [i_0 - 1]) * (((/* implicit */int) (short)0)))))));
        var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (unsigned short)60867)) : (arr_0 [i_0])))) ? (arr_1 [(short)15]) : (arr_1 [i_0 + 1])))) ? (((((/* implicit */_Bool) ((((/* implicit */int) var_5)) % (arr_1 [i_0])))) ? (((/* implicit */unsigned long long int) arr_0 [i_0 - 2])) : (var_12))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) min((arr_0 [i_0]), (arr_1 [(signed char)4])))) : ((-(1371686919454515734LL))))))));
        arr_2 [i_0 - 2] [i_0] = ((/* implicit */short) (+((((_Bool)1) ? (((/* implicit */int) var_18)) : (arr_0 [i_0])))));
        arr_3 [1] [i_0] = min((((((/* implicit */_Bool) (signed char)-1)) ? (arr_0 [i_0]) : (max((arr_1 [i_0]), (arr_1 [i_0]))))), ((-(((/* implicit */int) ((18446744073709551615ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))));
    }
    for (unsigned short i_1 = 0; i_1 < 17; i_1 += 1) 
    {
        arr_8 [(unsigned short)14] [(short)8] &= ((/* implicit */long long int) arr_5 [i_1] [i_1]);
        /* LoopSeq 1 */
        for (int i_2 = 3; i_2 < 16; i_2 += 4) 
        {
            var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_6 [i_2 - 2] [i_2 - 2])) ? (arr_6 [i_2 - 2] [i_2 - 2]) : (((((/* implicit */_Bool) arr_6 [i_2 - 2] [i_2 - 3])) ? (((/* implicit */int) var_7)) : (arr_6 [i_2 + 1] [i_2 + 1]))))))));
            arr_11 [i_2 - 3] [i_1] [i_2] = ((/* implicit */short) ((((/* implicit */int) (signed char)5)) != ((-(((/* implicit */int) arr_5 [i_1] [i_1]))))));
            var_24 = ((/* implicit */int) var_16);
            arr_12 [i_1] = ((/* implicit */_Bool) arr_7 [(_Bool)1]);
            arr_13 [i_1] [i_1] = ((/* implicit */short) min((((((/* implicit */_Bool) ((var_10) ? (arr_9 [i_1] [i_1] [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))) ? (-5668438198340129572LL) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_2] [i_2 - 3]))))), (((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)4669)))))));
        }
        arr_14 [i_1] = ((/* implicit */_Bool) max((((/* implicit */int) arr_7 [i_1])), (arr_6 [i_1] [i_1])));
        var_25 = ((/* implicit */unsigned long long int) min(((+((~(var_11))))), ((-(-1)))));
        arr_15 [i_1] = ((/* implicit */long long int) var_4);
    }
    var_26 = ((/* implicit */unsigned long long int) (unsigned short)0);
}
