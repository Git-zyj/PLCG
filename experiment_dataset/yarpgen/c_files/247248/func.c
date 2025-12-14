/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247248
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247248 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247248
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
    var_19 = ((((/* implicit */_Bool) var_5)) ? ((((+(((/* implicit */int) var_0)))) >> (((-4714248463528798920LL) + (4714248463528798922LL))))) : ((~((+(((/* implicit */int) var_3)))))));
    var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */int) var_3)) != (((/* implicit */int) (_Bool)1)))))))) ? (((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)19474))))) ? (max((var_18), (((/* implicit */long long int) var_7)))) : (((((/* implicit */_Bool) var_4)) ? (var_18) : (((/* implicit */long long int) ((/* implicit */int) var_16))))))) : ((-(-3589470808061666323LL)))));
    var_21 = ((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */unsigned long long int) -7863729395938872332LL)) : (3277699342411569368ULL)));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))));
        /* LoopSeq 1 */
        for (unsigned short i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            var_22 = ((/* implicit */long long int) max((var_22), (((((/* implicit */_Bool) (signed char)10)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_1 [i_1] [i_0])) : (((/* implicit */int) (unsigned short)19474))))) ? (((((/* implicit */_Bool) (unsigned short)22125)) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) var_8))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)4095)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)65))))))) : (((/* implicit */long long int) ((/* implicit */int) var_11)))))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                var_23 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 10806420163558977191ULL)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_1))))));
                var_24 *= (~(((/* implicit */int) (_Bool)1)));
                /* LoopNest 2 */
                for (short i_3 = 0; i_3 < 12; i_3 += 4) 
                {
                    for (int i_4 = 0; i_4 < 12; i_4 += 1) 
                    {
                        {
                            arr_14 [i_4] [3] [(unsigned char)7] [i_4] [i_2] = ((/* implicit */long long int) (_Bool)1);
                            var_25 |= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 134217472)) ? (((/* implicit */int) (unsigned short)19488)) : (((/* implicit */int) (_Bool)1)))))));
                        }
                    } 
                } 
                var_26 = ((/* implicit */short) (~(((/* implicit */int) (_Bool)1))));
            }
            arr_15 [i_1] [i_1] = ((var_9) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)227))))) ? (((/* implicit */int) (unsigned short)8603)) : (((((/* implicit */_Bool) (unsigned short)40300)) ? (((/* implicit */int) var_4)) : (4095)))))) : (7863729395938872350LL));
            arr_16 [i_0] [i_0] [(signed char)6] = var_11;
        }
        /* LoopNest 3 */
        for (unsigned char i_5 = 0; i_5 < 12; i_5 += 1) 
        {
            for (unsigned long long int i_6 = 0; i_6 < 12; i_6 += 4) 
            {
                for (int i_7 = 0; i_7 < 12; i_7 += 4) 
                {
                    {
                        arr_27 [i_0] [i_0] [i_6] [(unsigned short)6] [i_5] = ((/* implicit */short) ((unsigned char) (((((-9223372036854775807LL - 1LL)) != (((/* implicit */long long int) var_13)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_14))))) : ((((_Bool)1) ? (((/* implicit */int) arr_4 [i_0] [i_6])) : (((/* implicit */int) var_0)))))));
                        arr_28 [i_5] [i_5] [i_6] [i_7] = ((/* implicit */unsigned short) (~(((/* implicit */int) var_10))));
                        arr_29 [i_5] [i_5] [i_5] = ((((/* implicit */_Bool) max((((/* implicit */long long int) (!(((/* implicit */_Bool) var_13))))), (((((/* implicit */_Bool) var_5)) ? (1983911046896438538LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)46062)))))))) ? (((((/* implicit */_Bool) 12LL)) ? (-370626043) : (((/* implicit */int) (_Bool)0)))) : (((/* implicit */int) arr_17 [i_5])));
                    }
                } 
            } 
        } 
        var_27 *= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)25235))) : (arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))))));
    }
    var_28 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) var_12)))) ? (max((min((13095117312088491683ULL), (((/* implicit */unsigned long long int) var_13)))), (((((/* implicit */_Bool) 2773575220768342816ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)46))) : (13095117312088491683ULL))))) : (((/* implicit */unsigned long long int) 543391871))));
}
