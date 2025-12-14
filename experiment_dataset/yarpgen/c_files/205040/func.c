/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205040
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205040 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205040
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
    /* LoopNest 3 */
    for (short i_0 = 4; i_0 < 19; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 23; i_2 += 4) 
            {
                {
                    /* LoopSeq 4 */
                    for (int i_3 = 3; i_3 < 19; i_3 += 4) 
                    {
                        var_11 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_8 [20ULL] [i_3 + 1])) << (((((((/* implicit */int) (short)-13989)) + (((/* implicit */int) arr_5 [i_1] [(short)13])))) + (14198)))))) ? (((((/* implicit */int) (short)32765)) | (((/* implicit */int) arr_1 [i_3 + 3])))) : (max((((/* implicit */int) arr_8 [i_0 - 1] [i_3 + 2])), (((((/* implicit */_Bool) (short)-31458)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_9 [i_0] [15ULL] [i_0 - 3] [i_1] [i_3]))))))));
                        var_12 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (~(((5ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [i_0 - 1]))))))))));
                    }
                    for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                    {
                        var_13 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) min((((/* implicit */short) (unsigned char)250)), ((short)-22106)))), ((-(20ULL)))));
                        var_14 = ((/* implicit */signed char) max((arr_4 [i_4 + 1] [i_0 + 2]), (((/* implicit */unsigned char) (((~(18446744073709551611ULL))) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0 - 2]))))))));
                    }
                    for (short i_5 = 0; i_5 < 23; i_5 += 4) 
                    {
                        var_15 = ((/* implicit */signed char) max((((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [(short)11] [i_2]))))), ((~(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-64)))))))));
                        var_16 = ((/* implicit */short) 3845222907U);
                        arr_17 [(short)22] [i_1] [i_1] [i_0] [i_1] [(unsigned char)0] = ((/* implicit */unsigned char) (-(((/* implicit */int) (!(((/* implicit */_Bool) 18446744073709551577ULL)))))));
                        arr_18 [i_0] = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (unsigned char)51)))) != (min((((/* implicit */unsigned long long int) var_6)), (14ULL)))))) + (min((((((/* implicit */int) (_Bool)0)) % (((/* implicit */int) (signed char)-57)))), (min((((/* implicit */int) var_10)), (arr_15 [i_0] [(signed char)11] [i_0] [i_0] [i_0 + 3] [i_0 - 3])))))));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_6 = 3; i_6 < 20; i_6 += 2) 
                    {
                        var_17 = ((_Bool) (!(arr_8 [i_1] [i_2])));
                        var_18 = ((/* implicit */short) ((((/* implicit */_Bool) 550742116)) ? (((/* implicit */int) arr_1 [i_0 - 2])) : (((/* implicit */int) var_2))));
                        var_19 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_1))));
                    }
                    var_20 = ((/* implicit */unsigned int) 18446744073709551610ULL);
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */signed char) var_8);
}
