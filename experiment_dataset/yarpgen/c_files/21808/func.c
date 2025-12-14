/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21808
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21808 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21808
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
    for (signed char i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            {
                arr_7 [i_0] = ((/* implicit */signed char) var_13);
                var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_2 [i_1] [i_0]))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_1])) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0])) ? (((/* implicit */int) arr_6 [i_0] [i_1])) : (((/* implicit */int) var_4)))))))) : (((/* implicit */int) var_2))));
                /* LoopNest 2 */
                for (unsigned short i_2 = 2; i_2 < 10; i_2 += 2) 
                {
                    for (unsigned char i_3 = 3; i_3 < 9; i_3 += 2) 
                    {
                        {
                            arr_13 [i_0] [i_1] [i_2] [i_3 - 2] = ((/* implicit */unsigned short) max((((/* implicit */unsigned char) (signed char)8)), (var_7)));
                            var_17 = ((/* implicit */unsigned char) min((((((((((/* implicit */_Bool) (unsigned short)23473)) ? (((/* implicit */int) (signed char)-4)) : (((/* implicit */int) (unsigned short)12347)))) + (2147483647))) >> (((((/* implicit */int) arr_8 [i_0] [i_0] [i_0])) - (1245))))), (((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) (signed char)-58)) : (((/* implicit */int) (unsigned short)38251))))));
                            var_18 = ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) var_2))))));
                        }
                    } 
                } 
                var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)48810)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (unsigned short)58652))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) (~(((((((/* implicit */int) var_3)) ^ (((/* implicit */int) var_12)))) ^ (((/* implicit */int) min((var_9), (((/* implicit */unsigned char) (signed char)42))))))))))));
    /* LoopNest 2 */
    for (signed char i_4 = 0; i_4 < 12; i_4 += 2) 
    {
        for (signed char i_5 = 1; i_5 < 11; i_5 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_6 = 1; i_6 < 11; i_6 += 2) 
                {
                    for (unsigned char i_7 = 3; i_7 < 10; i_7 += 2) 
                    {
                        {
                            arr_23 [i_6] [i_6] [i_6 - 1] [i_6 - 1] [i_6 + 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_6 + 1] [i_6 + 1] [i_6 - 1])) ? (((/* implicit */int) arr_20 [i_6 - 1] [i_6 + 1] [i_6])) : (((/* implicit */int) arr_20 [i_6 - 1] [i_6 - 1] [i_6 - 1]))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_6 - 1] [i_6 + 1] [i_6 + 1])) ? (((/* implicit */int) arr_21 [i_6 + 1] [i_6 + 1] [i_6] [i_6 + 1] [i_6 - 1] [i_6 + 1])) : (((/* implicit */int) arr_20 [i_6 + 1] [i_6 + 1] [i_6])))))));
                            arr_24 [i_6] = ((/* implicit */signed char) ((((/* implicit */int) var_9)) * (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-2)) * (((/* implicit */int) (unsigned short)24590))))) || (((/* implicit */_Bool) ((((/* implicit */int) (signed char)-40)) / (((/* implicit */int) var_6))))))))));
                            var_21 = ((/* implicit */signed char) min((var_21), (arr_21 [i_4] [i_5 + 1] [i_4] [i_6 - 1] [i_7 - 1] [i_7])));
                            arr_25 [i_5] [i_5 + 1] [i_5 - 1] [i_5] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) ((unsigned char) arr_17 [i_7 - 2] [i_7])))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (signed char i_8 = 3; i_8 < 10; i_8 += 2) 
                {
                    for (signed char i_9 = 0; i_9 < 12; i_9 += 2) 
                    {
                        for (unsigned short i_10 = 2; i_10 < 8; i_10 += 2) 
                        {
                            {
                                var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) min((((/* implicit */int) min((((/* implicit */unsigned char) arr_21 [i_4] [i_4] [i_4] [i_8] [i_9] [i_4])), (arr_30 [i_8] [i_8 - 3] [i_8] [i_8])))), ((-(((/* implicit */int) (signed char)113)))))))));
                                var_23 = ((/* implicit */unsigned char) arr_32 [i_4] [i_5 - 1] [i_8 + 1] [i_5 - 1] [i_10 + 2]);
                                arr_34 [i_9] [i_10 - 2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((arr_20 [i_5 + 1] [i_8 - 1] [i_10 - 1]), (arr_20 [i_5 - 1] [i_8 + 1] [i_10 + 4])))) ? (((/* implicit */int) min((arr_20 [i_5 + 1] [i_8 - 1] [i_10 + 2]), (arr_20 [i_5 - 1] [i_8 - 1] [i_10 - 1])))) : (((/* implicit */int) arr_20 [i_5 - 1] [i_8 - 2] [i_10 - 2]))));
                            }
                        } 
                    } 
                } 
                var_24 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_32 [i_4] [i_5] [i_5 - 1] [i_4] [i_5 - 1])) ? ((-(((/* implicit */int) var_1)))) : (((/* implicit */int) arr_31 [i_4] [i_4] [i_5]))))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_27 [i_4] [i_5 + 1] [i_5 - 1] [i_5 + 1]))));
                var_25 = ((/* implicit */signed char) max(((+(((/* implicit */int) min(((signed char)66), ((signed char)-24)))))), (((/* implicit */int) min((arr_15 [i_4]), (((/* implicit */unsigned short) var_9)))))));
            }
        } 
    } 
    var_26 = ((/* implicit */unsigned char) (+(((/* implicit */int) ((((/* implicit */int) (signed char)63)) < (((/* implicit */int) var_15)))))));
}
