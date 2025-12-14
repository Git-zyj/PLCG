/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219482
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219482 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219482
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
    var_13 = ((/* implicit */unsigned short) ((((((165733987) / (var_3))) * (var_3))) > (((((/* implicit */int) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) var_6))))) % (((/* implicit */int) var_9))))));
    var_14 = ((/* implicit */long long int) ((max((((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) + (var_5))), (((/* implicit */unsigned long long int) max(((unsigned short)65534), ((unsigned short)65529)))))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) ((min((-2147483636), (((/* implicit */int) (unsigned short)34376)))) > (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)31159))) > (16140901064495857664ULL))))))))));
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned short i_2 = 2; i_2 < 19; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (long long int i_4 = 0; i_4 < 21; i_4 += 4) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned short) ((int) (~(((((/* implicit */int) arr_0 [(unsigned short)10])) << (((var_7) - (8275572555634816995LL))))))));
                                var_16 = ((/* implicit */int) (~(((((min((2615737725229021651LL), (((/* implicit */long long int) -306545422)))) + (9223372036854775807LL))) >> (((((((/* implicit */_Bool) 306545422)) ? (8191ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))) - (8185ULL)))))));
                                var_17 = ((/* implicit */unsigned short) ((int) ((arr_7 [i_0] [i_2 - 2] [i_2 + 2]) && (((/* implicit */_Bool) min((-151276582), (((/* implicit */int) (short)28672))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 21; i_5 += 2) 
                    {
                        for (long long int i_6 = 1; i_6 < 19; i_6 += 3) 
                        {
                            {
                                arr_21 [i_6] [i_5] [(signed char)12] [i_1] [i_6] = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) var_4)) ? (var_4) : (((/* implicit */unsigned long long int) var_8))))));
                                var_18 = ((/* implicit */unsigned short) (-(((((/* implicit */int) (_Bool)0)) - (((/* implicit */int) arr_7 [i_5] [17LL] [i_6 - 1]))))));
                                var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_10 [i_0] [i_0] [8] [i_0] [1] [8])), (((var_5) >> (((((/* implicit */int) var_6)) - (54408)))))))) ? (((arr_3 [i_6 + 1] [i_2 - 2]) ? (((/* implicit */int) arr_16 [5])) : (((arr_14 [i_0] [i_2] [i_5] [i_5]) - (((/* implicit */int) var_1)))))) : (min((arr_14 [i_1] [17ULL] [i_2 + 1] [i_1]), (var_8))))))));
                                arr_22 [i_0] [(_Bool)1] [i_2 + 1] [i_5] [i_6] [i_6] = ((((arr_19 [19ULL] [18ULL] [i_6 - 1] [i_2 - 2] [i_2 + 1]) & (var_8))) | ((~(306545443))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_20 = ((/* implicit */long long int) (unsigned short)40222);
        /* LoopNest 2 */
        for (long long int i_7 = 4; i_7 < 20; i_7 += 3) 
        {
            for (int i_8 = 1; i_8 < 20; i_8 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_9 = 1; i_9 < 19; i_9 += 2) 
                    {
                        for (short i_10 = 2; i_10 < 18; i_10 += 2) 
                        {
                            {
                                var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) ((((arr_10 [i_7 - 1] [8] [8] [i_8 - 1] [i_8 - 1] [i_10 - 2]) + (((/* implicit */long long int) -306545422)))) << (((unsigned long long int) (unsigned short)1)))))));
                                var_22 += ((/* implicit */_Bool) ((short) var_6));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (long long int i_11 = 0; i_11 < 21; i_11 += 3) 
                    {
                        var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) min((((/* implicit */int) (unsigned short)65534)), (-306545416))))));
                        var_24 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) var_3)) ? (arr_8 [i_0]) : (((/* implicit */int) var_0))))));
                        arr_36 [6] [(unsigned short)18] [6] [i_8] [i_11] = ((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_6))))) - ((+(arr_25 [i_7 + 1] [i_7 - 4] [i_7 + 1] [i_8 - 1]))));
                        var_25 = ((/* implicit */unsigned char) min((var_25), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)34376)) && (((/* implicit */_Bool) ((long long int) -151276582))))))));
                    }
                    var_26 = ((/* implicit */signed char) (_Bool)1);
                }
            } 
        } 
    }
    for (unsigned short i_12 = 1; i_12 < 15; i_12 += 2) 
    {
        var_27 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) max((arr_13 [10ULL] [i_12 + 2] [10ULL]), (arr_13 [(signed char)16] [i_12 + 2] [(signed char)16])))), (min((((/* implicit */unsigned long long int) ((2147483647) - (((/* implicit */int) var_6))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) / (var_5)))))));
        var_28 = ((/* implicit */unsigned short) ((_Bool) (-(((/* implicit */int) arr_7 [12U] [i_12 + 1] [i_12 - 1])))));
    }
    for (unsigned short i_13 = 2; i_13 < 22; i_13 += 3) 
    {
        var_29 = ((/* implicit */_Bool) ((unsigned short) (-(((/* implicit */int) ((var_8) < (((/* implicit */int) var_6))))))));
        arr_42 [i_13] = ((((/* implicit */_Bool) var_12)) || (var_11));
        var_30 = ((/* implicit */short) min((var_30), (((/* implicit */short) ((((((/* implicit */int) (_Bool)1)) / (-306545419))) << (((((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)31161))) : (var_5))) - (31141ULL))))))));
    }
    var_31 = var_1;
}
