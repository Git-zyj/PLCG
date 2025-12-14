/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193257
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193257 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193257
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
    var_20 &= ((/* implicit */short) var_13);
    /* LoopSeq 2 */
    for (unsigned int i_0 = 1; i_0 < 20; i_0 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        for (signed char i_1 = 2; i_1 < 18; i_1 += 3) 
        {
            var_21 = ((/* implicit */int) ((short) ((((/* implicit */long long int) ((int) (unsigned char)156))) == (((long long int) (unsigned char)166)))));
            var_22 = ((/* implicit */_Bool) ((((/* implicit */int) ((short) var_10))) >> (((((((/* implicit */_Bool) ((arr_3 [i_1 - 2]) ^ (((/* implicit */long long int) ((/* implicit */int) var_1)))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)94))) : (((((/* implicit */long long int) ((/* implicit */int) var_10))) | (var_14))))) - (73LL)))));
            var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) ((short) var_5)))));
        }
        var_24 &= ((/* implicit */unsigned long long int) (((~(-1151265375))) != (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)0)))))));
        var_25 = ((/* implicit */signed char) (_Bool)1);
    }
    for (unsigned int i_2 = 1; i_2 < 20; i_2 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned char i_3 = 1; i_3 < 19; i_3 += 1) 
        {
            for (unsigned char i_4 = 3; i_4 < 20; i_4 += 1) 
            {
                {
                    var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */long long int) (unsigned char)156)), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)114))) : (-1196882600420562830LL)))))) ? (((unsigned long long int) ((unsigned short) var_3))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */long long int) ((/* implicit */int) (signed char)35))) & (var_5))) != (((/* implicit */long long int) var_4))))))));
                    var_27 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_3 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_3 + 1]))) : (var_16)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_15)))))) >= (((((/* implicit */_Bool) -1010322841)) ? (5990200668219087306ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))))))) : (((unsigned int) ((((/* implicit */long long int) ((/* implicit */int) var_11))) >= (arr_2 [i_2] [i_3]))))));
                    var_28 = ((/* implicit */long long int) (~(((/* implicit */int) arr_4 [i_2 + 1] [i_2 + 1] [i_2 + 1]))));
                }
            } 
        } 
        arr_12 [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (short)29416)) >> ((((~(arr_8 [(signed char)8] [i_2 + 1]))) - (2189294508U)))));
        var_29 = ((/* implicit */unsigned long long int) arr_3 [i_2 + 1]);
    }
}
