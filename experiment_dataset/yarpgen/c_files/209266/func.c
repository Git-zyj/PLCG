/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209266
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209266 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209266
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
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) ((((((/* implicit */_Bool) (unsigned char)193)) ? (arr_2 [i_0]) : (((/* implicit */unsigned long long int) (-2147483647 - 1))))) > (((((/* implicit */_Bool) (short)26697)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (arr_2 [i_0])))))) | (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) (unsigned char)78)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))) : (4398046511103ULL)))))));
        var_18 ^= ((/* implicit */unsigned long long int) arr_1 [(unsigned char)8]);
        var_19 *= (-(((((/* implicit */_Bool) ((unsigned short) 4398046511077ULL))) ? (min((9998781395158154106ULL), (((/* implicit */unsigned long long int) (signed char)39)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_12)))))));
    }
    /* LoopSeq 1 */
    for (long long int i_1 = 0; i_1 < 13; i_1 += 3) 
    {
        var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) (unsigned char)160))));
        var_21 &= ((/* implicit */unsigned char) max((((/* implicit */unsigned int) max((var_2), (((/* implicit */int) (short)16393))))), (min((arr_7 [i_1] [i_1]), (arr_7 [i_1] [i_1])))));
        arr_8 [i_1] [i_1] = ((/* implicit */_Bool) max((((/* implicit */unsigned int) (short)-30058)), (((arr_7 [i_1] [i_1]) + (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)90))) != (12683466780180440955ULL)))))))));
    }
    /* LoopNest 2 */
    for (unsigned char i_2 = 1; i_2 < 20; i_2 += 3) 
    {
        for (int i_3 = 0; i_3 < 22; i_3 += 4) 
        {
            {
                var_22 = ((/* implicit */short) min((var_22), (((short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_14 [i_2] [i_2] [i_3])), (0ULL)))) ? (((/* implicit */int) var_14)) : (((/* implicit */int) min(((unsigned short)47591), (((/* implicit */unsigned short) (short)24762))))))))));
                arr_15 [i_2] [i_2 - 1] = ((/* implicit */unsigned char) arr_10 [i_2]);
                var_23 += ((/* implicit */short) 288230376151646208ULL);
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned long long int) min((max((((/* implicit */int) (!(((/* implicit */_Bool) 6524824310257935890ULL))))), (((((/* implicit */_Bool) var_0)) ? (var_11) : (((/* implicit */int) (unsigned short)65524)))))), (((((((/* implicit */_Bool) 12683466780180440956ULL)) ? (((/* implicit */int) var_3)) : (var_10))) >> (((((/* implicit */int) var_13)) + (2821)))))));
    var_25 = ((/* implicit */signed char) -2147483641);
}
