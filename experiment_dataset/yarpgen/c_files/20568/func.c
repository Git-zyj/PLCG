/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20568
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20568 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20568
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
    var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) var_14))));
    var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)12183)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-108))) : (9223372036854775784LL)))) ? (((/* implicit */long long int) ((/* implicit */int) var_16))) : (var_7)))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (var_4) : (((/* implicit */long long int) var_1))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_2))))) : (var_14))) : (((/* implicit */long long int) ((/* implicit */int) var_5)))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 3; i_0 < 21; i_0 += 4) 
    {
        var_22 = ((((/* implicit */_Bool) (signed char)-99)) ? (((/* implicit */unsigned int) -1584948132)) : (((((/* implicit */_Bool) (signed char)-66)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)53344))) : (15U))));
        var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) var_18))));
    }
    for (unsigned char i_1 = 0; i_1 < 11; i_1 += 4) 
    {
        arr_5 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)152)) ? (((/* implicit */int) (signed char)-118)) : (((/* implicit */int) (signed char)61))));
        /* LoopNest 3 */
        for (unsigned int i_2 = 2; i_2 < 9; i_2 += 4) 
        {
            for (int i_3 = 1; i_3 < 9; i_3 += 4) 
            {
                for (unsigned char i_4 = 0; i_4 < 11; i_4 += 4) 
                {
                    {
                        arr_14 [i_3] [i_3 + 1] [(unsigned char)10] [i_3] [i_1] [i_3] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 7420706907450687779ULL)) ? (((/* implicit */int) (signed char)10)) : (((/* implicit */int) (unsigned char)10))))) ? (4294967295U) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)99)) ? (((/* implicit */int) (unsigned char)178)) : (-506406501))))));
                        var_24 = ((/* implicit */unsigned long long int) var_17);
                        var_25 = ((/* implicit */long long int) min((var_25), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_19)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_0))))) ? (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (16916289449691419406ULL) : (((/* implicit */unsigned long long int) 1344341098)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (var_4) : (((/* implicit */long long int) var_17))))))))));
                    }
                } 
            } 
        } 
        var_26 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 8U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-122))) : (16916289449691419405ULL)));
        var_27 = ((/* implicit */long long int) min((var_27), (((/* implicit */long long int) var_1))));
    }
    /* LoopNest 2 */
    for (short i_5 = 2; i_5 < 10; i_5 += 4) 
    {
        for (unsigned char i_6 = 0; i_6 < 12; i_6 += 3) 
        {
            {
                arr_20 [i_6] [i_5 - 2] = ((/* implicit */unsigned int) var_8);
                var_28 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 6015060248931765594LL)) ? (((/* implicit */int) (signed char)-122)) : (598390656)));
            }
        } 
    } 
}
