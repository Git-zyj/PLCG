/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247985
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247985 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247985
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
    var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_0)) != (min((var_6), (((/* implicit */int) var_8)))))))) >= (((((/* implicit */long long int) (~(var_1)))) & ((-9223372036854775807LL - 1LL))))));
    var_14 = ((/* implicit */unsigned int) var_2);
    var_15 = ((/* implicit */short) min((min((((/* implicit */unsigned long long int) (unsigned short)1627)), (18446744073709551611ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_10)) | (((/* implicit */int) (!(((/* implicit */_Bool) var_0))))))))));
    var_16 *= ((/* implicit */unsigned short) var_3);
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 4; i_0 < 19; i_0 += 1) 
    {
        /* LoopSeq 3 */
        for (unsigned int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) arr_0 [i_0 + 3]))));
            arr_4 [i_1] [i_0] = ((/* implicit */unsigned long long int) ((max((((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_1] [i_0 - 3])) || (((/* implicit */_Bool) arr_2 [i_0] [i_1] [i_1]))))), (((((/* implicit */_Bool) arr_1 [i_0] [i_1])) ? (var_12) : (arr_3 [(unsigned short)16] [(unsigned short)16]))))) >= (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (unsigned short)1627))))))));
            var_18 &= ((/* implicit */short) min((((/* implicit */int) arr_2 [i_0 + 3] [i_0 + 3] [i_0 - 4])), ((-(((/* implicit */int) arr_0 [i_0 + 3]))))));
        }
        for (unsigned short i_2 = 2; i_2 < 20; i_2 += 3) 
        {
            /* LoopNest 2 */
            for (short i_3 = 1; i_3 < 21; i_3 += 3) 
            {
                for (signed char i_4 = 3; i_4 < 21; i_4 += 1) 
                {
                    {
                        arr_14 [i_0] [i_0] [i_3] [i_4 - 1] = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_11 [20ULL] [(unsigned char)17] [20ULL] [20ULL] [(unsigned short)20])), (((min((arr_13 [i_0 + 1] [i_2] [i_3] [i_3]), (((/* implicit */long long int) arr_2 [(unsigned short)21] [(unsigned short)21] [i_4])))) & (-3522417331173332239LL)))));
                        arr_15 [i_0] [i_0 + 2] [(unsigned short)20] [i_2] [i_3] [i_4 - 2] = ((/* implicit */_Bool) max((max((arr_8 [i_3] [i_2 + 2] [i_3]), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_12 [i_4] [i_2] [i_0] [i_0])) ? (((/* implicit */int) arr_2 [i_0] [i_3] [i_4 - 3])) : (var_12)))))), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) > (arr_6 [i_2 - 1] [i_3 - 1] [i_4 - 3]))))));
                        arr_16 [i_2] [i_2] [i_2 + 2] [i_2] = (((!(((/* implicit */_Bool) arr_8 [i_0 - 3] [i_0 - 1] [i_0 - 1])))) ? (min((((/* implicit */unsigned int) (unsigned char)220)), (arr_8 [i_0 + 1] [i_0 + 1] [i_0 - 2]))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)4)))))));
                    }
                } 
            } 
            arr_17 [i_0 + 3] [i_0 - 2] [i_0] = ((/* implicit */unsigned long long int) min(((~(max((arr_3 [i_0] [i_2]), (((/* implicit */int) arr_0 [i_0])))))), (((/* implicit */int) (unsigned short)16427))));
        }
        /* vectorizable */
        for (unsigned short i_5 = 3; i_5 < 20; i_5 += 1) 
        {
            var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)42105)) ? (((/* implicit */long long int) 1529796353U)) : (arr_19 [i_0])))))))));
            var_20 = ((/* implicit */int) (-(((((/* implicit */_Bool) arr_20 [i_5])) ? (((/* implicit */unsigned int) arr_3 [i_0] [i_0])) : (arr_8 [4] [9] [i_0])))));
            arr_21 [i_0] [2] [i_5 - 3] = ((/* implicit */long long int) ((((/* implicit */int) arr_1 [i_5 + 1] [i_0 - 3])) / ((~(((/* implicit */int) arr_2 [i_0] [i_0] [i_0]))))));
            var_21 = arr_19 [i_5 + 1];
        }
        var_22 *= ((/* implicit */unsigned long long int) ((_Bool) (((!(((/* implicit */_Bool) var_0)))) || ((!(((/* implicit */_Bool) var_4)))))));
    }
    for (unsigned char i_6 = 0; i_6 < 19; i_6 += 4) 
    {
        arr_26 [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) 2359635003U)) || (((/* implicit */_Bool) (unsigned char)2))));
        arr_27 [i_6] = max(((unsigned short)23431), (((/* implicit */unsigned short) (signed char)106)));
    }
}
