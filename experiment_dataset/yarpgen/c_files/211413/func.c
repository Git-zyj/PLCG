/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211413
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211413 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211413
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
    var_18 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)255))))) : (((((/* implicit */int) (unsigned char)215)) ^ (((/* implicit */int) (short)-24282)))))), (((((/* implicit */_Bool) (unsigned short)39741)) ? (((/* implicit */int) (short)24286)) : (690017014)))));
    var_19 = ((/* implicit */short) var_6);
    /* LoopSeq 3 */
    for (unsigned char i_0 = 1; i_0 < 17; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 2; i_1 < 15; i_1 += 3) 
        {
            for (long long int i_2 = 2; i_2 < 17; i_2 += 3) 
            {
                {
                    var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) arr_0 [i_0 - 1]))) ? (min((((/* implicit */unsigned long long int) ((arr_6 [i_1]) >> (((((/* implicit */int) (short)-24277)) + (24289)))))), (5938049137551635934ULL))) : (((/* implicit */unsigned long long int) min((((((/* implicit */unsigned int) ((/* implicit */int) (short)24291))) ^ (arr_6 [i_0]))), (((/* implicit */unsigned int) (-(var_17)))))))));
                    var_21 = ((/* implicit */int) var_3);
                    arr_8 [i_1] [i_1] = ((/* implicit */signed char) arr_0 [i_1 - 2]);
                }
            } 
        } 
        var_22 = ((/* implicit */_Bool) var_17);
        /* LoopNest 2 */
        for (unsigned int i_3 = 0; i_3 < 18; i_3 += 2) 
        {
            for (unsigned long long int i_4 = 0; i_4 < 18; i_4 += 4) 
            {
                {
                    arr_17 [i_4] [i_3] [i_0] = ((/* implicit */_Bool) max((((/* implicit */unsigned short) (!(var_7)))), (var_4)));
                    var_23 = ((/* implicit */short) ((((/* implicit */int) arr_0 [i_0])) <= (min((((/* implicit */int) ((unsigned short) 11204084283060218595ULL))), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_7)) : (arr_12 [i_0] [i_0] [i_0 - 1])))))));
                    arr_18 [(_Bool)1] [i_3] [i_3] [i_3] = ((/* implicit */int) min((((/* implicit */long long int) min((arr_3 [(short)0] [i_0 - 1]), ((short)16459)))), (9223372036854775807LL)));
                }
            } 
        } 
    }
    for (unsigned char i_5 = 3; i_5 < 12; i_5 += 3) 
    {
        /* LoopNest 2 */
        for (short i_6 = 2; i_6 < 11; i_6 += 3) 
        {
            for (unsigned char i_7 = 2; i_7 < 12; i_7 += 1) 
            {
                {
                    arr_27 [i_5] [(short)2] [i_7] &= ((/* implicit */signed char) min((((/* implicit */long long int) ((90729256) > (2147483647)))), (((long long int) ((((/* implicit */_Bool) (short)24294)) && (((/* implicit */_Bool) arr_21 [2])))))));
                    var_24 = ((/* implicit */unsigned char) arr_24 [i_5] [i_6] [i_5]);
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 13; i_8 += 3) 
                    {
                        for (unsigned int i_9 = 2; i_9 < 10; i_9 += 2) 
                        {
                            {
                                var_25 = ((/* implicit */short) arr_7 [i_5] [i_6] [15ULL] [i_8]);
                                var_26 = ((/* implicit */short) max((705333771303670224ULL), (((/* implicit */unsigned long long int) min((arr_7 [i_6 - 2] [14LL] [i_7 + 1] [i_9 - 2]), (arr_7 [i_6 - 2] [(short)17] [i_7 + 1] [i_9 - 2]))))));
                                arr_34 [i_9] [i_8] [i_5] [i_6] [(_Bool)1] = ((/* implicit */unsigned short) arr_7 [(unsigned char)3] [(unsigned char)3] [i_8] [i_8]);
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopSeq 1 */
        for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
        {
            arr_37 [i_5] [i_5] [2U] = ((/* implicit */short) min((var_17), (((((/* implicit */int) min(((short)24291), ((short)-24276)))) & (((/* implicit */int) var_7))))));
            arr_38 [i_5] = max((arr_1 [i_5 - 3] [i_5 - 2]), (min((((/* implicit */short) var_11)), ((short)24291))));
        }
    }
    /* vectorizable */
    for (short i_11 = 3; i_11 < 15; i_11 += 2) 
    {
        var_27 = ((/* implicit */_Bool) max((var_27), (((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)1)))))));
        var_28 = ((/* implicit */_Bool) min((var_28), (((/* implicit */_Bool) (unsigned char)11))));
    }
    var_29 = ((/* implicit */int) ((max((var_8), (var_1))) == (((/* implicit */unsigned long long int) ((((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (unsigned char)217)))) + (((/* implicit */int) var_16)))))));
}
