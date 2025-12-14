/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29614
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29614 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29614
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
    var_15 = ((/* implicit */signed char) (!(((/* implicit */_Bool) max((var_1), (min((((/* implicit */unsigned long long int) (unsigned char)42)), (var_1))))))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        var_16 = ((short) ((short) max((-677522676), (0))));
        /* LoopNest 3 */
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (int i_3 = 0; i_3 < 24; i_3 += 2) 
                {
                    {
                        var_17 = ((/* implicit */unsigned short) arr_5 [i_1]);
                        var_18 = ((/* implicit */short) ((unsigned long long int) -57136537));
                    }
                } 
            } 
        } 
        var_19 = ((/* implicit */unsigned long long int) (-(-1844559236)));
    }
    for (long long int i_4 = 1; i_4 < 9; i_4 += 3) 
    {
        var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) min((((/* implicit */int) arr_5 [i_4])), (0)))), (6198603707936627672ULL)))) ? (max((arr_9 [i_4 + 1] [i_4 + 1] [i_4 + 1] [(_Bool)1] [i_4] [i_4 + 1]), (((/* implicit */int) arr_12 [i_4 - 1] [i_4 + 1])))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_4 [i_4 - 1] [i_4])) : (((/* implicit */int) var_5))))) ? (var_7) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_5 [i_4])) : (((/* implicit */int) var_0))))))));
        var_21 = ((/* implicit */short) arr_6 [i_4] [(unsigned short)4]);
        var_22 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) ((unsigned char) arr_12 [i_4] [(signed char)2]))) ? (min((var_1), (((/* implicit */unsigned long long int) var_9)))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_8 [i_4 + 1]))))))), (((/* implicit */unsigned long long int) ((unsigned short) max((((/* implicit */unsigned short) (short)-8216)), (var_0)))))));
    }
    var_23 = ((/* implicit */unsigned long long int) max(((+((-(((/* implicit */int) (short)-8216)))))), (((/* implicit */int) var_12))));
}
