/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42285
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42285 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42285
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
    var_11 = ((/* implicit */_Bool) var_0);
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned int i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            /* LoopNest 2 */
            for (long long int i_2 = 0; i_2 < 25; i_2 += 2) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 25; i_3 += 3) 
                {
                    {
                        arr_8 [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) min((arr_6 [i_0] [i_1] [i_1] [i_2] [i_3]), (((/* implicit */unsigned long long int) (-(3272403832U))))))) ? (((/* implicit */long long int) ((((((/* implicit */_Bool) arr_4 [i_0] [i_0] [(unsigned char)18])) ? (1306091719U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)4931))))) / (((((/* implicit */_Bool) (signed char)-106)) ? (1022563463U) : (1022563481U)))))) : (min((((/* implicit */long long int) (signed char)0)), (1152921504606846912LL)))));
                        var_12 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1284602215492437477LL)) ? (1022563456U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)9343)))))) ? (10989394890954487727ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) <= (699829373809157543ULL))))));
                    }
                } 
            } 
            var_13 = ((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) 4611686018427387902LL)) ? (17746914699900394072ULL) : (((/* implicit */unsigned long long int) -1)))));
            var_14 = ((/* implicit */unsigned int) max((var_14), (min((arr_2 [i_0]), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)2)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (unsigned char)94))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) : (arr_3 [i_0] [i_1])))))));
            var_15 = ((/* implicit */unsigned short) var_0);
        }
        for (long long int i_4 = 1; i_4 < 23; i_4 += 4) 
        {
            var_16 = (short)9332;
            /* LoopNest 2 */
            for (long long int i_5 = 0; i_5 < 25; i_5 += 1) 
            {
                for (unsigned int i_6 = 0; i_6 < 25; i_6 += 4) 
                {
                    {
                        var_17 -= ((/* implicit */unsigned char) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) 17592186044384LL)) || (((/* implicit */_Bool) var_10))))), (((((/* implicit */_Bool) min((arr_11 [i_5]), (((/* implicit */int) (unsigned short)45949))))) ? (((((/* implicit */_Bool) arr_0 [i_5])) ? (arr_3 [i_4] [i_6]) : (((/* implicit */unsigned int) ((/* implicit */int) var_5))))) : (max((arr_3 [i_0] [i_4]), (var_8)))))));
                        var_18 = ((/* implicit */unsigned char) (+(((/* implicit */int) ((unsigned short) var_5)))));
                    }
                } 
            } 
            arr_18 [i_0] [(signed char)11] [i_4] = ((((((((/* implicit */_Bool) (short)-32233)) ? (((/* implicit */unsigned int) 0)) : (4294967295U))) * (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_4 + 1]))))) > (((/* implicit */unsigned int) max((((/* implicit */int) var_0)), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_5)) : (var_3)))))));
            arr_19 [i_4] = ((/* implicit */_Bool) arr_11 [i_4]);
        }
        var_19 = ((/* implicit */long long int) max((0U), (((((/* implicit */_Bool) 1867438795)) ? (arr_2 [i_0]) : (((/* implicit */unsigned int) min((((/* implicit */int) (unsigned char)2)), (2039280761))))))));
        var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) var_8))));
    }
    for (short i_7 = 2; i_7 < 16; i_7 += 3) 
    {
        arr_23 [i_7] [i_7 + 2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -6)) ? (((((/* implicit */_Bool) 510U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)103))) : (699829373809157519ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)13883)))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65524))) : (((max((((/* implicit */long long int) (_Bool)1)), (-9223372036854775807LL))) / (((/* implicit */long long int) ((/* implicit */int) (signed char)-50)))))));
        arr_24 [i_7] = ((/* implicit */signed char) var_0);
    }
}
