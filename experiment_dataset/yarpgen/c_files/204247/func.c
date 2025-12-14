/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204247
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204247 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204247
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
    var_15 = ((/* implicit */signed char) var_1);
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            for (unsigned char i_2 = 3; i_2 < 9; i_2 += 1) 
            {
                {
                    arr_6 [i_0] [i_0] [i_2] [i_0] |= ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned short) (short)-7005))) ? (arr_2 [i_0] [i_1] [i_1]) : (var_4)));
                    /* LoopSeq 3 */
                    for (unsigned int i_3 = 0; i_3 < 11; i_3 += 4) /* same iter space */
                    {
                        arr_10 [i_0] [i_1] [i_1] [i_3] |= ((/* implicit */signed char) ((((/* implicit */int) (((-(((/* implicit */int) arr_1 [i_0])))) == (((((/* implicit */int) var_3)) & (((/* implicit */int) arr_1 [i_0]))))))) < (((((/* implicit */_Bool) (-(((/* implicit */int) arr_3 [i_0]))))) ? (max((((/* implicit */int) arr_3 [i_3])), (arr_9 [i_0] [i_0] [4] [4]))) : (((/* implicit */int) max((var_5), (var_2))))))));
                        arr_11 [i_0] [i_0] [i_2] [i_3] = ((/* implicit */int) ((signed char) (+(arr_9 [i_2 + 1] [i_2 - 2] [i_2] [i_2 + 2]))));
                        arr_12 [i_0] [i_0] [i_2] = ((/* implicit */int) max((((/* implicit */unsigned int) ((_Bool) (!(((/* implicit */_Bool) var_7)))))), (max((((/* implicit */unsigned int) max((((/* implicit */unsigned char) var_8)), (arr_3 [i_2])))), (((((/* implicit */_Bool) arr_1 [i_1])) ? (arr_2 [i_3] [i_2 + 2] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)5)))))))));
                    }
                    for (unsigned int i_4 = 0; i_4 < 11; i_4 += 4) /* same iter space */
                    {
                        arr_16 [i_0] [i_0] = ((/* implicit */unsigned short) arr_0 [i_2 - 3] [i_0]);
                        arr_17 [i_0] [i_4] [i_0] [i_0] = ((((/* implicit */_Bool) (~(max((-2), (((/* implicit */int) var_5))))))) && (((/* implicit */_Bool) min((max((var_1), (var_11))), ((~(((/* implicit */int) arr_3 [i_0]))))))));
                    }
                    for (unsigned int i_5 = 0; i_5 < 11; i_5 += 4) /* same iter space */
                    {
                        var_16 = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-6))))) % ((-((-(((/* implicit */int) arr_7 [i_0] [i_0] [i_2] [i_2 + 1]))))))));
                        arr_20 [i_5] [i_2] [i_1] [i_1] [i_0] = ((/* implicit */signed char) (~(((/* implicit */int) (signed char)-5))));
                        arr_21 [i_0] [i_0] [(signed char)5] = ((/* implicit */int) ((signed char) min((arr_15 [i_2 - 1] [i_0] [i_0] [i_5]), (((/* implicit */long long int) (-(((/* implicit */int) (signed char)-6))))))));
                    }
                    arr_22 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_18 [i_0] [i_0] [i_2 + 2] [i_2]))))) ? (((((/* implicit */_Bool) arr_18 [i_0] [i_1] [i_2 + 1] [1U])) ? (((/* implicit */int) arr_18 [i_1] [i_1] [i_2 + 1] [i_1])) : (((/* implicit */int) arr_18 [i_0] [i_1] [i_2 + 2] [i_1])))) : (((((/* implicit */_Bool) arr_18 [i_0] [i_2] [i_2 + 2] [i_2])) ? (((/* implicit */int) arr_18 [i_0] [i_1] [i_2 + 2] [i_1])) : (((/* implicit */int) arr_18 [i_0] [i_1] [i_2 - 1] [i_2]))))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)4))));
}
