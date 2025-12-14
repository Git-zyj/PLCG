/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245271
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245271 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245271
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        var_11 = ((/* implicit */long long int) ((((/* implicit */int) (_Bool)0)) | (arr_0 [i_0] [i_0])));
        var_12 = ((/* implicit */short) ((((/* implicit */long long int) ((((/* implicit */_Bool) 0ULL)) ? (arr_1 [i_0]) : (arr_1 [i_0])))) % (var_1)));
        var_13 = ((/* implicit */short) min((var_13), (((/* implicit */short) 0LL))));
        var_14 = ((/* implicit */unsigned char) max((var_14), (((/* implicit */unsigned char) (+(((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (unsigned char)73)) : (arr_0 [i_0] [i_0]))))))));
    }
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned char i_1 = 0; i_1 < 15; i_1 += 4) 
    {
        var_15 &= ((/* implicit */signed char) 7879034268723186350ULL);
        var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) var_8))));
    }
    for (unsigned int i_2 = 1; i_2 < 21; i_2 += 2) 
    {
        /* LoopSeq 3 */
        for (unsigned short i_3 = 1; i_3 < 22; i_3 += 2) /* same iter space */
        {
            var_17 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) max((440265684U), (((/* implicit */unsigned int) (_Bool)0))))) ? (max((((/* implicit */unsigned int) ((((/* implicit */_Bool) 12590037435843455068ULL)) ? (-789987557) : (16)))), (min((var_6), (((/* implicit */unsigned int) arr_6 [i_2])))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 5589429251589139906ULL)) ? (var_1) : (((/* implicit */long long int) arr_4 [21] [21]))))) ? (((((/* implicit */_Bool) arr_4 [i_2] [i_2])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (unsigned char)21)))) : (((/* implicit */int) arr_9 [17] [17] [i_3])))))));
            var_18 = ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_0)) : (arr_6 [i_2])))), (max((((/* implicit */unsigned long long int) var_3)), (12590037435843455084ULL)))))) ? (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) 0LL)), (18446744073709551615ULL)))) ? ((((_Bool)0) ? (15ULL) : (((/* implicit */unsigned long long int) 1029923216049229045LL)))) : (((/* implicit */unsigned long long int) var_3)))) : (min((((((/* implicit */_Bool) (unsigned char)39)) ? (10567709804986365265ULL) : (((/* implicit */unsigned long long int) 3782912144U)))), (((/* implicit */unsigned long long int) max((-13), (((/* implicit */int) (short)21671)))))))));
            var_19 = ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_2 - 1]))) & (((((/* implicit */_Bool) arr_8 [i_2 + 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_2 + 1]))) : (7879034268723186350ULL))));
        }
        for (unsigned short i_4 = 1; i_4 < 22; i_4 += 2) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned char i_5 = 1; i_5 < 22; i_5 += 4) 
            {
                for (unsigned short i_6 = 0; i_6 < 23; i_6 += 3) 
                {
                    {
                        var_20 = min((((/* implicit */unsigned long long int) min((arr_12 [i_2 + 2] [i_2 + 2] [i_2 - 1]), (((/* implicit */unsigned short) arr_17 [(unsigned char)17] [i_2] [i_4 + 1] [i_5] [i_5] [i_6]))))), (((((/* implicit */_Bool) min((var_4), (var_4)))) ? (((2162666799384131774ULL) >> (((6544763999713883581LL) - (6544763999713883521LL))))) : (max((((/* implicit */unsigned long long int) var_5)), (var_9))))));
                        var_21 -= ((/* implicit */unsigned short) ((max((((/* implicit */unsigned long long int) -8812462479208639857LL)), (min((12590037435843455063ULL), (((/* implicit */unsigned long long int) (_Bool)1)))))) | (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_0)) ^ (((/* implicit */int) arr_17 [i_2 + 2] [i_4] [i_5] [i_4] [i_6] [i_4]))))) ? (max((((/* implicit */unsigned int) arr_8 [i_2 + 1])), (var_6))) : ((~(0U))))))));
                        var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 5856706637866096523ULL)) ? (((((/* implicit */_Bool) min((arr_14 [i_2 + 1]), (5530825678169815695LL)))) ? (((((/* implicit */_Bool) var_1)) ? (arr_14 [i_2]) : (((/* implicit */long long int) ((/* implicit */int) var_10))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)62)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)41856))))))) : (((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)228)))))));
                    }
                } 
            } 
            var_23 = ((/* implicit */unsigned char) ((min((((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) -1539477056)) : (9272156148239558400ULL))), (max((var_9), (((/* implicit */unsigned long long int) -7638470574897472001LL)))))) / (((/* implicit */unsigned long long int) ((min((var_10), ((_Bool)1))) ? (min((((/* implicit */unsigned int) (_Bool)1)), (var_6))) : (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */short) var_10)), ((short)-12))))))))));
            var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned char) var_8)), ((unsigned char)235))))) / (((var_3) / (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))))));
            var_25 &= ((/* implicit */unsigned long long int) ((arr_9 [i_2 + 1] [i_2 + 1] [i_4 - 1]) ? (max((((/* implicit */long long int) (_Bool)1)), (6544763999713883581LL))) : (((/* implicit */long long int) (~(((/* implicit */int) arr_9 [i_4 - 1] [i_2 - 1] [i_2 + 1])))))));
        }
        for (unsigned short i_7 = 1; i_7 < 22; i_7 += 2) /* same iter space */
        {
            var_26 = ((/* implicit */long long int) min((var_26), (((((((/* implicit */_Bool) 4294967292U)) ? (6544763999713883581LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) - (arr_14 [i_2])))));
            var_27 -= ((/* implicit */unsigned int) (_Bool)0);
            var_28 = ((/* implicit */int) arr_22 [i_2] [i_2]);
        }
        var_29 = ((/* implicit */signed char) max((8), (((/* implicit */int) (unsigned short)14009))));
        /* LoopSeq 3 */
        for (unsigned int i_8 = 0; i_8 < 23; i_8 += 2) 
        {
            /* LoopSeq 2 */
            for (int i_9 = 0; i_9 < 23; i_9 += 2) 
            {
                var_30 -= ((/* implicit */signed char) -6544763999713883576LL);
                var_31 -= ((/* implicit */signed char) max((((((/* implicit */_Bool) arr_13 [i_9] [i_8] [i_2])) ? (12686847827295485988ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)8574))))), (((5759896246414065627ULL) / (((/* implicit */unsigned long long int) 4033705922U))))));
            }
            for (short i_10 = 1; i_10 < 20; i_10 += 2) 
            {
                var_32 = ((/* implicit */unsigned char) min((var_32), (((/* implicit */unsigned char) min((((((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) (unsigned char)39)))) - (arr_4 [i_2 + 1] [i_2 + 1]))), (((/* implicit */unsigned int) var_5)))))));
                /* LoopNest 2 */
                for (long long int i_11 = 1; i_11 < 21; i_11 += 1) 
                {
                    for (unsigned char i_12 = 0; i_12 < 23; i_12 += 4) 
                    {
                        {
                            var_33 = ((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */int) var_8)) + (2147483647))) >> (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_26 [i_12]))))))) ? (-2079602045) : (((/* implicit */int) arr_12 [i_2] [i_8] [i_10]))));
                            var_34 = ((/* implicit */unsigned short) min((var_34), (((/* implicit */unsigned short) max((max((((/* implicit */long long int) (signed char)78)), (-5530825678169815695LL))), (-6LL))))));
                            var_35 = ((/* implicit */unsigned short) arr_27 [i_2]);
                            var_36 = ((/* implicit */int) arr_16 [i_2] [i_8] [(unsigned char)22] [i_12]);
                            var_37 -= ((/* implicit */_Bool) (~(((arr_32 [i_2] [i_8] [12] [i_2] [i_10 + 2] [i_2 + 1]) | (arr_32 [i_10 + 3] [i_8] [i_10 + 3] [i_11 + 1] [i_10 + 2] [i_2 + 1])))));
                        }
                    } 
                } 
            }
            /* LoopSeq 1 */
            for (short i_13 = 0; i_13 < 23; i_13 += 4) 
            {
                var_38 = ((/* implicit */signed char) -3);
                var_39 *= ((2375842518U) - (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))));
            }
        }
        for (unsigned int i_14 = 0; i_14 < 23; i_14 += 2) 
        {
            var_40 = ((/* implicit */unsigned int) var_3);
            /* LoopNest 3 */
            for (short i_15 = 0; i_15 < 23; i_15 += 2) 
            {
                for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                {
                    for (unsigned short i_17 = 3; i_17 < 21; i_17 += 2) 
                    {
                        {
                            var_41 = ((/* implicit */short) ((((/* implicit */long long int) var_6)) * (((((/* implicit */long long int) ((/* implicit */int) var_0))) / (min((var_4), (((/* implicit */long long int) (short)13317))))))));
                            var_42 = ((/* implicit */_Bool) (unsigned short)55622);
                            var_43 &= ((/* implicit */unsigned int) arr_47 [i_2 - 1] [2LL] [2LL] [i_16] [i_16]);
                        }
                    } 
                } 
            } 
            var_44 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_2] [i_14]))) : (arr_14 [i_14])));
        }
        for (unsigned short i_18 = 2; i_18 < 21; i_18 += 2) 
        {
            var_45 = ((/* implicit */unsigned char) 1539477028);
            var_46 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_2))) * (min((((/* implicit */unsigned int) min((var_5), (((/* implicit */unsigned short) arr_16 [i_2] [i_18] [i_18] [i_18]))))), (var_6)))));
            var_47 = max((((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)0)) * (((/* implicit */int) var_8))))) : (arr_47 [i_2] [i_2 - 1] [i_2] [i_2 + 1] [i_18 + 2]))), (min((min((14794538704475944439ULL), (((/* implicit */unsigned long long int) (unsigned short)16010)))), (var_7))));
        }
        var_48 &= ((/* implicit */long long int) (signed char)-90);
    }
    for (long long int i_19 = 4; i_19 < 7; i_19 += 2) 
    {
        var_49 = ((/* implicit */unsigned char) min((var_49), (((/* implicit */unsigned char) (((((-(var_4))) >= (((/* implicit */long long int) ((((/* implicit */_Bool) 1799258870)) ? (1381668843) : (((/* implicit */int) var_8))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_25 [(_Bool)1] [i_19 - 2]))) : (min((min((((/* implicit */unsigned int) var_5)), (var_6))), (((/* implicit */unsigned int) ((-5530825678169815689LL) <= (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_19] [i_19] [i_19])))))))))))));
        var_50 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 5856706637866096530ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)16010))) : (-8343790683160284880LL)))) ? (var_9) : (((/* implicit */unsigned long long int) arr_6 [i_19 + 2]))));
        /* LoopNest 2 */
        for (int i_20 = 0; i_20 < 11; i_20 += 3) 
        {
            for (_Bool i_21 = 1; i_21 < 1; i_21 += 1) 
            {
                {
                    var_51 -= ((/* implicit */unsigned int) min((((((/* implicit */_Bool) (~(9LL)))) ? (((((/* implicit */_Bool) -1)) ? (-7732530223359001910LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)107))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_20] [0LL])) ? (((/* implicit */int) arr_33 [6U] [i_20] [i_21])) : (((/* implicit */int) arr_27 [i_19]))))))), (((/* implicit */long long int) var_10))));
                    var_52 *= ((/* implicit */unsigned long long int) arr_38 [i_19] [i_19] [i_20] [i_21]);
                }
            } 
        } 
        var_53 = ((/* implicit */_Bool) (((((~((~(-1LL))))) + (9223372036854775807LL))) >> (((max((5626890505479890665LL), (((/* implicit */long long int) min((467272515U), (((/* implicit */unsigned int) arr_55 [i_19] [i_19] [i_19]))))))) - (5626890505479890602LL)))));
    }
    var_54 = ((/* implicit */unsigned short) max((var_6), (((/* implicit */unsigned int) ((var_4) != (((/* implicit */long long int) min((((/* implicit */unsigned int) 1539477055)), (var_6)))))))));
}
