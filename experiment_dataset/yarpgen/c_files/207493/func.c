/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207493
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207493 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207493
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
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) var_3);
        var_18 &= ((/* implicit */unsigned char) ((((/* implicit */int) ((arr_1 [i_0]) > (arr_1 [i_0])))) / (((/* implicit */int) ((((/* implicit */int) var_13)) != (((/* implicit */int) arr_0 [i_0] [i_0])))))));
    }
    for (int i_1 = 0; i_1 < 17; i_1 += 4) 
    {
        arr_6 [i_1] [i_1] = var_14;
        /* LoopSeq 1 */
        for (signed char i_2 = 0; i_2 < 17; i_2 += 3) 
        {
            /* LoopNest 3 */
            for (unsigned long long int i_3 = 3; i_3 < 16; i_3 += 2) 
            {
                for (signed char i_4 = 1; i_4 < 15; i_4 += 1) 
                {
                    for (unsigned char i_5 = 2; i_5 < 14; i_5 += 4) 
                    {
                        {
                            arr_17 [i_4] [i_4] = ((/* implicit */unsigned char) ((unsigned long long int) ((284018474349538509ULL) < (min((((/* implicit */unsigned long long int) (unsigned char)0)), (4306736309524217267ULL))))));
                            var_19 = ((unsigned char) ((((/* implicit */int) (unsigned char)255)) != (((/* implicit */int) (signed char)117))));
                            var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 6216217257331401461ULL)) ? (((/* implicit */int) arr_12 [i_3 - 2] [i_3 + 1] [i_3 + 1] [i_3 - 2])) : (2011078483)))) && (((/* implicit */_Bool) (+(((/* implicit */int) arr_12 [i_5 + 3] [i_3 - 1] [i_3 + 1] [i_3])))))));
                        }
                    } 
                } 
            } 
            arr_18 [i_2] = min((((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)23))))) ? (((var_1) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_1] [i_1] [i_2]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_1] [i_2] [i_2] [i_2]))))), (((/* implicit */unsigned long long int) (unsigned char)169)));
            arr_19 [i_1] [i_1] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_1] [i_1])) ? (((((/* implicit */_Bool) arr_0 [i_1] [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (var_16))) : (((arr_16 [i_1] [i_1] [i_1] [i_2] [i_2]) - (((/* implicit */unsigned long long int) arr_13 [i_2] [i_2] [i_2] [i_2] [i_2]))))))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_2)) ^ (((/* implicit */int) var_14))))) : (((unsigned long long int) var_8)))) : (((/* implicit */unsigned long long int) min((((/* implicit */int) ((((/* implicit */_Bool) 5095374784840897280ULL)) && (((/* implicit */_Bool) (unsigned char)97))))), ((~(var_3))))))));
            var_21 += ((/* implicit */signed char) ((unsigned long long int) (unsigned char)112));
        }
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_6 = 1; i_6 < 14; i_6 += 2) 
        {
            arr_24 [i_6] [i_1] = ((((/* implicit */_Bool) arr_1 [i_6 + 3])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned char)197)));
            var_22 = ((int) (unsigned char)89);
        }
        arr_25 [i_1] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)125))) < (18446744073709551591ULL)))), (((arr_16 [i_1] [i_1] [i_1] [i_1] [i_1]) >> (((((/* implicit */int) (signed char)-69)) + (131)))))));
    }
    var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) -22867691)) : (362113677321029335ULL)))) ? ((~(((/* implicit */int) var_2)))) : (((/* implicit */int) var_7))))) ? (((/* implicit */int) var_17)) : (((/* implicit */int) ((unsigned char) (signed char)122))))))));
}
