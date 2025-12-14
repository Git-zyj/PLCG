/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206719
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206719 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206719
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
    var_14 |= ((/* implicit */unsigned short) ((min((((((/* implicit */int) var_4)) / (var_2))), (((/* implicit */int) var_6)))) / (max((8191), (((/* implicit */int) ((var_12) > (-8191))))))));
    var_15 = ((/* implicit */short) (!((!(((/* implicit */_Bool) (signed char)24))))));
    var_16 = ((/* implicit */long long int) max((var_10), (min((((/* implicit */int) var_1)), (max((8203), (var_2)))))));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (short i_1 = 1; i_1 < 22; i_1 += 1) 
        {
            /* LoopNest 3 */
            for (unsigned int i_2 = 0; i_2 < 23; i_2 += 1) 
            {
                for (signed char i_3 = 1; i_3 < 22; i_3 += 1) 
                {
                    for (int i_4 = 0; i_4 < 23; i_4 += 1) 
                    {
                        {
                            var_17 = ((/* implicit */unsigned short) min((((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) arr_1 [i_4] [i_1])))) | (((((/* implicit */int) (unsigned char)252)) + (((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))))), (min((((((/* implicit */_Bool) 0U)) ? (576250446) : (var_2))), (((/* implicit */int) (!(((/* implicit */_Bool) 8213)))))))));
                            arr_15 [i_0] [i_1] [i_2] [i_2] [i_3] [i_1] [(unsigned short)13] = ((((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) var_6)))) ? (((/* implicit */int) arr_3 [i_3 - 1])) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_1 + 1] [i_1 - 1] [i_1 - 1] [i_1 - 1]))))));
                        }
                    } 
                } 
            } 
            arr_16 [i_0] [(short)18] |= ((/* implicit */long long int) (unsigned short)10);
            var_18 += (+(((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -8191)) ? (arr_7 [i_0] [i_0] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)113)))))) || (((/* implicit */_Bool) ((((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [(unsigned short)4])) % (((/* implicit */int) (short)17754)))))))));
            arr_17 [i_1] [i_1] [i_1] = ((/* implicit */signed char) min(((~(((int) (short)-19610)))), (((((/* implicit */int) ((((/* implicit */_Bool) arr_13 [i_0] [1LL] [i_0] [i_1])) || (((/* implicit */_Bool) (signed char)1))))) & (((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))))));
        }
        var_19 = ((/* implicit */unsigned char) (~(((/* implicit */int) (signed char)113))));
    }
}
