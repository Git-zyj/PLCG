/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4975
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4975 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4975
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
    var_11 ^= ((/* implicit */signed char) var_9);
    var_12 ^= var_7;
    var_13 = ((/* implicit */signed char) max((var_13), (((/* implicit */signed char) var_9))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            {
                var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) (~(((((/* implicit */_Bool) (signed char)-118)) ? (2948623271U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-115))))))))));
                /* LoopNest 2 */
                for (signed char i_2 = 2; i_2 < 13; i_2 += 1) 
                {
                    for (signed char i_3 = 1; i_3 < 13; i_3 += 4) 
                    {
                        {
                            /* LoopSeq 2 */
                            for (signed char i_4 = 2; i_4 < 12; i_4 += 2) 
                            {
                                var_15 *= ((((/* implicit */_Bool) 1182478924)) ? (1879406356U) : (1346344006U));
                                arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((signed char) min(((-(3621665084U))), (2313027356U)));
                                var_16 *= ((/* implicit */signed char) max((((/* implicit */int) ((signed char) arr_5 [i_2] [i_3] [i_4 + 3]))), (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) ((((/* implicit */_Bool) (signed char)-82)) || (((/* implicit */_Bool) 2948623299U))))) : (((/* implicit */int) (!(((/* implicit */_Bool) 3621665058U)))))))));
                                var_17 = ((/* implicit */int) 513426432U);
                                var_18 |= ((/* implicit */signed char) (+(((/* implicit */int) (signed char)-8))));
                            }
                            for (signed char i_5 = 3; i_5 < 12; i_5 += 1) 
                            {
                                var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_8 [i_1] [i_2 + 2] [i_3 + 3] [i_5 + 3])) ? ((~(((/* implicit */int) arr_8 [i_2] [i_2 + 1] [i_3 + 2] [i_5 - 3])))) : (((/* implicit */int) ((((/* implicit */int) arr_15 [i_3 + 2] [i_3] [i_3])) <= (((/* implicit */int) arr_15 [i_3 - 1] [i_3 - 1] [i_3 - 1])))))));
                                var_20 = ((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-114)) | (((/* implicit */int) (signed char)72))));
                                arr_18 [i_0] [(signed char)14] [i_0] [(signed char)6] [i_0] [i_0] [i_0] = ((/* implicit */signed char) (+(((arr_17 [i_5] [i_5 - 3] [i_3 + 3]) * (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-115)))))));
                            }
                            var_21 = ((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)-100))));
                        }
                    } 
                } 
                var_22 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-73)) || (((/* implicit */_Bool) 2642483923U))));
            }
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_6 = 0; i_6 < 14; i_6 += 3) 
    {
        var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) ((((((/* implicit */_Bool) 4294967290U)) ? (1652483373U) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))))) <= (((/* implicit */unsigned int) ((/* implicit */int) (signed char)42))))))));
        /* LoopSeq 1 */
        for (unsigned int i_7 = 0; i_7 < 14; i_7 += 4) 
        {
            /* LoopNest 3 */
            for (signed char i_8 = 3; i_8 < 13; i_8 += 2) 
            {
                for (unsigned int i_9 = 2; i_9 < 12; i_9 += 4) 
                {
                    for (signed char i_10 = 0; i_10 < 14; i_10 += 2) 
                    {
                        {
                            var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_25 [i_6] [i_8 - 3] [i_9 + 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_25 [i_6] [i_8 - 3] [i_9 - 2]))) : (var_4)));
                            var_25 = ((/* implicit */unsigned int) max((var_25), (((/* implicit */unsigned int) arr_10 [i_6] [i_10] [i_8 - 1] [i_9] [i_10] [i_8 - 1] [7]))));
                        }
                    } 
                } 
            } 
            var_26 &= ((/* implicit */signed char) (+(1652483373U)));
        }
        var_27 = ((/* implicit */signed char) max((var_27), (((/* implicit */signed char) (~(var_9))))));
        arr_30 [i_6] = ((/* implicit */int) ((((unsigned int) var_2)) < (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_11 [i_6] [i_6] [i_6] [i_6] [i_6])) < (((/* implicit */int) (signed char)110))))))));
    }
}
