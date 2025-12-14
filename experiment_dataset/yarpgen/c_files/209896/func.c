/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209896
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209896 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209896
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
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -1993628968)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), (((signed char) (unsigned short)61304))))))));
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 13; i_2 += 4) 
            {
                {
                    arr_8 [i_0] [(short)4] = ((/* implicit */long long int) var_2);
                    /* LoopSeq 3 */
                    for (short i_3 = 2; i_3 < 9; i_3 += 3) 
                    {
                        arr_12 [i_0] [i_0] [i_1] [(unsigned short)8] [12] [i_3] = ((/* implicit */int) ((unsigned short) (+(((/* implicit */int) arr_9 [i_3 - 1] [i_3] [i_3 - 1] [i_3] [i_3] [i_3])))));
                        arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)61304))));
                    }
                    for (signed char i_4 = 1; i_4 < 12; i_4 += 3) /* same iter space */
                    {
                        arr_16 [i_4] [i_2] [i_4] [i_4] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)4237)) ? (((/* implicit */int) (unsigned short)61310)) : (((((/* implicit */_Bool) (short)-30626)) ? (((/* implicit */int) (unsigned short)61310)) : (((/* implicit */int) (_Bool)1)))))))));
                        arr_17 [i_0] [i_1] [i_2] [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)(-127 - 1))) || (((/* implicit */_Bool) -3836915172894237886LL))));
                    }
                    for (signed char i_5 = 1; i_5 < 12; i_5 += 3) /* same iter space */
                    {
                        var_10 = ((/* implicit */short) (_Bool)1);
                        var_11 = ((((/* implicit */_Bool) 9223372036854775797LL)) ? (1799208454U) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) -1298181658)) >= (arr_11 [i_0] [i_1] [i_2] [i_5 + 1] [0] [8]))))));
                        var_12 = ((/* implicit */_Bool) min((min(((-(((/* implicit */int) (signed char)-35)))), (((((/* implicit */_Bool) 1982201459U)) ? (((/* implicit */int) (_Bool)0)) : (-886847206))))), ((~(((/* implicit */int) (unsigned short)10127))))));
                        var_13 = ((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0])) ? (((/* implicit */int) (unsigned short)4228)) : (((/* implicit */int) var_1)))) - (187742056)))) ? (max((((/* implicit */unsigned int) (signed char)107)), (1799208445U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) (-(((/* implicit */int) (unsigned short)4225)))))))));
                        arr_21 [i_0] [i_0] [i_5] [i_0] [(short)4] [i_0] = ((/* implicit */unsigned short) 886847187);
                    }
                }
            } 
        } 
    }
    var_14 = ((/* implicit */unsigned short) max(((-(2312765836U))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((-118521230) * (((/* implicit */int) var_4))))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_8)))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_8)))))))));
    var_15 = ((/* implicit */int) max((var_15), (((/* implicit */int) var_8))));
    var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) (+(max((min((((/* implicit */unsigned long long int) var_8)), (var_6))), (((/* implicit */unsigned long long int) min((var_1), (((/* implicit */signed char) var_4))))))))))));
}
