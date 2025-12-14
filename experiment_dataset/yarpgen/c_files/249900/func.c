/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249900
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249900 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249900
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
    var_10 = ((/* implicit */unsigned long long int) min((var_10), (((/* implicit */unsigned long long int) var_5))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned short) ((long long int) arr_1 [i_0] [i_0]));
        arr_4 [i_0] = ((/* implicit */unsigned char) ((143951523109241104ULL) * (18302792550600310511ULL)));
    }
    for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 3) 
    {
        arr_8 [i_1] = ((/* implicit */unsigned short) var_7);
        var_11 = ((/* implicit */_Bool) 131071ULL);
        /* LoopNest 2 */
        for (unsigned short i_2 = 2; i_2 < 18; i_2 += 2) 
        {
            for (long long int i_3 = 3; i_3 < 17; i_3 += 4) 
            {
                {
                    arr_16 [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (var_8) : (((int) (~(((/* implicit */int) (unsigned short)42240)))))));
                    arr_17 [i_3] [i_1] = ((/* implicit */int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)24158)) ? (18302792550600310511ULL) : (143951523109241098ULL)))) ? (min((18302792550600310511ULL), (18302792550600310511ULL))) : ((+(143951523109241104ULL))))), (((/* implicit */unsigned long long int) max(((~(((/* implicit */int) var_1)))), (((/* implicit */int) min((var_3), (((/* implicit */short) var_4))))))))));
                }
            } 
        } 
    }
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        var_12 = ((/* implicit */unsigned char) 143951523109241105ULL);
        var_13 *= ((/* implicit */unsigned int) ((max((arr_14 [i_4] [i_4]), (((/* implicit */unsigned int) (unsigned short)42240)))) == (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 32767U))))))));
        var_14 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) (+(arr_14 [i_4] [i_4])))), (max((18302792550600310501ULL), (((/* implicit */unsigned long long int) ((_Bool) var_7)))))));
    }
    for (short i_5 = 3; i_5 < 20; i_5 += 4) 
    {
        /* LoopSeq 2 */
        for (signed char i_6 = 1; i_6 < 21; i_6 += 3) 
        {
            var_15 = ((short) (!(((/* implicit */_Bool) min((((/* implicit */long long int) var_5)), (arr_22 [i_5] [i_5]))))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (signed char i_7 = 0; i_7 < 22; i_7 += 2) 
            {
                var_16 = ((/* implicit */signed char) (~(((/* implicit */int) arr_20 [i_5 + 2] [i_6 + 1]))));
                var_17 = ((/* implicit */signed char) var_6);
                var_18 = ((/* implicit */unsigned short) ((unsigned int) (((_Bool)1) ? (143951523109241105ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)97))))));
            }
        }
        for (unsigned long long int i_8 = 0; i_8 < 22; i_8 += 3) 
        {
            var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) ((unsigned char) 10964547446930771935ULL)))));
            /* LoopSeq 1 */
            for (unsigned long long int i_9 = 0; i_9 < 22; i_9 += 3) 
            {
                var_20 = ((/* implicit */long long int) min((max((((/* implicit */int) (!(((/* implicit */_Bool) arr_28 [i_5] [i_8] [i_9]))))), ((+(((/* implicit */int) var_3)))))), (((/* implicit */int) var_3))));
                /* LoopNest 2 */
                for (int i_10 = 4; i_10 < 21; i_10 += 2) 
                {
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        {
                            var_21 = ((/* implicit */_Bool) (-(max((max((((/* implicit */unsigned long long int) arr_35 [i_5] [i_10])), (143951523109241107ULL))), (min((143951523109241108ULL), (3854255883975637390ULL)))))));
                            arr_40 [i_5] [i_5] [i_5] [i_5] [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) var_4))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_7)) ? (var_0) : (((/* implicit */int) var_3))))))));
                            arr_41 [i_5] [i_8] [i_8] [i_10] [i_10] [i_11] [i_10] = ((/* implicit */signed char) (((+((+(143951523109241111ULL))))) / (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) max(((short)-7474), (((/* implicit */short) (signed char)-33)))))))));
                            var_22 = ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) ((short) max((var_0), (((/* implicit */int) (signed char)(-127 - 1))))))));
                        }
                    } 
                } 
            }
            arr_42 [i_5] [i_5] [i_5] = ((/* implicit */unsigned short) ((signed char) max((arr_34 [i_5 - 1]), (((/* implicit */int) var_5)))));
        }
        var_23 |= ((/* implicit */signed char) min(((((+(((/* implicit */int) var_5)))) % (((/* implicit */int) ((_Bool) var_7))))), (((/* implicit */int) max((arr_23 [i_5] [i_5] [i_5 + 1]), (((/* implicit */signed char) (_Bool)0)))))));
        arr_43 [i_5] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */long long int) ((unsigned int) arr_37 [i_5] [i_5] [i_5] [i_5]))), (((-1LL) - (((/* implicit */long long int) ((/* implicit */int) var_1)))))))) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) arr_25 [i_5] [i_5]))));
    }
}
