/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248897
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248897 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248897
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
    var_11 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)0) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) var_1)))))) ? (((((/* implicit */_Bool) (unsigned char)43)) ? (1174022378343903225ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32767))))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_7)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)0))) : (min((((((/* implicit */_Bool) var_10)) ? (9525902855431789453ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))), (((/* implicit */unsigned long long int) (((-9223372036854775807LL - 1LL)) % (((/* implicit */long long int) ((/* implicit */int) var_5))))))))));
    var_12 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (short)-5832))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 2; i_0 < 24; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (17272721695365648391ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [(unsigned short)4]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((_Bool) var_2))))))));
        var_13 = ((/* implicit */short) ((((/* implicit */_Bool) 2864135140U)) ? (((/* implicit */int) (short)5615)) : (((/* implicit */int) (short)-5832))));
        var_14 = ((/* implicit */signed char) arr_1 [i_0 + 1]);
    }
    for (int i_1 = 0; i_1 < 18; i_1 += 4) 
    {
        var_15 = ((/* implicit */long long int) var_8);
        var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)-5832)) ? (((/* implicit */int) arr_0 [i_1] [(_Bool)1])) : (((/* implicit */int) max((arr_5 [i_1] [i_1]), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_2 [i_1])) && (var_5)))))))));
        arr_6 [i_1] = ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) ((unsigned short) var_9))) < (((((/* implicit */int) (signed char)-55)) + (((/* implicit */int) var_6))))))) == (((((/* implicit */_Bool) (~(((/* implicit */int) arr_5 [i_1] [i_1]))))) ? (((((/* implicit */_Bool) (unsigned char)229)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned char)213)))) : (((/* implicit */int) arr_1 [i_1]))))));
    }
    /* LoopSeq 2 */
    for (short i_2 = 4; i_2 < 11; i_2 += 4) 
    {
        var_17 = min((((/* implicit */long long int) ((((/* implicit */_Bool) (short)-13263)) ? (((/* implicit */int) (unsigned char)212)) : (((/* implicit */int) (unsigned char)212))))), (arr_9 [i_2]));
        var_18 = ((/* implicit */signed char) ((2740106962U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-126)))));
        var_19 = ((/* implicit */unsigned long long int) (((((-(((/* implicit */int) ((((/* implicit */int) (short)31614)) > (((/* implicit */int) (unsigned short)3164))))))) + (2147483647))) << (((((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) arr_1 [i_2])))))) % ((~(arr_9 [i_2]))))) - (1LL)))));
    }
    /* vectorizable */
    for (short i_3 = 4; i_3 < 15; i_3 += 4) 
    {
        /* LoopNest 3 */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            for (long long int i_5 = 1; i_5 < 17; i_5 += 2) 
            {
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    {
                        var_20 = ((/* implicit */unsigned char) ((signed char) (!(((/* implicit */_Bool) arr_21 [i_6] [i_3])))));
                        arr_25 [i_3] [i_4] [16] [i_6] = ((/* implicit */short) arr_17 [3] [i_3 - 1] [i_5 + 1]);
                        var_21 = arr_20 [i_5 - 1] [9LL] [1U];
                        var_22 = ((/* implicit */unsigned long long int) arr_17 [i_3] [i_4] [i_6]);
                    }
                } 
            } 
        } 
        arr_26 [6U] [i_3] = ((/* implicit */int) arr_19 [i_3 - 2]);
    }
}
