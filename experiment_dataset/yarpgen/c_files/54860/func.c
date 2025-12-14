/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54860
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54860 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54860
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
    var_12 |= ((/* implicit */unsigned long long int) var_2);
    /* LoopSeq 1 */
    for (int i_0 = 2; i_0 < 9; i_0 += 2) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) /* same iter space */
        {
            arr_4 [i_0 + 1] [i_1] = ((/* implicit */_Bool) ((((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_1]))) | (var_1))) | (((/* implicit */long long int) ((((/* implicit */int) arr_3 [(_Bool)1] [i_0 - 2] [i_0])) & (((/* implicit */int) (unsigned short)65529)))))));
            arr_5 [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */int) var_5)) * (((/* implicit */int) arr_2 [i_0] [i_1] [i_0 + 1]))));
            arr_6 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_0)))) % ((+(437692953U)))));
            /* LoopNest 3 */
            for (signed char i_2 = 1; i_2 < 9; i_2 += 3) 
            {
                for (unsigned char i_3 = 4; i_3 < 8; i_3 += 4) 
                {
                    for (unsigned char i_4 = 0; i_4 < 10; i_4 += 1) 
                    {
                        {
                            arr_14 [i_1] [i_2] [i_1] [i_1] = ((/* implicit */unsigned char) 1756296536U);
                            var_13 = ((/* implicit */unsigned short) ((arr_8 [i_0 - 2] [i_1 - 1] [i_1 - 1] [i_2 + 1]) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_11 [i_0 - 1] [i_1 - 1] [i_2] [i_2] [i_2 - 1]))));
                            var_14 = ((/* implicit */signed char) ((arr_10 [i_0 + 1] [i_0 + 1] [(short)8] [i_0 - 1]) ? (((/* implicit */int) ((unsigned short) (unsigned short)62205))) : (((/* implicit */int) ((signed char) var_2)))));
                        }
                    } 
                } 
            } 
            var_15 = arr_13 [i_1];
        }
        /* vectorizable */
        for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) /* same iter space */
        {
            var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) ((unsigned char) (unsigned char)175)))));
            var_17 = ((/* implicit */_Bool) var_5);
            /* LoopNest 3 */
            for (signed char i_6 = 3; i_6 < 6; i_6 += 3) 
            {
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    for (signed char i_8 = 0; i_8 < 10; i_8 += 3) 
                    {
                        {
                            var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) ((unsigned char) (_Bool)0)))));
                            arr_25 [i_0] [i_6] [i_0 - 1] = ((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned char) 171143420))) >= (((/* implicit */int) ((unsigned short) arr_17 [i_5 - 1])))));
                            var_19 *= ((/* implicit */unsigned short) var_8);
                        }
                    } 
                } 
            } 
        }
        arr_26 [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (+(-3450594730423005545LL))))));
        /* LoopSeq 1 */
        for (unsigned short i_9 = 0; i_9 < 10; i_9 += 2) 
        {
            var_20 = ((/* implicit */int) 8252997951970575989LL);
            var_21 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) var_2)) * (max((((/* implicit */unsigned long long int) (signed char)-75)), (arr_13 [i_0])))));
            var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) (unsigned short)25798))));
        }
        arr_31 [i_0 - 1] [i_0] = ((/* implicit */short) ((unsigned short) ((((/* implicit */int) arr_29 [i_0] [i_0])) * (((((/* implicit */int) (signed char)(-127 - 1))) * (((/* implicit */int) var_4)))))));
        var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((unsigned short) (short)-18416)), (arr_20 [3U] [i_0 - 1] [i_0 - 2])))) ? ((((+(((/* implicit */int) (signed char)102)))) % (((/* implicit */int) ((((/* implicit */int) var_6)) < (((/* implicit */int) var_11))))))) : ((~(((/* implicit */int) (!(((/* implicit */_Bool) 171082344U)))))))));
    }
}
