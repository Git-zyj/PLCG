/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4007
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4007 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4007
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
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        var_19 = ((/* implicit */short) ((((((/* implicit */_Bool) var_14)) ? (((((/* implicit */_Bool) var_7)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_0 [i_0] [(signed char)2]))))))) >> (((((/* implicit */int) min((max((var_13), (((/* implicit */unsigned short) var_8)))), (min((((/* implicit */unsigned short) var_2)), ((unsigned short)27077)))))) - (27040)))));
        var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)175)) <= (((/* implicit */int) var_10))))), (((unsigned short) (unsigned short)3840))))) ? (((/* implicit */int) max((arr_0 [i_0] [i_0]), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned short)27091)))))))) : (((/* implicit */int) ((unsigned short) (unsigned short)8711))))))));
    }
    for (unsigned int i_1 = 0; i_1 < 25; i_1 += 4) 
    {
        var_21 ^= ((/* implicit */signed char) min((((((/* implicit */_Bool) (+(var_18)))) ? (arr_3 [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)4355))))), (((/* implicit */unsigned int) var_3))));
        arr_5 [i_1] = ((/* implicit */signed char) (~(((/* implicit */int) ((signed char) (unsigned short)27110)))));
        var_22 = ((((((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)(-127 - 1)))) % (var_9))) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1] [i_1]))))) & (((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_3 [i_1])), (var_11)))));
        var_23 = ((/* implicit */unsigned short) var_16);
    }
    var_24 = ((/* implicit */unsigned long long int) min((((/* implicit */int) var_5)), ((-(((/* implicit */int) min(((unsigned short)61187), (((/* implicit */unsigned short) (_Bool)0)))))))));
    /* LoopNest 3 */
    for (unsigned int i_2 = 0; i_2 < 10; i_2 += 4) 
    {
        for (signed char i_3 = 0; i_3 < 10; i_3 += 1) 
        {
            for (short i_4 = 0; i_4 < 10; i_4 += 2) 
            {
                {
                    var_25 = ((/* implicit */unsigned int) max((var_25), (((/* implicit */unsigned int) (+((((!(((/* implicit */_Bool) var_11)))) ? (((/* implicit */int) ((unsigned char) var_18))) : (((/* implicit */int) max((arr_1 [i_4]), (((/* implicit */unsigned char) var_16))))))))))));
                    var_26 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (2163933540964406673ULL)));
                    var_27 *= ((/* implicit */signed char) arr_3 [i_3]);
                    var_28 &= ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned int) arr_11 [i_2] [i_3] [i_4] [i_3]))));
                    var_29 = ((/* implicit */unsigned int) max((var_29), (((/* implicit */unsigned int) arr_1 [i_2]))));
                }
            } 
        } 
    } 
    var_30 |= ((/* implicit */signed char) (((~(((/* implicit */int) var_7)))) == ((+(((/* implicit */int) min((var_13), (var_13))))))));
}
