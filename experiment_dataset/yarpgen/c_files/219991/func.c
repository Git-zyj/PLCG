/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219991
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219991 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219991
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
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        var_13 = ((/* implicit */unsigned short) max((var_4), (((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) arr_3 [i_0])))) || (((/* implicit */_Bool) (unsigned short)1862)))))));
        /* LoopSeq 4 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_14 = ((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [i_0])))))) ? (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_0]))) : (var_6))) : (((/* implicit */long long int) arr_3 [i_0 + 1])))));
            var_15 *= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) max((var_5), ((short)-6170)))) ? (((/* implicit */int) arr_0 [i_0 + 1] [i_1])) : (((/* implicit */int) var_3)))) < ((+(((/* implicit */int) ((signed char) var_6)))))));
            var_16 = ((/* implicit */unsigned int) (unsigned short)17192);
            /* LoopNest 3 */
            for (long long int i_2 = 1; i_2 < 15; i_2 += 4) 
            {
                for (short i_3 = 0; i_3 < 16; i_3 += 3) 
                {
                    for (unsigned short i_4 = 0; i_4 < 16; i_4 += 1) 
                    {
                        {
                            var_17 = ((/* implicit */long long int) arr_10 [i_0] [i_0] [i_0 + 1]);
                            var_18 *= (!((!(((/* implicit */_Bool) 10023684337533903029ULL)))));
                            var_19 = ((((/* implicit */_Bool) 5961205887508007625LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned short)12071), ((unsigned short)63680))))) : ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)9044))) : (7151994428899238900ULL))));
                        }
                    } 
                } 
            } 
        }
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            var_20 = ((((/* implicit */_Bool) ((short) arr_12 [i_0] [i_5] [i_0 + 1] [i_0] [(short)6]))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)14467))) : (min((arr_13 [i_0] [i_0] [i_0 + 1] [i_0]), (((/* implicit */long long int) arr_14 [i_0] [i_5] [i_0 + 1] [i_0 + 1] [i_0])))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned short i_6 = 0; i_6 < 16; i_6 += 4) 
            {
                var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_0 + 1] [i_0 + 1])) ? (((/* implicit */int) arr_1 [i_0 + 1] [i_0 + 1])) : (((/* implicit */int) arr_1 [i_0 + 1] [i_0 + 1]))));
                var_22 = ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0 + 1] [i_0 + 1])) && (((/* implicit */_Bool) var_12))));
                var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_5)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_12))))) : (((/* implicit */int) arr_12 [i_0] [i_5] [i_0 + 1] [i_0] [i_6])))))));
            }
        }
        for (long long int i_7 = 0; i_7 < 16; i_7 += 2) /* same iter space */
        {
            var_24 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)27072)) ? (min((min((17494391414963315980ULL), (((/* implicit */unsigned long long int) -1289795576)))), (((/* implicit */unsigned long long int) (unsigned short)52730)))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)-18628)))))));
            arr_24 [i_0] = ((/* implicit */unsigned short) min((((unsigned long long int) (unsigned short)38464)), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_5 [i_0 + 1])), (arr_13 [i_0] [i_0 + 1] [i_0 + 1] [i_0]))))));
            arr_25 [i_0] [i_0] = ((/* implicit */_Bool) ((int) arr_5 [i_0]));
        }
        for (long long int i_8 = 0; i_8 < 16; i_8 += 2) /* same iter space */
        {
            var_25 |= ((/* implicit */long long int) arr_19 [i_0]);
            var_26 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */short) var_7)), (var_5)))) ? (max((((/* implicit */unsigned long long int) -7271050499164691263LL)), (max((((/* implicit */unsigned long long int) (unsigned char)70)), (arr_11 [i_0] [i_0] [i_0] [i_0]))))) : (((/* implicit */unsigned long long int) var_10))));
        }
    }
    for (long long int i_9 = 0; i_9 < 15; i_9 += 1) 
    {
        var_27 = ((/* implicit */unsigned char) min((((/* implicit */int) (((!(((/* implicit */_Bool) 17494391414963315980ULL)))) || (((/* implicit */_Bool) max((var_5), (arr_1 [i_9] [i_9]))))))), ((+(((/* implicit */int) var_7))))));
        var_28 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 14070132830291661220ULL)) ? (4255636436061008361ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)18642)))))) ? (((0) >> (((((/* implicit */int) (unsigned short)37443)) - (37442))))) : (((/* implicit */int) arr_10 [i_9] [i_9] [i_9]))));
    }
    for (unsigned long long int i_10 = 0; i_10 < 12; i_10 += 4) 
    {
        /* LoopNest 3 */
        for (short i_11 = 2; i_11 < 11; i_11 += 3) 
        {
            for (long long int i_12 = 0; i_12 < 12; i_12 += 3) 
            {
                for (short i_13 = 0; i_13 < 12; i_13 += 3) 
                {
                    {
                        arr_41 [i_10] [i_11] [i_10] [i_13] = ((/* implicit */signed char) var_10);
                        var_29 = min((((((/* implicit */int) var_2)) | (arr_9 [i_11] [i_11 - 1] [i_11 - 1]))), (((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (_Bool)1)))) / (((/* implicit */int) arr_15 [i_12] [i_11])))));
                        var_30 = ((/* implicit */unsigned short) (+(((/* implicit */int) var_7))));
                        var_31 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (+(((/* implicit */int) var_9))))), (max((arr_38 [i_10] [i_10] [i_11]), (((/* implicit */unsigned int) (unsigned short)0))))))) ? (((/* implicit */int) arr_22 [i_10] [i_10])) : (((int) ((((/* implicit */_Bool) var_11)) ? (4048050018479073475LL) : (((/* implicit */long long int) var_10)))))));
                        var_32 = ((/* implicit */signed char) 14070132830291661220ULL);
                    }
                } 
            } 
        } 
        var_33 = ((/* implicit */int) arr_7 [i_10]);
        var_34 = ((/* implicit */int) ((unsigned int) max((arr_5 [i_10]), (((/* implicit */unsigned char) var_3)))));
    }
    var_35 = ((/* implicit */long long int) ((_Bool) (unsigned short)17211));
    var_36 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) var_1)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) var_1))))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)42700)))))), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)172))) : (((((/* implicit */_Bool) var_0)) ? (17479001100190759375ULL) : (var_4)))))));
    var_37 *= (+(((((((/* implicit */_Bool) (short)6161)) ? (var_0) : (((/* implicit */unsigned long long int) var_6)))) >> (((((/* implicit */int) var_2)) + (29267))))));
    var_38 = ((/* implicit */long long int) ((((((/* implicit */_Bool) min((33552384LL), (((/* implicit */long long int) (signed char)-13))))) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (var_6))) != (((/* implicit */long long int) ((/* implicit */int) var_1)))));
}
