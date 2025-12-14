/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32625
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32625 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32625
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
    var_14 = ((/* implicit */unsigned char) (-(max((((/* implicit */int) var_11)), (var_4)))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned int i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            for (long long int i_2 = 2; i_2 < 11; i_2 += 1) 
            {
                for (int i_3 = 0; i_3 < 14; i_3 += 1) 
                {
                    {
                        var_15 = ((/* implicit */_Bool) ((arr_6 [i_0]) | (((/* implicit */long long int) ((((/* implicit */int) var_9)) * (((/* implicit */int) arr_13 [i_2] [i_2 + 3])))))));
                        var_16 = ((/* implicit */unsigned char) var_9);
                        var_17 = ((/* implicit */int) max((var_17), (((((/* implicit */_Bool) 4398042316800LL)) ? ((-(((((/* implicit */int) arr_13 [(signed char)6] [(signed char)6])) + (((/* implicit */int) var_11)))))) : (((/* implicit */int) ((_Bool) arr_2 [(unsigned char)4])))))));
                        var_18 = ((/* implicit */_Bool) (-((+(var_6)))));
                    }
                } 
            } 
        } 
        var_19 = ((/* implicit */unsigned int) ((signed char) (~(((/* implicit */int) arr_13 [(short)12] [i_0])))));
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 14; i_4 += 1) 
        {
            for (int i_5 = 0; i_5 < 14; i_5 += 1) 
            {
                for (signed char i_6 = 0; i_6 < 14; i_6 += 1) 
                {
                    {
                        var_20 = ((((/* implicit */int) ((short) min((((/* implicit */long long int) var_4)), (arr_6 [(_Bool)1]))))) - (((/* implicit */int) ((_Bool) (signed char)127))));
                        var_21 *= ((/* implicit */_Bool) max((((((/* implicit */int) ((((/* implicit */int) var_1)) < (((/* implicit */int) (unsigned char)0))))) % (((/* implicit */int) arr_21 [(unsigned char)13] [i_5] [i_4] [(unsigned char)13])))), ((+(((/* implicit */int) ((((/* implicit */int) var_10)) < (((/* implicit */int) var_3)))))))));
                        var_22 ^= ((/* implicit */signed char) (-(((/* implicit */int) ((unsigned char) arr_17 [i_0] [i_0] [2LL] [i_6])))));
                    }
                } 
            } 
        } 
    }
    var_23 ^= ((/* implicit */unsigned short) var_7);
    var_24 = ((/* implicit */unsigned char) max((var_24), (((unsigned char) (((!(((/* implicit */_Bool) var_10)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (-2194087141367312353LL) : (((/* implicit */long long int) var_13))))))))));
    var_25 = ((/* implicit */short) var_13);
}
