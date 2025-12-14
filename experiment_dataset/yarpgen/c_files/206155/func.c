/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206155
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206155 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206155
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) arr_0 [i_0]))));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 14; i_2 += 2) 
            {
                {
                    var_21 += ((/* implicit */signed char) ((short) 13691916259907382876ULL));
                    var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((var_13) | (2080374784U)))) ? (((/* implicit */int) (unsigned char)229)) : (((/* implicit */int) var_8))));
                    var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_1] [i_1]))) > (((9223372036854775807LL) >> (((/* implicit */int) arr_3 [i_2]))))));
                }
            } 
        } 
        var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) (((-(11U))) & (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))))));
        var_25 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_5 [4ULL] [4ULL])) ? (((var_7) + (-923423983767526933LL))) : (((/* implicit */long long int) ((((/* implicit */int) var_19)) % (((/* implicit */int) arr_2 [2U] [i_0])))))));
    }
    var_26 = ((/* implicit */unsigned int) max((var_26), (((/* implicit */unsigned int) var_5))));
    var_27 = ((/* implicit */short) ((((/* implicit */_Bool) var_6)) ? (((max((((/* implicit */long long int) 2819732973U)), (var_2))) | (((/* implicit */long long int) var_13)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) ((signed char) var_4))) : (((/* implicit */int) max((var_17), (((/* implicit */signed char) (_Bool)0))))))))));
    /* LoopSeq 3 */
    for (long long int i_3 = 0; i_3 < 17; i_3 += 3) 
    {
        var_28 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_7 [i_3])) * (((/* implicit */int) min((arr_7 [i_3]), (arr_7 [i_3]))))));
        arr_8 [i_3] = ((/* implicit */long long int) ((((arr_6 [8LL] [i_3]) <= (arr_6 [i_3] [i_3]))) ? (((((_Bool) (short)5374)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))) : ((~(((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_7 [i_3])) : (((/* implicit */int) var_9))))))));
    }
    for (unsigned char i_4 = 0; i_4 < 14; i_4 += 2) /* same iter space */
    {
        var_29 = ((/* implicit */unsigned long long int) max((var_29), (((/* implicit */unsigned long long int) arr_5 [i_4] [i_4]))));
        var_30 = ((/* implicit */unsigned char) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))));
        var_31 += ((/* implicit */signed char) max((1834621781678635377LL), (((/* implicit */long long int) 2543777647U))));
    }
    for (unsigned char i_5 = 0; i_5 < 14; i_5 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (signed char i_6 = 0; i_6 < 14; i_6 += 4) 
        {
            for (unsigned int i_7 = 0; i_7 < 14; i_7 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        for (unsigned char i_9 = 0; i_9 < 14; i_9 += 3) 
                        {
                            {
                                var_32 = ((/* implicit */int) ((unsigned char) ((arr_14 [i_5]) ? (var_13) : (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_7]))))));
                                arr_23 [i_5] [i_7] [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(451179145U)))) ? (((/* implicit */long long int) ((/* implicit */int) (short)(-32767 - 1)))) : (((((/* implicit */long long int) ((arr_17 [i_5] [i_5] [(short)4] [i_5] [i_5] [11U]) + (var_15)))) / (((long long int) arr_11 [i_8]))))));
                                var_33 = ((/* implicit */long long int) ((short) min((arr_10 [(signed char)9] [i_6]), (arr_10 [i_5] [i_5]))));
                            }
                        } 
                    } 
                    arr_24 [i_7] = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) (short)-20)))) && (((/* implicit */_Bool) var_17))));
                }
            } 
        } 
        var_34 = ((/* implicit */int) ((unsigned char) ((((_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_5] [i_5] [i_5]))) : (((((/* implicit */unsigned long long int) -532015060)) / (14784360202805221932ULL))))));
    }
}
