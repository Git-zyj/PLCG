/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245120
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245120 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245120
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
    /* LoopSeq 3 */
    for (int i_0 = 3; i_0 < 12; i_0 += 4) 
    {
        /* LoopNest 3 */
        for (long long int i_1 = 3; i_1 < 11; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 13; i_3 += 2) 
                {
                    {
                        var_14 = ((/* implicit */signed char) (-(((((/* implicit */int) ((arr_8 [i_0 - 2] [i_0 - 2] [i_0 - 2] [i_0]) < (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0] [i_0] [i_0 - 2] [i_0])))))) | (min((1470988116), (((/* implicit */int) (unsigned char)143))))))));
                        arr_11 [i_0] [i_0] [i_2] [i_3] [i_0] = ((/* implicit */unsigned int) ((min((((var_4) * (((/* implicit */unsigned long long int) arr_9 [i_0 - 1] [i_1] [i_2] [i_3])))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_11))))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))));
                        var_15 = ((/* implicit */short) min((((/* implicit */unsigned long long int) var_0)), (((max((9537608407022330618ULL), (((/* implicit */unsigned long long int) (short)-25538)))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (short)25538)))))));
                    }
                } 
            } 
        } 
        var_16 = ((/* implicit */signed char) (short)25554);
        arr_12 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */long long int) var_9)) <= (((((((/* implicit */_Bool) (short)25517)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-25554))) : (arr_9 [i_0] [3LL] [i_0 - 2] [i_0]))) - (((/* implicit */long long int) -1))))));
    }
    for (long long int i_4 = 0; i_4 < 22; i_4 += 1) 
    {
        var_17 = ((/* implicit */long long int) arr_14 [i_4] [i_4]);
        var_18 += ((/* implicit */unsigned int) min((min((18446744073709551615ULL), (((/* implicit */unsigned long long int) (unsigned short)54266)))), (((/* implicit */unsigned long long int) (unsigned short)0))));
        arr_15 [i_4] = ((/* implicit */unsigned char) (+(((/* implicit */int) ((unsigned short) max(((short)-25538), (((/* implicit */short) var_5))))))));
    }
    for (long long int i_5 = 2; i_5 < 18; i_5 += 4) 
    {
        arr_19 [i_5 + 1] = ((/* implicit */unsigned short) ((((unsigned int) (unsigned short)65510)) & (max((((/* implicit */unsigned int) ((signed char) (short)-25554))), (max((17U), (((/* implicit */unsigned int) (signed char)112))))))));
        var_19 = ((/* implicit */long long int) var_2);
    }
    var_20 = ((/* implicit */signed char) var_6);
    var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */int) min((var_13), (var_3)))), (((((/* implicit */int) (signed char)-92)) * (((/* implicit */int) (_Bool)1))))))) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)148)))));
}
