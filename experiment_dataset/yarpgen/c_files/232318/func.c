/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232318
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232318 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232318
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
    var_15 = ((/* implicit */unsigned long long int) max((var_15), (var_1)));
    /* LoopSeq 3 */
    for (long long int i_0 = 1; i_0 < 17; i_0 += 4) 
    {
        var_16 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((1496531109952619984LL) - (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_0])))))), (max((((/* implicit */unsigned long long int) var_8)), (8006415257809554194ULL)))));
        /* LoopSeq 1 */
        for (int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            var_17 += ((/* implicit */unsigned long long int) ((long long int) 67108862));
            var_18 &= ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */long long int) -67108853)) / (6842676805352723824LL))))));
        }
    }
    for (long long int i_2 = 1; i_2 < 12; i_2 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_3 = 3; i_3 < 12; i_3 += 4) 
        {
            for (signed char i_4 = 0; i_4 < 14; i_4 += 2) 
            {
                {
                    var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) arr_6 [i_2] [i_4])) ? (67108862) : (((/* implicit */int) arr_1 [i_3])))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_4])) / (((/* implicit */int) arr_2 [i_2]))))) ? (((/* implicit */unsigned long long int) -1496531109952620000LL)) : (var_7))) : (((/* implicit */unsigned long long int) ((-67108886) * (((/* implicit */int) (_Bool)0)))))));
                    var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) max((((((((/* implicit */_Bool) arr_8 [i_4])) ? (arr_9 [i_2]) : (arr_9 [i_3]))) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_5))))), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */unsigned int) 67108862)) : (260704801U))) >= (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_8))) <= (var_3)))))))))))));
                }
            } 
        } 
        var_21 = max((-1830817006516715713LL), (((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)14))))) ? (((/* implicit */int) (unsigned char)113)) : (((/* implicit */int) var_13))))));
        /* LoopSeq 1 */
        for (short i_5 = 0; i_5 < 14; i_5 += 2) 
        {
            var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_2] [i_5] [i_2 - 1] [i_2])) ? (((/* implicit */int) arr_3 [i_2 + 1] [i_2])) : (((/* implicit */int) arr_3 [i_2 + 2] [i_2]))))) ? (max((-1496531109952620000LL), (((/* implicit */long long int) arr_12 [i_5] [i_2] [i_2])))) : (((/* implicit */long long int) ((/* implicit */int) var_4)))));
            /* LoopSeq 3 */
            for (signed char i_6 = 0; i_6 < 14; i_6 += 3) 
            {
                /* LoopSeq 2 */
                for (unsigned char i_7 = 4; i_7 < 10; i_7 += 2) 
                {
                    var_23 = ((/* implicit */unsigned char) (((_Bool)1) ? (((/* implicit */unsigned int) ((((/* implicit */int) min((var_5), (arr_21 [i_2] [i_5] [i_6] [i_7] [i_7] [i_6])))) - (((/* implicit */int) min((arr_14 [i_5] [i_5] [i_7]), (((/* implicit */signed char) var_4)))))))) : (((((/* implicit */_Bool) min((arr_14 [i_2] [i_5] [i_6]), (((/* implicit */signed char) var_8))))) ? (min((((/* implicit */unsigned int) arr_22 [i_2] [i_5] [i_6] [i_7])), (4294967283U))) : (((/* implicit */unsigned int) arr_22 [i_7] [i_7] [i_7 - 2] [i_2 - 1]))))));
                    arr_23 [i_2] [i_2] = ((/* implicit */unsigned long long int) var_12);
                }
                for (int i_8 = 0; i_8 < 14; i_8 += 4) 
                {
                    arr_28 [i_2] [i_2] [i_2] [i_5] &= ((/* implicit */unsigned short) min((max((((/* implicit */long long int) var_10)), (((((/* implicit */long long int) (-2147483647 - 1))) | (1736138087969334191LL))))), (((/* implicit */long long int) arr_15 [i_2]))));
                    var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)51)) ? (((/* implicit */long long int) 4294967279U)) : (3187692926411710215LL)))), (((((/* implicit */_Bool) arr_10 [i_2 + 1] [i_5] [i_6])) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_7 [i_8]))))) : (max((((/* implicit */unsigned long long int) 9223372036854775807LL)), (3001655241129432402ULL))))))))));
                    var_25 = ((/* implicit */long long int) min(((-(((/* implicit */int) var_4)))), (0)));
                }
                var_26 = max((((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) arr_3 [i_6] [i_5])))), (((/* implicit */int) arr_15 [i_2 + 2])));
            }
            for (long long int i_9 = 3; i_9 < 11; i_9 += 2) 
            {
                var_27 *= ((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_25 [i_9 - 1] [i_9 + 1] [i_5] [i_2]))))) : (((/* implicit */int) min((arr_25 [i_2] [i_9 + 1] [i_9] [i_2]), (arr_25 [i_2] [i_2 + 1] [i_5] [i_9 - 3]))))));
                var_28 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_2])) ? (((/* implicit */int) arr_2 [i_2])) : (-1)))) ? (((((/* implicit */_Bool) 5497792342314705115ULL)) ? (1496531109952619999LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)78))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_5))))) ? ((~(5660781116186260431LL))) : (max((((/* implicit */long long int) var_9)), (9223372036854775793LL)))))));
                var_29 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_29 [i_9 - 3] [i_5] [i_2 - 1])) % (((/* implicit */int) arr_29 [i_9 + 3] [i_5] [i_2 + 1]))))) ? (((((/* implicit */_Bool) ((long long int) arr_18 [i_2] [i_5] [i_9]))) ? (((var_8) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))) : ((((_Bool)1) ? (var_7) : (((/* implicit */unsigned long long int) arr_12 [i_2] [i_5] [i_9])))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (var_12) : (((/* implicit */int) arr_0 [i_5] [i_5]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [i_9] [i_5] [i_9] [i_9]))) : (((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */unsigned long long int) arr_26 [i_5] [i_5] [i_9] [i_9] [i_5] [i_5])) : (var_1)))))));
                var_30 = ((/* implicit */_Bool) arr_2 [i_2]);
                var_31 += ((/* implicit */int) 0ULL);
            }
            for (int i_10 = 4; i_10 < 10; i_10 += 2) 
            {
                var_32 = ((/* implicit */unsigned long long int) min((var_32), (((((/* implicit */_Bool) ((4294967292U) * (min((4294967277U), (((/* implicit */unsigned int) var_8))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_5]))) : ((((-(18446744073709551602ULL))) * (((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_22 [i_10] [i_2] [i_10] [i_2])), (arr_31 [i_5]))))))))));
                /* LoopSeq 1 */
                for (long long int i_11 = 0; i_11 < 14; i_11 += 4) 
                {
                    var_33 = ((/* implicit */unsigned int) min((((/* implicit */long long int) min((((/* implicit */int) (_Bool)1)), (-1)))), (((((/* implicit */_Bool) (short)13710)) ? (5660781116186260455LL) : ((-9223372036854775807LL - 1LL))))));
                    arr_36 [i_2] [i_5] [i_5] = ((/* implicit */unsigned int) (+(max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_32 [i_11] [i_5] [i_2] [i_11]))))), (((((/* implicit */_Bool) 6150136352407995658LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)47))) : (13ULL)))))));
                    var_34 = var_1;
                    var_35 &= ((/* implicit */signed char) 3376587154U);
                }
            }
        }
    }
    for (unsigned long long int i_12 = 0; i_12 < 19; i_12 += 2) 
    {
        var_36 = ((/* implicit */signed char) ((max((3001655241129432402ULL), (((/* implicit */unsigned long long int) 9223372036854775799LL)))) | (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned char) var_5)), (arr_2 [i_12])))))));
        var_37 = ((/* implicit */unsigned char) (+(min((((/* implicit */int) ((unsigned short) (short)4344))), ((-(((/* implicit */int) (unsigned char)234))))))));
        var_38 = ((/* implicit */int) (+(((-6004747535748328966LL) + (((/* implicit */long long int) ((/* implicit */int) (short)29974)))))));
    }
    /* LoopNest 2 */
    for (int i_13 = 2; i_13 < 11; i_13 += 4) 
    {
        for (unsigned char i_14 = 0; i_14 < 14; i_14 += 4) 
        {
            {
                var_39 = ((/* implicit */unsigned char) var_4);
                var_40 = ((/* implicit */unsigned int) max((max((((/* implicit */int) arr_21 [i_13] [i_14] [i_14] [i_14] [i_14] [i_13 - 1])), (min((((/* implicit */int) (_Bool)1)), (-1))))), (((/* implicit */int) (short)0))));
            }
        } 
    } 
    var_41 = ((/* implicit */unsigned char) ((signed char) ((unsigned char) 361089886U)));
    var_42 = ((/* implicit */signed char) var_14);
}
