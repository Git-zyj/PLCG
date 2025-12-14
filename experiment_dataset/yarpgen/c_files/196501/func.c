/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196501
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196501 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196501
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
    var_11 = ((/* implicit */int) var_3);
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            for (unsigned int i_2 = 1; i_2 < 19; i_2 += 4) 
            {
                {
                    /* LoopSeq 3 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_12 = ((/* implicit */unsigned int) ((unsigned char) 8379517114565139175ULL));
                        /* LoopSeq 1 */
                        for (unsigned short i_4 = 0; i_4 < 23; i_4 += 1) 
                        {
                            var_13 = ((/* implicit */unsigned short) ((min((0U), (((/* implicit */unsigned int) var_4)))) << (((/* implicit */int) ((((/* implicit */int) arr_2 [i_2] [i_2 - 1] [i_2 + 3])) == (((/* implicit */int) min((((/* implicit */short) var_9)), ((short)(-32767 - 1))))))))));
                            arr_12 [i_2] [i_1] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((((/* implicit */int) ((var_9) && (var_2)))) | (((/* implicit */int) var_4))))), (18446744073709551615ULL)));
                            var_14 = ((/* implicit */unsigned int) min((var_14), (((/* implicit */unsigned int) (unsigned short)19245))));
                            var_15 = ((/* implicit */unsigned char) max((((((/* implicit */int) arr_2 [i_2 + 2] [i_2] [i_2 + 1])) & (((/* implicit */int) (short)511)))), (((/* implicit */int) min((arr_2 [i_2 + 2] [i_2] [i_2 + 1]), (((/* implicit */short) (unsigned char)12)))))));
                        }
                        /* LoopSeq 3 */
                        for (int i_5 = 2; i_5 < 20; i_5 += 1) 
                        {
                            var_16 = ((/* implicit */int) min((var_16), (((/* implicit */int) ((((/* implicit */int) (unsigned short)19245)) < (((/* implicit */int) (unsigned short)1)))))));
                            var_17 = ((/* implicit */unsigned int) ((arr_6 [i_2] [i_1]) >= (((/* implicit */unsigned int) ((/* implicit */int) var_1)))));
                        }
                        for (short i_6 = 0; i_6 < 23; i_6 += 4) 
                        {
                            var_18 = ((/* implicit */long long int) min((min((((/* implicit */unsigned int) (+(((/* implicit */int) var_2))))), (((var_1) ? (arr_10 [i_6] [i_6] [i_6] [i_6] [i_6]) : (var_7))))), (((/* implicit */unsigned int) ((arr_18 [i_3] [i_2 + 3] [i_2] [i_2] [i_2 + 4]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)243))))))));
                            var_19 = ((/* implicit */int) var_7);
                            var_20 = ((/* implicit */unsigned short) max(((~(((/* implicit */int) arr_1 [i_2 + 3] [i_2 - 1])))), (((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned char)250))))));
                        }
                        for (long long int i_7 = 1; i_7 < 22; i_7 += 4) 
                        {
                            var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 0U)) ? ((-(((((/* implicit */_Bool) arr_3 [i_7] [i_2])) ? (((/* implicit */int) arr_19 [i_0] [i_1] [i_2] [i_3])) : (((/* implicit */int) (signed char)-18)))))) : (min((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned short)19245)) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) max((((/* implicit */short) (signed char)63)), (var_3))))))));
                            var_22 = ((/* implicit */unsigned short) (+((+(var_5)))));
                            arr_21 [i_0] [i_1] [i_2] [i_3] [i_2] = ((/* implicit */signed char) ((unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (arr_5 [i_0] [i_1] [i_2] [i_3])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned char)12)) : (((/* implicit */int) (signed char)-10))))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (3038575646210704669ULL))))));
                            var_23 = ((/* implicit */unsigned int) ((arr_0 [i_1] [i_0]) ? (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((int) var_3))), (2446002699U)))) : (((((/* implicit */_Bool) min(((unsigned char)228), (var_4)))) ? (((((/* implicit */_Bool) 7747988694491450809ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (15408168427498846947ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_4 [i_7]))))))));
                        }
                    }
                    for (int i_8 = 1; i_8 < 22; i_8 += 1) /* same iter space */
                    {
                        var_24 = (!(((/* implicit */_Bool) (-(arr_10 [i_2 + 4] [i_2 + 3] [i_2] [i_8 + 1] [i_8])))));
                        var_25 = ((/* implicit */signed char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-4410))) == (((unsigned long long int) arr_25 [i_2] [i_8])))) ? (var_10) : (15408168427498846944ULL)));
                    }
                    for (int i_9 = 1; i_9 < 22; i_9 += 1) /* same iter space */
                    {
                        arr_30 [i_2] = arr_19 [i_0] [i_1] [i_2] [i_9];
                        var_26 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */int) (unsigned short)65535)) ^ (((/* implicit */int) (signed char)29))))), (max((((/* implicit */long long int) var_0)), (9223372036854775792LL)))))) ? (((/* implicit */int) min((((/* implicit */signed char) ((_Bool) (short)6148))), ((signed char)-16)))) : (max((((/* implicit */int) var_1)), (((((/* implicit */int) (signed char)-10)) - (((/* implicit */int) var_1))))))));
                        var_27 += ((/* implicit */unsigned short) ((max(((_Bool)1), (max(((_Bool)0), (var_9))))) ? (((/* implicit */int) (unsigned short)19240)) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_2] [i_2 + 1] [i_9 + 1] [i_9 + 1] [i_1]))) == (1657434011U))))));
                    }
                    var_28 = ((/* implicit */signed char) ((((((/* implicit */_Bool) (-(arr_5 [i_0] [i_1] [i_1] [i_2])))) ? (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_2 + 3] [i_2] [i_2 + 1] [i_1] [i_1] [i_1] [i_0]))) : (((var_2) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))) : (-7287456518137425142LL))))) == (((/* implicit */long long int) (+(((/* implicit */int) (short)-21559)))))));
                    arr_31 [i_2] [i_1] [i_2] [i_1] = arr_5 [i_0] [i_1] [i_2 + 4] [i_1];
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (_Bool i_10 = 0; i_10 < 0; i_10 += 1) 
    {
        for (unsigned char i_11 = 3; i_11 < 11; i_11 += 4) 
        {
            for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
            {
                {
                    var_29 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (short)14892)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (673246841193662592ULL))) & (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */unsigned int) max((var_8), (((/* implicit */int) (unsigned short)0))))) : (var_5))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned char i_13 = 0; i_13 < 13; i_13 += 1) 
                    {
                        var_30 = ((/* implicit */signed char) arr_10 [i_13] [i_13] [i_12] [i_11 + 2] [i_10]);
                        var_31 = ((/* implicit */unsigned long long int) var_6);
                    }
                }
            } 
        } 
    } 
    /* LoopSeq 3 */
    for (unsigned long long int i_14 = 0; i_14 < 10; i_14 += 1) 
    {
        var_32 = ((/* implicit */short) max((((/* implicit */unsigned int) (~(((/* implicit */int) ((short) 126100789566373888LL)))))), (((arr_36 [i_14]) << (((((((/* implicit */_Bool) arr_3 [i_14] [i_14])) ? (-1019951632) : (((/* implicit */int) var_0)))) + (1019951657)))))));
        var_33 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_14] [i_14] [i_14] [i_14])) ? (((/* implicit */int) ((((/* implicit */int) (short)30073)) == (((/* implicit */int) var_3))))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_9 [i_14] [i_14] [i_14] [i_14])) || (((/* implicit */_Bool) 673246841193662612ULL)))))))) >= (((((/* implicit */_Bool) var_0)) ? (max((((/* implicit */long long int) (_Bool)1)), (-12LL))) : (((/* implicit */long long int) ((unsigned int) var_5)))))));
        var_34 = ((/* implicit */unsigned int) max((var_34), (((/* implicit */unsigned int) (signed char)104))));
        var_35 = ((/* implicit */short) max((var_35), (((/* implicit */short) max((arr_34 [i_14]), (((/* implicit */unsigned int) min((min((var_8), (((/* implicit */int) arr_1 [i_14] [i_14])))), (((/* implicit */int) var_0))))))))));
    }
    for (_Bool i_15 = 0; i_15 < 0; i_15 += 1) 
    {
        var_36 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((int) arr_29 [i_15 + 1] [i_15] [i_15]))))) && (((/* implicit */_Bool) max((((int) var_2)), (((/* implicit */int) (_Bool)1)))))));
        /* LoopSeq 1 */
        for (unsigned long long int i_16 = 2; i_16 < 11; i_16 += 4) 
        {
            var_37 = ((/* implicit */unsigned int) 17773497232515889023ULL);
            var_38 = ((/* implicit */int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_24 [i_15] [i_15])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (1023U))) | (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)0)) && (((/* implicit */_Bool) var_4))))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)79)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_0))))) != ((+(1024U))))))) : (((((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_9 [i_15 + 1] [i_15] [i_16] [i_16 - 2])), (arr_26 [i_16] [i_15] [i_15] [i_15])))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) 1642970319U)))) : (min((4294966290U), (((/* implicit */unsigned int) var_1))))))));
            arr_52 [i_16 + 1] [i_15] [i_15] = ((/* implicit */unsigned char) 8024648110918015276ULL);
        }
    }
    for (unsigned int i_17 = 0; i_17 < 17; i_17 += 4) 
    {
        var_39 = ((/* implicit */int) var_1);
        var_40 = ((/* implicit */signed char) (~(arr_27 [i_17] [i_17] [i_17] [i_17] [i_17])));
    }
    /* LoopSeq 2 */
    for (int i_18 = 1; i_18 < 18; i_18 += 4) 
    {
        var_41 = (-(((/* implicit */int) ((_Bool) -971701656))));
        var_42 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)64))));
    }
    for (unsigned long long int i_19 = 0; i_19 < 13; i_19 += 1) 
    {
        var_43 = ((/* implicit */signed char) ((((/* implicit */_Bool) 18446744073709551591ULL)) ? (min((((/* implicit */long long int) arr_20 [i_19] [i_19] [i_19] [i_19] [i_19])), (arr_7 [i_19] [i_19] [i_19] [i_19]))) : (((/* implicit */long long int) ((/* implicit */int) var_1)))));
        var_44 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned char) (_Bool)1))) ? ((~(var_7))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [6ULL] [i_19]))))))));
    }
}
