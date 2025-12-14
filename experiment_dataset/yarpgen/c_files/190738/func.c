/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190738
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190738 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190738
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
    /* LoopSeq 4 */
    for (signed char i_0 = 1; i_0 < 10; i_0 += 4) /* same iter space */
    {
        var_10 = ((/* implicit */signed char) ((var_0) ? ((~(((/* implicit */int) arr_1 [i_0])))) : (((((/* implicit */_Bool) ((((/* implicit */int) var_0)) * (((/* implicit */int) arr_0 [i_0] [(signed char)4]))))) ? (((/* implicit */int) max(((signed char)31), ((signed char)46)))) : (((/* implicit */int) var_0))))));
        /* LoopNest 3 */
        for (signed char i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            for (signed char i_2 = 1; i_2 < 10; i_2 += 4) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        var_11 = ((/* implicit */_Bool) ((((((/* implicit */int) arr_5 [i_1] [i_0] [i_1] [i_2 - 1])) == (((/* implicit */int) var_1)))) ? (((/* implicit */int) arr_4 [i_1])) : (((/* implicit */int) var_7))));
                        var_12 -= ((/* implicit */_Bool) (+(((/* implicit */int) arr_7 [(signed char)10] [(signed char)6] [(signed char)10]))));
                    }
                } 
            } 
        } 
        var_13 = ((/* implicit */signed char) arr_8 [(_Bool)1] [i_0] [i_0 + 1] [i_0] [i_0]);
        var_14 = ((/* implicit */signed char) ((((var_5) ? (((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), ((signed char)-97)))) : (((/* implicit */int) arr_7 [(signed char)8] [i_0 + 3] [(signed char)8])))) * (((/* implicit */int) min(((_Bool)1), (((((/* implicit */int) (signed char)107)) >= (((/* implicit */int) (_Bool)1)))))))));
        var_15 = (_Bool)1;
    }
    for (signed char i_4 = 1; i_4 < 10; i_4 += 4) /* same iter space */
    {
        var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) max((((((/* implicit */_Bool) (~(((/* implicit */int) var_1))))) ? ((~(((/* implicit */int) var_5)))) : (((/* implicit */int) var_0)))), (((/* implicit */int) max(((signed char)53), (arr_1 [i_4 - 1])))))))));
        var_17 -= ((/* implicit */_Bool) min((((((/* implicit */_Bool) min((arr_1 [i_4 - 1]), (((/* implicit */signed char) arr_5 [(signed char)6] [i_4] [i_4] [i_4]))))) ? (((/* implicit */int) (!(var_1)))) : (((/* implicit */int) ((((/* implicit */int) arr_10 [i_4 + 3])) > (((/* implicit */int) arr_8 [i_4] [i_4] [(_Bool)1] [i_4 + 1] [i_4]))))))), (((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))));
    }
    for (signed char i_5 = 1; i_5 < 21; i_5 += 2) 
    {
        /* LoopNest 3 */
        for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
        {
            for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
            {
                for (signed char i_8 = 0; i_8 < 23; i_8 += 4) 
                {
                    {
                        var_18 = ((/* implicit */_Bool) max((arr_16 [i_5] [i_5]), (((/* implicit */signed char) ((((/* implicit */int) arr_20 [i_7 + 1] [i_6] [i_5] [i_6 + 1])) == (((/* implicit */int) var_4)))))));
                        var_19 = ((/* implicit */signed char) (~(((((((/* implicit */_Bool) arr_19 [i_5] [i_6] [i_7] [i_7])) ? (((/* implicit */int) arr_19 [i_5] [i_6] [i_7 + 1] [i_8])) : (((/* implicit */int) var_5)))) | ((((_Bool)1) ? (((/* implicit */int) arr_13 [i_5])) : (((/* implicit */int) (_Bool)1))))))));
                        /* LoopSeq 1 */
                        for (_Bool i_9 = 0; i_9 < 0; i_9 += 1) 
                        {
                            arr_25 [i_5] [i_5] [i_7 + 1] [i_5] [i_9 + 1] = max((max((arr_15 [i_8] [i_6 + 1] [i_5]), (((((/* implicit */_Bool) (signed char)-38)) && ((_Bool)1))))), ((!((!(((/* implicit */_Bool) arr_14 [i_5] [i_6])))))));
                            arr_26 [i_5] [i_7] = ((/* implicit */_Bool) (+(((/* implicit */int) (signed char)70))));
                        }
                        arr_27 [i_5 + 1] [i_6 + 1] [i_7 + 1] [i_8] [i_5] = ((/* implicit */signed char) max((((((/* implicit */int) arr_23 [i_5 + 2] [i_5 + 1] [i_5] [i_6 + 1] [i_7 + 1] [i_8])) >= (((/* implicit */int) var_6)))), (min((arr_21 [i_5] [i_5] [i_5 - 1] [i_5] [i_5]), ((!((_Bool)1)))))));
                    }
                } 
            } 
        } 
        var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) (_Bool)1))));
        arr_28 [i_5] = arr_16 [i_5] [i_5];
    }
    for (_Bool i_10 = 0; i_10 < 0; i_10 += 1) 
    {
        var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-124)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (signed char)-46))));
        var_22 = ((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */int) arr_6 [i_10] [i_10 + 1] [i_10] [i_10])) == (((/* implicit */int) arr_7 [i_10] [i_10 + 1] [i_10])))))));
        var_23 = ((/* implicit */signed char) min((((/* implicit */int) min((((/* implicit */signed char) var_0)), (arr_18 [i_10 + 1])))), (((((/* implicit */int) max((arr_22 [i_10 + 1] [i_10] [i_10] [(signed char)0] [i_10] [i_10] [i_10]), (((/* implicit */signed char) arr_13 [i_10]))))) + (((/* implicit */int) var_1))))));
        var_24 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_10] [i_10])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_13 [i_10]))))) ? (((/* implicit */int) max((arr_19 [i_10] [i_10 + 1] [i_10 + 1] [i_10]), (var_3)))) : (((/* implicit */int) arr_12 [i_10 + 1])))), (((/* implicit */int) arr_11 [i_10] [i_10]))));
        var_25 += arr_5 [(_Bool)1] [(_Bool)1] [i_10] [i_10 + 1];
    }
    var_26 = ((/* implicit */_Bool) var_9);
    var_27 = var_0;
    var_28 = var_7;
}
