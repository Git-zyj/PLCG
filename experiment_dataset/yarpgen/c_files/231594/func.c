/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231594
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231594 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231594
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
    var_10 += ((((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (var_3))))) ? (max((((/* implicit */long long int) var_1)), (var_2))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)108))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_11 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) ((_Bool) arr_7 [i_0]))) : ((-(((/* implicit */int) (unsigned short)31110))))))) ? (((/* implicit */int) arr_6 [i_0] [i_0] [i_0])) : (((/* implicit */int) (unsigned short)9))));
                    arr_10 [i_0] [i_1] [i_2] = ((/* implicit */unsigned short) 0);
                    var_12 = ((/* implicit */long long int) (signed char)108);
                    var_13 = ((/* implicit */signed char) max((((((/* implicit */_Bool) 246595080)) ? ((-(1048575U))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_1]))))), (((/* implicit */unsigned int) (_Bool)0))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_3 = 0; i_3 < 14; i_3 += 1) 
    {
        for (long long int i_4 = 3; i_4 < 13; i_4 += 1) 
        {
            {
                var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_13 [i_4])) ? (((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)0)))))) ^ (max((arr_16 [i_3] [i_3]), (((/* implicit */long long int) var_9)))))) : (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_4 - 2])))));
                /* LoopSeq 1 */
                for (int i_5 = 0; i_5 < 14; i_5 += 4) 
                {
                    /* LoopSeq 3 */
                    for (int i_6 = 0; i_6 < 14; i_6 += 2) 
                    {
                        var_15 = ((/* implicit */_Bool) ((((_Bool) var_2)) ? (((/* implicit */long long int) max((((/* implicit */unsigned int) max((arr_12 [i_4] [(short)11]), (arr_2 [i_4])))), (arr_11 [i_4 - 1] [i_4 - 1])))) : (((((((/* implicit */long long int) ((/* implicit */int) (signed char)-80))) & (var_8))) & (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)108)) ? (((/* implicit */int) (signed char)67)) : (((/* implicit */int) (signed char)67)))))))));
                        var_16 *= ((/* implicit */unsigned short) ((short) arr_19 [i_3] [i_4] [i_3] [i_6]));
                        var_17 -= ((/* implicit */short) ((unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_4] [i_5])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (arr_11 [i_4] [i_5])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-114))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (var_3))))));
                    }
                    for (unsigned int i_7 = 0; i_7 < 14; i_7 += 4) /* same iter space */
                    {
                        var_18 &= ((/* implicit */short) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_21 [i_7] [i_5] [i_3] [i_3] [i_3] [i_3])) : (((((/* implicit */int) var_9)) ^ (((/* implicit */int) var_9))))));
                        arr_24 [i_3] [i_3] [i_3] [i_3] [i_3] |= ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)31)) != (((/* implicit */int) ((((/* implicit */int) ((unsigned short) arr_0 [i_3] [i_3]))) != (((var_0) ? (((/* implicit */int) arr_14 [i_3] [i_5] [i_3])) : (((/* implicit */int) var_7)))))))));
                    }
                    for (unsigned int i_8 = 0; i_8 < 14; i_8 += 4) /* same iter space */
                    {
                        var_19 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((((/* implicit */int) min((((/* implicit */short) (signed char)-111)), ((short)15881)))) ^ ((~(((/* implicit */int) arr_15 [i_8]))))))), (((long long int) ((((/* implicit */int) arr_25 [i_3] [i_3] [i_5] [i_8])) & (((/* implicit */int) arr_13 [i_3])))))));
                        var_20 = ((/* implicit */int) var_7);
                        /* LoopSeq 1 */
                        for (unsigned short i_9 = 4; i_9 < 12; i_9 += 2) 
                        {
                            var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) max((arr_17 [(signed char)10]), (((/* implicit */int) ((((/* implicit */_Bool) ((var_8) & (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_5] [i_4])))))) && (((/* implicit */_Bool) ((unsigned long long int) arr_19 [(signed char)10] [i_8] [(signed char)10] [(signed char)10])))))))))));
                            var_22 = ((/* implicit */unsigned short) var_7);
                        }
                    }
                    arr_29 [i_4] = ((/* implicit */signed char) var_9);
                }
                var_23 *= ((/* implicit */signed char) ((((/* implicit */_Bool) 988329051U)) ? (((/* implicit */int) ((_Bool) (unsigned short)34435))) : (((/* implicit */int) ((((/* implicit */int) arr_21 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3])) == (((/* implicit */int) var_7)))))));
            }
        } 
    } 
    var_24 = ((/* implicit */signed char) var_0);
}
