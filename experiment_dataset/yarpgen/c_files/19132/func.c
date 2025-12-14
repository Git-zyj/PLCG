/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19132
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19132 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19132
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
    var_14 = ((/* implicit */int) min((var_14), (((/* implicit */int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (signed char)-118)) ? (1152921367167893504LL) : (((/* implicit */long long int) ((/* implicit */int) var_1))))) | (((/* implicit */long long int) ((/* implicit */int) var_12)))))) : (((((/* implicit */_Bool) var_3)) ? (var_3) : (max((((/* implicit */unsigned long long int) 1152921367167893504LL)), (17167856492929456502ULL))))))))));
    var_15 = ((/* implicit */signed char) (~((~(1278887580780095113ULL)))));
    var_16 -= ((/* implicit */long long int) (!(((-1LL) >= (-47189314392497795LL)))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_0 = 1; i_0 < 10; i_0 += 3) 
    {
        var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) ((long long int) ((unsigned char) (unsigned char)128))))));
        var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) var_0))));
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            for (signed char i_2 = 1; i_2 < 9; i_2 += 3) 
            {
                for (long long int i_3 = 0; i_3 < 11; i_3 += 3) 
                {
                    {
                        var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) ((var_2) < (((/* implicit */long long int) ((/* implicit */int) var_8))))))));
                        arr_10 [(unsigned short)6] [10LL] |= ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_1 [i_0 + 1] [7LL]))));
                    }
                } 
            } 
        } 
        var_20 -= ((/* implicit */long long int) (+(((((/* implicit */_Bool) arr_1 [1ULL] [7U])) ? (var_7) : (((/* implicit */int) arr_7 [i_0] [i_0 + 1] [i_0 - 1] [i_0]))))));
    }
    for (unsigned short i_4 = 0; i_4 < 21; i_4 += 3) 
    {
        var_21 = ((/* implicit */long long int) min((var_21), ((+((~(var_10)))))));
        arr_13 [i_4] = ((/* implicit */unsigned int) (+(((/* implicit */int) max((arr_12 [i_4]), (((/* implicit */unsigned char) arr_11 [i_4])))))));
        arr_14 [i_4] = ((/* implicit */unsigned long long int) ((((((((-9223372036854775802LL) + (9223372036854775807LL))) << (((((/* implicit */int) (signed char)127)) - (127))))) <= (((/* implicit */long long int) (+(((/* implicit */int) arr_12 [i_4]))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_11 [i_4])) ? (((/* implicit */int) var_13)) : (((/* implicit */int) ((((/* implicit */int) var_12)) == (((/* implicit */int) (unsigned short)0)))))))) : (-1352568743107680434LL)));
        arr_15 [i_4] [i_4] = ((/* implicit */long long int) min((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned short)1023)) : (((/* implicit */int) (unsigned short)65535)))), (var_7)));
    }
    var_22 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) (~(var_2)))) ? (((((/* implicit */_Bool) 9223372036854775807LL)) ? ((-9223372036854775807LL - 1LL)) : (4600139283729598673LL))) : (((/* implicit */long long int) (~(((/* implicit */int) var_12)))))))));
}
