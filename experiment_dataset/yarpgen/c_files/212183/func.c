/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212183
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212183 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212183
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
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            for (unsigned char i_2 = 3; i_2 < 17; i_2 += 3) 
            {
                {
                    arr_8 [i_2 + 1] [i_1] [(signed char)7] [i_0] = ((/* implicit */unsigned char) (+(((((/* implicit */int) max((((/* implicit */unsigned char) arr_3 [(signed char)9])), (arr_6 [(signed char)4] [(signed char)10] [i_2 + 1])))) >> (((((/* implicit */int) (unsigned char)69)) - (68)))))));
                    arr_9 [(unsigned char)0] = ((/* implicit */signed char) max((((/* implicit */int) var_7)), (((((/* implicit */int) (signed char)127)) * (((/* implicit */int) arr_6 [i_2 - 1] [i_2 - 2] [i_2 - 2]))))));
                    var_10 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_4))));
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned char i_3 = 0; i_3 < 14; i_3 += 3) /* same iter space */
    {
        arr_13 [(signed char)13] = ((/* implicit */unsigned char) (~(((/* implicit */int) max((max((arr_10 [i_3]), (arr_12 [(unsigned char)12]))), (((/* implicit */unsigned char) var_8)))))));
        /* LoopSeq 2 */
        for (signed char i_4 = 0; i_4 < 14; i_4 += 2) 
        {
            arr_18 [i_3] [(signed char)12] [(signed char)13] = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */_Bool) (signed char)-1)) || (((/* implicit */_Bool) var_9))))) - (((/* implicit */int) var_1))));
            var_11 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_12 [(signed char)6])) ? (((/* implicit */int) ((signed char) (signed char)-105))) : (((/* implicit */int) arr_0 [i_3] [i_4]))));
            /* LoopSeq 1 */
            for (unsigned char i_5 = 1; i_5 < 12; i_5 += 3) 
            {
                var_12 = arr_6 [i_5 + 2] [(signed char)18] [i_4];
                var_13 += ((/* implicit */signed char) (unsigned char)251);
                arr_21 [i_5] [i_4] [i_4] [i_5 + 1] = (signed char)-1;
            }
        }
        for (unsigned char i_6 = 0; i_6 < 14; i_6 += 4) 
        {
            var_14 ^= ((/* implicit */unsigned char) max(((+((-(((/* implicit */int) (unsigned char)165)))))), (((((/* implicit */_Bool) (unsigned char)186)) ? (((((/* implicit */int) (unsigned char)100)) + (((/* implicit */int) (unsigned char)0)))) : (((/* implicit */int) max((var_9), ((signed char)108))))))));
            arr_24 [(signed char)7] [i_3] &= ((/* implicit */signed char) (unsigned char)207);
            var_15 = ((/* implicit */unsigned char) var_9);
        }
        /* LoopNest 2 */
        for (signed char i_7 = 0; i_7 < 14; i_7 += 2) 
        {
            for (unsigned char i_8 = 1; i_8 < 11; i_8 += 4) 
            {
                {
                    arr_29 [(signed char)8] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max(((unsigned char)0), (((/* implicit */unsigned char) (signed char)97))))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_7 [i_8 + 2] [i_8 + 1] [(signed char)8] [i_8 + 1])) : (((/* implicit */int) arr_7 [i_8 + 1] [i_8 + 1] [(unsigned char)3] [i_8 + 1])))) : (((/* implicit */int) max((var_0), (((/* implicit */unsigned char) var_1)))))));
                    var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) min(((-(((/* implicit */int) (unsigned char)237)))), (max((((((/* implicit */int) (signed char)0)) * (((/* implicit */int) var_8)))), ((~(((/* implicit */int) arr_22 [i_3])))))))))));
                    var_17 |= ((/* implicit */unsigned char) ((signed char) (signed char)94));
                    arr_30 [(unsigned char)4] = ((/* implicit */unsigned char) var_7);
                    arr_31 [(signed char)0] = ((/* implicit */signed char) ((((/* implicit */int) var_5)) < (((/* implicit */int) arr_4 [(signed char)15]))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned char i_9 = 0; i_9 < 14; i_9 += 3) /* same iter space */
    {
        var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) (+(((/* implicit */int) arr_22 [i_9])))))));
        var_19 ^= ((/* implicit */signed char) (~(((/* implicit */int) (signed char)-121))));
    }
}
