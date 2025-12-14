/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27849
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27849 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27849
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
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 3; i_1 < 18; i_1 += 2) 
        {
            {
                arr_4 [i_0] |= ((/* implicit */signed char) (unsigned char)246);
                var_19 ^= var_16;
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 20; i_2 += 2) 
                {
                    for (unsigned short i_3 = 0; i_3 < 20; i_3 += 1) 
                    {
                        {
                            var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)255))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (unsigned char)35)))) ^ (var_16))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) var_2))))))))));
                            var_21 = ((/* implicit */short) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) ((unsigned short) var_3))) : (((/* implicit */int) (signed char)126))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_22 &= ((/* implicit */unsigned long long int) var_17);
    var_23 &= ((/* implicit */unsigned int) ((signed char) ((((((((/* implicit */int) var_13)) - (((/* implicit */int) var_15)))) + (2147483647))) >> (((((((/* implicit */int) var_17)) - (((/* implicit */int) (_Bool)1)))) + (69))))));
    /* LoopNest 3 */
    for (signed char i_4 = 0; i_4 < 11; i_4 += 2) 
    {
        for (short i_5 = 0; i_5 < 11; i_5 += 1) 
        {
            for (signed char i_6 = 2; i_6 < 9; i_6 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_7 = 0; i_7 < 11; i_7 += 4) 
                    {
                        arr_20 [i_6] [i_5] [i_5] [i_5] = ((/* implicit */_Bool) ((((((/* implicit */int) (unsigned short)46945)) / (((/* implicit */int) (unsigned short)2329)))) - (((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)40119))))));
                        var_24 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((max(((_Bool)1), (var_14))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) (signed char)-117)))) : ((+(8843400607977801925ULL))))))));
                    }
                    var_25 ^= ((/* implicit */signed char) (~(((/* implicit */int) var_4))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        var_26 &= ((/* implicit */int) 0ULL);
                        /* LoopSeq 2 */
                        for (signed char i_9 = 0; i_9 < 11; i_9 += 4) 
                        {
                            var_27 |= ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) var_16)) ? (14594863874031324110ULL) : (((/* implicit */unsigned long long int) 84363974))))));
                            arr_28 [i_4] [i_6] [7LL] [2U] [i_9] [i_6] [i_6] = ((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_22 [i_5] [i_5] [i_5] [i_5])))))));
                            var_28 ^= ((/* implicit */unsigned short) var_10);
                            arr_29 [i_6] = ((((/* implicit */_Bool) (signed char)126)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)246))) : (3754024490424899784ULL));
                            var_29 = ((/* implicit */unsigned long long int) (((-(((/* implicit */int) arr_6 [i_5] [i_5] [i_9])))) <= (var_9)));
                        }
                        for (unsigned char i_10 = 2; i_10 < 7; i_10 += 3) 
                        {
                            var_30 += ((/* implicit */signed char) (~(((/* implicit */int) (_Bool)0))));
                            var_31 ^= ((/* implicit */signed char) (+((-(((/* implicit */int) var_18))))));
                            arr_32 [i_4] [(signed char)9] [i_6 + 1] [i_8] [i_6] = ((/* implicit */short) (unsigned short)33051);
                        }
                    }
                    arr_33 [4] [i_4] [i_6 + 2] [i_6] = ((((int) (signed char)-117)) == ((-(((/* implicit */int) ((short) var_18))))));
                }
            } 
        } 
    } 
}
