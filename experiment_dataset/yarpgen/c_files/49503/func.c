/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49503
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49503 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49503
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 2; i_0 < 16; i_0 += 2) 
    {
        var_11 = ((/* implicit */unsigned char) arr_1 [i_0]);
        var_12 = ((/* implicit */signed char) ((unsigned short) ((5U) % (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-59))))));
        /* LoopNest 2 */
        for (signed char i_1 = 2; i_1 < 17; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 17; i_2 += 4) 
            {
                {
                    var_13 = ((/* implicit */unsigned char) arr_1 [i_0]);
                    var_14 = (signed char)56;
                    var_15 ^= ((/* implicit */signed char) var_3);
                }
            } 
        } 
        /* LoopNest 3 */
        for (short i_3 = 0; i_3 < 18; i_3 += 3) 
        {
            for (signed char i_4 = 2; i_4 < 17; i_4 += 3) 
            {
                for (unsigned short i_5 = 0; i_5 < 18; i_5 += 4) 
                {
                    {
                        var_16 = (signed char)27;
                        arr_13 [i_5] [(unsigned short)8] [i_5] [i_3] [i_5] [i_5] = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) arr_7 [i_3] [i_3])) ? (((/* implicit */int) (signed char)122)) : (((/* implicit */int) (short)32767))))));
                        /* LoopSeq 3 */
                        for (unsigned long long int i_6 = 0; i_6 < 18; i_6 += 4) /* same iter space */
                        {
                            var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) 1352619606973106480LL)) && (((/* implicit */_Bool) arr_9 [i_5])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [(unsigned short)13] [i_3] [i_3]))))) : ((-(((/* implicit */int) var_2)))))))));
                            var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_6 [i_3])) : (((/* implicit */int) arr_6 [i_3]))));
                            var_19 = ((/* implicit */long long int) (short)-3603);
                            var_20 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)122)) ? (((/* implicit */int) arr_10 [i_0 - 2] [i_5] [i_0 - 2])) : (((/* implicit */int) var_5))));
                        }
                        for (unsigned long long int i_7 = 0; i_7 < 18; i_7 += 4) /* same iter space */
                        {
                            var_21 = ((/* implicit */signed char) var_1);
                            var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (signed char)39))));
                        }
                        for (signed char i_8 = 0; i_8 < 18; i_8 += 3) 
                        {
                            var_23 = ((/* implicit */signed char) ((((/* implicit */int) arr_1 [i_0 + 2])) / (((/* implicit */int) arr_1 [i_0 - 1]))));
                            var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_14 [(unsigned short)11] [i_3] [i_4] [i_4 - 1] [i_8] [i_0 + 2] [i_4]))));
                        }
                    }
                } 
            } 
        } 
    }
    var_25 &= ((/* implicit */unsigned char) (~(var_0)));
    var_26 = ((/* implicit */signed char) min((var_26), (((/* implicit */signed char) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_2)))), (((/* implicit */int) (unsigned char)142))))) ? (((/* implicit */int) ((unsigned char) (+(((/* implicit */int) var_7)))))) : (min((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_2)))), (((((/* implicit */int) var_8)) / (((/* implicit */int) var_2)))))))))));
}
