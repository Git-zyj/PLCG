/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234078
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234078 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234078
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */int) (_Bool)0)) >= (((/* implicit */int) arr_1 [i_0]))));
        var_16 |= ((((/* implicit */int) arr_1 [(signed char)6])) < (((((/* implicit */int) var_5)) | (((/* implicit */int) (unsigned short)65512)))));
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_0 [i_2] [i_1])) ? (((/* implicit */int) arr_0 [i_0] [(_Bool)1])) : (((/* implicit */int) var_5))));
                    arr_7 [i_0] [i_1] |= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-106)) ? (((/* implicit */int) (signed char)-106)) : (((/* implicit */int) (signed char)-106))))) ? (((/* implicit */int) arr_4 [i_0] [i_1])) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_4 [i_0] [i_0])) : (((/* implicit */int) arr_3 [i_1] [i_2] [i_1]))))));
                    arr_8 [i_0] [i_0] [i_1] [i_0] = ((/* implicit */signed char) ((((((/* implicit */int) var_9)) + (2147483647))) << (((((/* implicit */int) arr_4 [i_1] [i_2])) - (1)))));
                    var_18 += ((/* implicit */short) (~(((/* implicit */int) arr_0 [i_0] [i_1]))));
                }
            } 
        } 
        arr_9 [i_0] = ((signed char) ((((/* implicit */int) arr_1 [i_0])) == (((/* implicit */int) var_11))));
    }
    var_19 |= ((/* implicit */short) var_3);
    /* LoopNest 2 */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        for (short i_4 = 0; i_4 < 19; i_4 += 4) 
        {
            {
                var_20 += ((/* implicit */signed char) (!((!((_Bool)1)))));
                var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) (+(((/* implicit */int) max((arr_10 [i_3]), (((/* implicit */unsigned short) (_Bool)1))))))))));
                var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) max((max((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_12 [i_3])) : (((/* implicit */int) arr_12 [i_4])))), (((/* implicit */int) arr_13 [i_3] [(unsigned short)17] [(short)5])))), (((/* implicit */int) ((_Bool) ((signed char) var_10)))))))));
                var_23 = ((/* implicit */_Bool) var_7);
            }
        } 
    } 
}
