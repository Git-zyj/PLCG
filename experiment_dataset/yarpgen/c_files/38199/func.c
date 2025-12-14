/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38199
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38199 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38199
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
    for (unsigned short i_0 = 4; i_0 < 23; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned char i_2 = 0; i_2 < 25; i_2 += 1) 
                {
                    var_16 = ((/* implicit */unsigned short) ((var_10) ? (((((/* implicit */_Bool) 3940997973U)) ? (((/* implicit */int) arr_3 [i_0 - 3] [i_1])) : (((/* implicit */int) (!((_Bool)0)))))) : (((/* implicit */int) (_Bool)1))));
                    var_17 = ((/* implicit */unsigned char) ((min((var_15), (((/* implicit */unsigned long long int) ((unsigned int) (short)-14614))))) != (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (unsigned char)76))))));
                    /* LoopSeq 1 */
                    for (short i_3 = 3; i_3 < 24; i_3 += 1) 
                    {
                        var_18 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_15))));
                        var_19 = ((/* implicit */short) ((((/* implicit */_Bool) max((1139266952860462776LL), (((/* implicit */long long int) 353969305U))))) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))));
                    }
                }
                arr_10 [i_1] [6ULL] = ((/* implicit */short) (~(min((((18446744073709551615ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))), (var_15)))));
                /* LoopNest 3 */
                for (unsigned long long int i_4 = 0; i_4 < 25; i_4 += 3) 
                {
                    for (unsigned char i_5 = 0; i_5 < 25; i_5 += 1) 
                    {
                        for (signed char i_6 = 0; i_6 < 25; i_6 += 4) 
                        {
                            {
                                arr_19 [(unsigned short)2] [i_1] [i_1] [i_5] [i_1] = ((/* implicit */short) 12108339820893745847ULL);
                                var_20 = ((/* implicit */unsigned long long int) ((unsigned char) (_Bool)0));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (short i_7 = 0; i_7 < 18; i_7 += 4) 
    {
        for (unsigned char i_8 = 0; i_8 < 18; i_8 += 3) 
        {
            for (int i_9 = 0; i_9 < 18; i_9 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_10 = 0; i_10 < 18; i_10 += 1) 
                    {
                        for (signed char i_11 = 0; i_11 < 18; i_11 += 4) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned char) (((-(var_9))) - (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)111)))));
                                var_22 *= ((/* implicit */short) max((((((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))) * (max((arr_28 [i_7] [14ULL] [i_9] [i_10]), (((/* implicit */unsigned long long int) (unsigned char)255)))))), (((/* implicit */unsigned long long int) (((+(var_8))) + (((/* implicit */long long int) (+(((/* implicit */int) arr_21 [i_11] [i_11]))))))))));
                            }
                        } 
                    } 
                    arr_35 [i_9] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((var_7) - (min((var_4), (((/* implicit */unsigned long long int) arr_24 [(short)4] [i_8] [6U])))))))));
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */signed char) (+(max((var_7), (((/* implicit */unsigned long long int) ((short) (unsigned char)228)))))));
    var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-31399)) ? (((/* implicit */int) ((unsigned char) (-(((/* implicit */int) (short)-31373)))))) : (((/* implicit */int) (!((!(((/* implicit */_Bool) var_0)))))))));
    var_25 = ((/* implicit */unsigned long long int) -1139266952860462769LL);
}
