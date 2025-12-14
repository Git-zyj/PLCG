/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31356
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31356 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31356
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
    var_16 = ((/* implicit */int) ((((((/* implicit */_Bool) max(((unsigned char)255), (((/* implicit */unsigned char) (_Bool)0))))) || ((_Bool)1))) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_12)) || ((!(((/* implicit */_Bool) var_12))))))))));
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        var_17 += ((/* implicit */long long int) (~(((/* implicit */int) var_3))));
        arr_2 [i_0] = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_7)) : (var_11)))));
        /* LoopSeq 2 */
        for (int i_1 = 0; i_1 < 20; i_1 += 3) /* same iter space */
        {
            var_18 = var_8;
            arr_5 [3LL] [i_1] [3LL] = ((/* implicit */unsigned int) (((+(var_12))) * (((/* implicit */int) ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) var_13)))))));
            /* LoopNest 2 */
            for (int i_2 = 1; i_2 < 19; i_2 += 4) 
            {
                for (long long int i_3 = 0; i_3 < 20; i_3 += 2) 
                {
                    {
                        var_19 = ((/* implicit */int) ((var_10) != (((/* implicit */int) max(((_Bool)1), ((_Bool)0))))));
                        arr_10 [i_0] [i_1] [i_2 - 1] [i_1] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) max((var_1), (((/* implicit */signed char) var_2))))), (var_8)))) ? ((((-(((/* implicit */int) var_13)))) - (((/* implicit */int) ((-603579387) < (((/* implicit */int) (_Bool)1))))))) : (((/* implicit */int) var_13))));
                        arr_11 [i_0] [6LL] [i_2] [i_3] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_14)) ? (((((/* implicit */_Bool) (+(((/* implicit */int) var_13))))) ? (603579386) : ((+(var_10))))) : ((-(((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_4))))))));
                        arr_12 [i_1] [i_1] [i_1] [i_1] = ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)144)) * (((/* implicit */int) (_Bool)1)))))))) / (((/* implicit */int) var_13)));
                    }
                } 
            } 
            var_20 |= min(((~((~(((/* implicit */int) var_0)))))), ((~(min((603579386), (var_10))))));
            var_21 = ((/* implicit */short) 603579386);
        }
        /* vectorizable */
        for (int i_4 = 0; i_4 < 20; i_4 += 3) /* same iter space */
        {
            var_22 = ((/* implicit */int) ((var_8) != (((/* implicit */unsigned int) ((/* implicit */int) var_14)))));
            arr_16 [i_0] [i_0] [i_0] = ((/* implicit */short) (!(var_4)));
            var_23 = ((/* implicit */int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) var_3))))) : (var_8)));
        }
    }
    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
    {
        var_24 = max((max((var_5), (var_5))), (((/* implicit */long long int) min((((603579387) ^ (var_6))), (((/* implicit */int) var_9))))));
        var_25 &= ((int) ((long long int) var_1));
        arr_19 [6] |= ((/* implicit */int) max((((/* implicit */unsigned int) ((((/* implicit */int) var_7)) + (((/* implicit */int) var_1))))), ((~(4294967290U)))));
        var_26 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? ((~(((/* implicit */int) (short)-30267)))) : (((/* implicit */int) max((var_15), (((/* implicit */short) var_14)))))))) ? (((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_3))) | (var_5)))) ? (var_11) : (((((/* implicit */int) var_14)) & (var_6))))) : (((((/* implicit */_Bool) max((((/* implicit */signed char) var_7)), (var_0)))) ? (((/* implicit */int) ((_Bool) var_7))) : ((~(var_12)))))));
    }
    var_27 &= ((/* implicit */signed char) max(((~(((((/* implicit */int) var_0)) | (((/* implicit */int) var_7)))))), (((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))));
}
