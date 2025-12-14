/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29069
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29069 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29069
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
    var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) var_2))))) ? (((/* implicit */int) var_14)) : (min(((+(8380416))), (((/* implicit */int) max((((/* implicit */unsigned short) (short)13)), (var_8))))))));
    var_16 = ((/* implicit */short) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (short)-13))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 10643964873028814355ULL)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned short)0))))) ? (((((/* implicit */_Bool) 5349894651613999409ULL)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) var_5)))) : (((/* implicit */int) arr_0 [i_0] [i_0]))));
        var_17 = ((/* implicit */_Bool) arr_0 [i_0] [i_0]);
        arr_3 [i_0] [i_0] = ((/* implicit */long long int) arr_1 [i_0]);
        var_18 = ((/* implicit */short) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) arr_0 [i_0] [i_0]))));
    }
    for (short i_1 = 0; i_1 < 17; i_1 += 1) 
    {
        arr_6 [i_1] [i_1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_1])) ? (arr_5 [i_1]) : (((/* implicit */int) var_9)))))));
        var_19 &= ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) (short)-32739)) ? (arr_5 [i_1]) : (((/* implicit */int) var_12))))))) ? (((/* implicit */unsigned long long int) max((((((/* implicit */int) (signed char)49)) % (((/* implicit */int) arr_4 [i_1] [i_1])))), (((((/* implicit */_Bool) (unsigned short)2047)) ? (((/* implicit */int) (short)-29906)) : (arr_5 [i_1])))))) : ((+(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1] [i_1]))) / (6691099498250830215ULL)))))));
        var_20 = ((/* implicit */short) max(((_Bool)1), ((_Bool)0)));
        /* LoopNest 3 */
        for (short i_2 = 0; i_2 < 17; i_2 += 2) 
        {
            for (int i_3 = 0; i_3 < 17; i_3 += 4) 
            {
                for (unsigned int i_4 = 2; i_4 < 14; i_4 += 3) 
                {
                    {
                        arr_15 [i_1] [(short)16] [i_3] [i_3] [i_3] [(_Bool)1] = ((/* implicit */int) ((((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) arr_4 [(short)10] [i_4 - 2])) ? (((/* implicit */int) arr_7 [i_1] [i_2])) : (((/* implicit */int) arr_11 [i_1] [i_3] [i_3])))))) || (((/* implicit */_Bool) max((((/* implicit */int) var_9)), (((((/* implicit */_Bool) arr_10 [i_1] [i_2])) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) arr_12 [i_1] [5ULL] [(short)13] [i_4])))))))));
                        arr_16 [i_1] [i_2] = ((/* implicit */unsigned short) ((short) ((((/* implicit */_Bool) (unsigned short)31)) ? (((/* implicit */int) (short)-21715)) : (((/* implicit */int) (short)18591)))));
                        var_21 += ((/* implicit */short) var_13);
                        var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) 63U))));
                    }
                } 
            } 
        } 
    }
    var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((var_12) ? (((/* implicit */int) var_7)) : ((+(((/* implicit */int) var_8))))))) ? (((/* implicit */int) var_5)) : ((+(((/* implicit */int) var_8)))))))));
    var_24 = ((/* implicit */short) (+((~(((/* implicit */int) max((var_1), (((/* implicit */short) var_4)))))))));
}
