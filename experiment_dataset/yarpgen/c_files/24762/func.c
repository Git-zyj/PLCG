/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24762
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24762 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24762
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
    /* LoopSeq 2 */
    for (unsigned int i_0 = 3; i_0 < 10; i_0 += 3) 
    {
        var_13 = ((/* implicit */unsigned char) (signed char)-107);
        var_14 ^= ((/* implicit */unsigned short) arr_1 [i_0] [i_0]);
        arr_2 [i_0] = ((/* implicit */unsigned int) (-(((/* implicit */int) ((unsigned short) arr_0 [i_0 - 3] [i_0 + 3])))));
        var_15 = ((/* implicit */signed char) arr_0 [(_Bool)1] [(unsigned short)12]);
        arr_3 [i_0] &= ((/* implicit */signed char) (unsigned short)53725);
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 3) 
    {
        var_16 ^= ((/* implicit */unsigned int) (-(((/* implicit */int) arr_4 [i_1] [9ULL]))));
        /* LoopSeq 2 */
        for (unsigned long long int i_2 = 0; i_2 < 25; i_2 += 3) 
        {
            arr_11 [i_1] [i_1] = ((/* implicit */unsigned long long int) arr_10 [i_1] [10U]);
            var_17 ^= ((/* implicit */unsigned long long int) (unsigned char)139);
            arr_12 [(signed char)4] &= ((long long int) (~(634561200)));
        }
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            arr_15 [i_1] = ((/* implicit */unsigned short) (-(((((/* implicit */long long int) ((/* implicit */int) (signed char)91))) ^ (330631129580958792LL)))));
            var_18 = arr_5 [i_1] [i_3];
        }
        var_19 ^= ((/* implicit */unsigned long long int) arr_7 [i_1]);
    }
    var_20 &= ((/* implicit */signed char) -1LL);
    /* LoopNest 2 */
    for (unsigned int i_4 = 0; i_4 < 13; i_4 += 3) 
    {
        for (signed char i_5 = 2; i_5 < 12; i_5 += 3) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned long long int i_6 = 0; i_6 < 13; i_6 += 4) 
                {
                    arr_27 [i_5] = ((/* implicit */long long int) ((((/* implicit */int) arr_21 [i_5 + 1] [i_5] [i_5 - 1])) - (((/* implicit */int) arr_21 [i_5 - 1] [i_4] [12ULL]))));
                    var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) 0U))));
                }
                arr_28 [i_5] = ((/* implicit */unsigned long long int) (signed char)-107);
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_7 = 1; i_7 < 17; i_7 += 1) 
    {
        for (unsigned char i_8 = 1; i_8 < 17; i_8 += 4) 
        {
            {
                arr_33 [i_7] [i_7] [i_8] = ((/* implicit */long long int) ((signed char) arr_7 [i_8 + 1]));
                var_22 ^= ((/* implicit */unsigned long long int) arr_10 [i_7 + 1] [i_8 - 1]);
                arr_34 [i_7] [i_7] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)127))));
            }
        } 
    } 
}
