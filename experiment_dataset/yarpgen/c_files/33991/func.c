/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33991
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33991 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33991
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
    /* LoopSeq 4 */
    for (int i_0 = 2; i_0 < 22; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) (-(var_13)));
        var_15 = ((/* implicit */_Bool) (+(max(((~(((/* implicit */int) arr_1 [i_0] [i_0])))), (((/* implicit */int) (signed char)107))))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned char) (unsigned short)8601);
    }
    /* vectorizable */
    for (long long int i_1 = 1; i_1 < 12; i_1 += 2) 
    {
        var_16 = ((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)220))));
        arr_6 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)62958)) ? (arr_4 [i_1] [i_1 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))));
    }
    for (short i_2 = 0; i_2 < 22; i_2 += 2) 
    {
        arr_11 [i_2] [i_2] = ((/* implicit */unsigned char) (+(min((((int) var_3)), ((-2147483647 - 1))))));
        arr_12 [i_2] [(unsigned short)15] = ((/* implicit */unsigned short) ((((unsigned int) arr_7 [i_2])) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_6)))));
        var_17 = ((/* implicit */int) max((var_2), (var_13)));
    }
    for (unsigned short i_3 = 1; i_3 < 19; i_3 += 4) 
    {
        arr_16 [i_3] = ((/* implicit */unsigned short) (signed char)0);
        /* LoopSeq 1 */
        /* vectorizable */
        for (signed char i_4 = 3; i_4 < 17; i_4 += 2) 
        {
            arr_21 [i_3] = ((/* implicit */unsigned int) arr_14 [i_3] [i_3]);
            arr_22 [i_3] [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)70)) & (((/* implicit */int) (unsigned char)64))))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_8 [i_3])))) : (((/* implicit */int) ((unsigned short) var_5)))));
            arr_23 [i_3] [i_3] = ((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)-14))));
            /* LoopSeq 1 */
            for (long long int i_5 = 1; i_5 < 18; i_5 += 1) 
            {
                arr_26 [i_3] [i_4] [i_5] [i_3] = ((/* implicit */short) (-(-2147483645)));
                var_18 = (-(((/* implicit */int) var_12)));
            }
            arr_27 [i_3] [i_3] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_25 [i_3] [i_4 - 3]))));
        }
        arr_28 [i_3] [i_3] = ((/* implicit */unsigned long long int) (unsigned short)62952);
        arr_29 [i_3] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (+(arr_18 [i_3] [i_3] [i_3])))) ^ (((unsigned long long int) var_2))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : ((-(var_7)))));
        arr_30 [(signed char)0] [(signed char)0] &= ((/* implicit */signed char) ((((((/* implicit */_Bool) (-(((/* implicit */int) arr_14 [i_3] [(unsigned char)0]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)14336)))))) : (max((((/* implicit */unsigned long long int) -2030690667)), (var_8))))) != (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_17 [i_3] [(signed char)0])) : (((/* implicit */int) var_0))))) ? (arr_13 [(unsigned char)3]) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_3)) || ((_Bool)1))))))))));
    }
    var_19 = ((/* implicit */unsigned char) var_8);
}
