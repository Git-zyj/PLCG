/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247336
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247336 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247336
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
    var_16 = ((/* implicit */signed char) 18446744073709551600ULL);
    var_17 = ((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned short) var_0))) <= (((/* implicit */int) var_2))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 3; i_0 < 12; i_0 += 2) 
    {
        for (unsigned int i_1 = 1; i_1 < 11; i_1 += 3) 
        {
            {
                var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 26ULL)) ? (18446744073709551605ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32051)))))) ? (min((((/* implicit */unsigned int) ((4517750475179365303ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)112)))))), (4276720957U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-88))))) && (((/* implicit */_Bool) 32ULL))))))));
                arr_4 [i_0] [i_0] = ((/* implicit */unsigned char) -623350442828889122LL);
                /* LoopSeq 2 */
                for (long long int i_2 = 1; i_2 < 11; i_2 += 2) 
                {
                    arr_9 [i_0] [i_0 + 2] [i_0] [i_0 + 2] = ((/* implicit */unsigned char) var_8);
                    arr_10 [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((unsigned short) 18446744073709551599ULL));
                }
                for (long long int i_3 = 0; i_3 < 14; i_3 += 3) 
                {
                    arr_13 [i_0] [i_0] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((int) min((arr_11 [11U] [i_0] [i_0] [i_0]), (((/* implicit */unsigned long long int) var_6)))))) ? ((+(arr_1 [i_0]))) : (((((/* implicit */_Bool) arr_12 [i_0] [i_0 - 3])) ? (min((2074210436U), (((/* implicit */unsigned int) (short)32759)))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)117))))))))));
                    var_19 *= ((/* implicit */short) ((min((max((6821552769623610275ULL), (((/* implicit */unsigned long long int) var_3)))), (18142958916431217231ULL))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned long long int) arr_11 [i_0] [i_3] [(unsigned char)2] [i_1])))))))));
                    var_20 = ((/* implicit */long long int) arr_8 [i_0] [i_0] [i_3]);
                    arr_14 [i_0] [i_0] [i_0 - 1] [i_0 + 2] = ((/* implicit */int) var_3);
                }
                arr_15 [i_0] = (i_0 % 2 == zero) ? (min((((((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0] [i_0] [i_0]))) : (((((/* implicit */_Bool) (unsigned char)141)) ? (17ULL) : (((/* implicit */unsigned long long int) var_1)))))), (max((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)46348)) << (((arr_3 [i_0] [i_0] [i_0]) + (599529062)))))), (arr_7 [i_0] [i_0] [i_0]))))) : (min((((((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0] [i_0] [i_0]))) : (((((/* implicit */_Bool) (unsigned char)141)) ? (17ULL) : (((/* implicit */unsigned long long int) var_1)))))), (max((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)46348)) << (((((arr_3 [i_0] [i_0] [i_0]) + (599529062))) - (241935283)))))), (arr_7 [i_0] [i_0] [i_0])))));
            }
        } 
    } 
    var_21 = ((/* implicit */_Bool) var_6);
}
