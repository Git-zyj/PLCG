/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39528
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39528 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39528
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
    var_14 = ((/* implicit */long long int) var_2);
    var_15 = ((/* implicit */short) (+(((int) ((((/* implicit */long long int) ((/* implicit */int) var_6))) / (var_5))))));
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) min((var_1), (((/* implicit */short) arr_1 [i_0]))))) : (var_13))) < (min((((/* implicit */int) ((var_12) > (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0])))))), (var_9)))));
        var_16 = ((/* implicit */long long int) var_10);
        /* LoopNest 3 */
        for (unsigned int i_1 = 4; i_1 < 10; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                for (unsigned int i_3 = 3; i_3 < 8; i_3 += 3) 
                {
                    {
                        var_17 = ((/* implicit */int) max((var_17), (((/* implicit */int) (short)-5))));
                        var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_6 [i_1 - 1] [i_1 - 3])))) ? (((((/* implicit */_Bool) arr_6 [i_1 - 1] [i_1 - 3])) ? (var_13) : (((/* implicit */int) arr_6 [i_1 - 1] [i_1 - 3])))) : (((/* implicit */int) ((arr_5 [i_1 - 1] [i_1 - 3] [i_1 + 1]) > (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_1 - 1] [i_1 - 3])))))))))));
                        arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((int) (unsigned char)5)))));
                    }
                } 
            } 
        } 
    }
    for (int i_4 = 0; i_4 < 12; i_4 += 2) 
    {
        arr_15 [i_4] = ((/* implicit */unsigned long long int) var_11);
        var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) min((((long long int) min((var_1), (((/* implicit */short) var_0))))), (((((/* implicit */long long int) ((/* implicit */int) var_8))) | (min((-28950628621491974LL), (((/* implicit */long long int) arr_13 [i_4])))))))))));
    }
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        var_20 = ((/* implicit */unsigned long long int) 1212142063);
        var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((var_12) % (((/* implicit */unsigned int) ((/* implicit */int) var_6))))), (((/* implicit */unsigned int) var_10))))) ? (max(((~(arr_17 [14LL] [i_5]))), (((((/* implicit */_Bool) arr_17 [14ULL] [i_5])) ? (28950628621491970LL) : (((/* implicit */long long int) var_13)))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_6)) >= (((/* implicit */int) max((((/* implicit */short) var_10)), (arr_16 [(unsigned short)16] [i_5])))))))))))));
        var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) var_7))) ? (((/* implicit */int) ((_Bool) arr_17 [12LL] [i_5]))) : (((/* implicit */int) arr_16 [(unsigned char)4] [(unsigned char)4])))))));
        arr_18 [i_5] = ((/* implicit */unsigned long long int) (unsigned char)227);
    }
}
