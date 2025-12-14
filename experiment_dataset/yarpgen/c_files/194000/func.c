/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194000
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194000 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194000
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
    var_18 = ((/* implicit */_Bool) min(((-((-(var_11))))), (((/* implicit */unsigned long long int) ((unsigned char) min((var_6), (((/* implicit */unsigned int) -1696890831))))))));
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 20; i_0 += 2) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */_Bool) ((short) (_Bool)0));
        arr_3 [i_0] = (-(min((((/* implicit */long long int) ((((/* implicit */_Bool) 1696890829)) ? (-1696890852) : (1696890851)))), (((((/* implicit */_Bool) var_1)) ? (arr_0 [i_0]) : (arr_0 [(unsigned char)10]))))));
        var_19 = ((/* implicit */short) min((arr_0 [i_0]), (arr_0 [i_0])));
    }
    /* vectorizable */
    for (short i_1 = 0; i_1 < 20; i_1 += 2) /* same iter space */
    {
        arr_7 [i_1] = ((/* implicit */unsigned short) (~((-(((/* implicit */int) var_0))))));
        /* LoopSeq 3 */
        for (short i_2 = 0; i_2 < 20; i_2 += 3) 
        {
            var_20 = ((/* implicit */short) ((long long int) ((((/* implicit */_Bool) arr_10 [i_1] [i_1] [i_2])) ? (2455990293U) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))))));
            arr_11 [(short)7] [i_2] = ((/* implicit */unsigned short) ((unsigned char) ((_Bool) arr_4 [i_2] [i_2])));
        }
        for (long long int i_3 = 2; i_3 < 19; i_3 += 3) 
        {
            arr_15 [i_3] = ((((((/* implicit */_Bool) var_4)) ? (arr_5 [i_1]) : (((/* implicit */unsigned long long int) arr_12 [(unsigned char)9] [i_3] [i_3 - 2])))) - (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))));
            arr_16 [i_1] [i_3] = ((/* implicit */_Bool) ((unsigned short) arr_4 [i_3 - 2] [i_3 + 1]));
        }
        for (long long int i_4 = 2; i_4 < 17; i_4 += 3) 
        {
            var_21 &= ((long long int) ((var_5) == (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
            /* LoopSeq 2 */
            for (int i_5 = 3; i_5 < 18; i_5 += 2) 
            {
                arr_25 [i_1] [i_1] [i_1] [i_5] = 6287881210964974211ULL;
                arr_26 [i_5] = ((/* implicit */unsigned short) arr_6 [i_4]);
            }
            for (unsigned long long int i_6 = 1; i_6 < 18; i_6 += 1) 
            {
                arr_29 [i_1] [i_1] = ((/* implicit */unsigned short) var_12);
                var_22 &= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_28 [i_1] [i_6 - 1] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_28 [i_1] [i_6 + 2] [i_6]))) : (arr_12 [i_4 + 1] [i_1] [i_6 + 1])));
                var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) ((int) (!(((/* implicit */_Bool) -1696890829))))))));
            }
            var_24 = ((/* implicit */int) (+(((((/* implicit */_Bool) arr_18 [(unsigned short)6] [(unsigned short)6] [i_4])) ? (((/* implicit */long long int) -1696890830)) : (arr_6 [i_4])))));
        }
        var_25 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)7)) ? (((((-1696890829) + (2147483647))) >> (((-1696890829) + (1696890855))))) : ((+(((/* implicit */int) (signed char)-15))))));
    }
    var_26 = ((/* implicit */short) ((max((((/* implicit */unsigned int) min((var_12), (var_17)))), (((((/* implicit */_Bool) var_17)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (var_10))))) == (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) min((11U), (var_9))))))))));
}
