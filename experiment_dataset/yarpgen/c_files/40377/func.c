/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40377
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40377 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40377
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
    var_13 = (+(min((min((((/* implicit */unsigned long long int) 1414137198566997042LL)), (var_8))), (((/* implicit */unsigned long long int) ((var_11) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        var_14 = ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)67)) / (((/* implicit */int) (_Bool)1))));
        var_15 = ((/* implicit */unsigned int) (unsigned char)207);
        var_16 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) arr_1 [i_0] [i_0])) * (var_8)));
        var_17 = (-(arr_1 [i_0] [i_0]));
        var_18 = ((/* implicit */unsigned int) (~(var_1)));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 14; i_1 += 3) 
    {
        var_19 = ((/* implicit */signed char) (((_Bool)0) ? (arr_3 [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1])))));
        var_20 = ((/* implicit */_Bool) 8606837338027202110ULL);
        arr_5 [i_1] = ((((/* implicit */_Bool) arr_4 [i_1] [i_1])) ? (((/* implicit */int) arr_4 [i_1] [i_1])) : (var_1));
        var_21 = ((/* implicit */unsigned long long int) ((arr_1 [i_1] [i_1]) != (6396674294769471457LL)));
    }
    for (long long int i_2 = 1; i_2 < 20; i_2 += 4) 
    {
        /* LoopSeq 2 */
        for (unsigned int i_3 = 3; i_3 < 19; i_3 += 4) 
        {
            arr_11 [i_2] [i_3] = ((/* implicit */long long int) (-(((/* implicit */int) ((unsigned char) max((-1LL), (((/* implicit */long long int) var_4))))))));
            /* LoopSeq 1 */
            for (unsigned char i_4 = 0; i_4 < 22; i_4 += 4) 
            {
                /* LoopNest 2 */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    for (int i_6 = 0; i_6 < 22; i_6 += 4) 
                    {
                        {
                            arr_20 [i_2] [i_2 - 1] [i_3] [i_2 - 1] = ((((/* implicit */_Bool) 3171753640U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (5ULL));
                            var_22 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_6 [i_2])) ? (arr_13 [i_6] [i_5] [i_4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(arr_17 [i_5] [i_4] [0] [i_2])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_4))))) : (var_3))))));
                            var_23 = ((13LL) << (((((/* implicit */int) var_4)) - (64645))));
                            arr_21 [i_2] [i_3] [i_3 - 3] [i_4] [i_6] &= ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((var_5) ? (var_12) : (((/* implicit */long long int) var_3))))) ? (min((arr_13 [5ULL] [5ULL] [i_4]), (((/* implicit */unsigned long long int) var_12)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_4])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)31976))) : (11LL)))))) / (((4814762922677009190ULL) >> (((arr_17 [9U] [9U] [i_2 - 1] [i_3 - 2]) - (6857460236491674865LL)))))));
                        }
                    } 
                } 
                var_24 = 2750063325U;
                var_25 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) ((unsigned long long int) (_Bool)0)))) ? (9194899210570208660ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)61197)) ? (min((((/* implicit */long long int) 1880281646U)), (arr_9 [i_2] [i_3] [i_4]))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_15 [i_2] [i_3 + 1] [i_2] [18ULL])) && (var_5))))))))));
                var_26 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) -7568155163259462675LL)) | (((((/* implicit */_Bool) ((int) var_6))) ? (((/* implicit */unsigned long long int) (-(5379095189678631847LL)))) : (((((/* implicit */unsigned long long int) -6804245674897095619LL)) & (var_2)))))));
            }
        }
        for (unsigned long long int i_7 = 0; i_7 < 22; i_7 += 4) 
        {
            var_27 = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) ((signed char) 274875809792LL))) ? (7LL) : ((((_Bool)1) ? (9223372036854775796LL) : (((/* implicit */long long int) var_3))))))));
            arr_26 [i_2] &= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) 3226350532U)) && (((/* implicit */_Bool) (signed char)4)))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)15))) : (var_12)))) ? (((((var_8) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))) >> ((((-(var_12))) + (4279519739788423774LL))))) : (((/* implicit */unsigned long long int) var_12))));
            arr_27 [i_7] = ((/* implicit */_Bool) 2242867659454554149ULL);
        }
        arr_28 [i_2 + 1] [i_2 + 1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) 7LL))))), (((unsigned int) var_2)))))));
    }
    /* LoopNest 2 */
    for (unsigned int i_8 = 0; i_8 < 24; i_8 += 2) 
    {
        for (unsigned short i_9 = 0; i_9 < 24; i_9 += 4) 
        {
            {
                arr_33 [i_8] [i_9] = ((/* implicit */unsigned int) 7470834408561806131LL);
                var_28 = ((/* implicit */signed char) (~(((/* implicit */int) (_Bool)1))));
            }
        } 
    } 
}
