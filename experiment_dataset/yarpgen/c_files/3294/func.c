/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3294
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3294 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3294
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
    var_13 = var_1;
    var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) var_11))));
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) ((((/* implicit */int) ((((((/* implicit */_Bool) (short)11957)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (3194806856748171368LL))) >= (min((3194806856748171368LL), (((/* implicit */long long int) arr_1 [10U] [(unsigned char)18]))))))) % (((((/* implicit */int) (short)0)) - (((/* implicit */int) arr_1 [4ULL] [4ULL])))))))));
        var_16 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_0] [(short)8])) << (((((/* implicit */int) (short)63)) - (60)))))) ? ((((!(((/* implicit */_Bool) (unsigned short)19234)))) ? (((((/* implicit */int) (unsigned char)70)) % (((/* implicit */int) (short)72)))) : (((/* implicit */int) arr_0 [i_0] [(unsigned short)18])))) : (((/* implicit */int) ((((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)220))))) < (((unsigned int) arr_1 [6U] [i_0])))))));
    }
    for (unsigned int i_1 = 2; i_1 < 18; i_1 += 1) 
    {
        arr_7 [i_1] &= ((/* implicit */unsigned char) (-(min((((/* implicit */unsigned int) (short)-1)), (3767496587U)))));
        /* LoopNest 2 */
        for (unsigned char i_2 = 0; i_2 < 19; i_2 += 1) 
        {
            for (int i_3 = 0; i_3 < 19; i_3 += 1) 
            {
                {
                    arr_13 [i_3] [i_2] [i_1] = ((/* implicit */short) min((((/* implicit */int) min((arr_9 [i_1 - 1]), (arr_3 [i_1 - 1])))), ((+(((/* implicit */int) arr_9 [i_1 + 1]))))));
                    arr_14 [i_3] [i_3] [i_1 - 1] = arr_9 [i_1];
                }
            } 
        } 
        arr_15 [i_1 + 1] = ((/* implicit */unsigned int) ((unsigned long long int) ((int) (-(978191664)))));
    }
    for (unsigned char i_4 = 1; i_4 < 13; i_4 += 2) 
    {
        var_17 ^= ((/* implicit */short) ((((((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_4 - 1]))))) % (((/* implicit */int) arr_8 [i_4 + 1] [i_4 + 1])))) & (((/* implicit */int) (short)61))));
        arr_18 [i_4] = ((/* implicit */long long int) var_5);
        /* LoopNest 2 */
        for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
        {
            for (unsigned int i_6 = 0; i_6 < 14; i_6 += 4) 
            {
                {
                    var_18 -= ((/* implicit */unsigned char) (((!(((((/* implicit */_Bool) arr_11 [i_5] [i_5] [i_4])) && (((/* implicit */_Bool) var_3)))))) && (((/* implicit */_Bool) min((((/* implicit */unsigned int) (-(-978191676)))), (arr_21 [i_6]))))));
                    var_19 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) ((unsigned int) arr_5 [i_4] [i_4]))) ? (((long long int) 1650340190U)) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_25 [i_4] [i_5] [i_5])) ? (((/* implicit */unsigned int) var_9)) : (arr_10 [i_4]))))))));
                    var_20 = ((/* implicit */unsigned int) (~((~(((/* implicit */int) (short)-8))))));
                }
            } 
        } 
    }
}
