/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224577
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224577 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224577
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
    var_12 = ((/* implicit */unsigned long long int) var_11);
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        var_13 = ((/* implicit */unsigned long long int) min((var_13), (((/* implicit */unsigned long long int) 1827935642))));
        var_14 = ((/* implicit */int) 1478253358U);
        /* LoopSeq 1 */
        for (int i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            arr_7 [i_1] [i_0] [i_0] &= ((/* implicit */short) (_Bool)1);
            var_15 += ((/* implicit */_Bool) -13);
            arr_8 [i_0] [i_1] = ((/* implicit */_Bool) (short)-13399);
            var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) (unsigned char)255))));
            var_17 = ((/* implicit */int) (unsigned char)245);
        }
    }
    /* vectorizable */
    for (unsigned char i_2 = 0; i_2 < 21; i_2 += 3) 
    {
        /* LoopSeq 4 */
        for (short i_3 = 0; i_3 < 21; i_3 += 1) 
        {
            var_18 -= (unsigned char)16;
            var_19 = ((/* implicit */unsigned int) -1827935649);
        }
        for (short i_4 = 0; i_4 < 21; i_4 += 3) 
        {
            arr_19 [i_4] [(signed char)20] = ((/* implicit */unsigned int) (unsigned short)65535);
            /* LoopNest 3 */
            for (short i_5 = 4; i_5 < 20; i_5 += 4) 
            {
                for (short i_6 = 2; i_6 < 19; i_6 += 1) 
                {
                    for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                    {
                        {
                            var_20 = ((/* implicit */unsigned int) (_Bool)1);
                            var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) 7133644186499036387LL))));
                        }
                    } 
                } 
            } 
            var_22 = ((/* implicit */unsigned int) (unsigned char)255);
        }
        for (short i_8 = 0; i_8 < 21; i_8 += 2) 
        {
            /* LoopSeq 1 */
            for (short i_9 = 0; i_9 < 21; i_9 += 3) 
            {
                var_23 = ((/* implicit */unsigned short) 389412468U);
                arr_32 [i_2] [i_2] [i_2] [i_9] = ((/* implicit */unsigned char) (unsigned short)65530);
            }
            var_24 = ((/* implicit */short) 699163592U);
        }
        for (signed char i_10 = 3; i_10 < 20; i_10 += 3) 
        {
            var_25 = ((/* implicit */short) (unsigned short)65533);
            var_26 = ((/* implicit */long long int) max((var_26), (((/* implicit */long long int) (unsigned char)23))));
        }
        arr_35 [i_2] = (short)-22695;
        /* LoopNest 3 */
        for (int i_11 = 3; i_11 < 20; i_11 += 2) 
        {
            for (short i_12 = 0; i_12 < 21; i_12 += 3) 
            {
                for (int i_13 = 2; i_13 < 20; i_13 += 4) 
                {
                    {
                        var_27 = ((/* implicit */short) min((var_27), (((/* implicit */short) (_Bool)1))));
                        var_28 = ((/* implicit */short) 16748522607453124282ULL);
                        arr_45 [i_12] [i_13] [i_13] [i_2] |= ((/* implicit */unsigned char) (signed char)56);
                    }
                } 
            } 
        } 
    }
    var_29 = ((/* implicit */unsigned int) (signed char)118);
    var_30 = ((/* implicit */_Bool) 1698221466256427338ULL);
    var_31 = var_10;
}
