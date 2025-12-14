/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237680
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237680 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237680
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
    var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) min((((((/* implicit */int) var_5)) - (var_15))), (((/* implicit */int) var_12)))))));
    var_18 = ((/* implicit */_Bool) (unsigned short)9191);
    /* LoopSeq 4 */
    for (short i_0 = 3; i_0 < 22; i_0 += 3) 
    {
        var_19 = ((/* implicit */unsigned char) min(((+(1540890878U))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)127))))) ? (((/* implicit */int) (unsigned short)6314)) : (((/* implicit */int) min(((unsigned short)59246), (((/* implicit */unsigned short) (_Bool)1))))))))));
        /* LoopNest 3 */
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            for (unsigned short i_2 = 2; i_2 < 22; i_2 += 3) 
            {
                for (signed char i_3 = 0; i_3 < 24; i_3 += 3) 
                {
                    {
                        var_20 = ((/* implicit */short) ((unsigned long long int) min((((/* implicit */long long int) arr_3 [i_2 - 2])), (var_1))));
                        var_21 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_6 [i_0 + 1])) ? (((/* implicit */int) arr_10 [i_1] [i_2] [i_2 - 1] [i_1])) : (((/* implicit */int) min((arr_11 [i_3] [i_1] [i_2] [i_1]), ((short)8190))))));
                    }
                } 
            } 
        } 
        /* LoopNest 3 */
        for (unsigned short i_4 = 0; i_4 < 24; i_4 += 3) 
        {
            for (unsigned char i_5 = 0; i_5 < 24; i_5 += 4) 
            {
                for (int i_6 = 0; i_6 < 24; i_6 += 2) 
                {
                    {
                        var_22 = ((/* implicit */_Bool) arr_18 [i_6] [i_0] [i_0] [i_0]);
                        arr_23 [i_0 - 2] [i_0] [i_5] [i_6] = ((/* implicit */int) ((unsigned long long int) var_5));
                        var_23 = ((/* implicit */long long int) (+((+(((/* implicit */int) arr_9 [(signed char)19] [i_0] [i_0 + 2] [i_0]))))));
                        var_24 = ((/* implicit */unsigned char) (_Bool)1);
                    }
                } 
            } 
        } 
        var_25 = ((/* implicit */unsigned char) min((max((((/* implicit */unsigned int) arr_4 [i_0])), (var_3))), (((/* implicit */unsigned int) arr_22 [i_0 - 3] [i_0] [i_0] [i_0]))));
    }
    /* vectorizable */
    for (unsigned long long int i_7 = 2; i_7 < 20; i_7 += 2) 
    {
        /* LoopSeq 2 */
        for (unsigned int i_8 = 1; i_8 < 19; i_8 += 3) 
        {
            var_26 = ((/* implicit */short) ((unsigned short) arr_6 [i_8 + 3]));
            var_27 &= ((/* implicit */unsigned char) ((unsigned long long int) arr_24 [i_7 - 2] [i_8]));
            var_28 = ((/* implicit */unsigned char) var_15);
        }
        for (unsigned char i_9 = 4; i_9 < 21; i_9 += 4) 
        {
            var_29 ^= ((/* implicit */short) ((unsigned char) arr_19 [i_7 + 1] [i_9 + 1]));
            arr_34 [i_9] [i_9] [i_7] = ((/* implicit */unsigned long long int) var_9);
        }
        var_30 ^= ((/* implicit */unsigned char) (~(((/* implicit */int) arr_10 [i_7] [i_7 + 2] [i_7] [i_7]))));
        var_31 = ((/* implicit */unsigned int) arr_13 [(unsigned char)16] [i_7 - 1]);
    }
    for (short i_10 = 0; i_10 < 25; i_10 += 2) 
    {
        var_32 = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_36 [i_10])) ? ((~(arr_36 [i_10]))) : (((/* implicit */long long int) ((/* implicit */int) min(((short)-8190), (((/* implicit */short) (unsigned char)100)))))))), (((/* implicit */long long int) (~(((/* implicit */int) arr_35 [i_10] [i_10])))))));
        var_33 = ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned short)6318))));
        var_34 += ((/* implicit */unsigned char) max((((/* implicit */long long int) arr_35 [i_10] [i_10])), (min((((/* implicit */long long int) arr_35 [i_10] [i_10])), (arr_36 [i_10])))));
    }
    for (unsigned short i_11 = 0; i_11 < 19; i_11 += 4) 
    {
        var_35 = ((/* implicit */unsigned int) max((var_35), (((/* implicit */unsigned int) min((min((max((-4548969647519973330LL), (((/* implicit */long long int) var_5)))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_36 [i_11])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned char)13))))))), (((/* implicit */long long int) max((arr_37 [i_11] [i_11]), (arr_37 [i_11] [i_11])))))))));
        var_36 = ((/* implicit */unsigned char) max((min((arr_11 [i_11] [i_11] [i_11] [i_11]), (arr_11 [i_11] [i_11] [i_11] [i_11]))), (((/* implicit */short) (!(((/* implicit */_Bool) max((((/* implicit */long long int) var_6)), (var_1)))))))));
        var_37 = ((/* implicit */unsigned char) min((var_37), (((/* implicit */unsigned char) ((int) arr_28 [i_11])))));
    }
}
