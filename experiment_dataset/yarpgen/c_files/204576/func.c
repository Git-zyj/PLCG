/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204576
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204576 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204576
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
    var_10 = ((/* implicit */unsigned char) min((var_10), (((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) 0)) ? (-3941557) : (((/* implicit */int) (unsigned char)255))))) > (var_9)))))));
    var_11 = ((/* implicit */int) var_0);
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 7; i_0 += 2) 
    {
        for (unsigned char i_1 = 1; i_1 < 8; i_1 += 2) 
        {
            {
                var_12 ^= ((/* implicit */unsigned int) var_5);
                var_13 -= ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0 + 3] [i_1 - 1]))) / (arr_3 [i_0 + 1] [i_0] [(unsigned char)5])))) ? (((/* implicit */int) max((arr_5 [i_0 - 3] [i_1 - 1]), (arr_5 [i_0 - 3] [i_1 - 1])))) : (((/* implicit */int) max((arr_5 [i_0 - 1] [i_1 + 1]), (arr_5 [i_0 + 2] [i_1 - 1])))));
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 10; i_2 += 4) 
                {
                    for (unsigned int i_3 = 0; i_3 < 10; i_3 += 2) 
                    {
                        {
                            var_14 = ((/* implicit */int) min((var_14), (((/* implicit */int) (+(((max((var_2), (((/* implicit */unsigned int) arr_2 [8] [8])))) ^ (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)240)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned char)15))))))))))));
                            /* LoopSeq 1 */
                            for (unsigned int i_4 = 0; i_4 < 10; i_4 += 3) 
                            {
                                var_15 = max((((/* implicit */int) (unsigned char)15)), (((int) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */unsigned int) -309516055)) : (arr_10 [(unsigned char)5] [i_3] [(unsigned char)0] [(unsigned char)0])))));
                                arr_13 [i_0] [i_1] [i_0] [1U] [i_4] = min((((/* implicit */int) (unsigned char)15)), (min((var_7), (((/* implicit */int) var_3)))));
                                var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(arr_1 [i_0 + 3])))) ? ((~(max((arr_11 [i_0] [i_0] [i_1 + 2] [(unsigned char)9] [8] [i_4] [1U]), (((/* implicit */unsigned int) arr_2 [i_0] [i_0])))))) : (((/* implicit */unsigned int) ((int) ((((/* implicit */int) (unsigned char)240)) <= (((/* implicit */int) var_3))))))));
                                var_17 -= ((/* implicit */unsigned char) 2875121245U);
                            }
                            arr_14 [i_0] [(unsigned char)2] [i_2] [i_0] = ((/* implicit */int) (-(max((((/* implicit */unsigned int) (unsigned char)109)), (arr_10 [i_0] [5] [i_0 - 1] [i_3])))));
                        }
                    } 
                } 
                var_18 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [(unsigned char)8] [i_1] [(unsigned char)8] [i_1 + 2])) ? (min((((/* implicit */unsigned int) (unsigned char)240)), (2875121217U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) -56933771)) ? (((/* implicit */int) (unsigned char)48)) : (arr_9 [8] [i_0]))))))) ? ((-(-1331233623))) : (((/* implicit */int) ((((((/* implicit */_Bool) -8192)) && (((/* implicit */_Bool) arr_4 [i_1] [i_0])))) || (((/* implicit */_Bool) arr_11 [i_0 - 2] [i_0] [i_0] [i_0] [i_1 - 1] [5] [i_0 - 2]))))));
            }
        } 
    } 
}
