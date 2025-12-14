/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51820
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51820 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51820
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
    for (int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            for (signed char i_2 = 4; i_2 < 16; i_2 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (signed char i_3 = 3; i_3 < 16; i_3 += 2) 
                    {
                        var_14 = ((/* implicit */signed char) min((((((/* implicit */_Bool) var_2)) ? ((-2147483647 - 1)) : (arr_1 [i_2 + 1]))), (((/* implicit */int) max((((/* implicit */unsigned char) var_4)), (var_8))))));
                        var_15 = ((/* implicit */signed char) ((((((/* implicit */_Bool) (short)-26122)) && (((/* implicit */_Bool) (short)26122)))) ? (((/* implicit */int) (short)26143)) : (134682006)));
                        var_16 *= ((/* implicit */unsigned long long int) ((((((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (arr_2 [i_0]))) % (arr_3 [(unsigned char)12] [i_1] [i_1]))) + (((/* implicit */long long int) ((var_6) / ((-(((/* implicit */int) (unsigned char)140)))))))));
                        /* LoopSeq 1 */
                        for (long long int i_4 = 2; i_4 < 16; i_4 += 4) 
                        {
                            var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((arr_1 [i_0]) >> (((arr_9 [i_0] [i_0] [i_0] [i_0] [14LL]) - (15272059177423178717ULL))))) >> (((arr_11 [(signed char)5] [i_4 + 1] [i_2] [i_3] [i_3 + 1]) - (3471663500986591424ULL)))))) ? (((((/* implicit */_Bool) min(((signed char)127), ((signed char)126)))) ? (((/* implicit */int) arr_6 [i_0] [i_0] [i_0])) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_4 [i_0] [i_0] [(unsigned char)2])) : (arr_1 [i_2 - 4]))))) : (((((/* implicit */int) (signed char)44)) | (-409760943)))));
                            var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(var_2)))) ? (arr_9 [i_0] [(signed char)3] [i_0] [i_0] [(signed char)17]) : (((/* implicit */unsigned long long int) (-(((((/* implicit */int) var_11)) * (((/* implicit */int) var_13)))))))));
                        }
                        var_19 = ((/* implicit */signed char) max((max((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)144)) ? (((/* implicit */int) (short)-29201)) : (arr_8 [i_0] [i_1] [i_2 - 3] [i_2 - 3])))), (arr_3 [i_0] [10] [i_0]))), (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)92)) ? (((/* implicit */int) (signed char)-55)) : (((/* implicit */int) (unsigned char)115)))))));
                    }
                    var_20 = ((((/* implicit */_Bool) ((((/* implicit */int) max(((signed char)(-127 - 1)), (var_1)))) | ((-2147483647 - 1))))) ? (((/* implicit */int) ((((/* implicit */int) (short)-20951)) == (((/* implicit */int) (unsigned char)36))))) : (((int) var_1)));
                    arr_14 [i_0] [i_0] [i_0] [7ULL] = ((/* implicit */long long int) (((!(((/* implicit */_Bool) var_8)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_2 - 3] [(signed char)0] [i_0]))))) : ((~(((/* implicit */int) arr_4 [i_0] [i_0] [i_2 - 2]))))));
                    var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_2] [i_1] [i_2 - 4])) ? (((/* implicit */unsigned long long int) arr_10 [i_2] [i_1] [i_2] [i_0] [i_2 - 4])) : (var_2)))) ? (var_5) : (((/* implicit */unsigned long long int) (~(arr_10 [i_1] [i_1] [i_2] [(signed char)14] [i_2 + 2]))))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */unsigned long long int) var_12);
    /* LoopNest 3 */
    for (short i_5 = 0; i_5 < 15; i_5 += 3) 
    {
        for (unsigned short i_6 = 2; i_6 < 11; i_6 += 4) 
        {
            for (long long int i_7 = 2; i_7 < 13; i_7 += 4) 
            {
                {
                    var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_13)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_5] [i_6 + 2] [i_7 - 1] [i_7 - 2] [i_7 + 2])) ? ((~(((/* implicit */int) var_10)))) : (arr_1 [(signed char)18]))))));
                    var_24 = ((/* implicit */unsigned char) arr_1 [i_5]);
                    arr_24 [(signed char)13] [i_6] [(signed char)13] [i_7] = ((((/* implicit */_Bool) ((arr_18 [13] [i_6]) ^ (((/* implicit */long long int) ((/* implicit */int) ((short) var_11))))))) ? (((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_7))))) - (((unsigned long long int) var_7)))) : (((/* implicit */unsigned long long int) 140506967)));
                    var_25 = ((/* implicit */short) (-(max((((/* implicit */int) arr_0 [i_7 + 1] [i_6 + 1])), (arr_8 [i_7] [i_6 - 2] [i_7 - 2] [i_6])))));
                }
            } 
        } 
    } 
    var_26 = ((((/* implicit */_Bool) var_10)) ? ((+(((((/* implicit */_Bool) (unsigned short)13)) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)220))))))) : (923677267877181148ULL));
    var_27 = ((/* implicit */signed char) ((int) var_12));
}
