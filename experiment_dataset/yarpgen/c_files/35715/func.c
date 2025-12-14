/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35715
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35715 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35715
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
    var_11 = ((/* implicit */unsigned char) min((var_11), (((/* implicit */unsigned char) ((((((/* implicit */_Bool) (~(((/* implicit */int) var_6))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_6))))) : (((((/* implicit */_Bool) -16429319)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (1676152880263074284LL))))) % (((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1))))))))));
    var_12 = ((/* implicit */unsigned char) var_0);
    var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned char) (((_Bool)1) ? (var_7) : (((/* implicit */int) (signed char)127)))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65513))) : (var_1)));
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_1 = 2; i_1 < 18; i_1 += 3) 
        {
            arr_7 [i_1] = ((/* implicit */unsigned char) var_4);
            arr_8 [i_0] [i_1] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */int) var_8)), (arr_4 [i_1 - 1])))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : ((-(arr_1 [i_1] [i_1])))))) ? (((/* implicit */int) arr_3 [i_0])) : (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)49552)) * (((/* implicit */int) var_6))))) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) arr_3 [i_1])))));
        }
        var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((max((arr_3 [i_0]), (arr_0 [i_0]))), (arr_3 [i_0])))) && (((/* implicit */_Bool) min((34179582U), (((unsigned int) (short)-24040)))))));
    }
    /* vectorizable */
    for (unsigned short i_2 = 1; i_2 < 24; i_2 += 4) /* same iter space */
    {
        var_15 *= ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) var_10))))) ? (((/* implicit */int) ((((/* implicit */int) arr_11 [i_2] [i_2 - 1])) == (((/* implicit */int) var_10))))) : (((398753272) + (((/* implicit */int) arr_10 [i_2] [i_2 + 1]))))));
        var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) (-((+(((/* implicit */int) arr_10 [i_2] [(_Bool)1])))))))));
        /* LoopNest 2 */
        for (unsigned char i_3 = 0; i_3 < 25; i_3 += 4) 
        {
            for (unsigned char i_4 = 1; i_4 < 22; i_4 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 0; i_5 < 25; i_5 += 4) 
                    {
                        for (unsigned char i_6 = 0; i_6 < 25; i_6 += 1) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned short) arr_21 [i_2] [i_3]);
                                arr_23 [i_2] [i_4] = (+((+(4294967295U))));
                            }
                        } 
                    } 
                    var_18 = ((/* implicit */short) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_2 - 1]))) : (((((var_1) + (9223372036854775807LL))) << (((1170105531U) - (1170105531U)))))));
                    arr_24 [i_4] [i_4] = ((/* implicit */short) var_1);
                }
            } 
        } 
        var_19 = ((/* implicit */long long int) 3605260687U);
    }
    for (unsigned short i_7 = 1; i_7 < 24; i_7 += 4) /* same iter space */
    {
        var_20 = ((/* implicit */long long int) (~(((((_Bool) 3782185488U)) ? (((/* implicit */int) ((((/* implicit */int) arr_10 [i_7] [i_7])) < (((/* implicit */int) var_6))))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_10))))))));
        var_21 = ((/* implicit */short) max((var_21), (var_0)));
        var_22 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) var_2))) / (((((/* implicit */unsigned int) ((/* implicit */int) var_5))) + (((((/* implicit */_Bool) 2158257062U)) ? (arr_12 [i_7] [i_7]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_7] [i_7] [i_7])))))))));
        var_23 = ((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) max(((unsigned short)65513), (((/* implicit */unsigned short) (signed char)-8))))))))));
    }
}
