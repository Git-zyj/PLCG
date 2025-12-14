/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32171
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32171 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32171
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
    for (signed char i_0 = 1; i_0 < 8; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 11; i_2 += 1) 
            {
                {
                    arr_7 [i_1] [i_1] [i_0 + 3] [i_1] = ((/* implicit */signed char) ((((/* implicit */int) arr_5 [i_1] [i_2])) % (((/* implicit */int) min((max((arr_3 [i_0 - 1] [i_1] [i_2]), ((signed char)-120))), (((/* implicit */signed char) ((((/* implicit */int) (signed char)-115)) >= (((/* implicit */int) (signed char)-27))))))))));
                    var_13 = ((/* implicit */signed char) min(((-((~(((/* implicit */int) arr_0 [i_0] [i_1])))))), (((/* implicit */int) ((signed char) (+(((/* implicit */int) arr_3 [i_0 + 3] [i_1] [i_2]))))))));
                    /* LoopSeq 2 */
                    for (signed char i_3 = 1; i_3 < 9; i_3 += 2) 
                    {
                        var_14 = ((/* implicit */signed char) ((((max((((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_3 [i_1] [i_2] [i_3 + 1])))), ((-(((/* implicit */int) (signed char)98)))))) + (2147483647))) >> (((((/* implicit */int) (signed char)85)) - (54)))));
                        var_15 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_10)) : (((((/* implicit */int) arr_8 [i_0 + 3] [i_0 + 3] [i_2] [(signed char)3])) - (((/* implicit */int) arr_6 [(signed char)5]))))))));
                    }
                    for (signed char i_4 = 0; i_4 < 11; i_4 += 4) 
                    {
                        arr_14 [i_0] [i_1] = ((/* implicit */signed char) (~((+(((/* implicit */int) (signed char)-63))))));
                        arr_15 [i_0] [i_1] [i_1] = ((/* implicit */signed char) (-(((((/* implicit */_Bool) (signed char)0)) ? (((((/* implicit */_Bool) (signed char)85)) ? (((/* implicit */int) (signed char)-55)) : (((/* implicit */int) arr_12 [(signed char)5])))) : (((/* implicit */int) ((signed char) (signed char)84)))))));
                    }
                    arr_16 [i_0] [i_1] [i_1] [i_2] = ((/* implicit */signed char) (+(max((((/* implicit */int) (signed char)85)), ((+(((/* implicit */int) (signed char)-85))))))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */signed char) (-((~(((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (signed char)-42)) : (((/* implicit */int) var_2))))))));
    var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) (-(((/* implicit */int) (signed char)14)))))));
    var_18 = ((/* implicit */signed char) min((var_18), (min(((signed char)-7), ((signed char)38)))));
    var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) min(((((-(((/* implicit */int) var_4)))) - ((-(((/* implicit */int) var_12)))))), (((((((/* implicit */int) (signed char)65)) <= (((/* implicit */int) (signed char)42)))) ? ((-(((/* implicit */int) var_11)))) : (((/* implicit */int) var_10)))))))));
}
