/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25593
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25593 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25593
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
    var_13 = ((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) ((_Bool) (~(-1775969487))))));
    var_14 = ((/* implicit */int) (!(((/* implicit */_Bool) min((((((/* implicit */long long int) ((/* implicit */int) var_12))) ^ (var_9))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_1))))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */signed char) (+(((/* implicit */int) arr_0 [i_0]))));
        var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_0 [i_0]))));
        /* LoopSeq 3 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            arr_5 [4LL] [4LL] &= ((/* implicit */unsigned char) ((((/* implicit */int) (signed char)15)) == (((/* implicit */int) var_11))));
            /* LoopNest 2 */
            for (short i_2 = 1; i_2 < 19; i_2 += 4) 
            {
                for (unsigned int i_3 = 0; i_3 < 20; i_3 += 2) 
                {
                    {
                        var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_0 [(signed char)5]))))) ? (((/* implicit */unsigned long long int) ((int) arr_6 [i_0]))) : (arr_10 [i_0] [i_2 - 1] [i_2 - 1] [i_2 - 1])));
                        var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)64)) ? (((/* implicit */int) arr_4 [i_0])) : (((/* implicit */int) arr_4 [i_0]))));
                        arr_11 [i_0] [i_1 - 1] [i_0] = ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) > (-9223372036854775793LL));
                    }
                } 
            } 
        }
        for (unsigned short i_4 = 2; i_4 < 18; i_4 += 1) 
        {
            arr_14 [i_0] [i_4] = ((/* implicit */_Bool) (+(arr_3 [i_0] [i_4 - 1] [i_4 - 2])));
            /* LoopNest 2 */
            for (unsigned char i_5 = 0; i_5 < 20; i_5 += 3) 
            {
                for (signed char i_6 = 0; i_6 < 20; i_6 += 3) 
                {
                    {
                        var_18 = ((/* implicit */short) -227988260);
                        var_19 = ((/* implicit */unsigned char) ((signed char) ((((/* implicit */_Bool) arr_6 [i_0])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_6)))));
                        arr_19 [i_0] [i_5] [i_5] [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((arr_9 [i_0]) ? (((/* implicit */int) var_8)) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_8)) : (var_4)))));
                        var_20 = ((/* implicit */int) max((var_20), (((arr_12 [(_Bool)0]) * (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_6])))))))));
                    }
                } 
            } 
        }
        for (unsigned char i_7 = 0; i_7 < 20; i_7 += 2) 
        {
            arr_22 [i_0] [i_7] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_12 [i_0]))));
            arr_23 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)124)) ? (((/* implicit */int) arr_9 [i_0])) : (((/* implicit */int) arr_20 [2U] [i_7] [i_7]))));
            arr_24 [i_7] [i_0] [(_Bool)1] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_18 [14] [i_0])) ? ((-(arr_3 [i_0] [i_0] [i_7]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_9))))))));
            var_21 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) arr_10 [i_0] [(short)12] [i_7] [i_7]))))) % (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-31719))) > (arr_17 [i_0] [i_0] [i_0] [i_0] [i_0]))))));
            var_22 = (((!(((/* implicit */_Bool) arr_12 [i_0])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_7]))) : (arr_3 [i_7] [i_0] [i_0]));
        }
        var_23 |= (~(((/* implicit */int) arr_15 [(unsigned char)4] [i_0])));
    }
}
