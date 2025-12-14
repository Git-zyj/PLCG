/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236761
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236761 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236761
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
    var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) ((var_7) + (((/* implicit */long long int) ((/* implicit */int) var_2))))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_20 = ((/* implicit */long long int) var_12);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 22; i_2 += 1) 
            {
                {
                    var_21 -= ((/* implicit */short) (+(10633789455152630104ULL)));
                    var_22 *= ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)87)) ? (((/* implicit */int) (short)248)) : (((/* implicit */int) (short)17227))));
                    var_23 = ((/* implicit */unsigned char) var_0);
                    var_24 ^= ((/* implicit */unsigned long long int) arr_9 [14] [14] [i_1]);
                }
            } 
        } 
    }
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        var_25 += ((/* implicit */signed char) ((((/* implicit */_Bool) var_8)) ? ((+(arr_1 [0]))) : (((((/* implicit */int) (signed char)-13)) - (((((/* implicit */int) var_2)) - (((/* implicit */int) (short)4094))))))));
        /* LoopNest 2 */
        for (signed char i_4 = 0; i_4 < 21; i_4 += 3) 
        {
            for (int i_5 = 2; i_5 < 20; i_5 += 1) 
            {
                {
                    var_26 = ((/* implicit */short) max((var_26), (((/* implicit */short) (+(((/* implicit */int) (signed char)78)))))));
                    var_27 = ((/* implicit */signed char) min((((((/* implicit */_Bool) arr_13 [i_3] [i_5 - 1] [i_3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_3] [i_5 - 1] [i_3]))) : (var_5))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -928779432)) ? (((/* implicit */int) arr_13 [i_3] [i_5 + 1] [i_3])) : (((/* implicit */int) arr_13 [i_3] [i_5 + 1] [i_3])))))));
                }
            } 
        } 
        /* LoopSeq 2 */
        for (short i_6 = 0; i_6 < 21; i_6 += 4) 
        {
            var_28 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_17 [i_3] [i_6] [i_3])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) min((arr_17 [(_Bool)1] [i_6] [i_3]), (arr_17 [i_3] [i_3] [i_3]))))));
            /* LoopNest 2 */
            for (short i_7 = 2; i_7 < 20; i_7 += 3) 
            {
                for (short i_8 = 0; i_8 < 21; i_8 += 3) 
                {
                    {
                        var_29 &= ((/* implicit */long long int) ((short) ((signed char) (_Bool)1)));
                        var_30 = (~((~(((/* implicit */int) (unsigned char)138)))));
                    }
                } 
            } 
            var_31 += ((/* implicit */long long int) arr_11 [i_3]);
        }
        for (unsigned long long int i_9 = 2; i_9 < 19; i_9 += 4) 
        {
            var_32 -= ((/* implicit */_Bool) var_9);
            var_33 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (short)32767)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_9 - 2]))))) / (((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_9 - 1] [i_9 + 2])))));
            var_34 = ((/* implicit */unsigned short) (+(min((((/* implicit */int) arr_17 [i_3] [i_3] [i_3])), ((-(arr_3 [i_9 - 1] [(short)19] [i_3])))))));
        }
    }
    for (signed char i_10 = 0; i_10 < 25; i_10 += 4) 
    {
        var_35 -= ((/* implicit */_Bool) min((((/* implicit */int) min((((/* implicit */short) var_11)), (var_15)))), ((((_Bool)1) ? (((/* implicit */int) (short)30270)) : (((/* implicit */int) (signed char)56))))));
        /* LoopSeq 2 */
        for (int i_11 = 0; i_11 < 25; i_11 += 3) 
        {
            var_36 = ((/* implicit */int) (+(((((/* implicit */_Bool) arr_34 [i_10] [i_10] [i_10])) ? (4294967276U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)2442)))))));
            var_37 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_33 [i_11])) ? (((/* implicit */int) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) || (((/* implicit */_Bool) 4076166691538896329ULL))))) : (var_0)))) ? (min((min((arr_31 [i_11]), (-3933156421154611404LL))), (((/* implicit */long long int) arr_34 [i_10] [i_10] [i_11])))) : (((((/* implicit */long long int) ((/* implicit */int) arr_30 [i_11]))) / (var_7)))));
            var_38 = ((/* implicit */unsigned char) (+((+(((/* implicit */int) ((((/* implicit */_Bool) var_16)) && (((/* implicit */_Bool) var_13)))))))));
            var_39 &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_32 [i_10])) ? (arr_32 [i_10]) : (arr_32 [i_11])))) ? (((((/* implicit */_Bool) arr_32 [i_10])) ? (arr_32 [i_10]) : (arr_32 [i_10]))) : (((/* implicit */int) ((unsigned char) 9223372036854775807LL)))));
        }
        for (short i_12 = 0; i_12 < 25; i_12 += 3) 
        {
            var_40 = ((/* implicit */signed char) ((((/* implicit */_Bool) 15116506237645223617ULL)) && (((/* implicit */_Bool) 9223372036854775781LL))));
            var_41 += ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((arr_35 [i_12] [i_10]) < (arr_35 [i_10] [i_12])))), (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) * (9909699851632695196ULL)))));
            var_42 &= ((/* implicit */signed char) arr_30 [(short)1]);
        }
        var_43 = (short)-230;
    }
}
