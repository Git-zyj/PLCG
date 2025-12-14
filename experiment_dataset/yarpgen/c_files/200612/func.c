/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200612
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200612 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200612
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
    var_14 = ((/* implicit */long long int) var_9);
    /* LoopSeq 4 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned int i_1 = 0; i_1 < 17; i_1 += 2) /* same iter space */
        {
            arr_6 [i_1] = ((/* implicit */long long int) arr_1 [i_1]);
            arr_7 [i_0] = ((/* implicit */signed char) (short)-9748);
        }
        for (unsigned int i_2 = 0; i_2 < 17; i_2 += 2) /* same iter space */
        {
            var_15 *= (!(((/* implicit */_Bool) (unsigned short)9826)));
            arr_12 [i_0] [i_2] = ((/* implicit */unsigned int) (-(((/* implicit */int) max((((/* implicit */unsigned char) arr_4 [i_0] [i_2] [i_2])), (var_6))))));
        }
        arr_13 [i_0] = ((/* implicit */unsigned char) max(((+(((unsigned long long int) arr_8 [i_0] [i_0])))), (((/* implicit */unsigned long long int) 9103505519844816166LL))));
    }
    for (short i_3 = 0; i_3 < 10; i_3 += 2) 
    {
        arr_18 [i_3] = ((/* implicit */signed char) ((long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) (unsigned char)96)), ((unsigned short)9840)))) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (((((/* implicit */_Bool) -5100334637639094734LL)) ? (7510497651479477742LL) : (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_3] [i_3]))))))));
        /* LoopNest 2 */
        for (unsigned char i_4 = 0; i_4 < 10; i_4 += 2) 
        {
            for (unsigned short i_5 = 1; i_5 < 6; i_5 += 2) 
            {
                {
                    var_16 ^= ((((((/* implicit */_Bool) arr_20 [i_5 + 4])) ? (((/* implicit */int) arr_20 [i_5 + 4])) : (((/* implicit */int) arr_20 [i_5 + 4])))) & (((/* implicit */int) max((var_5), (((/* implicit */unsigned char) ((((/* implicit */int) arr_4 [i_5 + 2] [i_5] [i_5])) > (((/* implicit */int) arr_10 [i_3] [i_5])))))))));
                    var_17 = ((/* implicit */int) ((unsigned int) ((((((/* implicit */_Bool) (unsigned short)34806)) ? (((/* implicit */int) arr_20 [i_4])) : (((/* implicit */int) arr_10 [i_3] [i_5])))) >> (((((/* implicit */int) (unsigned short)65529)) - (65519))))));
                    arr_23 [0ULL] = ((/* implicit */_Bool) var_6);
                    var_18 ^= ((/* implicit */unsigned short) (-(((((arr_16 [i_5]) ? (((/* implicit */unsigned long long int) 3067523599756090613LL)) : (6050695913571190855ULL))) / (((/* implicit */unsigned long long int) max((4026531840U), (2098000495U))))))));
                }
            } 
        } 
        var_19 |= ((/* implicit */unsigned long long int) 0LL);
    }
    for (unsigned short i_6 = 1; i_6 < 10; i_6 += 3) 
    {
        arr_27 [i_6] = var_11;
        /* LoopNest 2 */
        for (long long int i_7 = 0; i_7 < 11; i_7 += 2) 
        {
            for (unsigned short i_8 = 4; i_8 < 10; i_8 += 3) 
            {
                {
                    var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) (-((+(((/* implicit */int) (unsigned char)120))))))) ^ (((((/* implicit */_Bool) 5ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (4026531840U)))));
                    arr_33 [i_6] = ((/* implicit */unsigned long long int) (+(5268736907149583850LL)));
                }
            } 
        } 
    }
    for (unsigned short i_9 = 0; i_9 < 25; i_9 += 3) 
    {
        /* LoopSeq 4 */
        /* vectorizable */
        for (unsigned char i_10 = 0; i_10 < 25; i_10 += 2) 
        {
            arr_39 [i_10] |= ((/* implicit */long long int) var_5);
            arr_40 [i_9] [i_9] [i_10] = ((/* implicit */_Bool) (-(((/* implicit */int) arr_37 [i_9]))));
        }
        for (unsigned char i_11 = 1; i_11 < 21; i_11 += 3) 
        {
            arr_44 [i_11] [i_9] = ((/* implicit */signed char) arr_41 [i_11 + 2] [i_11] [i_11]);
            var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_8)), (((((/* implicit */_Bool) var_10)) ? (var_4) : (((/* implicit */unsigned long long int) var_12))))))) ? (((/* implicit */int) (((!(((/* implicit */_Bool) (unsigned char)160)))) || (((/* implicit */_Bool) (unsigned short)55710))))) : (var_7)));
            var_22 = ((/* implicit */unsigned short) max(((+(-2057154691))), (((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))));
        }
        /* vectorizable */
        for (unsigned short i_12 = 0; i_12 < 25; i_12 += 2) 
        {
            var_23 ^= ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_37 [i_9]))) > (arr_38 [i_9] [i_12])));
            /* LoopNest 2 */
            for (long long int i_13 = 0; i_13 < 25; i_13 += 2) 
            {
                for (unsigned long long int i_14 = 0; i_14 < 25; i_14 += 3) 
                {
                    {
                        var_24 += ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_34 [i_9] [18U])) : (((/* implicit */int) arr_50 [i_9]))))) & (((var_9) >> (((((/* implicit */int) arr_41 [i_12] [i_12] [i_14])) - (45))))));
                        /* LoopSeq 2 */
                        for (unsigned short i_15 = 1; i_15 < 22; i_15 += 2) 
                        {
                            var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) ((unsigned short) arr_46 [i_12] [i_12] [i_12])))));
                            var_26 ^= ((arr_52 [i_9] [i_12] [i_12] [i_12] [i_14] [i_14] [i_12]) | (((/* implicit */unsigned long long int) var_9)));
                            arr_53 [i_14] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_49 [i_9] [i_9] [i_9] [i_13] [i_14] [i_15]))) : ((-(var_12)))));
                            var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_41 [i_15 - 1] [i_14] [i_15 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_41 [i_15 + 2] [i_14] [i_15 + 1]))) : (-5760427852856439022LL)));
                        }
                        for (short i_16 = 0; i_16 < 25; i_16 += 3) 
                        {
                            var_28 = ((/* implicit */int) max((var_28), (((/* implicit */int) ((-6159290369378691062LL) / (((/* implicit */long long int) 397745922U)))))));
                            arr_58 [i_14] [i_14] [i_16] [i_14] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_41 [i_9] [i_14] [i_16])) ? (((/* implicit */int) arr_41 [i_13] [i_14] [i_16])) : (((/* implicit */int) (_Bool)1))));
                        }
                    }
                } 
            } 
        }
        /* vectorizable */
        for (long long int i_17 = 1; i_17 < 22; i_17 += 3) 
        {
            var_29 = ((/* implicit */_Bool) min((var_29), (((/* implicit */_Bool) (+(3238149593689312300LL))))));
            var_30 ^= ((/* implicit */long long int) ((((/* implicit */long long int) (+(var_9)))) >= (287667426198290432LL)));
            var_31 = ((/* implicit */unsigned char) arr_36 [i_17 + 3]);
        }
        var_32 = ((/* implicit */unsigned short) max(((-(((/* implicit */int) (unsigned short)30730)))), (((int) arr_56 [i_9] [i_9] [i_9] [i_9] [(short)14]))));
    }
}
