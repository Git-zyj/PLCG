/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204787
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204787 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204787
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
    var_15 = ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (var_14) : (-1LL)))) ? (max((var_9), (((/* implicit */unsigned int) (unsigned char)183)))) : ((+(var_3))))) / (((/* implicit */unsigned int) var_5))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            for (unsigned int i_2 = 1; i_2 < 18; i_2 += 3) 
            {
                for (unsigned long long int i_3 = 1; i_3 < 17; i_3 += 2) 
                {
                    {
                        var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)177)) * (((/* implicit */int) (unsigned char)51))))))))));
                        var_17 = ((/* implicit */unsigned long long int) var_12);
                    }
                } 
            } 
        } 
        var_18 += max((((((/* implicit */_Bool) min((1448273934), (((/* implicit */int) var_4))))) ? (35258514354336900LL) : (((/* implicit */long long int) arr_1 [0])))), (((/* implicit */long long int) ((max((var_13), (arr_2 [i_0]))) ? (((((/* implicit */int) var_4)) + (((/* implicit */int) arr_2 [i_0])))) : (((arr_2 [(short)12]) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (unsigned short)50308))))))));
        arr_10 [i_0] [i_0] = ((/* implicit */short) (unsigned short)15227);
    }
    for (unsigned int i_4 = 0; i_4 < 19; i_4 += 1) /* same iter space */
    {
        var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [(unsigned char)5] [(unsigned char)5])) ? (((/* implicit */int) (unsigned char)11)) : (((/* implicit */int) (short)0))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) -1435834626)) ? (((/* implicit */int) arr_4 [i_4] [i_4])) : (((/* implicit */int) arr_4 [8LL] [i_4]))))) : (((var_0) ? (((((/* implicit */_Bool) (unsigned char)51)) ? (var_1) : (((/* implicit */long long int) 243778036U)))) : (((/* implicit */long long int) arr_8 [13LL] [i_4] [i_4] [10ULL])))))))));
        var_20 &= ((/* implicit */unsigned short) (-(max((((((/* implicit */_Bool) 243778046U)) ? (17486253346216899168ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)50308))))), (((/* implicit */unsigned long long int) (unsigned short)50308))))));
    }
}
