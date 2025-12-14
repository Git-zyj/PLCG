/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44505
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44505 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44505
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
    var_20 = ((((/* implicit */_Bool) ((var_17) << (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)47689)))))))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_9)));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)18)) ? (arr_0 [0U]) : (((/* implicit */int) ((var_19) <= (arr_1 [i_0])))))))));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 11; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_3 = 0; i_3 < 11; i_3 += 1) 
                    {
                        var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) arr_4 [i_0] [10ULL]))));
                        var_23 = ((/* implicit */short) (~(((arr_6 [i_0]) >> (((/* implicit */int) (_Bool)0))))));
                        arr_10 [i_2] [i_0] [1ULL] [i_3] [i_1] = ((unsigned int) min((((/* implicit */int) max(((unsigned short)31016), ((unsigned short)62836)))), ((~(((/* implicit */int) var_11))))));
                        arr_11 [i_0] = max((((731433289U) - (((/* implicit */unsigned int) (-(((/* implicit */int) arr_3 [i_0]))))))), (((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */int) (signed char)61)) <= (((/* implicit */int) (unsigned short)48903)))))))));
                    }
                    var_24 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_0 [(_Bool)0])) ? (((/* implicit */unsigned long long int) ((((-7997946441204126903LL) + (9223372036854775807LL))) >> (((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [(unsigned short)6])))))))) : (var_8)));
                }
            } 
        } 
        var_25 = ((/* implicit */long long int) ((signed char) arr_2 [i_0]));
        /* LoopSeq 1 */
        for (int i_4 = 1; i_4 < 8; i_4 += 3) 
        {
            var_26 = ((/* implicit */_Bool) var_18);
            arr_15 [i_0] [i_0] [i_0] = ((/* implicit */signed char) (+((~(((arr_3 [i_4]) ? (arr_12 [i_0] [i_0]) : (var_8)))))));
            var_27 ^= ((/* implicit */_Bool) (~(1050676676)));
        }
        var_28 = ((/* implicit */unsigned char) ((arr_6 [i_0]) | ((((-(9700983900455008549ULL))) / (((/* implicit */unsigned long long int) max((1980168912U), (((/* implicit */unsigned int) (_Bool)1)))))))));
    }
    var_29 = ((/* implicit */short) ((((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) ((5611974557461067494ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_15)))))) : (((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) var_18))))))) % (max((var_7), (((/* implicit */int) min((var_10), (((/* implicit */signed char) var_4)))))))));
}
