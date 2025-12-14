/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25321
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25321 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25321
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
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)0)) ? (((((/* implicit */int) ((_Bool) (unsigned char)255))) % (((/* implicit */int) ((-424960742363029577LL) <= (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_0])))))))) : (((/* implicit */int) (unsigned char)2))));
        var_21 += ((/* implicit */signed char) var_1);
        var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned long long int) min((min((var_2), (((/* implicit */long long int) arr_0 [i_0] [i_0])))), (((/* implicit */long long int) (unsigned char)254))))) : (min((var_12), (((/* implicit */unsigned long long int) var_18)))))))));
    }
    for (short i_1 = 0; i_1 < 18; i_1 += 1) 
    {
        /* LoopSeq 3 */
        for (unsigned long long int i_2 = 1; i_2 < 16; i_2 += 2) 
        {
            var_23 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_11)))) * (((((/* implicit */_Bool) ((long long int) var_11))) ? (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (signed char)-61)), (var_5)))) : (max((((/* implicit */unsigned long long int) arr_0 [i_1] [i_2])), (var_12)))))));
            var_24 *= ((/* implicit */_Bool) ((signed char) max((var_4), (((/* implicit */unsigned short) ((arr_1 [i_1] [i_2]) > (((/* implicit */unsigned int) ((/* implicit */int) (short)-23943)))))))));
        }
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            arr_8 [i_1] [i_1] [i_3] = ((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_5)))) * (((((/* implicit */_Bool) 8461929655237655384LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)8466))) : (arr_2 [i_1])))))) < (18357068976626523022ULL));
            arr_9 [i_3] = ((unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_5 [i_3] [(unsigned char)14]))) - (min((arr_4 [i_3] [i_3]), (((/* implicit */long long int) (unsigned char)30))))));
        }
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            arr_12 [i_1] [i_4] = ((/* implicit */signed char) var_6);
            var_25 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [i_1] [i_1]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */int) var_9)) << (((/* implicit */int) (unsigned char)4)))) <= (((var_13) << (((((var_19) + (1531482650944293104LL))) - (15LL))))))))) : (((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1] [i_1]))) ^ (arr_6 [10LL] [i_1] [10LL]))) % (((/* implicit */unsigned long long int) var_13))))));
            var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)25)) - (((/* implicit */int) (signed char)120))));
        }
        arr_13 [i_1] [i_1] &= ((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) ((((/* implicit */_Bool) ((arr_1 [i_1] [i_1]) << (((/* implicit */int) var_11))))) && (((/* implicit */_Bool) 18357068976626523016ULL))))) : (((((/* implicit */int) ((arr_3 [i_1]) != (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_1] [i_1])))))) * (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))))));
        var_27 -= ((/* implicit */_Bool) min((((((/* implicit */_Bool) 4486007441326080ULL)) ? (((/* implicit */long long int) ((/* implicit */int) var_18))) : (var_2))), (min((((/* implicit */long long int) var_13)), (arr_11 [i_1] [i_1] [i_1])))));
        arr_14 [i_1] = ((((/* implicit */_Bool) max((arr_3 [i_1]), (((/* implicit */long long int) var_13))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 18357068976626523022ULL)) ? (max((89675097083028575ULL), (((/* implicit */unsigned long long int) -1059682280)))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (unsigned char)2)))))))));
        arr_15 [i_1] = ((/* implicit */_Bool) (((((_Bool)1) || (((/* implicit */_Bool) (signed char)-124)))) ? (3100973612389206303ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_5)) || ((_Bool)1)))))));
    }
    var_28 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((var_15), (((/* implicit */unsigned long long int) ((unsigned char) var_8)))))) ? (((((/* implicit */int) ((((/* implicit */int) var_6)) > (((/* implicit */int) var_10))))) << (((/* implicit */int) var_9)))) : (((/* implicit */int) ((max((var_10), (var_11))) || (((/* implicit */_Bool) (unsigned char)254)))))));
    var_29 = ((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) ((((/* implicit */int) (short)20922)) > (((/* implicit */int) (signed char)-38))))))));
    var_30 = ((/* implicit */_Bool) min((var_13), (min(((+(((/* implicit */int) (_Bool)1)))), (((((/* implicit */int) (unsigned short)46959)) << (((((/* implicit */int) (unsigned char)255)) - (242)))))))));
    /* LoopSeq 3 */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        var_31 *= ((/* implicit */long long int) ((((/* implicit */int) ((arr_17 [i_5]) != (arr_17 [i_5])))) << (((((((/* implicit */_Bool) (unsigned short)0)) ? (0) : (((/* implicit */int) (signed char)-10)))) + (13)))));
        arr_18 [i_5] [i_5] = ((/* implicit */signed char) ((((/* implicit */int) (signed char)119)) != (((/* implicit */int) ((((/* implicit */_Bool) (~(arr_16 [i_5])))) && (((/* implicit */_Bool) max((((/* implicit */unsigned short) (signed char)-120)), (var_6)))))))));
    }
    for (signed char i_6 = 0; i_6 < 12; i_6 += 4) 
    {
        var_32 *= 18357068976626523017ULL;
        var_33 = arr_2 [i_6];
        arr_22 [i_6] = ((/* implicit */int) arr_21 [3LL]);
        arr_23 [i_6] [i_6] = ((/* implicit */int) ((1502511801500241697ULL) > (((/* implicit */unsigned long long int) -5356913756637958905LL))));
    }
    for (unsigned long long int i_7 = 2; i_7 < 21; i_7 += 1) 
    {
        arr_28 [i_7 + 1] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) var_8))) <= (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_25 [i_7])) ? (((/* implicit */long long int) var_13)) : (arr_25 [i_7])))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */signed char) var_7)), ((signed char)-1))))) : (((var_3) << (((((/* implicit */int) (short)622)) - (601)))))))));
        var_34 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (signed char)111)) || ((_Bool)1))) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (max((arr_26 [i_7 - 2] [i_7 - 2]), (((/* implicit */long long int) arr_27 [i_7] [i_7 - 2]))))))) > (min((((/* implicit */unsigned long long int) arr_26 [i_7] [i_7 - 1])), (((((/* implicit */unsigned long long int) arr_26 [i_7] [i_7])) & (var_0)))))));
        var_35 = ((/* implicit */unsigned long long int) min((var_35), (((/* implicit */unsigned long long int) ((short) ((int) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) var_4)))))))));
    }
}
