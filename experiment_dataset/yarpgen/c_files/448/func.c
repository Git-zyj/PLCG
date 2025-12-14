/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 448
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=448 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/448
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
    var_11 = ((/* implicit */unsigned int) (~((-(((/* implicit */int) var_1))))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 3; i_0 < 12; i_0 += 1) 
    {
        var_12 -= ((/* implicit */signed char) ((long long int) (+(((/* implicit */int) (unsigned short)47054)))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (long long int i_1 = 4; i_1 < 12; i_1 += 2) 
        {
            var_13 = ((/* implicit */unsigned int) max((var_13), (((/* implicit */unsigned int) ((((/* implicit */long long int) arr_1 [i_0 + 1] [i_0 - 3])) <= (6130604613411482352LL))))));
            arr_4 [i_0] [i_0] &= ((/* implicit */signed char) (~(6130604613411482375LL)));
        }
        /* LoopSeq 1 */
        /* vectorizable */
        for (int i_2 = 0; i_2 < 13; i_2 += 4) 
        {
            /* LoopSeq 2 */
            for (long long int i_3 = 0; i_3 < 13; i_3 += 2) 
            {
                arr_11 [12] [i_2] [i_2] [i_0] = ((/* implicit */unsigned char) (_Bool)1);
                var_14 = (+(((/* implicit */int) (_Bool)1)));
            }
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                var_15 = ((/* implicit */int) var_8);
                /* LoopSeq 1 */
                for (short i_5 = 1; i_5 < 12; i_5 += 1) 
                {
                    arr_16 [7] [i_4] [i_4] [i_5] [i_5] [i_0 - 3] = ((var_3) >= (((/* implicit */int) (_Bool)1)));
                    var_16 = ((/* implicit */long long int) ((var_2) & (((/* implicit */unsigned long long int) -6130604613411482352LL))));
                    arr_17 [i_4] [i_4] [i_5] = ((/* implicit */unsigned long long int) (-(6130604613411482352LL)));
                }
                arr_18 [i_4] [i_0] [i_0] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)-85)) ? ((((_Bool)0) ? (((/* implicit */unsigned long long int) var_8)) : (14404594447448966984ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (short)-8192))))));
                var_17 = ((/* implicit */_Bool) (~(((/* implicit */int) (short)(-32767 - 1)))));
            }
            arr_19 [i_2] |= ((/* implicit */unsigned long long int) (-(var_8)));
            arr_20 [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_5 [i_0 - 1] [i_0 - 1]))));
            arr_21 [i_0] [i_0 - 3] [i_2] = (-(arr_9 [i_0]));
            arr_22 [i_0] [i_2] = (!(((/* implicit */_Bool) 3123673836U)));
        }
    }
    for (short i_6 = 0; i_6 < 16; i_6 += 1) 
    {
        var_18 = ((/* implicit */int) (unsigned short)52161);
        var_19 = ((/* implicit */unsigned long long int) var_6);
        var_20 += ((/* implicit */signed char) ((min((4042149626260584628ULL), (((/* implicit */unsigned long long int) (_Bool)1)))) == (((/* implicit */unsigned long long int) (~(8447252199812305220LL))))));
        /* LoopNest 2 */
        for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
        {
            for (unsigned char i_8 = 1; i_8 < 14; i_8 += 4) 
            {
                {
                    var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) ((((unsigned long long int) var_9)) ^ (11083089142723064223ULL))))));
                    /* LoopNest 2 */
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        for (signed char i_10 = 0; i_10 < 16; i_10 += 2) 
                        {
                            {
                                arr_38 [i_6] [i_7] [i_8] [(unsigned short)8] [i_6] = ((/* implicit */unsigned char) var_4);
                                arr_39 [i_6] [i_6] [i_6] = ((/* implicit */_Bool) arr_35 [i_8 + 2] [i_8 + 1] [i_7 - 1] [i_7 - 1] [i_7 - 1]);
                                var_22 = arr_30 [i_6] [i_6] [13LL] [i_6];
                                var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned short)52145)) : (((/* implicit */int) var_9))))) && (((/* implicit */_Bool) (~(-566548683))))))) ^ (((/* implicit */int) ((unsigned char) min((arr_29 [i_8] [i_6]), (((/* implicit */long long int) (short)32761)))))))))));
                                var_24 -= max((((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-70)) ? (((/* implicit */int) (_Bool)1)) : (-2011988223)))) && (((/* implicit */_Bool) var_2)))), (((((/* implicit */unsigned int) ((/* implicit */int) (short)(-32767 - 1)))) == ((((_Bool)1) ? (var_7) : (((/* implicit */unsigned int) var_3)))))));
                            }
                        } 
                    } 
                    arr_40 [i_6] [i_6] [i_8 + 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_36 [i_6] [i_6] [i_7] [i_8])) ? ((~(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)13)) ? (arr_37 [i_6] [i_7] [i_6] [i_6] [i_8]) : (((/* implicit */int) (_Bool)1))))) && (((/* implicit */_Bool) 9223372036854775804LL)))))));
                }
            } 
        } 
        arr_41 [i_6] [i_6] = ((/* implicit */short) max((((((unsigned long long int) (unsigned char)178)) >> (((((((/* implicit */_Bool) (short)32761)) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) - (17248198709186410827ULL))))), (((/* implicit */unsigned long long int) arr_24 [i_6]))));
    }
    var_25 = ((/* implicit */unsigned long long int) max((var_25), (((/* implicit */unsigned long long int) var_7))));
    var_26 = ((/* implicit */unsigned long long int) (short)3292);
}
