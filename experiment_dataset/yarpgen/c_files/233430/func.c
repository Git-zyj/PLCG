/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233430
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233430 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233430
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
    var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_2)) + ((-(((/* implicit */int) (unsigned short)65529))))));
    var_15 = max((min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-57)) ? (((/* implicit */int) var_3)) : (1844862989)))), (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)57))) * (var_6))))), (((/* implicit */unsigned long long int) ((short) ((((/* implicit */int) var_9)) + (((/* implicit */int) (short)-26962)))))));
    var_16 = ((/* implicit */short) (~(((((((/* implicit */_Bool) -155616999)) ? (11608759047180703649ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)0))))) + (((/* implicit */unsigned long long int) ((long long int) var_0)))))));
    /* LoopSeq 4 */
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        var_17 = ((/* implicit */unsigned char) ((((/* implicit */long long int) (+(((/* implicit */int) ((unsigned char) -1844863002)))))) * (((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) / (max((arr_0 [i_0]), (arr_0 [i_0])))))));
        var_18 -= min((((/* implicit */unsigned long long int) 389436252)), (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (-2817909721815076522LL) : (var_12)))) / (((((/* implicit */unsigned long long int) 17179868928LL)) * (1261967006750423728ULL))))));
        var_19 = min((((/* implicit */unsigned int) arr_1 [i_0])), (((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)24)) ? (-246415041) : (-246415041)))) + (var_7))));
    }
    for (int i_1 = 1; i_1 < 10; i_1 += 3) 
    {
        var_20 = ((/* implicit */long long int) ((((/* implicit */int) (signed char)96)) / (((/* implicit */int) (unsigned short)40179))));
        var_21 |= ((/* implicit */unsigned int) ((((/* implicit */int) arr_4 [10])) / (((((/* implicit */_Bool) ((((/* implicit */int) (signed char)48)) / (((/* implicit */int) (unsigned char)115))))) ? (((-389436259) - (((/* implicit */int) var_1)))) : (((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), ((signed char)-17))))))));
    }
    /* vectorizable */
    for (unsigned char i_2 = 2; i_2 < 17; i_2 += 4) /* same iter space */
    {
        var_22 = ((/* implicit */unsigned short) ((((/* implicit */long long int) 581918285)) / (-2817909721815076502LL)));
        var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -246415041)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)56810))) : (var_12)))) ? (((((/* implicit */int) (unsigned char)112)) * (((/* implicit */int) var_2)))) : (((((/* implicit */_Bool) (short)10801)) ? (703314644) : (((/* implicit */int) arr_6 [i_2] [i_2]))))));
    }
    /* vectorizable */
    for (unsigned char i_3 = 2; i_3 < 17; i_3 += 4) /* same iter space */
    {
        var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_9 [i_3 - 2] [i_3])))))));
        var_25 = ((/* implicit */unsigned short) 4559433893566057381LL);
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 18; i_4 += 3) 
        {
            for (short i_5 = 1; i_5 < 15; i_5 += 3) 
            {
                {
                    var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned short) arr_14 [i_3] [(unsigned short)11] [i_5]))) ? (((/* implicit */int) var_1)) : ((-(1006632960)))));
                    var_27 = (+(((/* implicit */int) var_10)));
                }
            } 
        } 
        var_28 = ((/* implicit */int) min((var_28), (((/* implicit */int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((((/* implicit */int) var_0)) - (((/* implicit */int) var_5))))) : (((long long int) var_6)))))));
    }
}
