/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45927
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45927 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45927
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
    var_18 = ((/* implicit */unsigned char) var_17);
    var_19 -= ((/* implicit */unsigned char) var_10);
    var_20 = ((/* implicit */unsigned char) var_9);
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        /* LoopSeq 4 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            /* LoopSeq 2 */
            for (unsigned char i_2 = 0; i_2 < 19; i_2 += 2) 
            {
                var_21 = ((/* implicit */unsigned int) var_0);
                var_22 = ((/* implicit */unsigned short) ((((/* implicit */long long int) 517906900U)) - ((-(arr_2 [i_0])))));
            }
            for (unsigned int i_3 = 3; i_3 < 18; i_3 += 2) 
            {
                arr_10 [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) arr_1 [i_0]);
                /* LoopSeq 1 */
                for (int i_4 = 0; i_4 < 19; i_4 += 4) 
                {
                    var_23 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1))));
                    var_24 += (+(max((arr_7 [i_1]), (arr_7 [i_0]))));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned char i_5 = 0; i_5 < 19; i_5 += 3) 
                    {
                        var_25 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_11 [17] [i_5])))) <= (((/* implicit */int) (_Bool)1))));
                        var_26 = ((/* implicit */unsigned char) max((var_26), (arr_5 [i_5] [i_4] [i_4] [i_0])));
                        var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_5 [i_3 - 2] [i_3 + 1] [i_0] [i_3 - 1])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (unsigned short)11))));
                        arr_15 [i_0] [i_1] = ((/* implicit */unsigned short) (-((~(((/* implicit */int) arr_8 [i_0] [(short)16] [i_5]))))));
                        var_28 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (0LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                    }
                    for (unsigned long long int i_6 = 0; i_6 < 19; i_6 += 2) /* same iter space */
                    {
                        var_29 ^= ((/* implicit */unsigned char) var_1);
                        var_30 = ((/* implicit */unsigned long long int) arr_4 [i_4] [i_0]);
                    }
                    for (unsigned long long int i_7 = 0; i_7 < 19; i_7 += 2) /* same iter space */
                    {
                        var_31 -= (+(((/* implicit */int) max((var_0), (((/* implicit */unsigned short) (short)-19640))))));
                        var_32 = ((/* implicit */int) (+(max((arr_3 [i_0]), (((/* implicit */unsigned long long int) var_1))))));
                    }
                    arr_23 [i_0] [i_1] [i_3] [i_0] = (~(((/* implicit */int) arr_12 [i_0] [(unsigned char)11] [i_0] [i_3] [13U])));
                    var_33 = ((/* implicit */unsigned long long int) arr_20 [6] [i_1] [6] [i_3] [(signed char)9] [i_1] [i_4]);
                }
                var_34 = ((/* implicit */int) min((var_34), (((/* implicit */int) (unsigned char)192))));
                var_35 = ((/* implicit */short) max((var_35), (((/* implicit */short) arr_14 [16]))));
            }
            var_36 = ((/* implicit */unsigned int) var_7);
            var_37 = ((unsigned int) max((((/* implicit */unsigned int) arr_13 [i_0] [i_0] [i_1] [i_1] [i_1])), (2566346332U)));
            var_38 -= ((/* implicit */_Bool) arr_11 [i_0] [i_1]);
        }
        for (unsigned long long int i_8 = 2; i_8 < 17; i_8 += 2) 
        {
            var_39 ^= ((/* implicit */unsigned long long int) (+((+(arr_20 [i_0] [i_0] [i_0] [3ULL] [i_8 + 1] [i_8 + 1] [3ULL])))));
            /* LoopSeq 2 */
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                var_40 = ((/* implicit */unsigned long long int) arr_7 [i_0]);
                arr_29 [i_0] [i_8] [i_0] [0LL] = ((/* implicit */unsigned int) arr_16 [i_0] [i_0] [i_8 + 2] [i_9] [0ULL]);
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned int i_10 = 1; i_10 < 18; i_10 += 2) 
                {
                    arr_34 [i_0] = (+(arr_2 [i_0]));
                    var_41 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 573515288U)) ? (((/* implicit */unsigned long long int) arr_16 [i_0] [i_0] [16U] [i_9] [i_10])) : ((~(var_12)))));
                    var_42 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) arr_6 [i_0] [i_0] [i_10])) + (arr_31 [i_0] [i_8 - 2] [i_9])));
                    arr_35 [i_0] [(unsigned char)13] = ((unsigned int) arr_26 [i_0] [i_0] [i_0] [i_0]);
                    arr_36 [i_0] [i_0] [i_9] [i_10 + 1] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [i_0] [i_0]))) <= (((arr_24 [i_0] [i_9] [i_0]) & (arr_7 [i_8])))));
                }
                for (unsigned int i_11 = 0; i_11 < 19; i_11 += 2) 
                {
                    /* LoopSeq 2 */
                    for (unsigned int i_12 = 3; i_12 < 15; i_12 += 4) /* same iter space */
                    {
                        var_43 = var_1;
                        var_44 = ((/* implicit */short) arr_38 [i_11] [17] [i_9] [(unsigned char)12] [(short)0] [i_11]);
                    }
                    for (unsigned int i_13 = 3; i_13 < 15; i_13 += 4) /* same iter space */
                    {
                        arr_43 [i_0] [i_0] [i_0] [i_0] [7U] [i_0] [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) max(((unsigned short)65530), (((/* implicit */unsigned short) arr_8 [13] [12U] [(unsigned char)6]))))), (0ULL))))));
                        arr_44 [i_0] [i_0] [i_0] [i_11] [i_13] = ((/* implicit */unsigned int) max((((/* implicit */int) arr_22 [17LL] [i_8] [i_9] [i_11] [i_0] [i_0])), ((-(((/* implicit */int) var_7))))));
                        var_45 = ((/* implicit */unsigned long long int) max((max((((/* implicit */unsigned int) 1738033358)), (arr_24 [i_0] [i_13 - 1] [i_13 + 2]))), (arr_24 [i_0] [i_13 - 3] [i_13 - 3])));
                        var_46 = ((/* implicit */unsigned long long int) arr_42 [i_0] [i_8] [i_8 + 1] [i_9] [i_13 - 3]);
                        arr_45 [i_8] [10LL] [0U] [0U] [i_8] [i_8] &= ((/* implicit */unsigned int) (~(((/* implicit */int) arr_8 [i_0] [i_9] [3ULL]))));
                    }
                    var_47 -= ((/* implicit */unsigned long long int) var_5);
                }
                arr_46 [i_0] [i_0] [i_8] [i_9] &= max((((/* implicit */int) ((unsigned short) arr_18 [i_0] [i_0] [i_0] [i_0] [i_0] [i_9]))), (((((/* implicit */int) arr_37 [(short)4])) / (arr_38 [17] [i_0] [i_0] [i_8 - 2] [(short)10] [i_9]))));
            }
            for (short i_14 = 1; i_14 < 16; i_14 += 4) 
            {
                arr_49 [i_0] [12U] [i_8] [i_8] &= ((/* implicit */unsigned short) var_5);
                arr_50 [i_0] [i_0] [i_0] [7ULL] = ((/* implicit */_Bool) ((unsigned long long int) (+(max((((/* implicit */int) (unsigned short)65525)), (var_16))))));
            }
            var_48 -= ((/* implicit */int) ((unsigned long long int) (!(((/* implicit */_Bool) max((arr_32 [i_8] [2] [14]), (((/* implicit */unsigned short) arr_33 [i_8] [i_8]))))))));
            var_49 = ((/* implicit */short) ((int) (_Bool)1));
            arr_51 [i_0] [i_0] [5] = ((/* implicit */unsigned long long int) ((_Bool) max((max(((-2147483647 - 1)), (605485918))), (((/* implicit */int) ((short) var_13))))));
        }
        for (int i_15 = 0; i_15 < 19; i_15 += 2) 
        {
            arr_55 [i_0] [i_0] = ((/* implicit */unsigned char) (+(arr_7 [i_0])));
            /* LoopSeq 1 */
            for (unsigned char i_16 = 2; i_16 < 17; i_16 += 2) 
            {
                arr_58 [i_0] [i_15] [i_15] = ((/* implicit */unsigned long long int) var_16);
                /* LoopSeq 3 */
                for (unsigned int i_17 = 0; i_17 < 19; i_17 += 4) 
                {
                    var_50 = ((/* implicit */_Bool) max((var_50), (((/* implicit */_Bool) max((((/* implicit */int) max((arr_27 [i_0] [i_15] [i_16]), (arr_27 [i_17] [i_16 + 1] [i_15])))), (((((var_14) + (2147483647))) >> (((((/* implicit */int) arr_27 [i_16 - 1] [i_15] [i_0])) - (115))))))))));
                    arr_62 [i_0] [i_0] [i_15] [i_15] [i_15] [(unsigned char)11] = ((/* implicit */int) ((unsigned char) max((((/* implicit */int) arr_32 [i_0] [i_16 - 1] [i_16 - 2])), (-844550096))));
                    var_51 = ((/* implicit */unsigned char) arr_20 [i_16] [i_16] [i_16 + 2] [i_16] [i_16] [i_16] [i_16]);
                }
                for (unsigned char i_18 = 1; i_18 < 18; i_18 += 2) 
                {
                    arr_66 [i_0] = ((/* implicit */unsigned int) max((((/* implicit */int) ((short) (short)-17))), (max((((/* implicit */int) var_1)), (arr_6 [i_16 + 2] [i_18 - 1] [i_18 - 1])))));
                    arr_67 [i_0] [i_15] [i_16] [i_0] = ((/* implicit */unsigned int) (short)-19634);
                }
                /* vectorizable */
                for (unsigned short i_19 = 0; i_19 < 19; i_19 += 2) 
                {
                    arr_70 [i_0] [i_15] [i_16] = ((/* implicit */unsigned long long int) var_7);
                    var_52 = ((/* implicit */unsigned int) var_12);
                }
            }
            arr_71 [i_0] [i_0] [i_15] = ((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) (signed char)31))))));
        }
        for (signed char i_20 = 1; i_20 < 16; i_20 += 1) 
        {
            var_53 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)35534)) ^ (2100344250)));
            arr_75 [i_0] [i_0] = arr_2 [i_0];
            arr_76 [i_0] = ((/* implicit */signed char) ((unsigned int) (+(arr_73 [i_20] [i_0]))));
            arr_77 [i_0] [i_0] = ((((/* implicit */_Bool) max((((/* implicit */long long int) (signed char)57)), (4363686772736LL)))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_7)));
            var_54 = ((/* implicit */_Bool) (short)19632);
        }
        arr_78 [i_0] [i_0] = ((((/* implicit */_Bool) 8372224ULL)) ? (((/* implicit */int) (unsigned char)82)) : (-844550096));
        var_55 = ((/* implicit */unsigned char) arr_74 [i_0] [i_0] [i_0]);
        var_56 -= ((/* implicit */unsigned char) max(((+(arr_28 [(unsigned char)10] [i_0]))), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) > ((~(18446744073709551613ULL))))))));
    }
}
