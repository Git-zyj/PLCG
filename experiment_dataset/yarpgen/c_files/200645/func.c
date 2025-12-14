/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200645
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200645 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200645
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
    var_18 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_3))))), (((var_15) ? ((+(266307774U))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_9))))))))));
    var_19 = ((/* implicit */long long int) var_14);
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            /* LoopSeq 3 */
            for (short i_2 = 0; i_2 < 11; i_2 += 1) 
            {
                arr_8 [i_2] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */unsigned long long int) -2147483627)) == (((unsigned long long int) (signed char)43))));
                /* LoopSeq 2 */
                for (unsigned long long int i_3 = 0; i_3 < 11; i_3 += 2) 
                {
                    var_20 = ((/* implicit */unsigned long long int) ((unsigned short) (_Bool)1));
                    arr_11 [i_3] [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */long long int) arr_10 [i_0] [i_3] [i_2] [i_1] [i_0])) > (((long long int) arr_10 [i_0] [i_0] [i_0] [i_0] [i_0]))));
                    /* LoopSeq 1 */
                    for (unsigned int i_4 = 3; i_4 < 9; i_4 += 4) 
                    {
                        arr_15 [i_0] [i_1] [6U] [6U] [i_4] = ((((/* implicit */_Bool) ((0ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))) : (arr_13 [i_4 + 1] [i_4] [i_4] [i_4 - 2] [i_4 - 2] [i_4 - 3] [(_Bool)1]));
                        var_21 = ((/* implicit */long long int) arr_1 [3ULL]);
                    }
                    arr_16 [i_0] [i_0] [i_2] [9ULL] [i_3] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) * (((((/* implicit */_Bool) (short)-5770)) ? (((/* implicit */unsigned long long int) 363460060U)) : (407860595667282790ULL)))));
                }
                for (unsigned int i_5 = 0; i_5 < 11; i_5 += 2) 
                {
                    /* LoopSeq 3 */
                    for (unsigned int i_6 = 0; i_6 < 11; i_6 += 3) 
                    {
                        arr_21 [i_6] [i_6] [i_5] [i_0] [i_0] [i_0] [i_0] |= ((((/* implicit */_Bool) -1)) ? (((/* implicit */int) arr_7 [i_5] [i_5] [i_5])) : (((/* implicit */int) arr_7 [i_0] [i_1] [i_2])));
                        var_22 = ((/* implicit */_Bool) (((~(var_12))) - (((((/* implicit */_Bool) arr_5 [i_1] [(signed char)6] [i_2] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)12423))) : (407860595667282792ULL)))));
                        arr_22 [i_2] [6LL] [i_2] [i_2] [i_1] = ((/* implicit */int) (+(((unsigned long long int) var_17))));
                        arr_23 [i_6] = ((/* implicit */unsigned char) arr_7 [i_0] [i_1] [i_0]);
                    }
                    for (short i_7 = 1; i_7 < 10; i_7 += 2) /* same iter space */
                    {
                        arr_27 [i_0] [4] [i_7] [i_0] [i_7] = ((/* implicit */unsigned short) arr_17 [i_2]);
                        var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) (-((((_Bool)1) ? (((/* implicit */int) (short)-32742)) : (((/* implicit */int) var_3)))))))));
                    }
                    for (short i_8 = 1; i_8 < 10; i_8 += 2) /* same iter space */
                    {
                        arr_30 [i_0] [i_0] [i_2] [i_0] [i_8] |= ((((/* implicit */unsigned int) ((/* implicit */int) arr_28 [i_0] [i_8 + 1] [i_8] [0U] [(unsigned char)0]))) - (arr_24 [i_8] [i_8 - 1] [i_8] [i_8 - 1] [i_8] [i_1] [i_8]));
                        arr_31 [(_Bool)1] [i_0] [i_0] [i_2] [i_5] [i_5] [i_8 - 1] = ((/* implicit */unsigned int) arr_20 [i_0]);
                    }
                    arr_32 [i_1] [i_1] [i_1] [4U] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 0ULL)) ? (arr_29 [i_0] [i_1] [i_2] [i_5] [(short)2]) : (arr_29 [i_1] [i_1] [i_2] [i_5] [(unsigned char)9])));
                }
            }
            for (unsigned int i_9 = 3; i_9 < 10; i_9 += 1) 
            {
                arr_36 [i_1] [i_9] [i_0] [8ULL] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)51367)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-32766))) : ((-9223372036854775807LL - 1LL))));
                arr_37 [i_9] [i_1] [(_Bool)1] [i_1] = ((/* implicit */signed char) (-((~(arr_33 [i_0] [i_1] [i_9 - 1] [i_0])))));
            }
            for (int i_10 = 0; i_10 < 11; i_10 += 1) 
            {
                var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) ((_Bool) var_1)))));
                var_25 ^= ((/* implicit */_Bool) ((signed char) arr_39 [i_1] [i_10]));
                /* LoopSeq 2 */
                for (unsigned int i_11 = 0; i_11 < 11; i_11 += 3) /* same iter space */
                {
                    arr_44 [i_0] [i_0] = ((/* implicit */_Bool) (+(2982312962U)));
                    arr_45 [i_0] [i_0] [i_1] [i_0] [i_0] = ((/* implicit */unsigned int) var_8);
                }
                for (unsigned int i_12 = 0; i_12 < 11; i_12 += 3) /* same iter space */
                {
                    arr_50 [6U] [i_12] [i_10] [i_10] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) 2065456983)) ? (((/* implicit */unsigned long long int) -2147483619)) : (arr_0 [i_0] [i_0]))) <= (((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)-8797)))))));
                    arr_51 [i_12] [i_12] [i_1] [i_12] [i_12] = ((/* implicit */unsigned int) ((((1237223405) != (((/* implicit */int) (short)-4349)))) ? (((/* implicit */long long int) ((2147483647) - (((/* implicit */int) (_Bool)1))))) : (arr_38 [i_0] [i_0])));
                    arr_52 [i_12] = ((/* implicit */short) var_3);
                    arr_53 [i_12] = ((/* implicit */_Bool) ((short) arr_40 [i_1] [i_10] [i_1] [i_0]));
                }
                arr_54 [i_0] [i_0] [i_0] = ((/* implicit */int) arr_24 [2LL] [i_1] [i_1] [i_10] [i_1] [i_1] [4LL]);
                var_26 ^= ((/* implicit */_Bool) ((arr_19 [i_0] [(_Bool)1] [i_1] [i_0] [i_10] [i_10]) ? (((/* implicit */int) arr_19 [i_0] [i_0] [(unsigned char)2] [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_19 [i_10] [i_10] [i_1] [i_1] [i_0] [i_0]))));
            }
            var_27 = ((/* implicit */unsigned int) max((var_27), (((/* implicit */unsigned int) ((((((/* implicit */unsigned int) -2065456984)) == (2952748083U))) ? (((/* implicit */int) arr_14 [i_0])) : (((/* implicit */int) arr_48 [i_1])))))));
            arr_55 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 1005037870)) ? (((/* implicit */int) (unsigned char)127)) : (2065457010)));
        }
        var_28 += ((/* implicit */unsigned int) (~((-(arr_39 [i_0] [i_0])))));
    }
    for (unsigned int i_13 = 0; i_13 < 18; i_13 += 1) 
    {
        var_29 = ((/* implicit */_Bool) max((var_29), (((/* implicit */_Bool) max((((/* implicit */int) arr_56 [i_13])), ((~(((/* implicit */int) (unsigned char)63)))))))));
        arr_59 [i_13] [i_13] = ((/* implicit */long long int) ((min((max((((/* implicit */int) (short)511)), (arr_57 [i_13]))), (var_4))) ^ (((/* implicit */int) var_5))));
        var_30 = var_4;
        arr_60 [i_13] [i_13] = ((/* implicit */unsigned int) (~(((long long int) (-(((/* implicit */int) var_6)))))));
    }
    var_31 = ((/* implicit */unsigned char) (~(min((((/* implicit */int) var_15)), ((+(((/* implicit */int) var_3))))))));
}
