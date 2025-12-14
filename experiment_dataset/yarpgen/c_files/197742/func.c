/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197742
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197742 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197742
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
    var_12 &= ((/* implicit */unsigned short) ((unsigned long long int) ((-1158404221) < (((/* implicit */int) ((var_8) >= (((/* implicit */int) var_4))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        arr_2 [9LL] = ((/* implicit */int) arr_0 [i_0]);
        var_13 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 16236595677712261751ULL)) ? (arr_0 [i_0]) : (arr_0 [i_0]))) - (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (short)-32740))) >= (arr_0 [i_0])))))));
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 2) 
    {
        arr_5 [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)13168)) ? (6380634297014959589LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))));
        var_14 = ((/* implicit */signed char) ((((/* implicit */int) arr_3 [i_1])) - (((/* implicit */int) arr_4 [i_1] [i_1]))));
    }
    /* LoopSeq 1 */
    for (int i_2 = 0; i_2 < 23; i_2 += 2) 
    {
        /* LoopSeq 1 */
        for (int i_3 = 2; i_3 < 20; i_3 += 1) 
        {
            /* LoopSeq 1 */
            for (short i_4 = 0; i_4 < 23; i_4 += 3) 
            {
                arr_15 [i_3] [i_2] &= ((-5399655951778936562LL) - (((/* implicit */long long int) ((/* implicit */int) (signed char)114))));
                arr_16 [i_4] [i_4] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) 5399655951778936550LL)) ? (((/* implicit */int) (signed char)102)) : (((/* implicit */int) (_Bool)1))));
                var_15 ^= ((/* implicit */signed char) arr_6 [i_3 + 1]);
                var_16 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)25143)) ? (3874571988045315303LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)120)))));
            }
            /* LoopSeq 2 */
            for (short i_5 = 0; i_5 < 23; i_5 += 3) 
            {
                arr_20 [i_5] [i_5] [i_5] [i_2] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) (short)-25144)), (5399655951778936562LL)))) ? ((~(4002025414965750280LL))) : (((/* implicit */long long int) var_8))))) ? (((/* implicit */int) (unsigned char)221)) : (((/* implicit */int) (signed char)101)));
                var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -168090680)) ? (((/* implicit */int) ((((((/* implicit */_Bool) arr_18 [i_5] [i_3] [i_5])) ? (((/* implicit */long long int) ((/* implicit */int) (short)-30871))) : (var_11))) <= (((/* implicit */long long int) ((/* implicit */int) arr_19 [i_2] [i_3 - 2] [(unsigned short)17])))))) : (((/* implicit */int) (short)32750))));
                var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) min((((((/* implicit */_Bool) -5399655951778936550LL)) ? (arr_17 [i_3 + 1] [i_3 + 2]) : (((/* implicit */long long int) arr_12 [i_3 - 2] [i_2] [i_3 + 1])))), (((/* implicit */long long int) max(((unsigned short)3), (((/* implicit */unsigned short) (_Bool)1))))))))));
            }
            for (unsigned short i_6 = 0; i_6 < 23; i_6 += 4) 
            {
                var_19 = ((/* implicit */long long int) ((_Bool) arr_9 [i_3]));
                var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) ((signed char) 3874571988045315282LL)))));
                arr_24 [i_3] = ((/* implicit */unsigned long long int) (_Bool)1);
            }
        }
        arr_25 [i_2] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) (unsigned char)104)) : (arr_7 [i_2])))) ? (((((/* implicit */_Bool) arr_7 [i_2])) ? (((/* implicit */int) arr_21 [i_2] [i_2])) : (((/* implicit */int) arr_22 [i_2] [(unsigned char)20] [19LL])))) : (((/* implicit */int) (short)25156)));
        arr_26 [i_2] = ((/* implicit */signed char) arr_9 [(signed char)18]);
        arr_27 [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)90)) + (((/* implicit */int) (signed char)90))));
    }
}
