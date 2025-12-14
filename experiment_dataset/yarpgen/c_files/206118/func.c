/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206118
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206118 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206118
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
    var_14 = ((/* implicit */int) (short)-20728);
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_0 = 2; i_0 < 23; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                {
                    /* LoopSeq 3 */
                    for (long long int i_3 = 0; i_3 < 24; i_3 += 4) 
                    {
                        var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) (short)20700))));
                        /* LoopSeq 1 */
                        for (int i_4 = 0; i_4 < 24; i_4 += 2) 
                        {
                            arr_12 [i_0] [i_1] [i_2] [i_3] [i_3] [i_3] [i_4] = ((int) ((((/* implicit */_Bool) (short)20728)) ? (((/* implicit */int) (short)20736)) : (((/* implicit */int) (short)20719))));
                            var_16 = ((/* implicit */int) ((signed char) arr_9 [i_0] [i_0] [i_0] [i_0 + 1]));
                            var_17 *= ((/* implicit */unsigned int) (+(-1577014376)));
                            arr_13 [i_0] [i_0] [9] [i_3] [i_4] = ((unsigned long long int) arr_8 [i_0 + 1] [i_2] [i_0 + 1] [i_3] [i_4] [i_4]);
                        }
                        arr_14 [i_1] [i_1] [i_3] = (-(((/* implicit */int) (_Bool)0)));
                    }
                    for (unsigned long long int i_5 = 0; i_5 < 24; i_5 += 3) 
                    {
                        arr_18 [i_0] [i_1] [i_2] [i_5] = ((/* implicit */short) ((int) (+(((/* implicit */int) arr_8 [i_0] [i_0 - 1] [i_1] [(unsigned char)4] [i_1] [i_0 - 1])))));
                        arr_19 [(unsigned char)2] = 12608124242845170573ULL;
                    }
                    for (unsigned char i_6 = 0; i_6 < 24; i_6 += 4) 
                    {
                        arr_24 [i_0] [(_Bool)1] [i_2] [i_6] = ((/* implicit */int) ((unsigned int) arr_0 [i_0]));
                        arr_25 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_9 [i_0] [i_0 - 2] [i_0 - 2] [i_0 + 1])) ? (arr_9 [i_0 - 2] [i_0 - 1] [i_0 + 1] [i_0 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))));
                    }
                    /* LoopNest 2 */
                    for (long long int i_7 = 0; i_7 < 24; i_7 += 2) 
                    {
                        for (unsigned char i_8 = 1; i_8 < 21; i_8 += 1) 
                        {
                            {
                                var_18 -= ((/* implicit */long long int) ((unsigned int) arr_11 [i_0] [i_0 - 1] [i_0] [i_0] [i_0 - 2] [i_0 - 1] [i_0 - 2]));
                                var_19 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) 9786197102563465849ULL))) ? (17065509588039701361ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_27 [i_8 - 1] [i_8 + 1] [i_8 + 2])))));
                                arr_32 [i_0] = ((/* implicit */int) (signed char)-7);
                                arr_33 [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) 1381234485669850274ULL)) ? (arr_22 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_8 + 2] [i_8 + 2] [i_8 - 1] [i_8 + 1] [i_8])))));
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */short) (+((-(((/* implicit */int) (short)20753))))));
                }
            } 
        } 
        var_21 = -1LL;
        arr_34 [i_0 - 1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (short)-20729))));
    }
    for (signed char i_9 = 0; i_9 < 20; i_9 += 1) 
    {
        arr_39 [i_9] [i_9] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_29 [i_9] [i_9])) ? (((((/* implicit */int) (short)-20728)) + (arr_29 [i_9] [i_9]))) : (arr_29 [i_9] [i_9])));
        var_22 = min((((/* implicit */unsigned long long int) ((arr_7 [(unsigned char)19] [i_9] [i_9] [9U] [i_9]) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_9] [i_9] [i_9] [i_9]))))) : (((/* implicit */int) ((signed char) 17065509588039701361ULL)))))), ((~(1381234485669850257ULL))));
        /* LoopNest 3 */
        for (signed char i_10 = 0; i_10 < 20; i_10 += 1) 
        {
            for (unsigned short i_11 = 4; i_11 < 17; i_11 += 4) 
            {
                for (long long int i_12 = 0; i_12 < 20; i_12 += 3) 
                {
                    {
                        var_23 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) -5380011581698410592LL)) ? (arr_37 [i_10]) : (arr_41 [i_12] [i_10] [i_10])))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_37 [i_10])) ? (9223372036854775792LL) : (((/* implicit */long long int) arr_30 [23] [(signed char)20] [i_10] [i_11] [i_12]))))))) ? (((arr_16 [11] [i_9] [i_11 + 1] [i_11 - 4] [i_11 + 3] [i_11]) << (((((((/* implicit */int) (short)-20737)) ^ (8191))) + (20255))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))));
                        arr_47 [i_9] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((int) ((5838619830864381074ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_28 [i_11] [i_10] [i_9]))))))) - ((~(arr_20 [i_9] [i_9] [i_9] [i_9] [i_9])))));
                    }
                } 
            } 
        } 
    }
    var_24 *= ((/* implicit */unsigned char) (-(((int) (+(((/* implicit */int) var_12)))))));
}
