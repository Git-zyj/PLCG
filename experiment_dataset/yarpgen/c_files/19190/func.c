/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19190
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19190 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19190
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
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (unsigned int i_1 = 3; i_1 < 20; i_1 += 4) 
        {
            {
                var_16 = ((/* implicit */int) var_1);
                var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((arr_3 [i_1 + 2] [i_1 - 3]), (arr_3 [i_1 + 1] [i_1 + 1])))) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_3 [i_1 - 2] [i_1 - 2])) : (((/* implicit */int) arr_3 [i_1 - 1] [i_1 - 3])))) : (((/* implicit */int) ((unsigned short) arr_3 [i_1 + 2] [i_1 - 2])))));
                /* LoopSeq 1 */
                for (unsigned short i_2 = 2; i_2 < 21; i_2 += 1) 
                {
                    arr_9 [i_0] [i_1] [i_0] [i_2] = ((/* implicit */short) min((((((-832023840) + (2147483647))) >> (((((((/* implicit */_Bool) (short)-11185)) ? (((/* implicit */int) (unsigned short)1828)) : (((/* implicit */int) (_Bool)0)))) - (1819))))), (((/* implicit */int) ((_Bool) ((unsigned char) var_0))))));
                    var_18 = ((/* implicit */short) min((min((max((((/* implicit */unsigned long long int) var_7)), (2642239853987468544ULL))), (((/* implicit */unsigned long long int) var_14)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */int) arr_4 [i_2] [i_0])) % (((/* implicit */int) var_2)))) : ((+(((/* implicit */int) var_6)))))))));
                    arr_10 [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) (signed char)121))) ? (var_0) : (((/* implicit */int) (unsigned char)252))))) || (((/* implicit */_Bool) ((long long int) arr_5 [i_0] [i_0] [i_0] [i_0])))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 22; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 1; i_4 < 19; i_4 += 2) 
                        {
                            {
                                var_19 = ((/* implicit */long long int) min((var_19), (min((max((-19LL), (((/* implicit */long long int) (short)16906)))), (min((((/* implicit */long long int) ((int) 6793970514833464115LL))), (var_3)))))));
                                var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) var_1)) % (((((/* implicit */_Bool) (signed char)-124)) ? (2005385464) : (((/* implicit */int) (signed char)(-127 - 1)))))))) || (((/* implicit */_Bool) var_2))));
                                var_21 = ((/* implicit */unsigned char) (+(1618957162)));
                                arr_16 [i_4] [i_4] [(signed char)17] [i_3] [i_4] [i_4] [i_4] = ((/* implicit */long long int) ((((/* implicit */int) min((((/* implicit */short) (unsigned char)65)), ((short)(-32767 - 1))))) | (((((/* implicit */int) arr_3 [i_4] [i_2 - 2])) >> ((((~(var_5))) - (11111070086181397893ULL)))))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned char) var_11);
    /* LoopSeq 2 */
    for (int i_5 = 1; i_5 < 19; i_5 += 4) 
    {
        var_23 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)1)) % (((/* implicit */int) (unsigned char)54))))) ? (((/* implicit */long long int) (+(arr_12 [i_5] [i_5] [(unsigned char)6] [i_5])))) : (min((((/* implicit */long long int) var_7)), (max((var_9), (((/* implicit */long long int) var_4))))))));
        /* LoopNest 3 */
        for (unsigned int i_6 = 0; i_6 < 22; i_6 += 4) 
        {
            for (long long int i_7 = 2; i_7 < 21; i_7 += 1) 
            {
                for (short i_8 = 0; i_8 < 22; i_8 += 4) 
                {
                    {
                        var_24 = ((/* implicit */_Bool) min((var_10), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1179249711U)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_2))))) || (((/* implicit */_Bool) max((((/* implicit */long long int) (_Bool)1)), (var_3)))))))));
                        arr_27 [i_5] [i_6] [i_5] [i_8] [i_5] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) var_8))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)0)) % (var_14)))) : (((((/* implicit */_Bool) var_9)) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_5] [i_6] [(short)4] [i_5] [i_5] [i_8])))))))) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */_Bool) arr_19 [i_5] [i_7 + 1] [i_8])) ? (((/* implicit */int) var_8)) : (arr_12 [i_5] [i_5] [i_8] [i_8])))));
                    }
                } 
            } 
        } 
        var_25 *= ((/* implicit */unsigned int) max((((/* implicit */int) arr_18 [i_5 + 3])), (((((/* implicit */_Bool) arr_6 [i_5 + 1])) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) ((unsigned short) var_8)))))));
        arr_28 [i_5] |= ((/* implicit */unsigned long long int) var_4);
    }
    for (unsigned int i_9 = 1; i_9 < 23; i_9 += 4) 
    {
        var_26 += ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)196)) || (((/* implicit */_Bool) var_14))))), (min((((/* implicit */unsigned long long int) var_6)), (var_5)))))) || (((/* implicit */_Bool) ((signed char) var_5)))));
        var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((var_6) ? (max((var_9), (((/* implicit */long long int) -728850086)))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 1578527705U)) || (((/* implicit */_Bool) (signed char)-87))))))))) ? (((/* implicit */unsigned int) 0)) : (min((min((arr_30 [(_Bool)1]), (((/* implicit */unsigned int) arr_29 [i_9] [i_9])))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_31 [i_9])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_8)))))))));
        /* LoopNest 2 */
        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
        {
            for (signed char i_11 = 1; i_11 < 23; i_11 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 24; i_12 += 4) 
                    {
                        for (unsigned long long int i_13 = 0; i_13 < 24; i_13 += 3) 
                        {
                            {
                                var_28 = ((/* implicit */unsigned short) 3115717589U);
                                var_29 = ((/* implicit */unsigned short) min((var_29), (((/* implicit */unsigned short) max((var_9), (((/* implicit */long long int) min((((/* implicit */short) (unsigned char)255)), (arr_43 [i_12])))))))));
                                arr_44 [i_9] [i_9] [i_12] [i_12] = ((/* implicit */long long int) ((unsigned long long int) max((arr_34 [i_9 - 1] [i_9 + 1] [i_9 + 1]), (((/* implicit */int) var_8)))));
                                var_30 = ((/* implicit */unsigned char) var_8);
                            }
                        } 
                    } 
                    arr_45 [i_9] [i_10] = ((/* implicit */_Bool) ((unsigned char) ((((/* implicit */int) (signed char)-37)) / (((/* implicit */int) (short)-11167)))));
                }
            } 
        } 
        var_31 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (((~(((/* implicit */int) var_2)))) & (((/* implicit */int) (signed char)65))))) ? (((((/* implicit */_Bool) (signed char)-66)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)1074))) : (1179249707U))) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_36 [i_9 + 1] [i_9 - 1])) & (((/* implicit */int) var_1)))))));
        var_32 = ((/* implicit */unsigned char) min((var_32), (((/* implicit */unsigned char) ((short) ((((/* implicit */_Bool) ((int) arr_31 [i_9 - 1]))) ? (((((/* implicit */_Bool) (short)17997)) ? (2882272248091400999ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)227))))) : (((var_15) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (var_5)))))))));
    }
}
