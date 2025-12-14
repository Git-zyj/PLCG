/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192030
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192030 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192030
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
    for (signed char i_0 = 2; i_0 < 11; i_0 += 1) 
    {
        arr_4 [i_0] = ((/* implicit */signed char) (unsigned char)48);
        arr_5 [i_0] [0] = ((/* implicit */unsigned long long int) (~(max((max((arr_3 [i_0 - 2]), (4466988759991420196LL))), (4466988759991420212LL)))));
        var_19 = ((/* implicit */unsigned short) ((((((((/* implicit */_Bool) var_12)) ? (14706993641499371947ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_18))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)117))))) < (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (unsigned short)2020))))));
    }
    for (short i_1 = 4; i_1 < 22; i_1 += 1) 
    {
        var_20 = ((/* implicit */_Bool) ((unsigned char) ((82150365) - (((/* implicit */int) (signed char)-44)))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned long long int i_2 = 0; i_2 < 25; i_2 += 2) 
        {
            arr_11 [(_Bool)1] [i_1] = ((/* implicit */unsigned char) ((short) arr_6 [i_1 - 3]));
            arr_12 [i_1] [i_1] [i_1 - 1] = ((/* implicit */unsigned int) -1059313205735582948LL);
            var_21 = ((/* implicit */short) (-(((/* implicit */int) arr_9 [i_1] [i_1]))));
        }
        /* vectorizable */
        for (unsigned short i_3 = 0; i_3 < 25; i_3 += 2) 
        {
            arr_15 [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */int) var_17)) == (((/* implicit */int) arr_8 [i_1 + 2] [i_1]))));
            arr_16 [i_1] = ((/* implicit */unsigned short) (~(arr_14 [i_1 - 1] [i_1] [i_1 - 3])));
        }
        arr_17 [i_1] [13] = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_14 [i_1 - 4] [i_1] [i_1])) ? (4112807753816448763LL) : (((/* implicit */long long int) arr_14 [i_1 - 1] [(_Bool)1] [i_1])))), (((/* implicit */long long int) ((short) arr_14 [i_1 + 2] [i_1 + 2] [i_1 - 4])))));
        arr_18 [i_1] = ((/* implicit */unsigned int) (-(((((((/* implicit */_Bool) -1713955387)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)254))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))));
    }
    for (unsigned short i_4 = 1; i_4 < 22; i_4 += 2) 
    {
        var_22 *= ((/* implicit */signed char) var_12);
        /* LoopNest 3 */
        for (signed char i_5 = 0; i_5 < 24; i_5 += 2) 
        {
            for (unsigned short i_6 = 0; i_6 < 24; i_6 += 2) 
            {
                for (unsigned char i_7 = 0; i_7 < 24; i_7 += 3) 
                {
                    {
                        /* LoopSeq 1 */
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            arr_31 [(_Bool)1] [i_4] [i_7] [i_7] [(signed char)10] = ((/* implicit */unsigned short) ((((arr_21 [i_4 + 2]) + (2147483647))) >> (min((644624908), (((/* implicit */int) (signed char)25))))));
                            arr_32 [i_4] [i_5] [i_7] [(unsigned char)18] [0U] = ((/* implicit */signed char) ((_Bool) (unsigned short)4683));
                        }
                        arr_33 [13U] [i_7] [i_7] = ((/* implicit */unsigned int) (+((((!(((/* implicit */_Bool) 82150365)))) ? ((+(((/* implicit */int) (unsigned short)27286)))) : (-82150365)))));
                    }
                } 
            } 
        } 
    }
    /* LoopNest 3 */
    for (int i_9 = 0; i_9 < 14; i_9 += 1) 
    {
        for (unsigned short i_10 = 0; i_10 < 14; i_10 += 1) 
        {
            for (long long int i_11 = 0; i_11 < 14; i_11 += 2) 
            {
                {
                    arr_41 [i_9] [i_9] = ((/* implicit */long long int) ((signed char) arr_13 [i_11] [(signed char)0]));
                    var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) max(((-(((/* implicit */int) arr_37 [i_11] [i_10] [i_9])))), (((((/* implicit */_Bool) arr_37 [i_9] [i_10] [i_9])) ? (((/* implicit */int) arr_37 [i_9] [i_10] [i_11])) : (((/* implicit */int) arr_37 [i_11] [i_10] [i_9])))))))));
                    var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) (~(((/* implicit */int) ((((((/* implicit */_Bool) (unsigned char)96)) ? (4112807753816448763LL) : (4112807753816448753LL))) >= (((/* implicit */long long int) ((/* implicit */int) (signed char)127)))))))))));
                }
            } 
        } 
    } 
}
