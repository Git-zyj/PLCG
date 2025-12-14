/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216897
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216897 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216897
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
    for (short i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        arr_4 [i_0] = ((/* implicit */short) ((((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) var_2)) ? (var_0) : (((/* implicit */int) var_8)))), (((/* implicit */int) max((((/* implicit */signed char) var_8)), (arr_0 [(short)1]))))))) % (min((((/* implicit */unsigned long long int) arr_2 [i_0])), (max((var_7), (((/* implicit */unsigned long long int) arr_2 [i_0]))))))));
        /* LoopSeq 2 */
        for (int i_1 = 1; i_1 < 8; i_1 += 2) 
        {
            arr_7 [i_0] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((min((12019100254499055610ULL), (((/* implicit */unsigned long long int) (_Bool)1)))) == (((/* implicit */unsigned long long int) ((/* implicit */int) (short)4149)))));
            arr_8 [i_1] = ((/* implicit */signed char) var_0);
            var_14 = ((/* implicit */int) ((((/* implicit */_Bool) arr_5 [2ULL] [i_1])) ? (arr_3 [i_1] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_6))))));
            arr_9 [i_0] = ((/* implicit */unsigned int) var_6);
            arr_10 [i_0] [i_1] = ((/* implicit */unsigned char) max((arr_3 [i_0] [i_1]), (min((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_4))))), (arr_3 [i_1 + 1] [i_1])))));
        }
        for (unsigned int i_2 = 3; i_2 < 7; i_2 += 2) 
        {
            var_15 -= ((((/* implicit */_Bool) arr_3 [i_2] [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (var_0) : (((/* implicit */int) arr_0 [i_2 - 3]))))) != (((arr_3 [i_0] [i_0]) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))))))) : ((+(((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_0]))) : (var_7))))));
            arr_14 [i_0] = min((max((((/* implicit */unsigned long long int) var_5)), (((((/* implicit */_Bool) arr_3 [i_0] [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_2]))) : (arr_3 [i_0] [i_2]))))), (arr_3 [i_0] [i_0]));
            arr_15 [i_0] = var_3;
        }
        arr_16 [i_0] = ((/* implicit */int) var_7);
        var_16 -= ((/* implicit */long long int) arr_5 [i_0] [i_0]);
        /* LoopSeq 1 */
        for (long long int i_3 = 2; i_3 < 10; i_3 += 2) 
        {
            arr_19 [i_3] [i_0] [i_0] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) arr_18 [i_3 - 2] [i_3] [i_3 - 2]))) ? (((((/* implicit */int) arr_0 [i_3 - 2])) | (((/* implicit */int) arr_0 [i_3 - 1])))) : (((/* implicit */int) (unsigned char)3))));
            var_17 = ((/* implicit */_Bool) (+(var_0)));
            arr_20 [i_3] = ((/* implicit */unsigned char) var_1);
        }
    }
    for (short i_4 = 0; i_4 < 17; i_4 += 3) 
    {
        /* LoopSeq 2 */
        for (long long int i_5 = 0; i_5 < 17; i_5 += 1) 
        {
            arr_27 [i_4] [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_23 [i_5])) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_21 [i_5])) ? (arr_26 [i_4] [i_5] [i_4]) : (((/* implicit */int) (unsigned char)252))))) ? (((/* implicit */unsigned long long int) ((var_3) ? (((/* implicit */int) var_1)) : (var_5)))) : (var_7))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_24 [i_5] [i_5] [i_4]))))));
            var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) min((max((((((/* implicit */_Bool) 12019100254499055610ULL)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned char)252)))), (((/* implicit */int) (signed char)-45)))), ((+(0))))))));
        }
        for (unsigned int i_6 = 0; i_6 < 17; i_6 += 3) 
        {
            var_19 = ((/* implicit */short) 13260750024786470182ULL);
            arr_31 [i_4] [i_6] [i_4] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_11)) : (var_0)))) && (((/* implicit */_Bool) max((arr_21 [i_4]), (((/* implicit */unsigned long long int) arr_30 [i_6] [i_6] [i_4]))))))) ? (((/* implicit */int) var_8)) : ((-(min((var_5), (arr_26 [7ULL] [(short)9] [i_6])))))));
            arr_32 [i_6] [i_6] [i_4] = ((/* implicit */signed char) (short)127);
            var_20 -= ((/* implicit */unsigned long long int) var_6);
        }
        arr_33 [i_4] = max((((/* implicit */unsigned int) 0)), (((((/* implicit */_Bool) min((var_0), (((/* implicit */int) (_Bool)1))))) ? (arr_22 [i_4]) : (((/* implicit */unsigned int) ((var_0) / (((/* implicit */int) var_1))))))));
        var_21 = ((/* implicit */unsigned char) -1691612809);
        arr_34 [i_4] = ((/* implicit */unsigned long long int) arr_28 [i_4] [i_4]);
    }
    /* LoopSeq 1 */
    for (unsigned long long int i_7 = 2; i_7 < 15; i_7 += 4) 
    {
        var_22 = ((/* implicit */long long int) ((((/* implicit */unsigned int) arr_35 [i_7 + 1])) == (1191269736U)));
        arr_37 [i_7] = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_26 [i_7] [i_7 - 2] [i_7]))))) * (var_12)));
    }
    var_23 = ((/* implicit */unsigned char) var_13);
    var_24 = ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) var_5)) : (11395156153316390464ULL));
}
