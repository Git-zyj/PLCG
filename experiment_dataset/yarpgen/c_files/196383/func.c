/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196383
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196383 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196383
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
    var_12 *= ((/* implicit */short) (!(((/* implicit */_Bool) ((unsigned char) var_11)))));
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        var_13 = ((/* implicit */unsigned int) min((var_13), (((/* implicit */unsigned int) ((((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) < (arr_1 [i_0] [i_0]))) ? (((/* implicit */int) ((((/* implicit */_Bool) ((17666418372640842449ULL) & (((/* implicit */unsigned long long int) arr_1 [i_0] [i_0]))))) && (((/* implicit */_Bool) var_11))))) : (((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) var_4)))))))));
        arr_2 [i_0] [i_0] &= ((/* implicit */_Bool) min((((/* implicit */unsigned short) ((arr_1 [i_0] [i_0]) <= (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) var_2)) != (17666418372640842449ULL)))))))), (max((max((((/* implicit */unsigned short) var_9)), (var_5))), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_1 [i_0] [i_0])))))))));
    }
    for (short i_1 = 0; i_1 < 23; i_1 += 1) 
    {
        /* LoopNest 3 */
        for (int i_2 = 1; i_2 < 22; i_2 += 4) 
        {
            for (short i_3 = 0; i_3 < 23; i_3 += 1) 
            {
                for (unsigned short i_4 = 3; i_4 < 21; i_4 += 2) 
                {
                    {
                        arr_13 [i_1] [i_3] = ((/* implicit */long long int) (!(((/* implicit */_Bool) max((arr_4 [i_4 - 1]), (arr_4 [i_4 + 1]))))));
                        var_14 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) min(((-(780325701068709177ULL))), (((/* implicit */unsigned long long int) ((signed char) var_6)))))) ? (((((/* implicit */int) (unsigned char)52)) | (((/* implicit */int) arr_7 [i_4 + 2] [i_2 - 1])))) : (((int) min((0LL), (-3193480119247088731LL))))));
                        var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)28672))))))))));
                        var_16 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) min((arr_4 [i_4 - 2]), (arr_4 [i_4 + 2])))) ? (((((/* implicit */int) (unsigned char)239)) & (((/* implicit */int) arr_4 [i_4 - 1])))) : (((((/* implicit */int) (unsigned char)192)) << (((((/* implicit */int) (unsigned char)82)) - (82)))))));
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned short i_5 = 0; i_5 < 23; i_5 += 3) 
        {
            arr_17 [(unsigned short)15] [i_1] = ((/* implicit */short) ((unsigned short) ((((/* implicit */_Bool) (unsigned char)204)) ? (780325701068709189ULL) : (17666418372640842434ULL))));
            arr_18 [i_1] [i_1] = ((/* implicit */short) (_Bool)1);
            var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) * (-7)))) ? (((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), (((unsigned char) var_6))))) : (min((((/* implicit */int) var_10)), (arr_14 [i_1] [i_5] [i_1])))));
        }
    }
}
