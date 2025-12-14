/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45959
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45959 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45959
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
    var_20 = ((/* implicit */unsigned int) var_16);
    /* LoopSeq 4 */
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 4) /* same iter space */
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned short) (-(var_13)));
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            for (int i_2 = 3; i_2 < 18; i_2 += 4) 
            {
                {
                    arr_9 [i_0] [i_2] [18] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)99)) ? (((/* implicit */unsigned int) -583844776)) : (4084672571U)));
                    var_21 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3587422362U)) ? (((/* implicit */unsigned int) 896069085)) : (4084672551U)));
                    var_22 = ((/* implicit */unsigned int) ((signed char) 4084672571U));
                    arr_10 [i_0] [i_1] [i_2] = ((/* implicit */int) ((unsigned int) 4084672571U));
                }
            } 
        } 
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 19; i_3 += 4) 
        {
            for (unsigned int i_4 = 0; i_4 < 19; i_4 += 2) 
            {
                for (unsigned char i_5 = 2; i_5 < 17; i_5 += 1) 
                {
                    {
                        var_23 = ((/* implicit */int) max((((unsigned long long int) var_10)), (((/* implicit */unsigned long long int) arr_14 [i_5 + 2] [i_5 + 2] [i_4] [i_4]))));
                        var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (unsigned char)135)), (var_4)))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) arr_0 [i_5 - 1] [i_5 - 1]))))) : (((unsigned int) arr_1 [i_5 - 2]))));
                        /* LoopSeq 2 */
                        for (unsigned short i_6 = 2; i_6 < 18; i_6 += 4) 
                        {
                            arr_20 [2] [i_3] [i_3] [i_5] = ((/* implicit */long long int) max((((/* implicit */unsigned int) var_5)), (var_7)));
                            var_25 = ((/* implicit */int) ((((/* implicit */_Bool) (+(-861279616)))) ? (((/* implicit */long long int) (+(((/* implicit */int) ((763831598) <= (((/* implicit */int) (signed char)-120)))))))) : (((((max(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) arr_3 [i_6 - 2])))) + (9223372036854775807LL))) >> (((((4084672576U) + (((/* implicit */unsigned int) arr_18 [i_3] [i_4] [i_5] [i_6])))) - (4098812905U)))))));
                            var_26 &= ((/* implicit */unsigned char) max((min((arr_14 [i_6 - 2] [i_5 + 1] [i_3] [i_3]), (-1239649411647567861LL))), (((/* implicit */long long int) (-(2334704989U))))));
                            var_27 = ((((/* implicit */_Bool) ((unsigned char) arr_3 [i_0]))) ? (min((((/* implicit */long long int) var_0)), (var_1))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) 1775701695)) <= (1960262306U))))));
                        }
                        for (unsigned char i_7 = 0; i_7 < 19; i_7 += 1) 
                        {
                            arr_23 [i_7] [i_5] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((int) arr_6 [i_5] [i_5 - 1] [i_5] [i_5 + 1]))) : (((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_4]))) - (min((((/* implicit */long long int) var_3)), (var_18)))))));
                            arr_24 [i_5] [i_4] [i_5] [i_4] [15] [i_4] = ((/* implicit */signed char) -1LL);
                            var_28 = ((/* implicit */signed char) min((var_28), (((/* implicit */signed char) ((210294701U) + (2113759590U))))));
                        }
                        arr_25 [i_5] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1960262279U)) ? (4ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 2334704981U))))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (1960262279U)));
                        var_29 = ((/* implicit */unsigned short) ((short) ((var_2) <= (((/* implicit */unsigned long long int) arr_17 [(signed char)13] [i_0] [i_3] [i_5 + 2])))));
                    }
                } 
            } 
        } 
        var_30 = ((/* implicit */int) max((((((/* implicit */_Bool) 3147482056945655619LL)) ? (5584637490556141604ULL) : (((/* implicit */unsigned long long int) 1557783819U)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)0)) ? (210294727U) : (2420161855U))))));
    }
    /* vectorizable */
    for (unsigned int i_8 = 0; i_8 < 19; i_8 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned int i_9 = 0; i_9 < 19; i_9 += 1) 
        {
            for (int i_10 = 0; i_10 < 19; i_10 += 3) 
            {
                {
                    arr_32 [i_9] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-88))) <= (2420161840U)));
                    var_31 = ((((/* implicit */_Bool) (-(1472872614U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_31 [i_8] [i_9] [i_8] [i_9]))) : (((((/* implicit */unsigned int) (-2147483647 - 1))) - (3936111884U))));
                }
            } 
        } 
        var_32 += ((/* implicit */unsigned short) ((int) var_4));
        /* LoopNest 3 */
        for (int i_11 = 0; i_11 < 19; i_11 += 1) 
        {
            for (unsigned char i_12 = 0; i_12 < 19; i_12 += 1) 
            {
                for (unsigned char i_13 = 0; i_13 < 19; i_13 += 2) 
                {
                    {
                        var_33 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((((/* implicit */_Bool) 2420161855U)) ? (707544934U) : (((/* implicit */unsigned int) -134435604))))) - (var_8)));
                        arr_41 [i_8] [i_12] [i_8] [i_8] = ((/* implicit */int) ((((/* implicit */_Bool) 4294967295U)) ? (var_18) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_13])))));
                        arr_42 [(unsigned short)14] [i_11] [i_13] [(unsigned char)12] [i_11] |= ((((/* implicit */_Bool) -2922232025643547127LL)) ? (((/* implicit */long long int) ((unsigned int) -2702927272835476774LL))) : (var_8));
                        arr_43 [i_8] [i_8] [i_8] [i_12] [i_8] = ((/* implicit */signed char) var_16);
                        var_34 = ((/* implicit */long long int) ((unsigned int) arr_39 [i_8] [i_11] [i_11] [i_12] [i_12] [i_13]));
                    }
                } 
            } 
        } 
    }
    for (int i_14 = 0; i_14 < 18; i_14 += 1) /* same iter space */
    {
        var_35 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((arr_36 [i_14] [i_14] [(short)17] [i_14]) + (((/* implicit */long long int) var_9)))) >> (((((((/* implicit */_Bool) var_0)) ? (arr_39 [15U] [i_14] [i_14] [i_14] [16U] [i_14]) : (3846078427U))) - (389737755U)))))) ? (9223372036854775799LL) : (((((/* implicit */_Bool) min((-3147482056945655619LL), (((/* implicit */long long int) 210294720U))))) ? (((/* implicit */long long int) ((((/* implicit */unsigned int) -71880048)) + (4294967295U)))) : (((((/* implicit */_Bool) arr_35 [16U])) ? (var_6) : (((/* implicit */long long int) var_9))))))));
        var_36 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2737183477U)) ? (((/* implicit */unsigned int) -2024638512)) : (4294967295U)))) ? (min((var_0), (((/* implicit */unsigned int) 964218531)))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))) <= (var_1)))))));
    }
    /* vectorizable */
    for (int i_15 = 0; i_15 < 18; i_15 += 1) /* same iter space */
    {
        var_37 = ((/* implicit */int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) var_9)) : (arr_39 [i_15] [i_15] [i_15] [i_15] [i_15] [i_15])));
        var_38 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned int) var_3))) ? (arr_18 [i_15] [i_15] [i_15] [i_15]) : (((/* implicit */int) ((var_0) <= (((/* implicit */unsigned int) var_16)))))));
        var_39 = ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) arr_49 [i_15])) <= (4294967295U))))) + ((-(3846078427U))));
    }
}
