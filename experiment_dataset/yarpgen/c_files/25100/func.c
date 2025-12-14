/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25100
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25100 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25100
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
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            {
                var_11 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_1] [(signed char)4] [i_0])) / (((/* implicit */int) arr_2 [i_1] [i_0] [i_0]))))))) || (((/* implicit */_Bool) ((((/* implicit */int) var_2)) * (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_3 [i_0] [i_1])) : (((/* implicit */int) arr_3 [i_0] [i_1])))))))));
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) arr_1 [(signed char)5])) & (min((((((/* implicit */int) (signed char)43)) + (((/* implicit */int) var_7)))), (((/* implicit */int) max((arr_3 [i_0] [(signed char)5]), (arr_4 [(signed char)9] [i_1] [i_0]))))))));
                /* LoopSeq 1 */
                for (signed char i_2 = 3; i_2 < 7; i_2 += 3) 
                {
                    arr_9 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */signed char) ((((((/* implicit */int) ((signed char) (~(((/* implicit */int) arr_2 [(signed char)6] [(signed char)1] [i_2])))))) + (2147483647))) << (((((/* implicit */int) ((((/* implicit */_Bool) (signed char)-59)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1] [i_0])) ? (((/* implicit */int) arr_3 [i_0] [i_2])) : (((/* implicit */int) var_6)))))))) - (1)))));
                    /* LoopSeq 1 */
                    for (signed char i_3 = 0; i_3 < 10; i_3 += 3) 
                    {
                        var_12 ^= max((max((arr_11 [(signed char)8] [i_2 - 1] [i_3]), (arr_11 [(signed char)2] [i_2 - 1] [(signed char)4]))), (min((arr_11 [(signed char)0] [i_2 + 2] [i_3]), (arr_11 [(signed char)2] [i_2 - 2] [i_3]))));
                        /* LoopSeq 2 */
                        for (signed char i_4 = 0; i_4 < 10; i_4 += 1) 
                        {
                            arr_15 [(signed char)7] [i_0] [i_4] [i_3] [i_4] = ((/* implicit */signed char) (~(((((/* implicit */int) max((var_4), (var_9)))) * (((((/* implicit */_Bool) arr_14 [i_0] [(signed char)3] [i_2] [i_3] [i_3] [i_4])) ? (((/* implicit */int) (signed char)-59)) : (((/* implicit */int) var_7))))))));
                            var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_10 [(signed char)1] [i_0])) | (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_6 [i_0] [i_3])) : (((/* implicit */int) arr_2 [(signed char)1] [i_3] [(signed char)6]))))))) ? (((((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_0] [i_0]))))) | (((/* implicit */int) var_6)))) : (min((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_2 [i_1] [i_4] [i_2])) : (((/* implicit */int) arr_2 [i_2] [i_3] [i_4])))), (((/* implicit */int) (signed char)-1))))));
                            var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) (+(((/* implicit */int) max((arr_0 [i_2 + 3]), (var_0)))))))));
                        }
                        for (signed char i_5 = 0; i_5 < 10; i_5 += 2) 
                        {
                            arr_19 [(signed char)2] [i_0] [(signed char)7] [i_2 + 2] [i_2] [i_3] [(signed char)2] = ((/* implicit */signed char) ((((/* implicit */int) arr_7 [i_2] [i_3] [i_5])) | (((((/* implicit */_Bool) (signed char)-34)) ? (((/* implicit */int) ((((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [i_0] [i_0])) < (((/* implicit */int) var_1))))) : ((~(((/* implicit */int) (signed char)58))))))));
                            arr_20 [i_0] [i_0] [i_2] [i_3] [i_5] = ((/* implicit */signed char) ((((((((/* implicit */int) min((var_10), (arr_7 [i_0] [i_3] [i_5])))) + (2147483647))) >> (((((/* implicit */int) max((arr_7 [i_0] [i_0] [i_2]), (arr_4 [(signed char)3] [i_3] [i_5])))) - (45))))) != ((~(((/* implicit */int) arr_2 [i_2 + 3] [i_2] [i_2]))))));
                        }
                    }
                    var_15 = ((signed char) arr_17 [i_2] [i_2] [i_2 - 2] [i_2] [i_2 - 2] [i_2 - 1]);
                }
            }
        } 
    } 
    var_16 = ((/* implicit */signed char) max((((/* implicit */int) var_2)), ((-(((/* implicit */int) min((var_0), (var_0))))))));
}
