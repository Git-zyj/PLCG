/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200228
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200228 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200228
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
    var_12 = ((/* implicit */int) ((short) (short)-15389));
    var_13 = var_7;
    /* LoopSeq 4 */
    for (unsigned short i_0 = 1; i_0 < 21; i_0 += 4) /* same iter space */
    {
        var_14 = (short)-31686;
        var_15 = ((/* implicit */int) max((var_15), ((+((+(((/* implicit */int) min((var_6), ((short)15400))))))))));
    }
    for (unsigned short i_1 = 1; i_1 < 21; i_1 += 4) /* same iter space */
    {
        var_16 = ((/* implicit */unsigned char) (-(((/* implicit */int) (short)-31681))));
        var_17 = ((/* implicit */unsigned int) ((((((/* implicit */int) arr_1 [i_1 + 1])) != (((/* implicit */int) min((var_4), (((/* implicit */unsigned short) var_11))))))) ? ((~(((/* implicit */int) (short)-31686)))) : (((((/* implicit */_Bool) (short)512)) ? ((-(((/* implicit */int) arr_4 [i_1])))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_4 [i_1])) : (var_8)))))));
        arr_7 [i_1] = arr_0 [i_1];
    }
    /* vectorizable */
    for (unsigned short i_2 = 1; i_2 < 21; i_2 += 4) /* same iter space */
    {
        var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)31688)) ? (-6114626444509351811LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_11)))))));
        var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) 1551970643))));
        var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) (signed char)-105))));
    }
    /* vectorizable */
    for (unsigned short i_3 = 1; i_3 < 21; i_3 += 4) /* same iter space */
    {
        var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) var_9))));
        /* LoopNest 2 */
        for (unsigned short i_4 = 2; i_4 < 21; i_4 += 1) 
        {
            for (short i_5 = 0; i_5 < 22; i_5 += 3) 
            {
                {
                    var_22 += ((/* implicit */signed char) (-(((((/* implicit */int) var_11)) - (var_1)))));
                    var_23 = ((/* implicit */unsigned char) arr_9 [i_3] [i_3]);
                    var_24 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned int) 1494541623))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_3 + 1])) ? (arr_19 [(short)18]) : (((/* implicit */int) (short)-1))))) : ((+(arr_17 [i_3] [20LL])))));
                    var_25 = ((/* implicit */unsigned char) arr_5 [i_3 + 1]);
                }
            } 
        } 
        var_26 = ((/* implicit */unsigned short) ((((long long int) var_4)) != (((/* implicit */long long int) (-(((/* implicit */int) (short)3069)))))));
    }
    var_27 = ((/* implicit */short) max((var_27), (((/* implicit */short) max((((/* implicit */long long int) ((((/* implicit */_Bool) (-(588766931)))) ? (((((/* implicit */unsigned int) var_8)) * (4294967291U))) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))), (((((/* implicit */_Bool) (+(var_9)))) ? ((-(var_3))) : (((/* implicit */long long int) ((/* implicit */int) max(((unsigned short)45550), (((/* implicit */unsigned short) (unsigned char)161)))))))))))));
}
