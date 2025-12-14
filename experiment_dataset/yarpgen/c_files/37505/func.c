/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37505
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37505 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37505
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
    var_13 = (signed char)-126;
    var_14 = ((/* implicit */signed char) max((var_14), (((/* implicit */signed char) (+(((((((/* implicit */_Bool) (signed char)-12)) ? (((/* implicit */int) (signed char)125)) : (((/* implicit */int) (signed char)125)))) & (((/* implicit */int) min((var_7), ((signed char)125)))))))))));
    var_15 |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */int) (signed char)-126)) >= (((/* implicit */int) var_4)))) ? (((/* implicit */int) var_5)) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_10))))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) var_6)) & (((/* implicit */int) var_12))))) ? (((/* implicit */int) ((((/* implicit */int) var_3)) == (((/* implicit */int) (signed char)-67))))) : (((/* implicit */int) min((var_4), ((signed char)122)))))) : (((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-115))))) ? ((~(((/* implicit */int) (signed char)103)))) : (((/* implicit */int) max(((signed char)-10), ((signed char)125))))))));
    var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) var_10))))) ? (((/* implicit */int) ((signed char) var_7))) : (((/* implicit */int) var_12))))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) ((signed char) ((signed char) (signed char)18)))))))));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) (((~(((/* implicit */int) min(((signed char)-107), ((signed char)84)))))) >= (((/* implicit */int) arr_0 [i_0]))));
        var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) var_12)))), (((/* implicit */int) arr_1 [(signed char)5]))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) var_10)) - (((/* implicit */int) arr_0 [i_0]))))) ? (((/* implicit */int) var_9)) : (((((/* implicit */int) arr_0 [i_0])) - (((/* implicit */int) var_11)))))) : (((/* implicit */int) arr_1 [(signed char)2]))));
        /* LoopSeq 3 */
        for (signed char i_1 = 4; i_1 < 16; i_1 += 3) 
        {
            /* LoopNest 2 */
            for (signed char i_2 = 4; i_2 < 16; i_2 += 2) 
            {
                for (signed char i_3 = 1; i_3 < 15; i_3 += 1) 
                {
                    {
                        var_18 = ((/* implicit */signed char) max((((/* implicit */int) var_8)), ((+(((/* implicit */int) (signed char)-67))))));
                        var_19 = ((signed char) arr_9 [(signed char)2] [(signed char)2] [i_2] [i_2] [(signed char)11]);
                        var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) (!(((/* implicit */_Bool) arr_4 [(signed char)16] [(signed char)16])))))));
                        var_21 |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) (signed char)127))) ? (((((/* implicit */_Bool) max((var_8), ((signed char)92)))) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (signed char)35)))) : (((/* implicit */int) var_7))));
                    }
                } 
            } 
            arr_11 [i_0] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) (!(((/* implicit */_Bool) arr_0 [i_0])))))) ? (((((/* implicit */_Bool) arr_7 [i_1] [i_1 - 1] [i_1 - 1] [i_1 + 1])) ? (((((/* implicit */_Bool) (signed char)64)) ? (((/* implicit */int) arr_5 [i_0])) : (((/* implicit */int) var_0)))) : (((/* implicit */int) ((((/* implicit */int) arr_4 [i_0] [i_1])) >= (((/* implicit */int) arr_8 [i_0]))))))) : (max((((/* implicit */int) arr_8 [i_1 - 4])), (((((/* implicit */int) var_7)) & (((/* implicit */int) arr_0 [(signed char)10]))))))));
        }
        for (signed char i_4 = 3; i_4 < 15; i_4 += 3) 
        {
            var_22 = ((/* implicit */signed char) min((var_22), (((signed char) (!(((/* implicit */_Bool) arr_10 [i_0] [(signed char)7])))))));
            var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) ((((/* implicit */_Bool) var_6)) ? (max((((/* implicit */int) arr_10 [i_0] [i_0])), (((((/* implicit */_Bool) arr_12 [i_0] [i_4 + 1])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (signed char)11)))))) : (((/* implicit */int) var_6)))))));
            var_24 = ((/* implicit */signed char) ((((/* implicit */int) (signed char)79)) >= (((/* implicit */int) (signed char)56))));
        }
        /* vectorizable */
        for (signed char i_5 = 0; i_5 < 17; i_5 += 3) 
        {
            var_25 |= ((/* implicit */signed char) (-(((/* implicit */int) arr_8 [i_5]))));
            var_26 = ((/* implicit */signed char) (+(((/* implicit */int) arr_12 [i_0] [i_5]))));
        }
        arr_18 [i_0] = ((/* implicit */signed char) ((((/* implicit */int) ((signed char) arr_3 [(signed char)15] [i_0]))) * ((~(((/* implicit */int) arr_3 [i_0] [i_0]))))));
    }
}
