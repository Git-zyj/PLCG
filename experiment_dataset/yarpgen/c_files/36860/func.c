/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36860
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36860 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36860
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
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            {
                arr_7 [i_0] [12ULL] |= ((/* implicit */unsigned char) (+((-2147483647 - 1))));
                var_14 = ((/* implicit */unsigned char) (short)-12232);
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 15; i_2 += 1) 
                {
                    for (short i_3 = 3; i_3 < 11; i_3 += 4) 
                    {
                        {
                            var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_3] [i_3 - 2] [i_3 - 1] [(unsigned short)11] [i_3 - 1] [(signed char)14])) ? (((/* implicit */int) (signed char)62)) : (((/* implicit */int) arr_11 [i_3 + 4] [i_3 - 3] [i_3 + 2] [9] [i_3 - 3] [i_3]))))) ? ((~(((/* implicit */int) arr_11 [12] [i_3 + 3] [i_3 + 2] [i_3] [i_3 - 2] [i_3 + 1])))) : (((((/* implicit */_Bool) arr_11 [i_3] [i_3 + 2] [i_3 + 2] [i_3] [i_3 - 2] [12U])) ? (((/* implicit */int) arr_11 [i_3] [i_3 - 3] [i_3 + 4] [i_3 - 3] [i_3 - 1] [i_3 + 4])) : (((/* implicit */int) (unsigned char)1))))));
                            arr_12 [i_3] [i_0] [i_1] [i_1] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max(((-(1U))), (((/* implicit */unsigned int) (-(((/* implicit */int) arr_8 [i_0] [i_2])))))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 0U)) ? (-204132311) : (arr_2 [i_0])))) : ((-((-(4122608995U)))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_16 = ((((/* implicit */_Bool) var_13)) ? (max(((+(((/* implicit */int) (short)-9972)))), (((((/* implicit */_Bool) var_12)) ? (3968) : (((/* implicit */int) var_7)))))) : (((/* implicit */int) var_7)));
    var_17 = ((/* implicit */unsigned short) ((((((/* implicit */unsigned long long int) (-(4U)))) == (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)127))) ^ (var_9))))) ? (var_0) : (((/* implicit */unsigned long long int) var_4))));
    /* LoopSeq 3 */
    for (unsigned char i_4 = 0; i_4 < 21; i_4 += 4) 
    {
        var_18 = ((/* implicit */signed char) ((short) 204132309));
        arr_16 [i_4] = ((/* implicit */int) (-(max((((((/* implicit */_Bool) 13655121622602305110ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)51339))) : (3363780213U))), (((/* implicit */unsigned int) max((((/* implicit */unsigned short) (unsigned char)238)), ((unsigned short)0))))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
        {
            arr_20 [i_4] [i_4] = arr_13 [i_4];
            arr_21 [i_4] [i_5] = ((/* implicit */unsigned long long int) arr_19 [i_5] [i_4]);
            var_19 = ((/* implicit */short) (-(arr_19 [i_5 - 1] [i_5 - 1])));
            var_20 = ((/* implicit */signed char) (((-(4U))) ^ (((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (unsigned short)14182)) : (((/* implicit */int) (unsigned short)51339)))))));
        }
    }
    for (signed char i_6 = 0; i_6 < 20; i_6 += 2) 
    {
        /* LoopNest 2 */
        for (short i_7 = 2; i_7 < 17; i_7 += 3) 
        {
            for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
            {
                {
                    var_21 = ((/* implicit */unsigned int) (-(((((((/* implicit */_Bool) (short)-32760)) ? (7013803537261779432ULL) : (((/* implicit */unsigned long long int) 172358281U)))) ^ ((-(16684784376590488586ULL)))))));
                    arr_29 [i_6] [6] [i_8] [i_6] &= ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_18 [i_8 - 1] [i_6]))))) ? (((((/* implicit */_Bool) arr_18 [i_8] [i_7 - 2])) ? (((/* implicit */unsigned int) (-2147483647 - 1))) : (arr_24 [i_6] [i_7 - 2] [i_8 - 1]))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)32766)))));
                    var_22 = ((/* implicit */int) ((unsigned char) (unsigned char)30));
                    var_23 -= ((/* implicit */unsigned short) max((4337811190274068162ULL), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 13655121622602305110ULL)) ? (13655121622602305102ULL) : (((/* implicit */unsigned long long int) 4122609019U)))) == (((/* implicit */unsigned long long int) arr_26 [i_7] [i_7 + 1] [i_8 - 1] [i_8 - 1])))))));
                }
            } 
        } 
        arr_30 [i_6] = ((/* implicit */_Bool) 10715987818234976587ULL);
        var_24 -= ((/* implicit */unsigned int) arr_19 [i_6] [i_6]);
    }
    /* vectorizable */
    for (signed char i_9 = 0; i_9 < 23; i_9 += 1) 
    {
        var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)182)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_31 [i_9]))) : (4337811190274068158ULL)));
        var_26 &= ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)15)) ? (((/* implicit */unsigned long long int) 4294967295U)) : (arr_34 [i_9])));
    }
}
