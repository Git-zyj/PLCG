/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222974
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222974 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222974
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
    for (short i_0 = 1; i_0 < 11; i_0 += 1) 
    {
        var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) var_5))));
        var_21 = min((((((/* implicit */_Bool) -1LL)) ? (0LL) : (-6LL))), (-4LL));
        arr_3 [i_0] [i_0] = ((/* implicit */short) var_2);
    }
    var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) ((short) min((((((/* implicit */_Bool) -5LL)) ? (((/* implicit */int) (short)78)) : (((/* implicit */int) var_0)))), (((/* implicit */int) var_3))))))));
    /* LoopSeq 2 */
    for (short i_1 = 0; i_1 < 18; i_1 += 3) 
    {
        var_23 = ((/* implicit */signed char) min((max((((/* implicit */long long int) ((short) arr_4 [i_1]))), (((((/* implicit */long long int) ((/* implicit */int) (short)-8238))) + (-18LL))))), (min((((/* implicit */long long int) (-(arr_5 [i_1])))), (((((/* implicit */long long int) ((/* implicit */int) (signed char)-29))) & (0LL)))))));
        var_24 = ((/* implicit */unsigned short) (+((+(arr_5 [i_1])))));
        var_25 = ((/* implicit */unsigned short) (signed char)15);
        arr_6 [i_1] = ((/* implicit */long long int) (-(((((((/* implicit */int) (unsigned short)0)) / (((/* implicit */int) (signed char)-37)))) * (((/* implicit */int) max((((/* implicit */short) (signed char)9)), ((short)2240))))))));
    }
    /* vectorizable */
    for (long long int i_2 = 0; i_2 < 14; i_2 += 1) 
    {
        var_26 |= ((/* implicit */int) (signed char)-21);
        arr_9 [i_2] = ((/* implicit */long long int) ((arr_8 [i_2]) + (((/* implicit */int) ((-1LL) < (((/* implicit */long long int) ((/* implicit */int) (short)-1))))))));
        /* LoopSeq 2 */
        for (long long int i_3 = 0; i_3 < 14; i_3 += 3) 
        {
            var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 14704753469781124195ULL)) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)17324)) && (((/* implicit */_Bool) -1)))))) : (5916807620840219464LL)));
            var_28 = ((/* implicit */short) ((arr_8 [i_2]) + (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (short)4095))))));
        }
        for (short i_4 = 1; i_4 < 11; i_4 += 2) 
        {
            var_29 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_15)) : (701247892)));
            /* LoopSeq 1 */
            for (signed char i_5 = 0; i_5 < 14; i_5 += 4) 
            {
                var_30 = ((/* implicit */unsigned short) ((int) var_8));
                var_31 = ((/* implicit */unsigned short) (short)(-32767 - 1));
            }
            arr_19 [i_2] [i_4] [i_4] = ((/* implicit */unsigned long long int) ((arr_17 [i_4 - 1] [i_4 - 1] [i_4 + 1] [i_4]) < (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)0))) : (6234145947780210318ULL)))));
            /* LoopNest 2 */
            for (unsigned long long int i_6 = 0; i_6 < 14; i_6 += 2) 
            {
                for (signed char i_7 = 0; i_7 < 14; i_7 += 2) 
                {
                    {
                        var_32 = ((/* implicit */short) ((-8975549871889832019LL) < (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_4 - 1])))));
                        var_33 = ((/* implicit */unsigned long long int) max((var_33), (((/* implicit */unsigned long long int) (-((-(((/* implicit */int) arr_11 [(short)12])))))))));
                        arr_27 [i_7] [i_6] [6LL] [i_2] = ((/* implicit */short) ((((/* implicit */unsigned long long int) arr_18 [i_4 + 3] [i_4 + 1])) + (var_2)));
                        /* LoopSeq 1 */
                        for (unsigned short i_8 = 2; i_8 < 13; i_8 += 4) 
                        {
                            arr_32 [i_2] [5LL] [(unsigned short)7] [i_4] [(unsigned short)7] [i_8] &= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) (short)0))) : (var_7)))) ? (((((/* implicit */_Bool) -4018115968909063497LL)) ? (4018115968909063487LL) : (((/* implicit */long long int) 2097151)))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-126)))));
                            var_34 = ((((/* implicit */_Bool) arr_2 [i_2])) ? (var_17) : (((/* implicit */long long int) ((/* implicit */int) var_14))));
                        }
                    }
                } 
            } 
        }
        arr_33 [i_2] [i_2] = ((/* implicit */short) ((18446744073709551613ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)82)))));
        arr_34 [(short)12] [i_2] = (~(8975549871889832012LL));
    }
}
