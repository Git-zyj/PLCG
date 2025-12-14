/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239562
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239562 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239562
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */int) (-(536870908ULL)));
        var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) (-(arr_2 [(short)12]))))));
    }
    for (unsigned char i_1 = 1; i_1 < 9; i_1 += 3) 
    {
        arr_7 [i_1] = ((/* implicit */long long int) min((var_11), (((/* implicit */unsigned long long int) (_Bool)0))));
        arr_8 [i_1 - 1] [i_1] = ((/* implicit */unsigned char) 18446744073172680728ULL);
        /* LoopNest 2 */
        for (int i_2 = 2; i_2 < 7; i_2 += 2) 
        {
            for (short i_3 = 3; i_3 < 9; i_3 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_4 = 0; i_4 < 11; i_4 += 2) 
                    {
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned int) (-(((/* implicit */int) ((_Bool) (((_Bool)1) && (((/* implicit */_Bool) 35184372088831LL))))))));
                                var_21 = ((/* implicit */_Bool) min((((/* implicit */short) (unsigned char)222)), (((short) 8356885743912959125ULL))));
                                var_22 = ((/* implicit */int) var_0);
                                var_23 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */_Bool) 3U)) && (((/* implicit */_Bool) 18446744073172680725ULL)))))));
                                var_24 &= ((/* implicit */unsigned int) var_6);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_6 = 1; i_6 < 10; i_6 += 3) 
                    {
                        for (int i_7 = 0; i_7 < 11; i_7 += 1) 
                        {
                            {
                                var_25 = ((/* implicit */long long int) ((((/* implicit */int) (unsigned char)33)) << ((((~(18446744073172680707ULL))) - (536870904ULL)))));
                                arr_24 [i_6 - 1] [i_3 - 1] [i_1] = ((/* implicit */unsigned short) (!(((_Bool) (!(((/* implicit */_Bool) arr_21 [i_1] [i_2 - 2] [i_3] [i_6 - 1] [i_1] [i_1])))))));
                                arr_25 [i_1] = ((/* implicit */short) ((((((/* implicit */_Bool) ((unsigned short) (unsigned char)5))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (536870892ULL))) - (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                                var_26 = ((/* implicit */short) ((unsigned char) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 10089858329796592491ULL))))), ((+(536870891ULL))))));
                                arr_26 [i_1] [i_2 + 3] [i_3] [i_6 + 1] [i_7] = ((/* implicit */_Bool) (((+(10089858329796592490ULL))) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_6 [i_1]) ? (18446744073172680714ULL) : (((/* implicit */unsigned long long int) var_4))))) ? (((long long int) arr_22 [i_6] [i_2] [i_3 - 1] [i_6] [i_7])) : (((/* implicit */long long int) (-(((/* implicit */int) var_16))))))))));
                            }
                        } 
                    } 
                    var_27 = ((/* implicit */unsigned char) var_8);
                    arr_27 [i_1 - 1] [i_2 + 3] = var_5;
                }
            } 
        } 
    }
    for (short i_8 = 1; i_8 < 12; i_8 += 3) 
    {
        /* LoopNest 2 */
        for (short i_9 = 1; i_9 < 12; i_9 += 3) 
        {
            for (unsigned short i_10 = 0; i_10 < 13; i_10 += 3) 
            {
                {
                    arr_38 [i_10] [i_8] [i_10] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)3))) + ((+(max((var_5), (((/* implicit */unsigned long long int) arr_1 [i_8]))))))));
                    /* LoopNest 2 */
                    for (int i_11 = 4; i_11 < 11; i_11 += 3) 
                    {
                        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                        {
                            {
                                arr_46 [i_8] [i_8 - 1] [i_8] [i_8] [(_Bool)1] [i_8] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) (unsigned short)59985)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) 536870908ULL)))) : (8356885743912959125ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 17955811626946856073ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)59985))) : (var_15))))));
                                var_28 = ((/* implicit */unsigned int) ((int) var_2));
                            }
                        } 
                    } 
                    arr_47 [i_8] [i_8] [i_10] = ((/* implicit */short) (unsigned char)116);
                    var_29 = ((/* implicit */_Bool) ((unsigned long long int) (+(8356885743912959126ULL))));
                }
            } 
        } 
        var_30 ^= ((/* implicit */unsigned long long int) min((max(((-(((/* implicit */int) arr_37 [i_8 + 1] [i_8 + 1] [i_8 + 1] [i_8])))), ((+(((/* implicit */int) arr_0 [(short)12])))))), (((/* implicit */int) (short)-29981))));
        var_31 = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) arr_39 [i_8 + 1] [i_8] [i_8 - 1])) ? (arr_39 [i_8 + 1] [i_8 - 1] [i_8 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_29 [i_8 - 1])))))));
        var_32 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (unsigned short)41454))))) ? ((-(6062557353969467293ULL))) : (((/* implicit */unsigned long long int) (+(15U)))))) * (((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)59985))))) ? (arr_31 [i_8]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_40 [i_8] [i_8])))))));
    }
    var_33 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_11))));
    var_34 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) max((max((((/* implicit */unsigned int) (unsigned char)0)), (3959885115U))), (((/* implicit */unsigned int) (~(((/* implicit */int) var_9)))))))) ^ (((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073172680682ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)88))) : ((-9223372036854775807LL - 1LL))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max(((short)-29964), ((short)-29981))))) : (var_5)))));
    var_35 = ((unsigned char) (unsigned short)0);
    var_36 = ((/* implicit */unsigned short) ((unsigned long long int) var_15));
}
