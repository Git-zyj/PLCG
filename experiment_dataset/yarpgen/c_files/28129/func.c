/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28129
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28129 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28129
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
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] |= ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */int) var_1)), (arr_0 [i_0] [i_0])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0] [i_0]))))) : ((~(((/* implicit */int) (unsigned char)111))))))) ? (max((((((/* implicit */int) (unsigned char)144)) << (((arr_1 [i_0]) - (3884844301U))))), (arr_0 [i_0] [(unsigned char)3]))) : ((-(((/* implicit */int) (signed char)26)))));
        /* LoopNest 3 */
        for (short i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            for (unsigned int i_2 = 3; i_2 < 21; i_2 += 1) 
            {
                for (short i_3 = 0; i_3 < 23; i_3 += 3) 
                {
                    {
                        arr_10 [i_0] [i_0] [i_1] [i_2] [i_1] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)140)))))));
                        var_14 += ((/* implicit */short) (-(arr_1 [i_2])));
                        arr_11 [i_1] [i_2] = ((/* implicit */short) min((((/* implicit */long long int) (!(((/* implicit */_Bool) max((arr_4 [i_1] [i_2 - 3]), (((/* implicit */unsigned short) (short)-12103)))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [12U]))) : (var_6)))) ? (((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1))))) : (((((/* implicit */long long int) ((/* implicit */int) var_13))) & (-8606969965756524764LL)))))));
                        arr_12 [i_1] = ((/* implicit */short) max((((((/* implicit */_Bool) ((var_10) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)82)))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_0]))) - (var_11))) : (((/* implicit */unsigned long long int) var_3)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((var_8), (((/* implicit */short) (unsigned char)112))))) || (((((/* implicit */int) var_13)) >= (((/* implicit */int) var_0)))))))));
                    }
                } 
            } 
        } 
        arr_13 [(short)17] [(short)17] &= ((/* implicit */int) ((((/* implicit */long long int) min(((-(((/* implicit */int) (short)-12121)))), (((/* implicit */int) ((((/* implicit */int) (unsigned char)138)) != (((/* implicit */int) (short)12102)))))))) * (max((((/* implicit */long long int) arr_5 [(unsigned short)12])), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) 2459410663U)) : (var_6)))))));
        arr_14 [i_0] [(short)20] = ((/* implicit */short) (!(((/* implicit */_Bool) (+(arr_7 [i_0] [i_0] [i_0]))))));
    }
    var_15 = ((/* implicit */short) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (var_11) : (((/* implicit */unsigned long long int) var_9))))) ? (((((/* implicit */_Bool) var_4)) ? (var_10) : (var_11))) : (((/* implicit */unsigned long long int) min((var_6), (((/* implicit */long long int) 1094876356)))))))));
    var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) (+(((((/* implicit */int) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) (unsigned char)180))))) | (((/* implicit */int) ((((/* implicit */_Bool) var_1)) && ((_Bool)1)))))))))));
    var_17 -= ((/* implicit */unsigned int) var_1);
}
