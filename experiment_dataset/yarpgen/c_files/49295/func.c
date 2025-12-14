/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49295
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49295 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49295
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
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            {
                arr_6 [i_0] |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (signed char)64))))) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) ((((/* implicit */int) (signed char)-89)) <= (8192))))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-12392)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-5021180559371203978LL))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 15; i_2 += 3) 
                {
                    for (unsigned int i_3 = 0; i_3 < 15; i_3 += 3) 
                    {
                        {
                            var_13 = ((/* implicit */long long int) max((var_13), (((/* implicit */long long int) min((var_1), (((((/* implicit */_Bool) 6335000288550326480ULL)) ? (((/* implicit */unsigned long long int) -1)) : (var_8))))))));
                            var_14 -= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)12)) * (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)56)))))))) ? ((+((-(((/* implicit */int) (unsigned short)65490)))))) : ((((+(((/* implicit */int) (signed char)76)))) >> (((((/* implicit */int) ((unsigned short) 18257710059773525134ULL))) - (31867)))))));
                            arr_11 [i_1] [i_1] [i_2] [i_3] = (i_1 % 2 == zero) ? (((/* implicit */signed char) ((((((/* implicit */_Bool) ((short) var_4))) ? (((/* implicit */int) (short)12391)) : (max((var_6), (var_0))))) * (((((/* implicit */int) (signed char)15)) >> (((arr_9 [i_3] [i_1] [i_2]) - (9998299080004045480ULL)))))))) : (((/* implicit */signed char) ((((((/* implicit */_Bool) ((short) var_4))) ? (((/* implicit */int) (short)12391)) : (max((var_6), (var_0))))) * (((((/* implicit */int) (signed char)15)) >> (((((arr_9 [i_3] [i_1] [i_2]) - (9998299080004045480ULL))) - (809526682621327438ULL))))))));
                        }
                    } 
                } 
                arr_12 [i_1] [i_1] [i_0] = ((/* implicit */unsigned short) ((var_11) == (((/* implicit */unsigned long long int) ((/* implicit */int) ((((int) (unsigned char)248)) < (((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))))))));
            }
        } 
    } 
    var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) ((unsigned short) var_4)))));
}
