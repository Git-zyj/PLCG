/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29233
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29233 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29233
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
    var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (min((((/* implicit */int) var_1)), (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_8)))))) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) != (((((/* implicit */_Bool) 9878282973841425595ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (var_2))))))));
    var_17 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((((/* implicit */int) (short)-11195)) < (((/* implicit */int) (short)11194))))), (var_14)))) < (min((((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (9878282973841425612ULL))), (((/* implicit */unsigned long long int) var_7))))));
    var_18 &= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) min(((signed char)(-127 - 1)), (((/* implicit */signed char) var_0))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_1))))))) ? (((((/* implicit */int) var_8)) - (((/* implicit */int) (!(((/* implicit */_Bool) var_14))))))) : (((/* implicit */int) var_1))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 3; i_0 < 14; i_0 += 2) 
    {
        arr_3 [i_0 + 1] = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (14402936834487979634ULL)))));
        var_19 = ((/* implicit */short) var_11);
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_9 [i_0] [i_1] [i_2] [i_2] = var_13;
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 3; i_3 < 14; i_3 += 3) 
                    {
                        for (short i_4 = 0; i_4 < 15; i_4 += 2) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned int) ((((((/* implicit */int) var_3)) >= (((/* implicit */int) min((((/* implicit */short) var_7)), ((short)11201)))))) ? ((~(((/* implicit */int) var_9)))) : (((/* implicit */int) arr_12 [i_0 - 1] [i_2]))));
                                var_21 = ((/* implicit */short) (((~(min((((/* implicit */unsigned long long int) var_5)), (8408340285016758508ULL))))) % (((/* implicit */unsigned long long int) (+(-4194304LL))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    for (unsigned long long int i_5 = 0; i_5 < 18; i_5 += 2) 
    {
        arr_19 [i_5] [(unsigned char)17] = ((/* implicit */short) 10068453142848360138ULL);
        var_22 *= ((/* implicit */_Bool) max((((/* implicit */unsigned int) (short)26966)), (3873549087U)));
        arr_20 [i_5] = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)195)));
        arr_21 [(unsigned char)7] = ((/* implicit */_Bool) ((long long int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_17 [i_5] [i_5])), (2570108891U)))))));
    }
}
