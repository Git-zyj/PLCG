/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20471
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20471 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20471
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
    var_12 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */int) (signed char)-71)) : (((/* implicit */int) var_2))));
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        var_13 = ((/* implicit */signed char) ((((((/* implicit */int) var_2)) != (((((/* implicit */_Bool) (signed char)-42)) ? (((/* implicit */int) (signed char)-32)) : (((/* implicit */int) (signed char)-18)))))) ? (((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-97))))) == (((/* implicit */int) (signed char)-111))))) : (((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) var_11)))) & (((/* implicit */int) var_4))))));
        arr_3 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) var_11)) != (((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_2)))) ^ (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)0)))))))));
        /* LoopNest 3 */
        for (signed char i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 18; i_2 += 4) 
            {
                for (signed char i_3 = 0; i_3 < 18; i_3 += 1) 
                {
                    {
                        /* LoopSeq 2 */
                        for (signed char i_4 = 2; i_4 < 15; i_4 += 4) 
                        {
                            var_14 = ((/* implicit */signed char) (-(((/* implicit */int) var_3))));
                            arr_14 [i_2] [i_0] [i_2] [i_2] = (i_0 % 2 == 0) ? (((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */int) arr_7 [i_0] [i_4 + 1] [i_2] [i_0])) + (2147483647))) << (((((/* implicit */int) arr_2 [i_0] [i_4 - 1])) - (109)))))) ? (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) (signed char)-32)) ? (((/* implicit */int) arr_2 [i_0] [i_0])) : (((/* implicit */int) var_8)))))) : ((-(((/* implicit */int) ((signed char) var_1)))))))) : (((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */int) arr_7 [i_0] [i_4 + 1] [i_2] [i_0])) + (2147483647))) << (((((((((/* implicit */int) arr_2 [i_0] [i_4 - 1])) - (109))) + (173))) - (19)))))) ? (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) (signed char)-32)) ? (((/* implicit */int) arr_2 [i_0] [i_0])) : (((/* implicit */int) var_8)))))) : ((-(((/* implicit */int) ((signed char) var_1))))))));
                            arr_15 [i_0] [i_0] [i_1] [(signed char)13] [i_0] [i_3] [i_4 - 1] = ((/* implicit */signed char) (((!(((((/* implicit */int) var_9)) > (((/* implicit */int) (signed char)-54)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)54))))) : ((-(((/* implicit */int) (signed char)-112))))));
                        }
                        for (signed char i_5 = 0; i_5 < 18; i_5 += 1) 
                        {
                            var_15 = ((/* implicit */signed char) min((var_15), (var_0)));
                            arr_18 [i_0] [i_0] = arr_10 [i_1] [i_0];
                            var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) (~(((/* implicit */int) ((signed char) arr_0 [i_5] [i_1]))))))));
                            arr_19 [(signed char)1] [i_1] [(signed char)5] [(signed char)5] [i_0] = arr_7 [i_0] [i_1] [i_2] [i_0];
                            var_17 *= ((/* implicit */signed char) ((((/* implicit */int) (signed char)37)) / (((/* implicit */int) (signed char)76))));
                        }
                        var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) (+(((/* implicit */int) ((signed char) arr_6 [i_0] [i_2] [i_2]))))))));
                        var_19 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)32)) ? (((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_0] [i_0] [i_3])) ? (((/* implicit */int) (signed char)96)) : (((/* implicit */int) var_9)))) : ((~(((/* implicit */int) arr_16 [i_0] [(signed char)9] [(signed char)9] [i_3])))))))));
                    }
                } 
            } 
        } 
        var_20 = (signed char)124;
        arr_20 [i_0] = ((/* implicit */signed char) ((((/* implicit */int) var_9)) * (((/* implicit */int) ((signed char) (!(((/* implicit */_Bool) var_9))))))));
    }
    for (signed char i_6 = 0; i_6 < 25; i_6 += 1) 
    {
        arr_25 [(signed char)1] [(signed char)1] = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) (signed char)-83)) < (((/* implicit */int) (signed char)-115))))) < (((/* implicit */int) var_0))))) * (max((((/* implicit */int) arr_21 [i_6])), ((+(((/* implicit */int) var_11))))))));
        arr_26 [i_6] = (signed char)-126;
        arr_27 [(signed char)0] = ((/* implicit */signed char) ((((/* implicit */int) max((arr_23 [i_6]), ((signed char)89)))) != (((/* implicit */int) var_7))));
    }
}
