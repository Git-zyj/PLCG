/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245657
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245657 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245657
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
    for (signed char i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (long long int i_1 = 3; i_1 < 14; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 15; i_2 += 1) 
            {
                {
                    arr_10 [i_2] [i_1 - 3] [i_2] = ((/* implicit */unsigned long long int) (-(min((((((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [i_1 - 3]))) / (var_4))), (((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)65528)))))))));
                    arr_11 [i_2] [i_1 - 1] [i_1 - 1] = ((/* implicit */short) max((arr_2 [i_0]), (((/* implicit */unsigned long long int) (unsigned short)7))));
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */unsigned char) ((int) var_12));
    /* LoopSeq 1 */
    for (long long int i_3 = 2; i_3 < 22; i_3 += 3) 
    {
        var_14 = ((/* implicit */unsigned short) -1693577069);
        var_15 = ((((/* implicit */_Bool) ((unsigned char) arr_13 [i_3]))) ? (((/* implicit */long long int) (+(((/* implicit */int) arr_12 [i_3]))))) : (((long long int) (unsigned char)29)));
        /* LoopSeq 1 */
        for (signed char i_4 = 0; i_4 < 24; i_4 += 1) 
        {
            /* LoopNest 3 */
            for (long long int i_5 = 2; i_5 < 22; i_5 += 4) 
            {
                for (signed char i_6 = 1; i_6 < 20; i_6 += 2) 
                {
                    for (int i_7 = 0; i_7 < 24; i_7 += 1) 
                    {
                        {
                            var_16 = ((((/* implicit */int) arr_24 [i_3 + 2] [i_4] [i_3 + 2])) * (((/* implicit */int) ((arr_20 [i_3 - 1] [i_6 - 1] [i_5 - 1] [i_3]) && (((/* implicit */_Bool) ((signed char) arr_26 [i_3] [i_3] [i_3] [i_7] [i_7])))))));
                            var_17 = ((/* implicit */unsigned int) (-((-(18446744073709551605ULL)))));
                            var_18 *= ((/* implicit */signed char) (!(((/* implicit */_Bool) min((((/* implicit */long long int) (short)154)), (0LL))))));
                            arr_27 [i_7] [i_7] [i_7] [i_6 + 2] [i_7] [i_7] [i_5] |= ((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_18 [i_4] [i_5 - 1] [i_6 + 1] [i_7])) ? (0LL) : (((((/* implicit */_Bool) -19LL)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)19974)))))))));
                        }
                    } 
                } 
            } 
            /* LoopNest 3 */
            for (signed char i_8 = 2; i_8 < 22; i_8 += 1) 
            {
                for (signed char i_9 = 0; i_9 < 24; i_9 += 2) 
                {
                    for (short i_10 = 0; i_10 < 24; i_10 += 2) 
                    {
                        {
                            var_19 = ((/* implicit */_Bool) (signed char)96);
                            arr_37 [i_3] [i_3] [i_3] [i_9] [i_10] = ((/* implicit */signed char) (-((-(((/* implicit */int) arr_24 [i_8 - 2] [i_8 - 2] [i_3 + 2]))))));
                            var_20 = ((/* implicit */long long int) (-(((min((((/* implicit */int) (signed char)-3)), (1427127383))) / (((/* implicit */int) min((((/* implicit */short) (unsigned char)19)), (var_12))))))));
                        }
                    } 
                } 
            } 
        }
    }
    var_21 = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_9))));
}
