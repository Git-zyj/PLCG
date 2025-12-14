/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223070
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223070 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223070
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
    for (int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (unsigned int i_1 = 2; i_1 < 13; i_1 += 4) 
        {
            {
                arr_6 [i_0] = ((/* implicit */_Bool) arr_0 [i_0]);
                var_12 ^= ((/* implicit */int) ((var_10) < (((/* implicit */long long int) max((((((/* implicit */unsigned int) arr_2 [(signed char)5])) + (1126983496U))), (((/* implicit */unsigned int) 1479594805)))))));
                arr_7 [i_0] [i_1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (signed char)-31))));
                var_13 |= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned short)61133))));
                var_14 = ((/* implicit */unsigned long long int) var_4);
            }
        } 
    } 
    /* LoopSeq 4 */
    for (unsigned char i_2 = 0; i_2 < 19; i_2 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned short i_3 = 1; i_3 < 18; i_3 += 1) 
        {
            for (int i_4 = 0; i_4 < 19; i_4 += 1) 
            {
                {
                    arr_14 [i_2] [i_3 + 1] [i_3] [i_4] = ((/* implicit */unsigned char) arr_8 [i_2]);
                    arr_15 [i_4] [i_3 - 1] [i_4] = ((/* implicit */unsigned long long int) max(((+(2131359223))), (arr_9 [i_3 + 1])));
                }
            } 
        } 
        arr_16 [8ULL] = ((/* implicit */unsigned char) var_3);
        var_15 += ((/* implicit */_Bool) var_9);
    }
    for (unsigned char i_5 = 0; i_5 < 19; i_5 += 3) /* same iter space */
    {
        arr_20 [i_5] = ((/* implicit */unsigned long long int) 1180479904);
        var_16 |= ((/* implicit */int) max((((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_10 [i_5]))))), ((unsigned short)33694)));
    }
    for (unsigned char i_6 = 0; i_6 < 19; i_6 += 3) /* same iter space */
    {
        var_17 = ((/* implicit */unsigned short) ((short) (unsigned short)65535));
        arr_23 [i_6] = ((/* implicit */_Bool) (short)-9344);
    }
    for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
    {
        var_18 -= ((/* implicit */int) (~(var_11)));
        var_19 = ((/* implicit */unsigned char) var_8);
    }
    /* LoopNest 2 */
    for (unsigned int i_8 = 0; i_8 < 13; i_8 += 3) 
    {
        for (unsigned int i_9 = 0; i_9 < 13; i_9 += 1) 
        {
            {
                /* LoopNest 2 */
                for (int i_10 = 1; i_10 < 12; i_10 += 3) 
                {
                    for (short i_11 = 0; i_11 < 13; i_11 += 4) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (unsigned short i_12 = 0; i_12 < 13; i_12 += 1) 
                            {
                                arr_37 [i_8] [i_9] [i_8] [8LL] [2] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)136)) ^ (((/* implicit */int) (!(((/* implicit */_Bool) var_3))))))))));
                                arr_38 [i_12] [i_8] [i_10 + 1] [i_8] [i_8] = ((/* implicit */unsigned char) var_8);
                            }
                            var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) ((((var_2) > (((/* implicit */long long int) ((/* implicit */int) (signed char)-35))))) ? (min((-1603132129), (((/* implicit */int) (unsigned char)136)))) : ((~(((/* implicit */int) (short)9335)))))))));
                        }
                    } 
                } 
                var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)16990)) ? (((/* implicit */int) arr_3 [i_8])) : (((/* implicit */int) arr_3 [i_8]))))) ? (((/* implicit */int) ((((/* implicit */int) (short)9362)) != (((/* implicit */int) arr_3 [i_9]))))) : (((/* implicit */int) ((((/* implicit */int) arr_3 [i_9])) == (((/* implicit */int) arr_3 [i_8])))))));
            }
        } 
    } 
    var_22 = ((/* implicit */int) min((min((var_6), (((/* implicit */unsigned int) var_3)))), (max((var_6), (((/* implicit */unsigned int) (_Bool)1))))));
    var_23 = ((/* implicit */unsigned int) var_2);
}
