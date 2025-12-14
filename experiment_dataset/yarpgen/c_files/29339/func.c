/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29339
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29339 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29339
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
    var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) var_14))));
    var_20 &= ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)7)) << (((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)65531))))) ? (((/* implicit */int) min(((unsigned short)65524), ((unsigned short)0)))) : (((/* implicit */int) (signed char)-27))))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (short i_0 = 4; i_0 < 9; i_0 += 4) /* same iter space */
    {
        var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)44320))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 9; i_2 += 1) 
            {
                for (long long int i_3 = 1; i_3 < 11; i_3 += 3) 
                {
                    {
                        var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) (+(((((/* implicit */_Bool) (unsigned short)65528)) ? (((/* implicit */long long int) 1220587635U)) : ((-9223372036854775807LL - 1LL)))))))));
                        arr_10 [i_0] [i_2] [i_0] [i_0] |= ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)44320)) ? (((/* implicit */int) (signed char)-101)) : (((/* implicit */int) (unsigned short)44320))));
                    }
                } 
            } 
        } 
        /* LoopNest 3 */
        for (long long int i_4 = 1; i_4 < 10; i_4 += 3) 
        {
            for (short i_5 = 2; i_5 < 11; i_5 += 4) 
            {
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    {
                        arr_19 [i_6] [i_5 + 1] [(short)5] [i_0 - 2] [i_0 - 2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)3253)) ? (((((/* implicit */_Bool) 0U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-90))) : (16235244U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) var_16))))));
                        arr_20 [i_0] [i_4 + 1] [i_5] [i_6] = ((/* implicit */unsigned int) ((unsigned long long int) (unsigned short)44327));
                    }
                } 
            } 
        } 
        arr_21 [i_0] [i_0 - 3] = ((/* implicit */long long int) (+(18137765598280703545ULL)));
    }
    for (short i_7 = 4; i_7 < 9; i_7 += 4) /* same iter space */
    {
        arr_25 [i_7 - 3] = ((/* implicit */short) ((max((var_4), (((((/* implicit */_Bool) (short)31)) ? (9486573417262785733ULL) : (14669990609015517621ULL))))) - (((((/* implicit */_Bool) 11U)) ? (10948338920922391487ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_7 + 1] [i_7 + 1])))))));
        arr_26 [i_7 - 2] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3787569943U)) ? (min((arr_23 [i_7]), (((/* implicit */long long int) (_Bool)1)))) : (max((((/* implicit */long long int) (unsigned short)8)), (arr_13 [i_7] [i_7])))))) ? (((/* implicit */unsigned long long int) ((((min((((/* implicit */int) var_18)), (-1586443114))) + (2147483647))) << (((((((/* implicit */_Bool) (unsigned short)65535)) ? (8552745807420196906LL) : (((/* implicit */long long int) -186928941)))) - (8552745807420196906LL)))))) : (((((/* implicit */_Bool) ((((/* implicit */int) (signed char)100)) % (((/* implicit */int) (signed char)85))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)30))) : (min((((/* implicit */unsigned long long int) var_12)), (var_9)))))));
        var_23 = ((/* implicit */unsigned int) ((((/* implicit */long long int) (-(((/* implicit */int) arr_8 [i_7 - 4] [i_7 + 1] [i_7 + 1] [i_7 - 4] [i_7 - 4] [i_7 + 2]))))) - (min((((/* implicit */long long int) (unsigned short)44335)), (arr_5 [i_7] [i_7 - 2] [i_7 - 3])))));
    }
    for (short i_8 = 4; i_8 < 9; i_8 += 4) /* same iter space */
    {
        arr_30 [i_8 - 1] [(signed char)11] = ((/* implicit */unsigned int) ((((/* implicit */int) (signed char)121)) | (((/* implicit */int) (unsigned short)44347))));
        var_24 += ((/* implicit */signed char) (+(((((/* implicit */_Bool) (signed char)107)) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_14 [i_8] [i_8] [i_8]))))) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)0)) || (((/* implicit */_Bool) (signed char)85)))))))));
        var_25 ^= ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((long long int) 2909963287929732078ULL))), (((unsigned long long int) var_12))));
    }
    for (short i_9 = 4; i_9 < 9; i_9 += 4) /* same iter space */
    {
        arr_34 [6U] [(signed char)5] = ((/* implicit */_Bool) min((max((((17253283548202925813ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)17))))), (8960170656446765886ULL))), (((unsigned long long int) arr_23 [i_9 + 3]))));
        /* LoopNest 2 */
        for (unsigned char i_10 = 0; i_10 < 12; i_10 += 4) 
        {
            for (signed char i_11 = 2; i_11 < 11; i_11 += 3) 
            {
                {
                    var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (unsigned short)44337)))), (((/* implicit */int) (unsigned short)44318))))) ? (((((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) 6340425327619611721LL)) : (8960170656446765895ULL))) - (((/* implicit */unsigned long long int) max((arr_38 [i_9 + 1] [i_9 + 1]), (((/* implicit */long long int) (signed char)92))))))) : (((((/* implicit */_Bool) (unsigned short)8)) ? (((((/* implicit */_Bool) 8960170656446765905ULL)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)44329))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_6)))))))));
                    var_27 = ((/* implicit */unsigned long long int) (unsigned short)44338);
                }
            } 
        } 
        arr_40 [i_9] [i_9] = ((/* implicit */signed char) (+((-(max((((/* implicit */unsigned long long int) (signed char)102)), (2091192895550668087ULL)))))));
        var_28 = ((/* implicit */unsigned char) ((4613721527201305734ULL) == (9486573417262785733ULL)));
    }
}
