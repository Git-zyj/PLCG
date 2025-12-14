/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206767
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206767 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206767
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
    var_10 = ((/* implicit */signed char) var_0);
    var_11 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_6) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_8))))) ? (var_4) : (((/* implicit */unsigned long long int) var_7))))) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))));
    var_12 = ((/* implicit */unsigned char) var_4);
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */signed char) var_8);
        var_13 = ((/* implicit */unsigned short) var_8);
        arr_3 [i_0] [i_0] = ((/* implicit */_Bool) max((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0])));
        var_14 = ((/* implicit */unsigned long long int) max((var_14), (((((/* implicit */_Bool) (unsigned short)17563)) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
    }
    /* vectorizable */
    for (unsigned short i_1 = 0; i_1 < 14; i_1 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 2) 
        {
            /* LoopSeq 2 */
            for (int i_3 = 1; i_3 < 10; i_3 += 1) 
            {
                var_15 += ((/* implicit */unsigned int) ((int) ((short) 3130782569505269113ULL)));
                arr_13 [i_3] [i_3] [i_2] [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) 6370028055719219189ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)47949))) : (16230528644508287173ULL)));
                var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_9)))))));
            }
            for (int i_4 = 0; i_4 < 14; i_4 += 1) 
            {
                var_17 |= ((/* implicit */signed char) arr_8 [i_2]);
                arr_18 [i_4] [(_Bool)1] [i_1] = ((long long int) 5811443389844015663ULL);
            }
            arr_19 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)17563)) ? (((/* implicit */int) arr_8 [i_2])) : (((/* implicit */int) (unsigned short)51319))));
            arr_20 [10] [i_1] [13LL] = ((/* implicit */unsigned short) arr_12 [i_1] [i_1] [i_1] [i_1]);
        }
        /* LoopNest 2 */
        for (unsigned int i_5 = 0; i_5 < 14; i_5 += 3) 
        {
            for (unsigned int i_6 = 0; i_6 < 14; i_6 += 3) 
            {
                {
                    var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) var_2))));
                    var_19 ^= ((/* implicit */_Bool) arr_23 [i_1] [i_5] [i_6]);
                    /* LoopSeq 4 */
                    for (unsigned short i_7 = 0; i_7 < 14; i_7 += 4) 
                    {
                        arr_27 [9U] [i_5] [i_6] [i_7] [i_7] = ((/* implicit */unsigned short) arr_17 [i_1] [(signed char)2] [(unsigned char)10]);
                        var_20 = ((/* implicit */unsigned short) arr_9 [i_1] [i_1]);
                        var_21 = ((/* implicit */_Bool) arr_7 [i_1] [i_5]);
                        var_22 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)47949)) ? (((/* implicit */int) (signed char)31)) : (((/* implicit */int) (unsigned short)47973))));
                        arr_28 [i_5] [5U] [i_6] [5U] = ((/* implicit */unsigned long long int) var_0);
                    }
                    for (_Bool i_8 = 0; i_8 < 0; i_8 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned long long int i_9 = 0; i_9 < 14; i_9 += 3) 
                        {
                            var_23 = ((/* implicit */unsigned char) ((signed char) ((((/* implicit */_Bool) (short)1873)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)17563))))));
                            arr_34 [i_1] [i_5] [i_6] [i_8] [i_1] &= ((((/* implicit */_Bool) 620194682U)) ? (((/* implicit */int) (signed char)35)) : (((/* implicit */int) (unsigned short)17561)));
                            var_24 = ((/* implicit */unsigned int) 6641591609823284800ULL);
                            var_25 -= ((/* implicit */short) var_5);
                        }
                        for (signed char i_10 = 3; i_10 < 12; i_10 += 3) 
                        {
                            var_26 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 18446744073709551596ULL)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_0 [i_10 - 2]))));
                            var_27 |= ((/* implicit */unsigned char) var_6);
                        }
                        var_28 = ((/* implicit */int) max((var_28), (((/* implicit */int) arr_35 [(short)4] [i_1] [i_8 + 1] [i_8 + 1] [i_5] [i_1] [i_5]))));
                        var_29 ^= arr_10 [i_5] [i_8 + 1] [i_8 + 1] [i_1];
                        var_30 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_31 [i_1] [i_5])) ? (arr_31 [i_1] [i_1]) : (arr_31 [i_6] [i_1])));
                    }
                    for (unsigned char i_11 = 0; i_11 < 14; i_11 += 1) /* same iter space */
                    {
                        var_31 = ((/* implicit */unsigned char) ((signed char) var_3));
                        arr_41 [i_1] [i_5] [i_1] [i_1] [i_1] [(unsigned short)6] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (var_4)));
                    }
                    for (unsigned char i_12 = 0; i_12 < 14; i_12 += 1) /* same iter space */
                    {
                        var_32 = ((/* implicit */signed char) ((var_6) ? (arr_23 [(signed char)9] [i_6] [8LL]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))));
                        var_33 ^= ((/* implicit */long long int) arr_24 [i_1]);
                    }
                    arr_44 [(unsigned short)5] [i_5] [i_6] [i_6] = ((/* implicit */_Bool) arr_40 [i_1] [i_1] [i_5] [i_1]);
                }
            } 
        } 
        arr_45 [i_1] = ((/* implicit */unsigned long long int) ((unsigned short) 853534177U));
        var_34 *= ((/* implicit */unsigned long long int) arr_31 [i_1] [i_1]);
    }
    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
    {
        /* LoopNest 3 */
        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
        {
            for (unsigned short i_15 = 0; i_15 < 10; i_15 += 2) 
            {
                for (long long int i_16 = 1; i_16 < 9; i_16 += 2) 
                {
                    {
                        var_35 ^= (unsigned short)17586;
                        arr_56 [3U] [i_15] [i_15] [i_13] [i_13] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((unsigned int) min((((/* implicit */unsigned long long int) var_8)), (var_4))))), (((((/* implicit */_Bool) arr_49 [i_13])) ? (18446744073709551611ULL) : (max((((/* implicit */unsigned long long int) -1893220883)), (15315961504204282502ULL)))))));
                        var_36 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_7 [(_Bool)1] [i_14]), (((/* implicit */unsigned char) var_2))))) ? (max((0ULL), (((/* implicit */unsigned long long int) (unsigned short)17563)))) : (((/* implicit */unsigned long long int) min((((/* implicit */long long int) 2421202863U)), (arr_17 [(unsigned char)10] [(unsigned char)10] [i_16]))))))) ? (arr_23 [i_13] [i_14] [i_15]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))));
                    }
                } 
            } 
        } 
        var_37 ^= arr_16 [i_13] [12] [(signed char)6] [(signed char)6];
        arr_57 [i_13] |= ((unsigned short) ((unsigned long long int) (short)-14549));
    }
}
