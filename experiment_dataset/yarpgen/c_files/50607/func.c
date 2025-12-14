/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50607
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50607 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50607
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
    var_17 ^= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) 2640369673219889371LL)) & (var_14)));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_18 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 2640369673219889388LL)) & (((((/* implicit */unsigned long long int) arr_3 [i_0])) % (10505341229103067724ULL)))));
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 1; i_1 < 14; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 15; i_2 += 4) 
            {
                for (unsigned int i_3 = 0; i_3 < 15; i_3 += 1) 
                {
                    {
                        arr_13 [i_0] [i_0] = ((/* implicit */long long int) ((unsigned long long int) (+(12114572492596023589ULL))));
                        var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)9109)) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-9114))) : (var_12))) : (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-16)) - (-545613386))))))) ? (max((144115188075855871ULL), (10505341229103067724ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) var_12)), (-646874594502061665LL)))) ? (min((arr_9 [i_0] [i_0] [i_3]), (-545613397))) : (var_4))))));
                        var_20 += ((/* implicit */unsigned long long int) ((unsigned int) ((-545613397) ^ (((/* implicit */int) (signed char)22)))));
                        var_21 *= var_13;
                    }
                } 
            } 
        } 
    }
    for (short i_4 = 1; i_4 < 22; i_4 += 1) 
    {
        arr_16 [i_4] = ((/* implicit */_Bool) var_8);
        var_22 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((arr_14 [i_4]) + (((/* implicit */long long int) ((/* implicit */int) ((-2640369673219889342LL) == (((/* implicit */long long int) var_15))))))))) | (((var_10) >> ((((~(var_12))) - (2256639979U)))))));
        var_23 &= ((/* implicit */unsigned char) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) arr_15 [(unsigned char)4]))))) ? (((((/* implicit */_Bool) 14908529721160175924ULL)) ? (10505341229103067724ULL) : (var_7))) : (max((var_14), (12815138220561886204ULL))))), (((((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-29089)) % (((/* implicit */int) (short)-7655))))) - (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) var_11)) : (408621928540859731ULL)))))));
    }
}
