/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240840
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240840 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240840
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
    var_13 = ((/* implicit */signed char) 65535U);
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        /* LoopNest 3 */
        for (signed char i_1 = 3; i_1 < 18; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 19; i_2 += 1) 
            {
                for (signed char i_3 = 1; i_3 < 17; i_3 += 3) 
                {
                    {
                        arr_11 [i_0] [i_0] [i_3] [i_3] [i_2] [i_3 - 1] = ((/* implicit */unsigned long long int) (unsigned short)64191);
                        arr_12 [i_1] [i_3] [i_3] [i_1 - 1] = ((/* implicit */short) (signed char)124);
                        var_14 = ((/* implicit */int) min((var_14), (((/* implicit */int) (short)9367))));
                        arr_13 [i_0] [i_3] [i_0] [i_3] = ((/* implicit */_Bool) -648488421);
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (unsigned int i_4 = 0; i_4 < 19; i_4 += 4) 
        {
            for (int i_5 = 0; i_5 < 19; i_5 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_6 = 1; i_6 < 16; i_6 += 4) 
                    {
                        for (unsigned char i_7 = 3; i_7 < 17; i_7 += 4) 
                        {
                            {
                                var_15 += ((/* implicit */unsigned short) (unsigned char)0);
                                var_16 = ((/* implicit */int) min((var_16), (((/* implicit */int) 5556461303196437431ULL))));
                            }
                        } 
                    } 
                    var_17 &= (_Bool)1;
                    var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) 5556461303196437422ULL))));
                    var_19 = ((/* implicit */int) 12890282770513114204ULL);
                }
            } 
        } 
    }
    for (unsigned short i_8 = 3; i_8 < 19; i_8 += 1) 
    {
        /* LoopNest 2 */
        for (int i_9 = 1; i_9 < 18; i_9 += 3) 
        {
            for (unsigned short i_10 = 0; i_10 < 20; i_10 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_11 = 0; i_11 < 20; i_11 += 4) 
                    {
                        for (unsigned long long int i_12 = 0; i_12 < 20; i_12 += 2) 
                        {
                            {
                                var_20 = ((/* implicit */int) (short)(-32767 - 1));
                                var_21 = ((/* implicit */unsigned short) (short)32767);
                            }
                        } 
                    } 
                    arr_43 [i_8 - 2] [i_8] = ((/* implicit */signed char) 5556461303196437431ULL);
                    /* LoopNest 2 */
                    for (unsigned char i_13 = 1; i_13 < 17; i_13 += 2) 
                    {
                        for (long long int i_14 = 0; i_14 < 20; i_14 += 4) 
                        {
                            {
                                var_22 = ((/* implicit */unsigned char) 12890282770513114193ULL);
                                var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) 3711573626867165062ULL))));
                                var_24 = ((/* implicit */_Bool) (unsigned char)239);
                                var_25 = 5556461303196437422ULL;
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_50 [i_8] = ((/* implicit */unsigned char) 15887605087003157683ULL);
        var_26 = ((/* implicit */unsigned short) (_Bool)1);
        /* LoopNest 3 */
        for (int i_15 = 0; i_15 < 20; i_15 += 4) 
        {
            for (short i_16 = 0; i_16 < 20; i_16 += 2) 
            {
                for (short i_17 = 4; i_17 < 19; i_17 += 4) 
                {
                    {
                        var_27 = ((/* implicit */_Bool) max((var_27), (((/* implicit */_Bool) 12890282770513114184ULL))));
                        arr_59 [i_16] [i_16] [i_16] [i_16] = ((/* implicit */signed char) (unsigned short)30452);
                        arr_60 [i_8 + 1] [i_8 + 1] [i_16] [i_8 + 1] = (unsigned short)1347;
                        var_28 = ((/* implicit */unsigned long long int) min((var_28), (((/* implicit */unsigned long long int) 4294901747U))));
                        var_29 = ((/* implicit */_Bool) min((var_29), (((/* implicit */_Bool) 1158249023U))));
                    }
                } 
            } 
        } 
    }
    var_30 += ((/* implicit */signed char) (_Bool)1);
    var_31 = ((/* implicit */unsigned char) (_Bool)0);
}
