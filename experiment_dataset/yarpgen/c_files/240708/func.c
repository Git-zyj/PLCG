/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240708
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240708 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240708
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
    var_18 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_15))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 3; i_0 < 19; i_0 += 1) 
    {
        arr_3 [i_0 + 2] [i_0] = var_15;
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            arr_6 [(_Bool)1] [(_Bool)1] [i_1] = ((/* implicit */unsigned char) (_Bool)1);
            /* LoopNest 2 */
            for (signed char i_2 = 0; i_2 < 21; i_2 += 2) 
            {
                for (unsigned short i_3 = 0; i_3 < 21; i_3 += 2) 
                {
                    {
                        arr_13 [14LL] = ((/* implicit */unsigned short) (-(((arr_4 [i_3] [i_3] [i_3]) * (((/* implicit */unsigned int) var_1))))));
                        arr_14 [13LL] [i_1] [11LL] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_7 [i_0 + 2] [i_0 - 3] [i_0 + 2])) ? (((/* implicit */unsigned int) (-(((/* implicit */int) (short)24602))))) : ((+(arr_4 [i_0] [i_1] [i_2])))));
                        arr_15 [i_3] = ((/* implicit */short) ((signed char) (+(((/* implicit */int) (short)-23939)))));
                        arr_16 [i_0] [i_1] [i_2] [i_3] [5ULL] [i_0 - 2] = ((/* implicit */unsigned char) (-(((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0] [i_1])) || (((/* implicit */_Bool) (unsigned short)45295)))))));
                    }
                } 
            } 
            arr_17 [i_0] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -284049491)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) : (arr_9 [i_0 + 1] [i_0 - 3] [i_0 + 1])));
        }
        /* LoopNest 3 */
        for (short i_4 = 2; i_4 < 19; i_4 += 4) 
        {
            for (unsigned int i_5 = 2; i_5 < 20; i_5 += 2) 
            {
                for (unsigned char i_6 = 0; i_6 < 21; i_6 += 1) 
                {
                    {
                        arr_26 [i_0] [i_4] = ((/* implicit */long long int) ((unsigned short) 284049491));
                        arr_27 [i_0] [i_0] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 284049490)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (arr_18 [i_0] [(_Bool)1] [i_6])))) ? (((((/* implicit */_Bool) arr_4 [i_0 - 3] [i_4 - 1] [i_6])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_15)))) : (((/* implicit */int) var_3)))) << (((max((((/* implicit */long long int) 284049490)), (-9223372036854775788LL))) - (284049475LL)))));
                    }
                } 
            } 
        } 
        arr_28 [i_0] [i_0] = ((/* implicit */signed char) (+(15823446937685223588ULL)));
    }
    for (unsigned int i_7 = 1; i_7 < 22; i_7 += 2) 
    {
        arr_33 [i_7 + 2] [10] = ((int) 12582912U);
        arr_34 [i_7] [i_7] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 134209536U))));
    }
}
