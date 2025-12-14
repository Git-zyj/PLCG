/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25824
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25824 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25824
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
    var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (var_14) : ((~(var_0)))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_8 [i_0] [i_0] [i_0] |= ((/* implicit */unsigned char) (~(((long long int) arr_6 [(unsigned char)3] [(unsigned char)3]))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (signed char i_2 = 0; i_2 < 17; i_2 += 3) 
                {
                    arr_12 [i_0] [i_2] [i_0] = arr_2 [11LL];
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 0; i_3 < 17; i_3 += 3) 
                    {
                        var_17 ^= ((/* implicit */short) ((((/* implicit */_Bool) var_6)) ? (-1) : (((((/* implicit */_Bool) 3508768555765435831LL)) ? (((/* implicit */int) (unsigned char)255)) : (-2147483638)))));
                        arr_16 [i_0] [(unsigned short)9] [i_2] [i_3] [i_1] = (-(arr_3 [i_1]));
                        var_18 -= (_Bool)1;
                    }
                    arr_17 [i_0] [i_0] &= ((/* implicit */short) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)8)) ? (2147483626) : (-2147483639)))) : (arr_3 [i_2])));
                    arr_18 [i_2] [i_2] = ((/* implicit */signed char) (-(arr_4 [i_1] [i_0])));
                }
                for (short i_4 = 0; i_4 < 17; i_4 += 3) 
                {
                    arr_21 [i_0] [i_1] [i_4] = ((/* implicit */short) (unsigned char)9);
                    arr_22 [i_0] [i_0] [i_1] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) (~(3295656251U))))))) != (((/* implicit */int) ((signed char) arr_5 [i_1] [i_1])))));
                    var_19 = ((/* implicit */int) arr_4 [i_0] [i_0]);
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 1; i_5 < 14; i_5 += 3) 
                    {
                        for (int i_6 = 0; i_6 < 17; i_6 += 3) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned char) ((unsigned long long int) arr_20 [i_4] [i_5] [9U]));
                                arr_27 [i_0] [i_0] [i_4] [i_0] [12LL] |= ((/* implicit */unsigned char) arr_5 [i_1] [(unsigned char)5]);
                            }
                        } 
                    } 
                }
                var_21 = (+((-(2488997926898636191ULL))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (short i_7 = 0; i_7 < 13; i_7 += 4) 
    {
        arr_30 [i_7] [5U] = ((/* implicit */unsigned long long int) ((_Bool) arr_14 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7]));
        var_22 |= ((/* implicit */unsigned char) ((unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967282U)) ? (((/* implicit */int) arr_6 [i_7] [i_7])) : (((/* implicit */int) arr_6 [i_7] [(unsigned char)1]))))) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)9))) : (12161014699234993469ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_29 [i_7])))))));
    }
}
