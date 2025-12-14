/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203148
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203148 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203148
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
    for (long long int i_0 = 0; i_0 < 14; i_0 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 14; i_2 += 3) 
            {
                for (unsigned short i_3 = 0; i_3 < 14; i_3 += 1) 
                {
                    {
                        arr_10 [i_3] [(_Bool)1] [i_2] [i_3] = ((/* implicit */signed char) (~(min((18446744073709551615ULL), (((/* implicit */unsigned long long int) 3174590724U))))));
                        var_18 -= max((((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)130)) || (((/* implicit */_Bool) min((24ULL), (18446744073709551613ULL))))))), (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_11)), (0ULL)))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)31879)))));
                        var_19 = ((/* implicit */unsigned char) min((5861074470059421317LL), (((/* implicit */long long int) max((((/* implicit */int) var_4)), (-185443228))))));
                    }
                } 
            } 
        } 
        var_20 = (((!(((/* implicit */_Bool) (signed char)116)))) ? (var_10) : (((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)66)))));
    }
    for (long long int i_4 = 0; i_4 < 14; i_4 += 1) /* same iter space */
    {
        var_21 ^= ((/* implicit */int) min((((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (_Bool)1)), (0ULL)))) ? (min((((/* implicit */long long int) (_Bool)1)), (var_17))) : (((/* implicit */long long int) 2898956989U)))), (((/* implicit */long long int) (_Bool)1))));
        /* LoopSeq 2 */
        for (signed char i_5 = 0; i_5 < 14; i_5 += 2) 
        {
            var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) 39554621)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (3159175177U))), (((/* implicit */unsigned int) var_6))))), (11557621480941689838ULL))))));
            var_23 = ((/* implicit */unsigned long long int) (+(min((-447066541456090972LL), (-1262337172832939100LL)))));
            arr_15 [i_4] [i_4] [i_5] = (-(7500604969913472107LL));
        }
        /* vectorizable */
        for (int i_6 = 0; i_6 < 14; i_6 += 4) 
        {
            /* LoopSeq 1 */
            for (unsigned short i_7 = 0; i_7 < 14; i_7 += 4) 
            {
                arr_20 [0U] [i_7] [0U] |= ((/* implicit */signed char) ((unsigned int) var_16));
                arr_21 [i_4] [i_6] &= ((/* implicit */long long int) (~(13674705079357767965ULL)));
            }
            var_24 = ((/* implicit */unsigned long long int) max((var_24), (((/* implicit */unsigned long long int) ((((((/* implicit */int) (signed char)12)) + (((/* implicit */int) var_2)))) - ((-(((/* implicit */int) (_Bool)1)))))))));
        }
        /* LoopSeq 1 */
        for (short i_8 = 0; i_8 < 14; i_8 += 3) 
        {
            arr_25 [i_4] [i_8] = ((/* implicit */signed char) (_Bool)1);
            /* LoopNest 3 */
            for (unsigned char i_9 = 3; i_9 < 13; i_9 += 3) 
            {
                for (long long int i_10 = 1; i_10 < 10; i_10 += 3) 
                {
                    for (unsigned char i_11 = 0; i_11 < 14; i_11 += 4) 
                    {
                        {
                            var_25 += ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 3159175192U)))))) % (max((447066541456090971LL), (((/* implicit */long long int) (-(-185443224))))))));
                            var_26 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((((((/* implicit */_Bool) 185443227)) ? (((/* implicit */long long int) ((/* implicit */int) var_15))) : (-4531412997376425456LL))), (((/* implicit */long long int) ((((/* implicit */int) (short)-30021)) ^ (((/* implicit */int) (signed char)15))))))))));
                            var_27 = ((/* implicit */unsigned long long int) min((var_27), (((/* implicit */unsigned long long int) 594773071))));
                        }
                    } 
                } 
            } 
        }
    }
    for (unsigned long long int i_12 = 1; i_12 < 15; i_12 += 2) 
    {
        arr_36 [i_12] = ((((/* implicit */_Bool) max((max((((/* implicit */unsigned long long int) (signed char)-16)), (765226379842882572ULL))), (((/* implicit */unsigned long long int) max((447066541456090971LL), (9223372036854775807LL))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) 974489736)))))) : (max((((/* implicit */unsigned long long int) 1135792114U)), (((((/* implicit */_Bool) 15U)) ? (3521722145575845021ULL) : (((/* implicit */unsigned long long int) var_3)))))));
        arr_37 [i_12] [i_12] = ((/* implicit */unsigned long long int) 1135792118U);
    }
    var_28 &= ((/* implicit */signed char) max((max((((/* implicit */unsigned long long int) ((var_12) >= (((/* implicit */long long int) 536870911))))), (max((((/* implicit */unsigned long long int) (signed char)-16)), (6198655284275803984ULL))))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) min(((_Bool)1), ((_Bool)1)))))))));
    var_29 = ((/* implicit */unsigned short) max((var_29), (((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -536870912)) ? (((/* implicit */unsigned int) -536870912)) : (22U))))))), (min((((/* implicit */unsigned long long int) ((short) -536870912))), (((((/* implicit */unsigned long long int) var_9)) / (var_14))))))))));
    var_30 ^= ((/* implicit */int) max((min(((-(4653687482260660374ULL))), (((/* implicit */unsigned long long int) (((_Bool)1) ? (1829154090U) : (((/* implicit */unsigned int) -536870912))))))), ((((-(2511788303440204223ULL))) % (((var_14) | (((/* implicit */unsigned long long int) var_12))))))));
    var_31 = ((/* implicit */unsigned int) ((-860093317) == (((536870921) ^ ((((_Bool)1) ? (-536870922) : (((/* implicit */int) (unsigned char)166))))))));
}
