/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236276
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236276 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236276
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
    var_13 ^= ((/* implicit */unsigned long long int) min((var_9), (((/* implicit */long long int) ((((((/* implicit */_Bool) var_9)) ? (var_10) : (var_8))) % (((/* implicit */int) var_4)))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        var_14 = ((/* implicit */int) min((var_14), (((/* implicit */int) var_0))));
        arr_4 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 177070252)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)11))) : (var_9)))) * (arr_0 [i_0] [i_0])));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
    {
        var_15 = (unsigned short)37541;
        arr_8 [i_1] [i_1] = min((((((/* implicit */_Bool) min((177070252), (177070233)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_1]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_12))))))), (((/* implicit */int) arr_5 [i_1])));
        /* LoopNest 3 */
        for (long long int i_2 = 3; i_2 < 14; i_2 += 1) 
        {
            for (long long int i_3 = 0; i_3 < 16; i_3 += 4) 
            {
                for (unsigned char i_4 = 0; i_4 < 16; i_4 += 2) 
                {
                    {
                        arr_15 [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_9 [i_1] [i_2] [i_4])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (unsigned char)4)))), (((/* implicit */int) var_11))))) ? (((((var_2) + (9223372036854775807LL))) << (((min((2794254638756611730ULL), (((/* implicit */unsigned long long int) 177070252)))) - (177070252ULL))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) max(((unsigned char)2), ((unsigned char)1))))))))));
                        var_16 = ((/* implicit */int) (+(max((max((((/* implicit */long long int) (unsigned short)61343)), (arr_12 [i_1] [i_1] [i_3]))), (((/* implicit */long long int) (-(-177070253))))))));
                        /* LoopSeq 1 */
                        for (long long int i_5 = 0; i_5 < 16; i_5 += 1) 
                        {
                            var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_6 [i_5])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) ((unsigned short) var_8)))));
                            var_18 = ((/* implicit */int) 0U);
                            arr_19 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_5 [i_1]))));
                            arr_20 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */int) 2796143031590726830ULL);
                        }
                    }
                } 
            } 
        } 
        var_19 = ((/* implicit */long long int) min((((((/* implicit */_Bool) (unsigned short)4831)) ? (1713832850) : (((/* implicit */int) (unsigned short)4834)))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_1])))))));
    }
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
    {
        arr_23 [i_6] = (unsigned char)40;
        /* LoopNest 3 */
        for (long long int i_7 = 2; i_7 < 14; i_7 += 1) 
        {
            for (unsigned int i_8 = 1; i_8 < 13; i_8 += 1) 
            {
                for (unsigned long long int i_9 = 0; i_9 < 16; i_9 += 1) 
                {
                    {
                        var_20 = (unsigned short)61343;
                        var_21 = ((/* implicit */unsigned short) ((unsigned char) (unsigned char)143));
                        arr_31 [i_6] [i_6] [i_6] [i_7] [i_8] [i_9] = ((/* implicit */int) (unsigned short)60693);
                    }
                } 
            } 
        } 
        arr_32 [i_6] [i_6] = ((/* implicit */unsigned char) (unsigned short)47282);
    }
}
