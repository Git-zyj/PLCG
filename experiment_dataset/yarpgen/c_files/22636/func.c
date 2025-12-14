/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22636
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22636 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22636
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
    var_14 += ((/* implicit */unsigned int) (unsigned short)21303);
    var_15 ^= ((/* implicit */unsigned char) var_6);
    /* LoopSeq 4 */
    for (short i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        var_16 = ((/* implicit */short) (~(((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((((/* implicit */_Bool) var_3)) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [17]))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)44232)) ^ (((/* implicit */int) arr_2 [i_0] [18ULL])))))))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned long long int) (~(((((/* implicit */int) min((arr_2 [i_0] [i_0]), (var_0)))) ^ (((/* implicit */int) ((short) var_11)))))));
    }
    for (int i_1 = 0; i_1 < 25; i_1 += 3) 
    {
        /* LoopSeq 3 */
        for (signed char i_2 = 0; i_2 < 25; i_2 += 1) 
        {
            arr_10 [i_1] [i_1] = ((/* implicit */short) (!(((/* implicit */_Bool) (-(var_12))))));
            var_17 *= ((/* implicit */unsigned long long int) ((((unsigned int) var_3)) >= (((/* implicit */unsigned int) ((/* implicit */int) max((arr_9 [i_2] [i_2] [8ULL]), (arr_9 [i_1] [i_1] [i_1])))))));
            var_18 = ((/* implicit */unsigned short) (-((+((+(((/* implicit */int) var_3))))))));
            /* LoopNest 3 */
            for (short i_3 = 0; i_3 < 25; i_3 += 3) 
            {
                for (short i_4 = 1; i_4 < 24; i_4 += 1) 
                {
                    for (int i_5 = 0; i_5 < 25; i_5 += 3) 
                    {
                        {
                            arr_21 [i_3] [2U] [i_5] [i_4 + 1] [2U] = ((/* implicit */unsigned long long int) (short)28268);
                            arr_22 [i_1] [i_1] [i_1] [i_3] [i_4 - 1] [i_4 + 1] [i_3] = ((/* implicit */unsigned long long int) (((~(((/* implicit */int) ((unsigned char) arr_14 [i_5] [i_3] [i_2]))))) + ((-((-(((/* implicit */int) (unsigned char)10))))))));
                            arr_23 [i_3] = min((((/* implicit */unsigned long long int) (-(arr_8 [i_1])))), ((~((+(arr_4 [i_4]))))));
                        }
                    } 
                } 
            } 
        }
        for (unsigned int i_6 = 0; i_6 < 25; i_6 += 3) /* same iter space */
        {
            var_19 -= ((/* implicit */unsigned long long int) max((((int) min(((short)6129), (((/* implicit */short) (signed char)116))))), (((((/* implicit */int) (!(((/* implicit */_Bool) 16129463144305041086ULL))))) + (((/* implicit */int) (unsigned short)44232))))));
            var_20 &= ((/* implicit */unsigned long long int) (+((+(((arr_17 [i_1] [12ULL] [i_6] [12ULL] [i_1]) / (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_6])))))))));
        }
        for (unsigned int i_7 = 0; i_7 < 25; i_7 += 3) /* same iter space */
        {
            arr_30 [i_1] [i_7] = ((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */int) arr_18 [i_1] [i_1] [i_1])) / (((/* implicit */int) arr_18 [i_7] [i_7] [i_7])))));
            var_21 = ((/* implicit */unsigned long long int) (short)32108);
        }
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 25; i_8 += 1) 
        {
            for (int i_9 = 0; i_9 < 25; i_9 += 3) 
            {
                {
                    var_22 = ((/* implicit */short) var_10);
                    var_23 |= (+(min((((((/* implicit */int) (unsigned short)21314)) >> (((((/* implicit */int) arr_34 [i_1])) + (60))))), (min((-2117074168), (((/* implicit */int) arr_28 [i_8] [i_9])))))));
                }
            } 
        } 
        var_24 = ((/* implicit */short) var_7);
        var_25 ^= ((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */_Bool) ((short) 2117074186))) ? (var_6) : (max((arr_20 [i_1] [i_1] [(short)2]), (arr_13 [i_1] [i_1] [i_1]))))));
    }
    for (unsigned long long int i_10 = 1; i_10 < 21; i_10 += 1) 
    {
        arr_38 [i_10] = ((/* implicit */unsigned int) ((((unsigned long long int) 12420836224194390677ULL)) > ((+(var_10)))));
        var_26 = ((/* implicit */unsigned long long int) max((var_26), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (+(var_2)))), (min((((/* implicit */unsigned long long int) (unsigned char)151)), (var_10)))))) ? (max((arr_25 [i_10] [3U] [i_10 - 1]), (((/* implicit */unsigned int) -2117074201)))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((arr_35 [i_10]) >= (((/* implicit */unsigned long long int) arr_24 [i_10] [0ULL])))))) > (((((/* implicit */_Bool) 4235272763U)) ? (var_9) : (((/* implicit */unsigned int) 2117074169)))))))))))));
        /* LoopNest 3 */
        for (signed char i_11 = 4; i_11 < 20; i_11 += 1) 
        {
            for (unsigned short i_12 = 3; i_12 < 21; i_12 += 4) 
            {
                for (unsigned long long int i_13 = 0; i_13 < 22; i_13 += 4) 
                {
                    {
                        var_27 ^= ((/* implicit */unsigned long long int) ((int) -2117074171));
                        var_28 ^= ((/* implicit */int) ((short) ((min((((/* implicit */unsigned long long int) var_9)), (var_1))) >= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_28 [i_10] [i_11]))) : (arr_17 [i_10] [i_13] [i_10] [0U] [i_13])))))));
                        arr_47 [i_10] = (((-(16105260902906694561ULL))) % (((/* implicit */unsigned long long int) ((unsigned int) arr_9 [i_10 + 1] [i_11 + 1] [i_12 - 1]))));
                        var_29 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_32 [i_10] [i_10 - 1])))))));
                        /* LoopSeq 1 */
                        for (signed char i_14 = 0; i_14 < 22; i_14 += 3) 
                        {
                            arr_51 [i_14] [i_10 - 1] [i_12 - 3] [i_13] = ((/* implicit */signed char) arr_40 [i_14]);
                            arr_52 [i_14] = ((short) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((572496017) + (((/* implicit */int) arr_29 [i_12] [11ULL]))))) : (min((4235272763U), (((/* implicit */unsigned int) arr_26 [i_14] [i_12 - 3] [i_14]))))));
                            var_30 -= ((/* implicit */short) (!((!((!(((/* implicit */_Bool) var_6))))))));
                            var_31 = ((/* implicit */short) min((((int) ((((/* implicit */_Bool) arr_27 [i_10] [19])) || (((/* implicit */_Bool) arr_16 [i_10] [(short)5] [i_11] [i_10]))))), (arr_8 [i_10 - 1])));
                        }
                    }
                } 
            } 
        } 
    }
    for (unsigned char i_15 = 0; i_15 < 14; i_15 += 3) 
    {
        var_32 = ((/* implicit */short) (!(((/* implicit */_Bool) ((unsigned long long int) arr_1 [i_15])))));
        var_33 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) -572496014)) & (((((/* implicit */_Bool) -2117074168)) ? (5977638862509488828ULL) : (16791755481272759493ULL)))));
    }
}
