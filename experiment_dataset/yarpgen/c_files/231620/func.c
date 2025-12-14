/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231620
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231620 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231620
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
    var_15 = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) max((4520453536138409371LL), (var_1)))) ? (-4520453536138409370LL) : (((/* implicit */long long int) var_4)))), (((min((-4520453536138409398LL), (((/* implicit */long long int) 246008647U)))) / (var_9)))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (int i_1 = 2; i_1 < 11; i_1 += 2) 
        {
            var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(max((arr_3 [i_0]), (((/* implicit */unsigned long long int) (unsigned short)25113))))))) || (((/* implicit */_Bool) ((unsigned short) ((((/* implicit */unsigned long long int) 7478809606622792095LL)) - (6741209829066389819ULL)))))));
            arr_5 [i_0] [i_1] = ((((/* implicit */_Bool) ((int) ((unsigned short) (_Bool)1)))) ? (max((((11705534244643161800ULL) / (29113268691660978ULL))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) -4520453536138409372LL))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)0)) ? (6123210552965268570LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-113)))))) ? (((518788189140466761ULL) >> (((arr_1 [i_0] [i_1 + 1]) - (6671308265555258700LL))))) : (max((arr_2 [6LL] [6LL]), (arr_3 [i_0]))))));
        }
        arr_6 [i_0] &= ((/* implicit */int) ((((((/* implicit */_Bool) 7478809606622792095LL)) ? (max((((/* implicit */unsigned long long int) var_14)), (11705534244643161800ULL))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_8))))))) & (((6741209829066389809ULL) >> ((((+(7267581179611670961ULL))) - (7267581179611670937ULL)))))));
    }
    /* vectorizable */
    for (unsigned long long int i_2 = 0; i_2 < 20; i_2 += 2) 
    {
        arr_9 [i_2] = ((/* implicit */long long int) ((unsigned short) (unsigned short)65535));
        arr_10 [i_2] = var_3;
        arr_11 [(signed char)8] [i_2] = ((/* implicit */signed char) ((((/* implicit */int) var_13)) ^ (((/* implicit */int) ((signed char) -4520453536138409354LL)))));
    }
    /* LoopNest 3 */
    for (unsigned long long int i_3 = 0; i_3 < 23; i_3 += 2) 
    {
        for (short i_4 = 1; i_4 < 22; i_4 += 2) 
        {
            for (short i_5 = 0; i_5 < 23; i_5 += 1) 
            {
                {
                    var_17 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) max(((~(arr_15 [i_4] [i_5]))), (((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)25202)))))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)134))) & (11179162894097880655ULL)))));
                    var_18 |= ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max((11179162894097880669ULL), (((/* implicit */unsigned long long int) 9223372036854775807LL))))) ? (((((/* implicit */_Bool) 8416499392510670179ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-2178))) : (11705534244643161790ULL))) : (((/* implicit */unsigned long long int) ((unsigned int) 4520453536138409382LL))))))));
                }
            } 
        } 
    } 
    var_19 += ((/* implicit */int) ((((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))))) % ((-((+(-153054557322318644LL)))))));
}
