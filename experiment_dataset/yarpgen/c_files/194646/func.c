/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194646
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194646 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194646
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
    var_19 |= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 5089012709942304472ULL))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */signed char) ((unsigned int) ((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [i_0]))) & (max((((/* implicit */long long int) 2361207933U)), (8917508779431994209LL))))));
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 2; i_1 < 9; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 13; i_2 += 4) 
            {
                for (unsigned int i_3 = 2; i_3 < 12; i_3 += 4) 
                {
                    {
                        arr_13 [i_1] [i_2] = min((((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_3] [i_3] [i_3] [i_3 - 1] [i_3]))) == (arr_8 [i_3 - 2] [i_3 - 2] [i_1 + 2])))), (var_18));
                        arr_14 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) (short)-7824))));
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        arr_19 [i_4] [i_4] = ((/* implicit */unsigned int) ((_Bool) arr_15 [i_4]));
        arr_20 [i_4] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_18 [i_4] [i_4])) >= (((/* implicit */int) arr_18 [i_4] [i_4]))));
        arr_21 [i_4] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_10))));
    }
    var_20 = ((/* implicit */short) ((((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) 3603261455U)))))))) >= (min((var_3), (((/* implicit */long long int) var_2))))));
    /* LoopSeq 1 */
    for (short i_5 = 0; i_5 < 17; i_5 += 3) 
    {
        arr_25 [i_5] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) (~(arr_15 [i_5])))), (arr_17 [i_5] [i_5])));
        /* LoopSeq 1 */
        for (signed char i_6 = 0; i_6 < 17; i_6 += 4) 
        {
            /* LoopNest 3 */
            for (unsigned short i_7 = 2; i_7 < 16; i_7 += 1) 
            {
                for (unsigned long long int i_8 = 0; i_8 < 17; i_8 += 3) 
                {
                    for (int i_9 = 0; i_9 < 17; i_9 += 3) 
                    {
                        {
                            arr_37 [i_9] [i_9] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) arr_33 [i_6])), (arr_17 [i_5] [i_5])));
                            arr_38 [i_6] |= ((/* implicit */int) (-(((((/* implicit */_Bool) ((5033609043957053163ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */unsigned long long int) var_14)) : (min((((/* implicit */unsigned long long int) var_2)), (arr_17 [i_5] [i_5])))))));
                        }
                    } 
                } 
            } 
            arr_39 [(_Bool)1] [i_6] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_27 [i_5] [i_6] [i_6])) * (((/* implicit */int) arr_27 [i_5] [(unsigned short)10] [i_5]))))) ? (((/* implicit */int) ((short) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_24 [i_5] [i_5])) : (((/* implicit */int) arr_26 [i_5] [0LL] [i_6])))))) : (((/* implicit */int) ((unsigned char) arr_15 [i_6])))));
            arr_40 [i_5] = ((/* implicit */unsigned short) (~((+((~(((/* implicit */int) (signed char)53))))))));
        }
        arr_41 [i_5] = ((/* implicit */_Bool) ((unsigned char) 3603261463U));
        arr_42 [i_5] = (!(((/* implicit */_Bool) (signed char)-101)));
    }
}
