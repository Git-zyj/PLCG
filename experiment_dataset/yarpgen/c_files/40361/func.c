/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40361
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40361 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40361
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
    var_20 = max(((~(((/* implicit */int) (signed char)-76)))), (((/* implicit */int) (_Bool)1)));
    /* LoopSeq 3 */
    for (long long int i_0 = 2; i_0 < 16; i_0 += 1) 
    {
        arr_4 [i_0] = ((/* implicit */signed char) (+((-(((/* implicit */int) (unsigned char)0))))));
        var_21 = ((/* implicit */int) max((((/* implicit */short) (signed char)-76)), ((short)-30081)));
    }
    for (int i_1 = 2; i_1 < 16; i_1 += 1) /* same iter space */
    {
        arr_8 [i_1] = ((/* implicit */unsigned char) var_16);
        /* LoopSeq 2 */
        for (short i_2 = 3; i_2 < 16; i_2 += 1) 
        {
            /* LoopNest 2 */
            for (signed char i_3 = 0; i_3 < 18; i_3 += 1) 
            {
                for (signed char i_4 = 0; i_4 < 18; i_4 += 1) 
                {
                    {
                        arr_17 [i_2] [i_3] [i_1] [i_2] [i_1] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-12)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) (!(((/* implicit */_Bool) 3485393450U))))))))));
                        arr_18 [i_1] [i_1] [i_1] [i_4] = ((/* implicit */signed char) ((long long int) (-(((/* implicit */int) var_8)))));
                        var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) ((int) -27534718)))));
                    }
                } 
            } 
            arr_19 [i_1] = ((/* implicit */unsigned long long int) ((long long int) min((((/* implicit */unsigned int) (signed char)70)), (0U))));
            arr_20 [i_1] = ((/* implicit */short) (+((+((+(((/* implicit */int) (signed char)50))))))));
        }
        for (signed char i_5 = 2; i_5 < 15; i_5 += 1) 
        {
            arr_23 [i_1] [i_5 + 1] = ((/* implicit */short) 0LL);
            arr_24 [i_1] [(unsigned char)2] |= ((/* implicit */unsigned short) max((((((/* implicit */_Bool) (+(-8062980868324417476LL)))) ? (((/* implicit */int) ((_Bool) -2LL))) : (((/* implicit */int) (signed char)70)))), (((/* implicit */int) ((unsigned short) var_5)))));
            arr_25 [i_1] = -1LL;
        }
        var_23 = ((/* implicit */_Bool) ((signed char) (~(((((/* implicit */_Bool) (unsigned char)95)) ? (((/* implicit */unsigned int) 16)) : (914041405U))))));
    }
    for (int i_6 = 2; i_6 < 16; i_6 += 1) /* same iter space */
    {
        arr_30 [i_6] = ((/* implicit */short) (!(((/* implicit */_Bool) (unsigned short)43067))));
        arr_31 [i_6] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-(-1059190404))))));
        /* LoopSeq 2 */
        for (short i_7 = 0; i_7 < 18; i_7 += 1) 
        {
            arr_34 [12] [12] |= 914041405U;
            var_24 = ((/* implicit */unsigned long long int) var_2);
        }
        /* vectorizable */
        for (unsigned char i_8 = 2; i_8 < 17; i_8 += 1) 
        {
            arr_37 [i_6] [i_8] [i_6] = ((/* implicit */signed char) (+((-(((/* implicit */int) var_15))))));
            var_25 = ((/* implicit */unsigned long long int) (~((-9223372036854775807LL - 1LL))));
        }
    }
}
