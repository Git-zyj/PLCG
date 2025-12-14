/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51200
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51200 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51200
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
    var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_13)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_1))))) : ((-((-(((/* implicit */int) (unsigned char)0)))))))))));
    var_21 = ((/* implicit */unsigned int) max((var_21), (((max((((((/* implicit */_Bool) var_1)) ? (732878129U) : (((/* implicit */unsigned int) ((/* implicit */int) var_15))))), ((~(var_13))))) >> (((max((((/* implicit */int) min((((/* implicit */short) var_9)), ((short)8192)))), (((((/* implicit */int) var_5)) + (((/* implicit */int) var_2)))))) - (4473)))))));
    var_22 = ((/* implicit */short) ((max((((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))) : (var_13))), (((/* implicit */unsigned int) (-(((/* implicit */int) (short)-1))))))) - (((/* implicit */unsigned int) ((/* implicit */int) var_14)))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_1 [0ULL] [i_0])) : (((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))));
        /* LoopNest 3 */
        for (unsigned int i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 20; i_2 += 2) 
            {
                for (unsigned int i_3 = 2; i_3 < 19; i_3 += 2) 
                {
                    {
                        var_23 = ((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */long long int) (-(((/* implicit */int) arr_2 [i_0]))))) : (((((/* implicit */_Bool) arr_7 [i_3] [(unsigned char)4] [i_3] [i_3])) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (arr_11 [i_3] [14ULL] [i_3] [i_3] [i_3 - 1] [i_3])))));
                        var_24 &= ((((((/* implicit */_Bool) arr_11 [i_3] [i_3] [i_3 - 2] [i_3 + 1] [i_3 - 1] [i_3])) ? (((/* implicit */int) max((((/* implicit */short) (unsigned char)0)), ((short)252)))) : (((/* implicit */int) (!(((/* implicit */_Bool) 10905023036317518234ULL))))))) * (((/* implicit */int) var_14)));
                        /* LoopSeq 1 */
                        for (unsigned int i_4 = 2; i_4 < 19; i_4 += 2) 
                        {
                            var_25 = ((/* implicit */unsigned long long int) min((var_25), (((/* implicit */unsigned long long int) var_15))));
                            arr_16 [i_4] [(_Bool)1] [i_2] [i_1] [(unsigned short)19] [i_0] = ((/* implicit */signed char) (+(((((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), (arr_7 [i_0] [i_1] [i_2] [i_4]))))) % (max((((/* implicit */unsigned long long int) (unsigned short)65535)), (var_4)))))));
                            var_26 *= ((/* implicit */long long int) ((((/* implicit */int) var_12)) / (arr_12 [i_0] [i_0] [i_1] [i_2] [i_2] [i_3] [i_4])));
                        }
                    }
                } 
            } 
        } 
        var_27 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_11 [i_0] [i_0] [(_Bool)1] [i_0] [i_0] [(unsigned short)2])))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))) : ((+(arr_9 [i_0] [(unsigned short)0] [i_0] [i_0]))))))));
        var_28 = ((/* implicit */signed char) max((((((/* implicit */_Bool) max((((/* implicit */int) arr_7 [i_0] [(signed char)11] [i_0] [i_0])), (arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0]))) : (532833230U))), (((/* implicit */unsigned int) (~(((/* implicit */int) var_2)))))));
    }
    var_29 = ((/* implicit */short) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */unsigned long long int) (+(var_19)))) : (((((/* implicit */_Bool) (-(4292907051415328203LL)))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_8))))) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) var_1)) : (var_4)))))));
}
