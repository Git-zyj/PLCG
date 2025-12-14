/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234883
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234883 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234883
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
    var_13 = ((/* implicit */signed char) var_5);
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                {
                    var_14 = ((/* implicit */long long int) max((var_14), (((/* implicit */long long int) ((((/* implicit */_Bool) (short)-5794)) ? (((/* implicit */int) var_10)) : ((-(((/* implicit */int) var_10)))))))));
                    var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_0)))))));
                }
            } 
        } 
        /* LoopSeq 1 */
        for (long long int i_3 = 0; i_3 < 24; i_3 += 4) 
        {
            var_16 = ((/* implicit */unsigned short) (-(((/* implicit */int) (short)16711))));
            arr_11 [i_0] [i_3] = ((/* implicit */unsigned short) (signed char)100);
            var_17 = ((/* implicit */int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)159))) : (var_12)));
        }
    }
    /* vectorizable */
    for (unsigned short i_4 = 0; i_4 < 23; i_4 += 4) 
    {
        var_18 = ((/* implicit */signed char) (-(((/* implicit */int) (unsigned short)15650))));
        var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) (-(50849629))))));
        var_20 = ((/* implicit */long long int) 18351872442604516089ULL);
        var_21 = ((/* implicit */unsigned int) (unsigned short)50792);
        /* LoopSeq 1 */
        for (long long int i_5 = 0; i_5 < 23; i_5 += 1) 
        {
            arr_18 [i_5] = ((((/* implicit */_Bool) var_7)) ? (var_12) : (((/* implicit */unsigned long long int) var_8)));
            var_22 += ((/* implicit */unsigned short) 13421470617465897386ULL);
        }
    }
    for (signed char i_6 = 0; i_6 < 21; i_6 += 4) 
    {
        arr_21 [i_6] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 11505556883815946647ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1469))) : (14031502442451133975ULL)));
        /* LoopNest 2 */
        for (unsigned char i_7 = 0; i_7 < 21; i_7 += 1) 
        {
            for (unsigned long long int i_8 = 0; i_8 < 21; i_8 += 4) 
            {
                {
                    arr_26 [i_6] [i_7] [i_8] = ((/* implicit */unsigned short) var_7);
                    /* LoopNest 2 */
                    for (unsigned int i_9 = 0; i_9 < 21; i_9 += 4) 
                    {
                        for (unsigned long long int i_10 = 0; i_10 < 21; i_10 += 1) 
                        {
                            {
                                var_23 *= (-(max((((/* implicit */unsigned long long int) var_8)), (10595423437233935930ULL))));
                                var_24 |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3361332728U)) ? (8367938184406550816ULL) : (((/* implicit */unsigned long long int) -563093253))))) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-44)) ? (((/* implicit */int) (unsigned short)59779)) : (1980638200)))) : (var_12))) : (((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_10)), (var_4)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -4776548720102130414LL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-6165007711992498580LL)))) : (3008098617903109307ULL)))));
                                var_25 = ((/* implicit */unsigned int) var_1);
                                var_26 = min(((+(((((/* implicit */int) var_10)) + (((/* implicit */int) var_2)))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (var_0) : (var_0)))) ? (((/* implicit */int) var_6)) : (((((/* implicit */_Bool) (signed char)111)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_9)))))));
                                arr_32 [i_6] [i_7] [i_7] [i_8] [i_9] [i_10] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_2))))) ? (((/* implicit */long long int) var_4)) : (((((/* implicit */long long int) ((/* implicit */int) var_7))) - (var_11)))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 6511880687856780964ULL)) ? (4511022912647357805ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)117)))))) ? (((((/* implicit */unsigned long long int) -899282812)) + (var_0))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_7)))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    for (signed char i_11 = 0; i_11 < 18; i_11 += 1) 
    {
        arr_37 [i_11] [i_11] &= (-(((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned short)640)))));
        arr_38 [(short)15] [i_11] &= ((/* implicit */long long int) var_0);
    }
    var_27 ^= ((/* implicit */long long int) max((((var_6) ? (var_12) : (((/* implicit */unsigned long long int) max((-1105138677111243239LL), (5092711123600772574LL)))))), (((/* implicit */unsigned long long int) var_5))));
}
