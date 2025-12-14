/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235995
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235995 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235995
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
    var_15 = ((/* implicit */short) (((~(((/* implicit */int) ((signed char) var_1))))) - (((((/* implicit */_Bool) var_11)) ? ((+(((/* implicit */int) (short)-32764)))) : (((/* implicit */int) min((((/* implicit */unsigned short) (short)12851)), (var_2))))))));
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        var_16 -= ((/* implicit */signed char) min((((/* implicit */int) arr_2 [i_0])), (((((/* implicit */_Bool) (short)32764)) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_2 [i_0]))))));
        var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((arr_0 [i_0]), (arr_0 [i_0])))) ? (((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (short)-142)) : (((/* implicit */int) arr_0 [i_0])))))) : (((/* implicit */int) arr_1 [i_0] [i_0]))));
        var_18 = ((/* implicit */short) ((((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) (short)32764)) : (((/* implicit */int) (unsigned short)20103)))) != ((~(((/* implicit */int) (signed char)59))))));
    }
    for (unsigned char i_1 = 2; i_1 < 13; i_1 += 1) 
    {
        var_19 = ((/* implicit */signed char) (+(((/* implicit */int) max((((/* implicit */short) (signed char)95)), ((short)1885))))));
        /* LoopNest 2 */
        for (unsigned char i_2 = 0; i_2 < 14; i_2 += 2) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                {
                    arr_10 [i_1 + 1] [i_1] [(signed char)5] [i_3] = ((/* implicit */short) min((((/* implicit */int) var_1)), ((((~(((/* implicit */int) (short)32767)))) & (((/* implicit */int) arr_0 [i_1 - 1]))))));
                    var_20 = ((/* implicit */unsigned short) ((_Bool) arr_2 [i_1 + 1]));
                    var_21 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)59))) + (127U)));
                    arr_11 [i_1] [i_2] [i_2] [i_3] |= ((/* implicit */short) min((max((((/* implicit */long long int) var_9)), (((((/* implicit */_Bool) arr_5 [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-45))) : (arr_9 [i_1] [i_2]))))), (((/* implicit */long long int) var_0))));
                    /* LoopNest 2 */
                    for (signed char i_4 = 0; i_4 < 14; i_4 += 2) 
                    {
                        for (signed char i_5 = 0; i_5 < 14; i_5 += 1) 
                        {
                            {
                                var_22 = ((/* implicit */signed char) (~(((/* implicit */int) min((((/* implicit */unsigned short) var_1)), (var_3))))));
                                var_23 |= ((/* implicit */signed char) 697224487074213697LL);
                                var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_7 [i_2] [i_4] [i_5])) ? (((((((/* implicit */int) (unsigned short)56545)) * (((/* implicit */int) (signed char)115)))) >> (((((/* implicit */int) arr_1 [i_1 - 2] [i_1 - 1])) + (33))))) : (((/* implicit */int) ((((9223372036854775807LL) - (arr_9 [i_1] [i_1]))) != (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_5]))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_25 = ((unsigned short) min((((4646568600279428084LL) | (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_1]))))), (arr_9 [i_1] [i_1])));
    }
    for (unsigned int i_6 = 1; i_6 < 13; i_6 += 4) 
    {
        arr_20 [i_6] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)10420)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)386))) : (1812502596U))))));
        arr_21 [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_19 [i_6] [i_6]))))) ? (((((/* implicit */_Bool) (+(((/* implicit */int) arr_2 [i_6 + 1]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_19 [i_6 + 2] [i_6])) ? (((/* implicit */int) arr_19 [i_6 + 2] [i_6 + 2])) : (((/* implicit */int) (short)10420))))) : (18446744073709551599ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((max(((short)-14535), (((/* implicit */short) (signed char)-59)))), (((/* implicit */short) var_4))))))));
        var_26 = ((/* implicit */unsigned int) (unsigned short)34889);
    }
}
