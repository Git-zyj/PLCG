/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21737
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21737 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21737
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
    var_13 = ((/* implicit */unsigned short) (+(var_2)));
    /* LoopSeq 3 */
    for (signed char i_0 = 2; i_0 < 9; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) arr_0 [i_0])))) ? (((((/* implicit */_Bool) var_3)) ? (arr_0 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */long long int) ((/* implicit */int) ((arr_0 [i_0]) <= (((/* implicit */long long int) ((/* implicit */int) (short)32759)))))))));
        var_14 = ((((/* implicit */int) ((((/* implicit */int) ((-8320130201873902469LL) <= (((/* implicit */long long int) ((/* implicit */int) (unsigned char)80)))))) >= (((/* implicit */int) var_1))))) >= (1003622155));
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 3; i_1 < 10; i_1 += 2) 
    {
        arr_5 [i_1] = ((/* implicit */short) var_10);
        var_15 = ((/* implicit */short) (+(var_12)));
    }
    /* vectorizable */
    for (signed char i_2 = 0; i_2 < 10; i_2 += 3) 
    {
        arr_8 [8U] &= var_12;
        /* LoopSeq 1 */
        for (short i_3 = 2; i_3 < 7; i_3 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_4 = 2; i_4 < 8; i_4 += 3) 
            {
                for (unsigned char i_5 = 1; i_5 < 7; i_5 += 1) 
                {
                    {
                        arr_15 [i_2] [i_5 - 1] = ((/* implicit */unsigned char) -8320130201873902473LL);
                        var_16 = ((/* implicit */short) ((((/* implicit */_Bool) var_9)) ? (8320130201873902463LL) : (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_2] [i_2])))));
                        var_17 = ((/* implicit */int) ((((/* implicit */int) ((_Bool) 15LL))) < (((/* implicit */int) arr_4 [i_4 + 1]))));
                        arr_16 [2ULL] [i_2] = var_7;
                        var_18 = ((/* implicit */unsigned char) ((signed char) (short)32761));
                    }
                } 
            } 
            arr_17 [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) ((15LL) >> (((/* implicit */int) (unsigned char)12))));
        }
        arr_18 [i_2] = ((/* implicit */unsigned char) (((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (var_3))) >> (((((/* implicit */int) arr_7 [i_2] [i_2])) + (79)))));
        var_19 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) -8195040012023393083LL))));
    }
}
