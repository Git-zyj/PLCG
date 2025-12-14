/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247746
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247746 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247746
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
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        var_10 &= ((/* implicit */long long int) var_1);
        var_11 = ((/* implicit */long long int) (((+(((/* implicit */int) arr_0 [i_0])))) >> (((((var_1) ? (((/* implicit */int) (unsigned char)38)) : (((/* implicit */int) var_0)))) - (7)))));
        arr_3 [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_0 [i_0]))));
        /* LoopSeq 3 */
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 3) /* same iter space */
        {
            var_12 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_1 [i_1])) : (((/* implicit */int) (unsigned char)29))));
            arr_8 [i_1] [i_1] [i_0] = ((/* implicit */unsigned char) arr_5 [i_0] [8LL] [i_0]);
        }
        for (unsigned char i_2 = 0; i_2 < 16; i_2 += 3) /* same iter space */
        {
            /* LoopSeq 3 */
            for (long long int i_3 = 0; i_3 < 16; i_3 += 4) 
            {
                /* LoopNest 2 */
                for (unsigned char i_4 = 0; i_4 < 16; i_4 += 1) 
                {
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        {
                            var_13 = ((/* implicit */_Bool) (unsigned char)84);
                            var_14 = ((/* implicit */unsigned char) (((_Bool)1) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_6))));
                            var_15 *= ((/* implicit */long long int) (+(((/* implicit */int) ((var_5) != (var_2))))));
                        }
                    } 
                } 
                var_16 = ((/* implicit */_Bool) arr_0 [i_2]);
            }
            for (long long int i_6 = 0; i_6 < 16; i_6 += 1) 
            {
                var_17 = ((/* implicit */unsigned char) var_5);
                var_18 *= ((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_7 [i_0] [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)33))));
                var_19 = ((var_7) <= (((/* implicit */long long int) ((/* implicit */int) var_3))));
            }
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                var_20 += ((/* implicit */unsigned int) (unsigned char)235);
                arr_21 [10U] [i_2] [10U] &= ((/* implicit */unsigned int) arr_16 [i_0]);
                arr_22 [3LL] [i_2] [i_2] [i_7] = (~(2080374784U));
                var_21 *= var_3;
            }
            var_22 ^= ((/* implicit */_Bool) ((4U) % (((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1)))))));
        }
        for (long long int i_8 = 0; i_8 < 16; i_8 += 3) 
        {
            var_23 -= ((/* implicit */long long int) ((unsigned char) arr_1 [i_0]));
            arr_26 [i_0] &= ((-10LL) - (((/* implicit */long long int) ((/* implicit */int) (unsigned char)236))));
            arr_27 [i_0] = ((/* implicit */unsigned char) arr_19 [i_0] [i_0] [i_0]);
            /* LoopSeq 1 */
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                arr_31 [i_0] [i_8] [i_9] = ((/* implicit */_Bool) 2214592513U);
                var_24 -= ((((/* implicit */_Bool) arr_20 [i_0] [i_8] [i_8])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)6))) : (5491099350783837962LL));
                var_25 ^= ((/* implicit */_Bool) ((unsigned int) var_1));
                var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned int) var_7))) || (var_4)));
            }
            var_27 &= ((/* implicit */_Bool) ((arr_5 [i_0] [i_0] [i_0]) & (1539807595790414453LL)));
        }
    }
    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
    {
        var_28 -= ((/* implicit */unsigned char) ((var_0) ? (max((((((/* implicit */_Bool) (unsigned char)44)) ? (-2204152058855032004LL) : (((/* implicit */long long int) arr_23 [(_Bool)1] [i_10] [i_10])))), (((((/* implicit */long long int) ((/* implicit */int) var_3))) - (1539807595790414459LL))))) : (((/* implicit */long long int) ((/* implicit */int) ((((var_4) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_4)))) <= (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_10])))))))))));
        var_29 = var_2;
    }
    /* vectorizable */
    for (long long int i_11 = 0; i_11 < 10; i_11 += 4) 
    {
        var_30 -= ((/* implicit */unsigned int) arr_24 [i_11]);
        /* LoopNest 2 */
        for (unsigned int i_12 = 0; i_12 < 10; i_12 += 4) 
        {
            for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
            {
                {
                    var_31 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)157)))) : (((/* implicit */int) (unsigned char)8))));
                    var_32 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_13] [i_13] [i_13]))) : (4611668426241343488LL))) - (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (_Bool)1)))))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned char i_14 = 0; i_14 < 17; i_14 += 4) 
    {
        var_33 = (~(1597738197260583354LL));
        var_34 = ((/* implicit */_Bool) ((var_5) ^ (arr_45 [i_14])));
    }
    var_35 = (((_Bool)1) ? (((unsigned int) var_3)) : (var_8));
    var_36 &= ((/* implicit */unsigned char) -8675397138507295305LL);
    /* LoopNest 2 */
    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
    {
        for (long long int i_16 = 0; i_16 < 12; i_16 += 1) 
        {
            {
                /* LoopSeq 3 */
                for (unsigned char i_17 = 0; i_17 < 12; i_17 += 4) 
                {
                    arr_55 [i_17] [i_16] [(_Bool)0] &= ((/* implicit */_Bool) max((((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_28 [i_15] [i_15] [i_16] [(unsigned char)7]))) : ((~(4294967279U))))), (((/* implicit */unsigned int) (~(((/* implicit */int) arr_25 [i_15] [i_16])))))));
                    /* LoopNest 2 */
                    for (unsigned int i_18 = 0; i_18 < 12; i_18 += 1) 
                    {
                        for (long long int i_19 = 0; i_19 < 12; i_19 += 4) 
                        {
                            {
                                var_37 = arr_15 [(unsigned char)15] [i_15] [i_15];
                                var_38 = ((/* implicit */unsigned int) (((_Bool)1) ? ((((_Bool)1) ? (-11218693793399609LL) : (((/* implicit */long long int) var_2)))) : (-1539807595790414453LL)));
                            }
                        } 
                    } 
                }
                for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
                {
                    var_39 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_48 [i_16])) ? (((/* implicit */int) arr_56 [i_15] [i_15] [i_15] [i_16] [i_20])) : (((/* implicit */int) arr_11 [i_15] [i_16] [i_20]))));
                    arr_62 [i_16] [i_16] = ((((((/* implicit */_Bool) 2963175860028842524LL)) ? (arr_23 [i_15] [i_16] [i_20]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) * (((/* implicit */unsigned int) ((((/* implicit */int) arr_25 [i_15] [i_16])) * (((/* implicit */int) arr_25 [4LL] [i_15]))))));
                    /* LoopSeq 1 */
                    for (unsigned char i_21 = 0; i_21 < 12; i_21 += 3) 
                    {
                        var_40 ^= ((/* implicit */unsigned int) ((_Bool) (_Bool)1));
                        var_41 &= min((((/* implicit */unsigned int) (_Bool)1)), ((~(((((/* implicit */_Bool) -2963175860028842520LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_15] [4U] [(unsigned char)6] [i_21]))) : (var_2))))));
                        var_42 = ((/* implicit */_Bool) var_8);
                        var_43 &= ((/* implicit */_Bool) var_7);
                    }
                    var_44 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_50 [i_16])) ? (((/* implicit */int) arr_50 [i_16])) : (((/* implicit */int) arr_50 [i_16]))))) ? (((((/* implicit */int) arr_50 [i_16])) + (((/* implicit */int) var_4)))) : (((((/* implicit */_Bool) arr_50 [i_16])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_50 [i_16]))))));
                }
                for (unsigned char i_22 = 0; i_22 < 12; i_22 += 3) 
                {
                    /* LoopNest 2 */
                    for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
                    {
                        for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) 
                        {
                            {
                                arr_72 [i_16] [i_16] [i_16] [0LL] [(_Bool)1] = ((/* implicit */long long int) (+(3847524721U)));
                                arr_73 [i_16] [11U] [i_23] [i_16] [i_16] [i_16] [i_16] = ((/* implicit */unsigned int) arr_15 [i_15] [i_23] [i_15]);
                                arr_74 [9LL] [i_16] [i_16] [i_23] [i_24] = ((/* implicit */unsigned int) ((((_Bool) ((var_5) | (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)40)))))) ? ((~(((/* implicit */int) min(((_Bool)1), (var_3)))))) : (((/* implicit */int) (unsigned char)27))));
                            }
                        } 
                    } 
                    var_45 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -2256555218565705892LL)) ? (arr_48 [i_15]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_53 [i_16] [(unsigned char)1] [i_22])) && (((/* implicit */_Bool) -7901032480414210026LL))))) : (((((/* implicit */int) arr_50 [i_16])) >> (((/* implicit */int) (_Bool)1)))))))));
                }
                arr_75 [i_16] [i_16] = ((/* implicit */unsigned int) var_4);
                arr_76 [i_16] [i_16] [i_16] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_71 [i_16] [i_16] [i_15] [i_16] [i_15])) || (arr_9 [i_15] [i_15] [i_15]))) && (((var_6) && (arr_66 [i_16] [i_16] [i_16] [i_15])))));
                arr_77 [i_16] = ((/* implicit */long long int) min(((-(var_5))), (((var_3) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) arr_53 [i_16] [i_16] [i_16]))))))));
                var_46 = ((/* implicit */long long int) var_9);
            }
        } 
    } 
}
