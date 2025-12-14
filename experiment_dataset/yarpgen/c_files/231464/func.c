/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231464
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231464 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231464
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
    var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) var_0))));
    /* LoopSeq 4 */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 1) /* same iter space */
    {
        var_18 = ((/* implicit */unsigned int) min((((/* implicit */unsigned short) max(((_Bool)1), ((_Bool)1)))), (min(((unsigned short)1020), (((/* implicit */unsigned short) (_Bool)1))))));
        var_19 -= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_4))));
    }
    for (unsigned int i_1 = 0; i_1 < 24; i_1 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned short i_2 = 4; i_2 < 23; i_2 += 1) 
        {
            for (int i_3 = 0; i_3 < 24; i_3 += 2) 
            {
                for (unsigned int i_4 = 1; i_4 < 23; i_4 += 4) 
                {
                    {
                        var_20 = ((unsigned char) (!(((/* implicit */_Bool) arr_6 [i_1]))));
                        arr_12 [i_1] [i_1] [i_1] [15ULL] = ((/* implicit */short) ((((/* implicit */int) arr_10 [i_1] [i_1] [i_3] [i_4 - 1] [(unsigned char)18] [i_3])) >= (((/* implicit */int) arr_10 [(_Bool)1] [i_2] [i_1] [i_4 - 1] [i_3] [(unsigned char)4]))));
                        var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */int) min((arr_5 [i_1]), (((/* implicit */short) var_15))))) >= (min((((arr_9 [i_1] [i_1] [(unsigned char)8]) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) arr_5 [i_1])))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_1] [i_1])))))))));
                    }
                } 
            } 
        } 
        var_22 *= ((/* implicit */unsigned short) min((((((/* implicit */_Bool) 4294967286U)) && (((/* implicit */_Bool) (unsigned char)43)))), (((((/* implicit */int) (unsigned char)35)) > (((/* implicit */int) (unsigned short)96))))));
    }
    for (unsigned char i_5 = 3; i_5 < 15; i_5 += 3) 
    {
        /* LoopNest 2 */
        for (long long int i_6 = 1; i_6 < 16; i_6 += 4) 
        {
            for (short i_7 = 2; i_7 < 16; i_7 += 3) 
            {
                {
                    arr_23 [i_5] [i_6 + 1] [i_6 + 1] = ((/* implicit */int) (!((_Bool)1)));
                    arr_24 [i_5] [(unsigned short)8] [i_5] [(signed char)13] = ((/* implicit */unsigned char) ((int) ((((/* implicit */_Bool) var_2)) ? (arr_21 [i_5 - 3]) : (arr_21 [i_5 - 2]))));
                }
            } 
        } 
        var_23 = ((/* implicit */signed char) ((unsigned int) arr_16 [i_5 - 3] [i_5]));
        var_24 = ((/* implicit */unsigned char) ((unsigned long long int) (unsigned short)65440));
    }
    for (int i_8 = 1; i_8 < 20; i_8 += 3) 
    {
        /* LoopNest 3 */
        for (signed char i_9 = 0; i_9 < 21; i_9 += 4) 
        {
            for (signed char i_10 = 1; i_10 < 18; i_10 += 1) 
            {
                for (long long int i_11 = 0; i_11 < 21; i_11 += 4) 
                {
                    {
                        var_25 ^= ((/* implicit */unsigned long long int) (short)29370);
                        var_26 = var_1;
                        arr_35 [i_8] = ((/* implicit */signed char) arr_9 [i_8] [i_9] [3ULL]);
                    }
                } 
            } 
        } 
        arr_36 [i_8] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_6 [i_8])) || (arr_4 [i_8] [i_8])));
    }
    var_27 = ((/* implicit */_Bool) (+(min((((/* implicit */unsigned int) var_6)), (var_3)))));
}
