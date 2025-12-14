/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210772
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210772 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210772
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
    var_19 = ((/* implicit */unsigned int) (signed char)0);
    /* LoopSeq 1 */
    for (signed char i_0 = 3; i_0 < 23; i_0 += 4) 
    {
        var_20 *= ((/* implicit */signed char) (~((~(((/* implicit */int) min((arr_1 [i_0] [i_0]), (arr_2 [(signed char)10] [i_0 - 1]))))))));
        var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) ((unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (signed char)-64)), (var_18)))) ? (((/* implicit */int) ((((/* implicit */_Bool) (signed char)2)) && (((/* implicit */_Bool) arr_1 [i_0] [i_0]))))) : (((/* implicit */int) ((((/* implicit */int) arr_2 [i_0] [i_0])) != (((/* implicit */int) (signed char)(-127 - 1))))))))))));
        /* LoopNest 3 */
        for (unsigned int i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            for (unsigned int i_2 = 4; i_2 < 23; i_2 += 4) 
            {
                for (signed char i_3 = 0; i_3 < 25; i_3 += 1) 
                {
                    {
                        /* LoopSeq 4 */
                        for (signed char i_4 = 0; i_4 < 25; i_4 += 2) 
                        {
                            var_22 = ((/* implicit */unsigned int) min((var_22), ((~(2801105613U)))));
                            var_23 *= ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) (signed char)-8))))), (((((/* implicit */_Bool) (signed char)-23)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1]))) : (arr_13 [i_0] [i_0] [i_2] [i_0 + 2] [i_0 + 2] [i_0] [(signed char)14])))))) ? (((((/* implicit */_Bool) arr_0 [i_0])) ? (((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)23))) : (2912975414U))) : (((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)0))))))) : (arr_11 [i_4] [i_1] [i_2] [i_2]));
                        }
                        for (signed char i_5 = 1; i_5 < 24; i_5 += 2) 
                        {
                            var_24 = ((/* implicit */unsigned int) max((var_24), ((-(arr_13 [i_0] [i_1] [i_2] [i_3] [i_3] [i_1] [i_0 - 1])))));
                            var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_15 [i_0 - 2] [i_1] [i_2 - 2] [i_3] [17U] [i_3]))))) || (((/* implicit */_Bool) ((unsigned int) arr_14 [i_2 - 2] [i_3] [i_5] [(signed char)16] [i_5] [i_5 + 1])))));
                        }
                        for (signed char i_6 = 0; i_6 < 25; i_6 += 3) 
                        {
                            arr_18 [i_0] [i_1] [i_3] [i_3] = ((/* implicit */signed char) ((((((/* implicit */unsigned int) (-(((/* implicit */int) arr_3 [i_0] [i_0]))))) == (min((1381991882U), (((/* implicit */unsigned int) (signed char)0)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) (!(((/* implicit */_Bool) arr_3 [i_6] [i_2 - 3]))))))) : (min((((/* implicit */unsigned int) ((((/* implicit */int) var_7)) % (((/* implicit */int) arr_3 [i_3] [i_1]))))), (arr_13 [i_0 - 2] [i_2] [i_3] [i_3] [i_6] [i_2] [i_6])))));
                            arr_19 [i_0] [i_1] [i_1] [i_2 - 3] [i_1] [i_3] [(signed char)14] = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_17 [(signed char)17] [(signed char)17] [i_2 - 4] [i_2] [i_2 - 4] [i_6] [i_6])) : (((/* implicit */int) var_0))))));
                        }
                        /* vectorizable */
                        for (unsigned int i_7 = 0; i_7 < 25; i_7 += 4) 
                        {
                            var_26 = ((/* implicit */signed char) 1878088896U);
                            arr_22 [i_3] [23U] [i_3] = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_2 [i_0] [i_0]))));
                            var_27 += ((/* implicit */signed char) (-((+(((/* implicit */int) (signed char)-112))))));
                            var_28 = ((/* implicit */signed char) min((var_28), (((/* implicit */signed char) var_9))));
                        }
                        var_29 = ((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)-9))));
                        var_30 ^= ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_20 [i_1] [i_2]) - (var_16)))) ? (((((/* implicit */int) (signed char)23)) & (((/* implicit */int) arr_5 [i_0 - 1] [i_0 - 3] [i_0 - 1] [i_0])))) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_12))) != (arr_13 [i_3] [i_3] [i_2] [i_2] [i_2] [i_0 + 2] [i_0]))))))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) arr_1 [0U] [0U]))))) : (min((max((1381991867U), (((/* implicit */unsigned int) (signed char)-16)))), (((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)58))))))));
                        arr_23 [i_3] = ((/* implicit */unsigned int) (signed char)-125);
                    }
                } 
            } 
        } 
    }
    var_31 = ((/* implicit */signed char) ((unsigned int) (signed char)0));
}
