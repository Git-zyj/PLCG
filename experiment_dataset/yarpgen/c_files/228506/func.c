/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228506
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228506 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228506
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
    var_13 = ((/* implicit */int) var_5);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (unsigned char i_1 = 1; i_1 < 8; i_1 += 3) 
        {
            {
                var_14 = max(((+(((int) var_1)))), (((/* implicit */int) var_2)));
                /* LoopSeq 2 */
                for (signed char i_2 = 0; i_2 < 10; i_2 += 4) 
                {
                    arr_6 [i_2] [4] [0] [i_2] = ((/* implicit */signed char) arr_1 [i_1]);
                    var_15 = ((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned char)106))));
                }
                for (unsigned char i_3 = 0; i_3 < 10; i_3 += 1) 
                {
                    /* LoopSeq 1 */
                    for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                    {
                        var_16 *= var_1;
                        /* LoopSeq 3 */
                        for (unsigned char i_5 = 1; i_5 < 9; i_5 += 4) 
                        {
                            var_17 |= ((signed char) (-(((/* implicit */int) var_2))));
                            var_18 += arr_14 [i_3] [i_3] [i_0] [(_Bool)1] [(signed char)2];
                            var_19 = ((/* implicit */int) min((var_19), (((((/* implicit */_Bool) max((min(((signed char)81), (((/* implicit */signed char) var_1)))), (((/* implicit */signed char) (!(arr_1 [(_Bool)1]))))))) ? ((+(((/* implicit */int) max((arr_5 [i_3]), (((/* implicit */unsigned char) (_Bool)1))))))) : (((/* implicit */int) (_Bool)1))))));
                        }
                        for (unsigned char i_6 = 0; i_6 < 10; i_6 += 1) 
                        {
                            var_20 *= ((/* implicit */_Bool) max((max((((((/* implicit */_Bool) (signed char)-49)) ? (((/* implicit */int) arr_14 [i_1] [i_3] [i_0] [i_1] [i_6])) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) ((signed char) (!(var_2)))))));
                            arr_17 [i_3] = ((/* implicit */signed char) ((((_Bool) (_Bool)1)) ? (((/* implicit */int) ((signed char) (_Bool)1))) : ((-(((/* implicit */int) arr_12 [i_3] [i_4 - 1] [i_3] [i_1 + 1] [i_3]))))));
                            var_21 += ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) max(((_Bool)0), ((_Bool)1))))))) ? ((-(min((arr_8 [i_6] [i_4] [i_3] [i_0]), (((/* implicit */int) var_3)))))) : (((/* implicit */int) ((signed char) arr_9 [(unsigned char)4] [i_4] [i_4 - 1] [i_0])))));
                            var_22 *= ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) min((arr_5 [i_4 - 1]), (arr_5 [i_4 - 1])))) : (((int) 3145728)));
                            arr_18 [i_0] [i_0] [i_0] [6] [(_Bool)1] [i_0] [i_6] |= ((/* implicit */int) ((_Bool) (+((((_Bool)1) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (_Bool)0)))))));
                        }
                        for (signed char i_7 = 1; i_7 < 9; i_7 += 3) 
                        {
                            var_23 += ((/* implicit */_Bool) arr_10 [i_0] [(signed char)2] [(signed char)2] [i_0]);
                            var_24 *= (+((((_Bool)1) ? (((/* implicit */int) arr_2 [i_7 + 1])) : (((/* implicit */int) (signed char)44)))));
                            var_25 = ((/* implicit */unsigned char) max((var_25), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) ((var_1) ? (((/* implicit */int) arr_7 [i_7] [i_3] [(_Bool)1])) : (((/* implicit */int) var_3)))))) ? ((((_Bool)0) ? (((/* implicit */int) (signed char)-15)) : ((-(-1392287155))))) : (((arr_14 [i_1] [i_1 + 2] [i_0] [i_1] [i_7 + 1]) ? (((/* implicit */int) arr_21 [i_4 - 1] [i_4 - 1] [i_4 - 1])) : (((/* implicit */int) (signed char)-1)))))))));
                        }
                        arr_22 [i_3] [i_4 - 1] = max(((-((+(((/* implicit */int) (_Bool)0)))))), ((+(((/* implicit */int) arr_1 [i_1 + 2])))));
                    }
                    arr_23 [i_1 + 2] [i_3] = ((/* implicit */_Bool) (+(((/* implicit */int) arr_14 [i_3] [i_3] [i_3] [i_1] [i_0]))));
                }
                arr_24 [i_0] [i_1] [i_1 + 1] = (!(arr_14 [i_1 - 1] [i_1 + 2] [i_0] [(signed char)0] [i_0]));
                arr_25 [(_Bool)1] [i_1] &= ((/* implicit */_Bool) ((signed char) (((!(((/* implicit */_Bool) arr_10 [i_1 - 1] [i_1 - 1] [i_1] [i_0])))) ? (((arr_12 [i_0] [i_0] [i_0] [(_Bool)1] [i_0]) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [(signed char)0] [i_0] [(_Bool)1] [i_0])))) : (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (signed char)64)))))));
            }
        } 
    } 
    var_26 = ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned char) (+(((/* implicit */int) var_5))))))));
}
