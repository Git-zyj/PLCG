/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19463
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19463 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19463
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
    var_17 &= ((/* implicit */short) min((((((/* implicit */int) max((var_14), (((/* implicit */short) var_1))))) & (((/* implicit */int) var_1)))), (((/* implicit */int) (_Bool)1))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) (-(1966167143))))));
        arr_3 [i_0] = (signed char)17;
        var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (arr_2 [i_0])))))) ? (((((/* implicit */_Bool) 2120122644U)) ? ((+(((/* implicit */int) (short)-5)))) : (((int) var_4)))) : (((/* implicit */int) (short)-32487)))))));
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 2; i_1 < 19; i_1 += 3) 
    {
        arr_8 [i_1 + 1] [i_1 + 2] = ((/* implicit */short) (~((+(((/* implicit */int) arr_1 [i_1] [i_1]))))));
        arr_9 [i_1] = ((/* implicit */signed char) ((unsigned int) 12399311575847269467ULL));
        arr_10 [i_1] [i_1] = ((/* implicit */unsigned short) (signed char)-64);
        arr_11 [i_1] [i_1 + 2] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_14))) + (2174844652U))))));
    }
    var_20 = ((/* implicit */unsigned int) (short)10831);
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 13; i_2 += 3) 
    {
        for (unsigned char i_3 = 1; i_3 < 12; i_3 += 3) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned char i_4 = 1; i_4 < 12; i_4 += 1) 
                {
                    arr_19 [i_3] [i_3] [i_3 + 1] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_14 [i_2] [i_2])) & (((/* implicit */int) arr_13 [i_4]))))) % (min((((/* implicit */unsigned long long int) (signed char)7)), (((var_4) * (arr_2 [i_3 - 1])))))));
                    arr_20 [i_4] [0ULL] [i_2] |= ((/* implicit */short) (unsigned char)25);
                    var_21 = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)34)) >> (((((/* implicit */int) (short)-15014)) + (15024)))));
                }
                for (short i_5 = 0; i_5 < 13; i_5 += 3) 
                {
                    var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) (((~(((/* implicit */int) ((_Bool) (signed char)7))))) & (1966167143))))));
                    var_23 = ((/* implicit */signed char) (-(arr_4 [i_2] [i_3 + 1])));
                    arr_25 [i_2] [i_3] = (~(((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_1 [i_3 - 1] [i_3 - 1])) : (((/* implicit */int) (unsigned short)51216)))));
                    var_24 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_1 [i_3 - 1] [i_3 - 1]), (arr_1 [i_3 + 1] [i_3])))) ? (((/* implicit */int) max((arr_1 [i_3 + 1] [(signed char)19]), (arr_1 [i_3 - 1] [i_2])))) : (((/* implicit */int) ((_Bool) (unsigned char)230)))));
                }
                /* LoopSeq 1 */
                for (unsigned char i_6 = 3; i_6 < 11; i_6 += 4) 
                {
                    var_25 = ((/* implicit */int) arr_16 [i_2] [i_3] [i_3] [i_6]);
                    var_26 *= ((/* implicit */unsigned char) arr_15 [(unsigned char)2]);
                    var_27 = ((/* implicit */unsigned short) min((var_27), (((/* implicit */unsigned short) (~(var_9))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        var_28 = ((/* implicit */signed char) min((var_28), (((/* implicit */signed char) var_12))));
                        arr_30 [i_3] [i_6] [i_3] [i_3] = ((/* implicit */int) var_0);
                        arr_31 [i_2] [i_2] [i_6] [i_7] [i_2] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 2120122643U)) ? (arr_2 [i_3 - 1]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)25)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned char)30)))))));
                    }
                }
            }
        } 
    } 
    var_29 = ((/* implicit */unsigned char) var_12);
}
