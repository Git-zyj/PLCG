/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29845
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29845 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29845
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
    var_14 = ((/* implicit */unsigned short) var_3);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 15; i_1 += 2) 
        {
            {
                var_15 = min((((/* implicit */int) arr_2 [i_1])), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 14732786464408860117ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)8))) : (3713957609300691498ULL)))) ? ((~(((/* implicit */int) (unsigned short)1023)))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (short)-26975)))))));
                var_16 = ((/* implicit */int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((int) ((unsigned short) (_Bool)1)))) : (((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_1]))) : (555866476U)))))));
                var_17 = ((((/* implicit */_Bool) 1902044442)) ? (1506525731) : (((/* implicit */int) (unsigned char)242)));
                var_18 = ((/* implicit */short) max((((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0] [i_0]))))), (853522204)));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned long long int) var_4);
    var_20 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)239))) < (var_11)))) : (((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) var_10))))))) ? (max((((var_11) << (((var_0) + (926826526))))), (((((/* implicit */_Bool) var_5)) ? (var_11) : (((/* implicit */unsigned long long int) 1048575LL)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((14008933102545231805ULL), (((/* implicit */unsigned long long int) -1048563LL))))) ? (-1048576LL) : (((/* implicit */long long int) ((/* implicit */int) ((var_4) < (((/* implicit */int) (short)20407)))))))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (short i_2 = 0; i_2 < 16; i_2 += 3) 
    {
        var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) -100858641)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_2]))) : ((+(var_11)))));
        var_22 = ((/* implicit */unsigned short) 4294967295U);
    }
    for (unsigned char i_3 = 3; i_3 < 14; i_3 += 4) 
    {
        var_23 = ((/* implicit */_Bool) arr_0 [i_3 - 3] [i_3 - 1]);
        /* LoopSeq 1 */
        for (unsigned long long int i_4 = 1; i_4 < 12; i_4 += 1) 
        {
            var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_0 [i_4] [i_4 - 1]))))) ? (2964505791642249536ULL) : (((((/* implicit */_Bool) var_11)) ? ((+(arr_5 [i_3]))) : (max((arr_7 [i_4]), (((/* implicit */unsigned long long int) var_3))))))));
            var_25 -= ((/* implicit */long long int) min((max((((/* implicit */unsigned long long int) (unsigned short)22379)), (((((/* implicit */_Bool) (unsigned short)59999)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)2845))) : (4045077633028112558ULL))))), (((/* implicit */unsigned long long int) ((signed char) var_13)))));
        }
    }
    for (unsigned long long int i_5 = 0; i_5 < 18; i_5 += 1) 
    {
        var_26 = ((/* implicit */unsigned long long int) (_Bool)1);
        var_27 ^= ((/* implicit */short) (((!(((/* implicit */_Bool) (unsigned short)1025)))) ? (((((/* implicit */_Bool) arr_13 [i_5] [i_5])) ? (3156891521122619238ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_5] [i_5]))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)3836)) ? (((/* implicit */int) (unsigned short)1025)) : (((/* implicit */int) arr_13 [i_5] [i_5])))))));
    }
}
