/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191374
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191374 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191374
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)-52))));
        arr_4 [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? ((+(arr_1 [i_0] [i_0]))) : (arr_1 [i_0] [i_0])));
    }
    for (short i_1 = 0; i_1 < 16; i_1 += 2) 
    {
        var_11 = ((/* implicit */unsigned int) ((unsigned char) (!(((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)255))))))));
        /* LoopNest 2 */
        for (unsigned short i_2 = 0; i_2 < 16; i_2 += 3) 
        {
            for (short i_3 = 1; i_3 < 15; i_3 += 4) 
            {
                {
                    arr_13 [i_3] [i_3 + 1] [i_2] [i_1] = ((/* implicit */short) ((((/* implicit */int) ((short) (unsigned short)55839))) != (min((((((/* implicit */int) arr_10 [i_3])) - (((/* implicit */int) arr_11 [i_3])))), (((((/* implicit */int) arr_11 [i_3])) - (1492400383)))))));
                    arr_14 [11LL] [i_2] [8LL] [i_2] = ((/* implicit */unsigned char) 10022127563256145234ULL);
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned char i_4 = 0; i_4 < 16; i_4 += 4) 
        {
            for (unsigned char i_5 = 3; i_5 < 15; i_5 += 2) 
            {
                {
                    arr_20 [i_5] [i_4] [i_5] = (-(((((/* implicit */_Bool) ((arr_9 [i_1] [i_4]) - (arr_5 [i_5 - 2] [i_4])))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_17 [i_5])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_17 [i_5]))))) : (((unsigned int) arr_7 [i_1] [6])))));
                    arr_21 [i_1] [i_1] [i_5] = ((/* implicit */_Bool) (~(max((arr_5 [i_5 - 2] [i_4]), (arr_5 [i_5 - 1] [i_4])))));
                }
            } 
        } 
        arr_22 [i_1] = ((/* implicit */unsigned long long int) arr_10 [i_1]);
        var_12 = ((/* implicit */short) min(((((((_Bool)1) ? (((/* implicit */int) (unsigned short)55829)) : (((/* implicit */int) (_Bool)1)))) + (((/* implicit */int) arr_10 [i_1])))), ((~(((/* implicit */int) arr_18 [i_1] [i_1] [(unsigned short)14] [i_1]))))));
    }
    var_13 = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) var_6))))) << (((((((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)29438))))) + ((+(1187289436U))))) - (1187259993U)))));
    var_14 = var_9;
}
