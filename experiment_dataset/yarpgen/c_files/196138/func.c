/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196138
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196138 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196138
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
    var_14 = ((/* implicit */long long int) var_12);
    var_15 = ((/* implicit */unsigned int) ((var_11) ^ (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) -3748664457659095893LL)) && (((/* implicit */_Bool) (signed char)29))))))));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) (((~(15060526332188881051ULL))) & (((/* implicit */unsigned long long int) min(((~(((/* implicit */int) (short)0)))), (((/* implicit */int) min((((/* implicit */short) (signed char)0)), ((short)0))))))))))));
        /* LoopSeq 4 */
        for (unsigned short i_1 = 1; i_1 < 18; i_1 += 4) 
        {
            arr_4 [i_0] = ((/* implicit */signed char) (-((-(((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_1] [i_0] [i_0])) || (((/* implicit */_Bool) arr_2 [i_0] [i_1] [i_1])))))))));
            var_17 = ((/* implicit */unsigned char) ((arr_1 [i_1 - 1]) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-125)) + (((/* implicit */int) (short)-4))))) != (((((/* implicit */_Bool) var_11)) ? (arr_2 [i_1] [17ULL] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)0)))))))) : ((~(((/* implicit */int) min((arr_3 [i_0] [12]), (var_5))))))));
        }
        /* vectorizable */
        for (signed char i_2 = 0; i_2 < 19; i_2 += 3) /* same iter space */
        {
            var_18 += ((/* implicit */unsigned short) (+(144112989052600320LL)));
            var_19 ^= ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)-5))))) ? (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) | (var_9)))) : (var_4)));
        }
        for (signed char i_3 = 0; i_3 < 19; i_3 += 3) /* same iter space */
        {
            arr_9 [i_0] [i_3] = ((/* implicit */unsigned char) var_4);
            arr_10 [i_0] = ((/* implicit */unsigned char) var_5);
        }
        for (signed char i_4 = 0; i_4 < 19; i_4 += 3) /* same iter space */
        {
            var_20 = ((/* implicit */_Bool) (short)-3);
            arr_15 [i_0] = ((/* implicit */int) max((((((/* implicit */_Bool) arr_2 [i_4] [i_0] [i_0])) ? (arr_2 [i_4] [i_0] [i_0]) : (arr_2 [i_0] [i_0] [i_0]))), (((/* implicit */unsigned int) ((4290772992U) < (((/* implicit */unsigned int) ((/* implicit */int) var_5))))))));
        }
        arr_16 [i_0] = ((/* implicit */signed char) (+(((/* implicit */int) ((((/* implicit */int) (signed char)-27)) <= (((/* implicit */int) var_7)))))));
    }
    for (unsigned long long int i_5 = 0; i_5 < 25; i_5 += 2) 
    {
        arr_21 [i_5] = ((/* implicit */signed char) max((((((/* implicit */_Bool) 17592186044415ULL)) ? (((/* implicit */int) max((var_5), (var_13)))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1))) == (12456466116977400504ULL)))))), (((((/* implicit */int) ((signed char) (signed char)39))) / (((/* implicit */int) var_1))))));
        /* LoopNest 2 */
        for (unsigned int i_6 = 0; i_6 < 25; i_6 += 4) 
        {
            for (unsigned long long int i_7 = 0; i_7 < 25; i_7 += 2) 
            {
                {
                    /* LoopSeq 2 */
                    for (long long int i_8 = 0; i_8 < 25; i_8 += 4) 
                    {
                        var_21 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 5990277956732151112ULL)) ? (4290772988U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)37828)))))) ? (5270652374022184003LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)32647))));
                        var_22 -= ((/* implicit */unsigned char) ((((_Bool) 12456466116977400504ULL)) ? ((~(min((var_11), (((/* implicit */long long int) 4290772988U)))))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)15)))));
                    }
                    for (unsigned char i_9 = 3; i_9 < 22; i_9 += 2) 
                    {
                        var_23 = min((((/* implicit */long long int) ((_Bool) var_6))), (arr_29 [i_6] [i_7]));
                        arr_33 [i_5] [i_6] [(unsigned short)24] [i_9] [i_9 + 3] = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)8191)) ? (7996682540722186971ULL) : (5990277956732151115ULL)))) ? (((((/* implicit */_Bool) (signed char)120)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-118))) : (2449085598237419244ULL))) : (((/* implicit */unsigned long long int) (-(var_11))))))));
                    }
                    /* LoopSeq 1 */
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        arr_37 [i_5] [i_5] = ((/* implicit */_Bool) (short)-1);
                        arr_38 [i_5] [i_6] [i_7] &= ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned short) ((15997658475472132366ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))))))) ? (((long long int) var_4)) : (((/* implicit */long long int) (+(((/* implicit */int) (short)96)))))));
                        var_24 -= ((/* implicit */long long int) min((((/* implicit */unsigned short) ((unsigned char) max(((unsigned char)147), ((unsigned char)15))))), (max((((unsigned short) var_7)), (((/* implicit */unsigned short) (short)71))))));
                    }
                    arr_39 [i_5] [i_5] [i_6] [i_7] = ((/* implicit */unsigned long long int) max((max((((14) * (((/* implicit */int) var_6)))), ((+(((/* implicit */int) var_3)))))), ((-2147483647 - 1))));
                }
            } 
        } 
        /* LoopSeq 3 */
        for (unsigned long long int i_11 = 0; i_11 < 25; i_11 += 4) 
        {
            var_25 += ((/* implicit */short) ((_Bool) ((long long int) ((((/* implicit */int) var_12)) >= (((/* implicit */int) arr_23 [i_5] [i_11]))))));
            var_26 ^= ((/* implicit */short) (!(((/* implicit */_Bool) ((short) ((long long int) var_5))))));
            arr_42 [i_5] [i_5] = ((/* implicit */unsigned int) max(((+(((/* implicit */int) max(((short)-1), ((short)7106)))))), (((/* implicit */int) (short)71))));
            /* LoopSeq 1 */
            for (unsigned char i_12 = 0; i_12 < 25; i_12 += 3) 
            {
                var_27 = ((/* implicit */unsigned long long int) var_8);
                var_28 = ((/* implicit */unsigned char) max((var_28), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)7519)) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (arr_32 [i_11] [i_11])))) && (((/* implicit */_Bool) max((((/* implicit */unsigned int) (unsigned short)32647)), (530512199U)))))))));
                /* LoopSeq 1 */
                for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                {
                    var_29 = ((/* implicit */short) (-(((/* implicit */int) ((((/* implicit */_Bool) ((short) var_10))) || (((/* implicit */_Bool) max((((/* implicit */int) (signed char)112)), (-543150634)))))))));
                    /* LoopSeq 1 */
                    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                    {
                        var_30 = ((/* implicit */unsigned short) max((var_30), (((/* implicit */unsigned short) ((long long int) max((arr_45 [i_5] [i_12] [i_13]), ((short)-23292)))))));
                        var_31 = ((/* implicit */short) (-(((/* implicit */int) max((arr_47 [i_12] [i_12] [i_12]), (arr_47 [i_12] [i_12] [i_12]))))));
                    }
                }
            }
        }
        for (signed char i_15 = 0; i_15 < 25; i_15 += 2) 
        {
            var_32 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (3769142461445247307LL) : (((/* implicit */long long int) arr_26 [i_15] [i_15] [i_5]))))) ? (min((5990277956732151111ULL), (((/* implicit */unsigned long long int) (signed char)112)))) : (((/* implicit */unsigned long long int) var_9)))), (((/* implicit */unsigned long long int) (+(arr_34 [i_5] [(unsigned short)21] [i_5] [i_5] [i_15]))))));
            var_33 ^= ((/* implicit */unsigned char) var_11);
            var_34 -= ((/* implicit */unsigned char) max((4194307U), (((/* implicit */unsigned int) (unsigned char)86))));
            arr_52 [i_5] &= ((/* implicit */unsigned short) (~(-748184575235622320LL)));
        }
        for (unsigned short i_16 = 2; i_16 < 24; i_16 += 2) 
        {
            var_35 = ((/* implicit */long long int) min((var_35), (min((((/* implicit */long long int) ((arr_24 [i_16 - 2]) != (arr_24 [i_16 - 2])))), (((((/* implicit */_Bool) (signed char)112)) ? (7912623303312852441LL) : (748184575235622322LL)))))));
            var_36 += ((/* implicit */signed char) max((((/* implicit */int) arr_45 [i_16 - 1] [i_16] [i_16 - 1])), (((((/* implicit */_Bool) arr_45 [i_16 + 1] [i_16] [i_16 - 1])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_45 [i_16 + 1] [i_16] [i_16 - 1]))))));
            arr_56 [i_5] [i_5] [i_16 - 2] = ((/* implicit */unsigned short) max((18446744073709551615ULL), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)27932)) ? (((/* implicit */int) (unsigned char)215)) : (((/* implicit */int) arr_45 [i_5] [i_16 - 1] [i_16]))))), (2681667660U))))));
        }
    }
    /* vectorizable */
    for (long long int i_17 = 0; i_17 < 25; i_17 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_18 = 0; i_18 < 25; i_18 += 2) 
        {
            var_37 = ((/* implicit */unsigned short) arr_55 [i_17] [i_18]);
            var_38 = ((/* implicit */long long int) min((var_38), (((/* implicit */long long int) (~(((/* implicit */int) arr_49 [i_18] [i_18] [i_18])))))));
            var_39 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_54 [i_18] [i_18] [i_17]))));
        }
        var_40 = ((/* implicit */short) min((var_40), (((/* implicit */short) ((((/* implicit */_Bool) 1834462138949115791ULL)) ? (3125133550U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-12458))))))));
        var_41 = ((/* implicit */_Bool) ((short) arr_47 [i_17] [i_17] [i_17]));
        var_42 = ((/* implicit */unsigned short) var_11);
    }
}
