/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232449
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232449 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232449
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
    var_18 = var_16;
    var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)22151)) ? (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (signed char)-44)), (4294967295U)))) : (((unsigned long long int) (unsigned char)40))))) ? (var_10) : (((/* implicit */int) ((var_7) <= (((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) * (var_17))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned short) var_13);
        var_20 = ((/* implicit */_Bool) (short)22135);
    }
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_1 = 0; i_1 < 19; i_1 += 1) 
    {
        /* LoopSeq 2 */
        for (int i_2 = 0; i_2 < 19; i_2 += 1) 
        {
            arr_9 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) var_1)) <= ((-(var_9)))));
            arr_10 [i_2] = ((/* implicit */short) var_16);
        }
        for (int i_3 = 0; i_3 < 19; i_3 += 4) 
        {
            arr_13 [i_1] = ((/* implicit */unsigned long long int) var_2);
            var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) var_10))));
            var_22 = ((/* implicit */long long int) var_17);
            /* LoopSeq 1 */
            for (int i_4 = 3; i_4 < 16; i_4 += 1) 
            {
                var_23 = ((/* implicit */_Bool) max((var_23), (((((/* implicit */int) var_15)) > (((((/* implicit */_Bool) (short)22151)) ? (((/* implicit */int) var_3)) : (var_0)))))));
                var_24 = ((/* implicit */_Bool) (~(var_17)));
            }
            arr_16 [i_1] [i_3] = ((((/* implicit */_Bool) var_9)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) var_6))));
        }
        var_25 -= ((/* implicit */signed char) ((((/* implicit */_Bool) var_0)) ? (var_5) : (((/* implicit */int) var_2))));
    }
    for (unsigned int i_5 = 1; i_5 < 22; i_5 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned long long int i_6 = 1; i_6 < 22; i_6 += 1) 
        {
            for (unsigned short i_7 = 0; i_7 < 24; i_7 += 1) 
            {
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    {
                        /* LoopSeq 2 */
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) /* same iter space */
                        {
                            var_26 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) var_6)) ? (max((((/* implicit */unsigned long long int) var_3)), (var_17))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))))));
                            var_27 = ((/* implicit */unsigned char) (short)22159);
                            arr_31 [i_5] [i_8] [i_7] [i_8] [i_9] = ((/* implicit */unsigned char) var_5);
                        }
                        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) /* same iter space */
                        {
                            arr_35 [i_5] [i_6] [i_7] [i_8] [i_8] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((var_10), (var_10)))) ? (min((((/* implicit */long long int) ((((/* implicit */_Bool) (short)-22159)) ? (((/* implicit */int) (short)22145)) : (((/* implicit */int) (short)-22147))))), (max((-7961755402953082219LL), (((/* implicit */long long int) (short)-22159)))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) max(((unsigned char)127), (((/* implicit */unsigned char) var_13))))) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (var_1))) : (((/* implicit */unsigned int) ((((/* implicit */int) var_4)) >> (((var_10) + (821834137)))))))))));
                            arr_36 [i_10] [i_5] [i_8] [i_7] [i_6] [i_5] [i_5] = ((/* implicit */long long int) var_2);
                        }
                        var_28 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) var_5)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))))));
                        var_29 = ((/* implicit */_Bool) max((((unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_15))) & (var_9)))), (((max((var_7), (var_7))) << (((((/* implicit */int) var_12)) - (31067)))))));
                        var_30 *= ((/* implicit */unsigned short) max(((short)22151), ((short)-22159)));
                    }
                } 
            } 
        } 
        arr_37 [i_5] = ((/* implicit */unsigned int) (-(var_8)));
        arr_38 [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 8661162028718057316ULL)) ? ((+(((/* implicit */int) var_2)))) : ((-(var_5)))));
        arr_39 [i_5 + 2] = min((max((max((((/* implicit */unsigned long long int) (_Bool)0)), (7597354050325997659ULL))), (((/* implicit */unsigned long long int) 2365574125U)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-22149)) ? (((/* implicit */int) (short)-22159)) : (((/* implicit */int) (signed char)-97))))));
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
    {
        var_31 = (~(((/* implicit */int) var_13)));
        var_32 = ((/* implicit */int) var_1);
        arr_42 [i_11] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) var_3)))));
    }
}
