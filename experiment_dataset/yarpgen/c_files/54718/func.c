/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54718
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54718 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54718
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
    var_17 = ((/* implicit */unsigned short) var_0);
    var_18 = ((/* implicit */unsigned int) ((max((((10775162207201872345ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-8))))), (((/* implicit */unsigned long long int) min((((/* implicit */short) (signed char)-86)), ((short)-24612)))))) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))));
    var_19 = ((/* implicit */signed char) max((((/* implicit */int) ((unsigned char) ((_Bool) (unsigned char)54)))), (((((/* implicit */int) (signed char)28)) + (((/* implicit */int) (signed char)13))))));
    var_20 = (!((!(((/* implicit */_Bool) (signed char)30)))));
    /* LoopSeq 2 */
    for (int i_0 = 3; i_0 < 12; i_0 += 1) 
    {
        var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) (_Bool)1)))) + (2147483647))) >> (((((/* implicit */int) min(((short)-971), ((short)9498)))) + (977)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)251))))) : (((/* implicit */int) arr_1 [i_0] [i_0 - 3]))));
        arr_3 [i_0] [i_0 - 2] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) var_3)) != (min((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_2 [i_0] [i_0])) == (var_1)))), (var_4)))));
        var_22 = ((/* implicit */int) min((((/* implicit */unsigned int) ((short) arr_0 [i_0 - 2]))), (((unsigned int) arr_0 [i_0 + 2]))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned int i_1 = 1; i_1 < 11; i_1 += 2) 
        {
            var_23 -= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [i_0])) ? ((~(arr_0 [i_1]))) : (arr_0 [i_0 - 2])));
            var_24 = ((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */int) var_15)) >= (((/* implicit */int) var_10)))));
        }
    }
    for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 2) 
    {
        var_25 &= ((/* implicit */unsigned char) ((short) var_0));
        arr_9 [i_2] [i_2] = ((/* implicit */_Bool) (~(((/* implicit */int) (short)-21875))));
        /* LoopNest 2 */
        for (short i_3 = 0; i_3 < 11; i_3 += 1) 
        {
            for (short i_4 = 0; i_4 < 11; i_4 += 3) 
            {
                {
                    var_26 = ((/* implicit */_Bool) (~(((((/* implicit */long long int) (-(((/* implicit */int) var_15))))) / (((var_12) >> (((var_4) - (2636753273122937005ULL)))))))));
                    var_27 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)15)) << (((((/* implicit */int) (short)-24615)) + (24633))))))));
                    var_28 = ((/* implicit */unsigned char) ((short) ((((/* implicit */int) (unsigned short)57477)) * (((/* implicit */int) (_Bool)1)))));
                }
            } 
        } 
    }
}
