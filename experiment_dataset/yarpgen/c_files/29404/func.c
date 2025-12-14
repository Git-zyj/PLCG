/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29404
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29404 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29404
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
    var_13 = ((/* implicit */_Bool) ((((min((((/* implicit */int) (_Bool)1)), (-8))) + (2147483647))) << (((((var_7) + (6580812056273397417LL))) - (9LL)))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        var_14 = ((/* implicit */unsigned int) min((var_14), (max(((+((~(arr_1 [i_0] [(unsigned short)9]))))), (arr_1 [6] [i_0])))));
        var_15 &= ((/* implicit */unsigned int) 10526167481307484706ULL);
    }
    for (unsigned short i_1 = 0; i_1 < 11; i_1 += 3) 
    {
        var_16 = ((/* implicit */unsigned int) ((max((-690240832350156641LL), (((/* implicit */long long int) arr_0 [i_1])))) == (((/* implicit */long long int) ((((/* implicit */_Bool) (-(var_0)))) ? (((/* implicit */unsigned int) arr_0 [i_1])) : (((arr_1 [i_1] [i_1]) ^ (arr_1 [i_1] [i_1]))))))));
        var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) 16929992174890625149ULL))));
        arr_6 [i_1] [i_1] |= ((/* implicit */long long int) ((unsigned long long int) (~(((((/* implicit */_Bool) var_10)) ? (var_7) : (((/* implicit */long long int) 18U)))))));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 11; i_2 += 3) 
        {
            for (unsigned char i_3 = 0; i_3 < 11; i_3 += 1) 
            {
                {
                    var_18 = ((min((var_4), (((/* implicit */unsigned long long int) arr_2 [i_2] [i_2])))) | (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 11U)) ? (18446744073709551615ULL) : (16929992174890625152ULL)))) ? (max((((/* implicit */long long int) arr_3 [i_2])), (var_7))) : (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_2])))))));
                    arr_11 [i_2] [i_2] = ((/* implicit */unsigned int) var_9);
                    var_19 = ((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) < (((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)67))))) ? (((((/* implicit */_Bool) -12)) ? (var_4) : (((/* implicit */unsigned long long int) arr_1 [i_2] [i_2])))) : (((/* implicit */unsigned long long int) (-(-6452522942544424657LL)))))));
                    arr_12 [i_2] [i_2] [(unsigned char)0] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) ((-3905635936180755084LL) > (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1]))))))) % ((+((-9223372036854775807LL - 1LL))))));
                }
            } 
        } 
    }
    var_20 = ((/* implicit */int) ((((((/* implicit */int) var_5)) == (((/* implicit */int) (_Bool)1)))) ? (((/* implicit */unsigned long long int) (-(((((/* implicit */long long int) var_3)) + (-6452522942544424660LL)))))) : (var_4)));
}
