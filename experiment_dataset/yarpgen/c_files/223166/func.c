/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223166
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223166 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223166
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
    var_18 = ((/* implicit */_Bool) var_1);
    /* LoopSeq 1 */
    for (unsigned int i_0 = 4; i_0 < 14; i_0 += 4) 
    {
        var_19 ^= ((/* implicit */short) ((((((/* implicit */_Bool) (-(251155302U)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(arr_1 [i_0] [i_0]))))) : (var_14))) + (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? ((+(33554416U))) : (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)93))))))))));
        /* LoopNest 2 */
        for (short i_1 = 1; i_1 < 15; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 16; i_2 += 3) 
            {
                {
                    arr_6 [i_1] [i_2] [i_2] = ((/* implicit */long long int) (-((-(((/* implicit */int) max(((unsigned char)0), (((/* implicit */unsigned char) (_Bool)1)))))))));
                    /* LoopSeq 1 */
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                    {
                        arr_11 [i_2] [i_2] [i_1] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)106)) & (((/* implicit */int) (unsigned char)148))))) ? (((/* implicit */int) (unsigned char)91)) : (((/* implicit */int) (!(((/* implicit */_Bool) ((var_11) ? (560295318U) : (3734671995U)))))))));
                        var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) ((((((((/* implicit */int) (unsigned char)169)) >> (((((/* implicit */int) arr_5 [(_Bool)1] [i_1] [9U] [(unsigned short)10])) - (28686))))) & (((/* implicit */int) ((arr_4 [i_0] [i_0] [i_2] [i_3]) == (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))))))) > (((/* implicit */int) var_13)))))));
                    }
                }
            } 
        } 
        /* LoopNest 2 */
        for (long long int i_4 = 3; i_4 < 15; i_4 += 3) 
        {
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                {
                    var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [(_Bool)1] [i_0] [(unsigned char)11] [i_0 - 1])) ? (max((var_8), (((/* implicit */unsigned long long int) var_16)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0 - 2] [(signed char)8] [(unsigned short)8] [(signed char)1] [i_4 - 3] [i_4 - 3])))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (((((_Bool)0) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (4244262875U))) > (((/* implicit */unsigned int) ((2147483647) * (((/* implicit */int) (_Bool)0))))))))) : (((arr_15 [(_Bool)0] [12] [i_0]) ? (((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1))))) : (arr_8 [0U] [i_0] [i_0] [(signed char)4] [i_5] [0U]))))))));
                    var_22 = ((/* implicit */unsigned char) (((-(((/* implicit */int) arr_2 [i_0 - 1])))) == (((((/* implicit */int) arr_0 [i_0 - 1])) - (((/* implicit */int) (_Bool)1))))));
                    arr_16 [i_4] [9LL] = ((/* implicit */unsigned int) (((_Bool)1) ? (((((long long int) var_4)) - ((+(-777628636523415176LL))))) : (((/* implicit */long long int) ((/* implicit */int) (((+(((/* implicit */int) (short)10187)))) > (var_17)))))));
                    arr_17 [i_0] [(short)14] [i_5] [i_4] = ((/* implicit */long long int) ((min((((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) var_17)) >= (var_14)))), ((-(6189012643159555422ULL))))) << (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) max(((unsigned char)233), (((/* implicit */unsigned char) arr_0 [(_Bool)1])))))) != (((arr_9 [3ULL] [3ULL] [(_Bool)1] [i_4] [(_Bool)1]) % (((/* implicit */unsigned long long int) var_0)))))))));
                    var_23 += ((((/* implicit */_Bool) var_12)) ? ((((((-9223372036854775807LL - 1LL)) > (((/* implicit */long long int) ((/* implicit */int) (short)-25093))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_13)) == (var_2))))) : (min((var_14), (((/* implicit */unsigned long long int) arr_0 [i_5])))))) : (((/* implicit */unsigned long long int) ((((((/* implicit */int) var_11)) < (((/* implicit */int) (_Bool)0)))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) (short)26560))))) : (var_3)))));
                }
            } 
        } 
    }
}
