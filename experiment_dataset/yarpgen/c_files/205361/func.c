/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205361
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205361 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205361
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        arr_3 [(unsigned short)23] [i_0] = 16113676625489946286ULL;
        var_19 |= ((/* implicit */long long int) arr_2 [i_0] [i_0]);
        var_20 = (-(((long long int) ((((/* implicit */_Bool) (unsigned char)206)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)31879))) : (16113676625489946286ULL)))));
        var_21 |= max((((/* implicit */short) ((arr_1 [i_0 - 1]) < (arr_1 [i_0 - 1])))), (arr_2 [i_0] [i_0]));
        var_22 |= ((/* implicit */long long int) max(((~(((2333067448219605325ULL) << (((((/* implicit */int) var_13)) - (101))))))), (((/* implicit */unsigned long long int) var_13))));
    }
    /* LoopSeq 2 */
    for (unsigned char i_1 = 0; i_1 < 24; i_1 += 1) 
    {
        var_23 = ((/* implicit */unsigned short) max((-211498726008509618LL), (((/* implicit */long long int) (unsigned short)60600))));
        arr_7 [i_1] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_1] [i_1])) ? (((/* implicit */int) min((arr_0 [i_1]), (((/* implicit */short) var_13))))) : (((/* implicit */int) max((((/* implicit */short) var_9)), (arr_0 [i_1]))))))), (min((((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */unsigned long long int) 211498726008509618LL)) : (2277093954274130331ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_5)) > (((/* implicit */int) var_0)))))))));
        arr_8 [i_1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 7464224108249953100ULL))));
        arr_9 [i_1] [(short)18] = ((/* implicit */short) arr_1 [i_1]);
        arr_10 [i_1] [i_1] |= ((/* implicit */unsigned short) max((((/* implicit */long long int) arr_4 [i_1] [i_1])), (((((/* implicit */long long int) (+(((/* implicit */int) arr_0 [i_1]))))) - (max((((/* implicit */long long int) (short)27)), (arr_5 [9LL] [i_1])))))));
    }
    for (short i_2 = 2; i_2 < 22; i_2 += 2) 
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (short i_3 = 1; i_3 < 23; i_3 += 1) 
        {
            arr_15 [i_3] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_8))) + (var_16)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0))) != (2277093954274130316ULL))))) : (((((/* implicit */_Bool) (short)20)) ? (10982519965459598494ULL) : (((/* implicit */unsigned long long int) -5093938903227943313LL))))));
            var_24 = ((/* implicit */int) ((_Bool) arr_2 [i_2] [i_3 + 1]));
            var_25 = ((/* implicit */unsigned char) (unsigned short)18306);
        }
        for (unsigned char i_4 = 1; i_4 < 20; i_4 += 3) 
        {
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned long long int i_5 = 0; i_5 < 24; i_5 += 2) /* same iter space */
            {
                var_26 = ((/* implicit */long long int) var_3);
                /* LoopNest 2 */
                for (unsigned long long int i_6 = 3; i_6 < 20; i_6 += 1) 
                {
                    for (long long int i_7 = 0; i_7 < 24; i_7 += 4) 
                    {
                        {
                            var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)247)) ? (arr_24 [i_4] [i_5]) : (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_2] [i_2])))));
                            arr_29 [(unsigned char)19] [(unsigned char)19] [i_5] [i_4] [i_5] [i_7] = ((/* implicit */short) (-(((/* implicit */int) var_1))));
                        }
                    } 
                } 
                arr_30 [i_4] [i_4 + 4] [i_4] [i_4 + 2] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_19 [i_4 + 3] [i_4] [i_4 - 1])) ^ (((/* implicit */int) (unsigned short)47230))));
            }
            for (unsigned long long int i_8 = 0; i_8 < 24; i_8 += 2) /* same iter space */
            {
                var_28 = ((/* implicit */unsigned char) max((var_28), (((/* implicit */unsigned char) ((min((12785338645411395112ULL), (((/* implicit */unsigned long long int) (unsigned short)511)))) + (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((2601672649972436256ULL) << (((((/* implicit */int) (unsigned short)33220)) - (33170)))))))))))))));
                var_29 |= ((/* implicit */unsigned char) ((12785338645411395112ULL) * (((/* implicit */unsigned long long int) arr_24 [i_2] [i_2]))));
                var_30 *= ((/* implicit */unsigned short) arr_24 [i_2] [i_8]);
            }
            var_31 = ((/* implicit */short) ((((unsigned long long int) var_18)) >= (((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_18 [i_2 - 1] [i_4])) + (2147483647))) >> (((((/* implicit */int) (unsigned char)178)) - (161))))))));
            arr_33 [i_2 - 1] [i_4] = (-((+(((((/* implicit */long long int) ((/* implicit */int) (unsigned short)18277))) / (-5302601927886804415LL))))));
        }
        for (short i_9 = 0; i_9 < 24; i_9 += 4) 
        {
            var_32 = ((((/* implicit */unsigned long long int) arr_26 [12LL] [i_2 - 1] [i_2 - 1] [15LL])) > (min((((/* implicit */unsigned long long int) arr_5 [i_2] [i_2 - 2])), (15845071423737115359ULL))));
            var_33 = arr_2 [i_2 - 1] [i_9];
            var_34 = ((/* implicit */short) ((((((/* implicit */int) var_0)) << (((((/* implicit */int) var_12)) - (93))))) ^ (((/* implicit */int) ((((/* implicit */int) arr_2 [i_2 + 1] [i_2 + 2])) == (((/* implicit */int) arr_2 [i_2 + 1] [i_2 + 2])))))));
        }
        var_35 = ((/* implicit */unsigned short) max((((/* implicit */long long int) max((arr_6 [i_2 - 1]), ((unsigned char)165)))), (var_11)));
    }
    var_36 = ((/* implicit */unsigned long long int) (-(((((int) var_12)) % (((/* implicit */int) var_0))))));
}
