/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235845
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235845 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235845
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
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (unsigned char i_1 = 1; i_1 < 13; i_1 += 3) 
        {
            for (signed char i_2 = 3; i_2 < 14; i_2 += 2) 
            {
                {
                    var_15 = ((/* implicit */int) ((((/* implicit */_Bool) ((short) arr_4 [i_2 - 1]))) ? (min((((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) + (var_9))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)77))) : (3586660827U)))))) : (((((/* implicit */_Bool) arr_8 [i_1] [i_1 + 1] [i_0])) ? (((/* implicit */unsigned long long int) var_0)) : (4055543537791488240ULL)))));
                    arr_9 [i_1] = ((/* implicit */_Bool) var_5);
                    /* LoopSeq 2 */
                    for (long long int i_3 = 0; i_3 < 15; i_3 += 3) 
                    {
                        arr_12 [i_1] = ((long long int) ((long long int) var_14));
                        arr_13 [i_0] [i_1] [i_0] [i_1] = ((/* implicit */short) var_14);
                    }
                    for (short i_4 = 0; i_4 < 15; i_4 += 3) 
                    {
                        arr_18 [i_0] [i_1] [i_2] [i_2] [i_1] [i_4] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0] [0U] [i_4]))) : (9223372036854775785LL))) * (((/* implicit */long long int) ((int) 8236190141347050378LL)))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_0] [i_1 + 1] [i_2 - 3] [i_2 + 1] [i_4]))) / (var_9)))));
                        arr_19 [i_0] [i_1] [i_1] [i_1] = ((((/* implicit */unsigned int) (~(((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (unsigned short)34193)) : (((/* implicit */int) (short)(-32767 - 1)))))))) == ((~(max((var_14), (((/* implicit */unsigned int) var_0)))))));
                        var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [i_1] [i_2] [i_4]))) | (-9223372036854775780LL))) | (((/* implicit */long long int) (~(((/* implicit */int) var_7)))))))) ? (var_13) : (((((/* implicit */_Bool) min((((/* implicit */signed char) var_4)), ((signed char)62)))) ? (((/* implicit */long long int) 0U)) : ((~(var_6)))))));
                    }
                    var_17 = (signed char)107;
                    arr_20 [i_0] [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) arr_4 [i_2 - 3]))) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-1)))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned int) ((var_6) - (((/* implicit */long long int) ((/* implicit */int) (unsigned short)31343)))));
    var_19 *= ((/* implicit */_Bool) (((!(((/* implicit */_Bool) (short)32767)))) ? (((/* implicit */unsigned long long int) ((int) var_12))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) -811157536135206476LL)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_11))))) ? (((var_3) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)28185))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (short)(-32767 - 1)))))))));
}
