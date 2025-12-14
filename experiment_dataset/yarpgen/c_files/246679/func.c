/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246679
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246679 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246679
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
    var_19 = ((unsigned short) var_3);
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = ((/* implicit */_Bool) (-((-(((/* implicit */int) var_17))))));
        /* LoopNest 3 */
        for (unsigned char i_1 = 1; i_1 < 11; i_1 += 3) 
        {
            for (long long int i_2 = 1; i_2 < 9; i_2 += 4) 
            {
                for (long long int i_3 = 2; i_3 < 11; i_3 += 4) 
                {
                    {
                        arr_10 [i_0] [(signed char)1] [i_2 + 2] [2LL] [i_1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((long long int) ((((/* implicit */int) var_8)) >= (1386986925)))))));
                        arr_11 [i_0] [i_3] [i_0] [i_0] = ((/* implicit */long long int) ((short) ((((((/* implicit */_Bool) var_9)) ? (var_16) : (((/* implicit */int) var_17)))) % (min((1128798962), (((/* implicit */int) var_10)))))));
                    }
                } 
            } 
        } 
        /* LoopSeq 2 */
        for (unsigned short i_4 = 0; i_4 < 13; i_4 += 4) 
        {
            arr_15 [i_0] = ((/* implicit */signed char) min(((~(((/* implicit */int) var_10)))), (((((/* implicit */_Bool) (~(-18LL)))) ? (((/* implicit */int) (short)14700)) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_1 [i_4]))))))));
            arr_16 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) max((((long long int) var_18)), (((/* implicit */long long int) max((1014910063), (((/* implicit */int) arr_12 [i_0])))))));
        }
        for (long long int i_5 = 0; i_5 < 13; i_5 += 4) 
        {
            arr_19 [i_0] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4186652687110327615LL)) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_18 [i_0] [i_5] [i_5]))))) : (((/* implicit */int) arr_1 [i_5]))));
            arr_20 [i_0] [i_5] = ((/* implicit */_Bool) (short)-32346);
            /* LoopNest 2 */
            for (short i_6 = 4; i_6 < 10; i_6 += 2) 
            {
                for (long long int i_7 = 0; i_7 < 13; i_7 += 4) 
                {
                    {
                        /* LoopSeq 2 */
                        for (short i_8 = 2; i_8 < 10; i_8 += 1) 
                        {
                            arr_30 [i_8] [i_8] [i_8] [12LL] [i_8] [i_8] = ((unsigned short) min((((/* implicit */unsigned long long int) arr_4 [i_0] [i_5])), (var_11)));
                            arr_31 [i_0] [11] [i_6] [12ULL] [i_7] = ((/* implicit */long long int) var_16);
                        }
                        for (short i_9 = 4; i_9 < 11; i_9 += 3) 
                        {
                            arr_34 [i_9] [10ULL] [i_6] [(short)0] [i_0] = min((((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) arr_28 [i_7] [i_6 - 4] [i_6 - 4])) : (arr_26 [i_5] [i_6] [i_6] [(signed char)3]))), ((~(arr_26 [6ULL] [i_6 - 1] [i_7] [2ULL]))));
                            arr_35 [i_0] [(short)2] [i_0] [i_0] [i_0] = arr_23 [i_0] [11] [i_6 - 2] [i_7];
                            arr_36 [i_9] [i_9] [i_5] [i_7] [i_9] [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) (~(arr_23 [i_5] [(unsigned short)5] [i_6 + 2] [i_6 - 1])))) ? (((unsigned long long int) (short)32347)) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0] [i_6 + 3] [i_5] [(_Bool)1]))) | (((unsigned long long int) arr_9 [i_0] [2ULL] [8LL]))))));
                        }
                        arr_37 [i_0] [i_5] [i_6 + 1] [i_6] [i_7] = min((((/* implicit */long long int) min((arr_6 [i_0] [i_6 + 1] [i_6] [i_6 - 1]), (arr_6 [i_5] [10LL] [i_5] [i_6 + 1])))), ((~(var_1))));
                        arr_38 [i_6 - 1] [i_5] [11LL] [i_7] = var_4;
                    }
                } 
            } 
            arr_39 [i_5] [i_5] [i_0] = ((/* implicit */long long int) ((int) min((14410464367720070070ULL), (((/* implicit */unsigned long long int) max((((/* implicit */int) var_12)), (var_14)))))));
        }
        /* LoopNest 2 */
        for (long long int i_10 = 1; i_10 < 11; i_10 += 4) 
        {
            for (long long int i_11 = 2; i_11 < 11; i_11 += 2) 
            {
                {
                    arr_45 [i_0] [i_10] [9] [i_0] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) (!(((/* implicit */_Bool) -321101465098044203LL))))))) * (max((((/* implicit */unsigned long long int) var_1)), (max((7327702177056109944ULL), (((/* implicit */unsigned long long int) var_9))))))));
                    arr_46 [i_10] [i_10] [4] = ((/* implicit */long long int) max((max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 328252132454766088LL)) ? (576177497) : (511405197)))), (11119041896653441671ULL))), ((~(max((7327702177056109944ULL), (((/* implicit */unsigned long long int) var_5))))))));
                    arr_47 [i_10] = max((((/* implicit */unsigned long long int) max((((/* implicit */int) (unsigned short)50625)), (arr_28 [i_11 - 1] [i_10] [i_10 + 1])))), (((((/* implicit */_Bool) max((arr_26 [i_10] [i_11 + 2] [i_11] [i_11]), (11119041896653441671ULL)))) ? (((/* implicit */unsigned long long int) 9212887898712099212LL)) : (((((/* implicit */_Bool) var_13)) ? (arr_0 [i_0] [i_10 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)18002))))))));
                    arr_48 [i_0] [i_10] [i_10] = ((/* implicit */unsigned short) var_1);
                }
            } 
        } 
    }
    for (unsigned long long int i_12 = 0; i_12 < 13; i_12 += 1) /* same iter space */
    {
        arr_53 [i_12] = ((/* implicit */signed char) arr_5 [i_12] [(short)2]);
        arr_54 [4ULL] = max((((/* implicit */unsigned long long int) min(((unsigned short)50641), (((/* implicit */unsigned short) ((unsigned char) var_3)))))), (min((((/* implicit */unsigned long long int) var_16)), (arr_17 [i_12] [i_12]))));
    }
    var_20 = ((/* implicit */unsigned short) var_15);
}
