/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39897
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39897 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39897
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
    var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) ((((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (_Bool)0)))) | (((/* implicit */int) var_3)))))));
    var_15 = var_5;
    var_16 = ((/* implicit */unsigned char) min((((/* implicit */long long int) (unsigned short)30024)), (((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) var_5)) ? (var_13) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)39450))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)7634)) || (((/* implicit */_Bool) var_3))))))))));
    /* LoopSeq 3 */
    for (unsigned int i_0 = 1; i_0 < 10; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned char) (unsigned short)57901);
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            arr_7 [i_0] [i_1] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)7635))) : (5229835598550636050LL)))) ? (((((/* implicit */_Bool) ((unsigned int) arr_2 [7ULL] [i_1]))) ? (((((/* implicit */_Bool) (unsigned short)7633)) ? (((/* implicit */int) (unsigned short)7634)) : (((/* implicit */int) (unsigned short)7634)))) : (((/* implicit */int) var_2)))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0 + 1] [i_0])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_6))))) ? (((/* implicit */int) ((unsigned char) arr_1 [i_0] [i_0]))) : (((/* implicit */int) (_Bool)1))))));
            arr_8 [i_0] = ((/* implicit */unsigned int) (_Bool)1);
        }
        /* LoopSeq 1 */
        for (unsigned int i_2 = 4; i_2 < 8; i_2 += 2) 
        {
            /* LoopSeq 1 */
            for (unsigned short i_3 = 3; i_3 < 9; i_3 += 4) 
            {
                arr_14 [i_3] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((int) var_7)) & (min((var_9), (((/* implicit */int) (unsigned char)166)))))))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (short i_4 = 0; i_4 < 11; i_4 += 2) 
                {
                    var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_10 [i_0] [i_3] [i_0 - 1])) ? (arr_10 [i_0] [i_0] [i_0 - 1]) : (var_1))))));
                    var_18 = ((/* implicit */long long int) ((unsigned int) var_2));
                }
                for (unsigned long long int i_5 = 0; i_5 < 11; i_5 += 2) 
                {
                    var_19 = ((/* implicit */signed char) (((_Bool)1) ? ((((!((_Bool)0))) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */_Bool) (unsigned short)57914)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))) : (((((/* implicit */_Bool) 12615532599753175336ULL)) ? ((~(((/* implicit */int) (unsigned short)60829)))) : (min((((/* implicit */int) (_Bool)1)), (1343956926)))))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (short i_6 = 2; i_6 < 10; i_6 += 1) /* same iter space */
                    {
                        arr_24 [(short)1] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-20311)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_0]))) : (arr_4 [i_0 + 1] [i_2 + 3] [i_3 - 1])));
                        arr_25 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (unsigned char)44))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_0] [i_0 - 1] [i_0] [i_3]))) : (arr_13 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_2 - 3])));
                        var_20 = ((/* implicit */_Bool) ((6983141523375956178ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_2 - 1] [i_6 - 2])))));
                        var_21 = ((/* implicit */_Bool) ((long long int) (_Bool)0));
                    }
                    for (short i_7 = 2; i_7 < 10; i_7 += 1) /* same iter space */
                    {
                        var_22 ^= ((((/* implicit */_Bool) arr_18 [i_3 - 1] [i_3 - 1] [i_3] [i_3])) ? (((/* implicit */unsigned long long int) ((long long int) arr_18 [i_3 - 2] [0] [0] [i_3 - 1]))) : (((3924265923125757989ULL) - (((/* implicit */unsigned long long int) arr_18 [i_3 - 1] [i_3 - 1] [i_5] [i_5])))));
                        var_23 = ((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) (unsigned short)7621)) ? (2147483647) : (((/* implicit */int) arr_27 [i_5] [i_7 - 1] [i_7] [i_7] [i_7 - 1])))));
                        arr_28 [i_0] [0ULL] [9LL] [i_3] [i_5] [i_7] = ((/* implicit */signed char) min(((_Bool)0), ((_Bool)1)));
                        arr_29 [i_0] [8ULL] [i_3 + 1] [i_2] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? ((-(((/* implicit */int) arr_23 [i_2 - 1] [4U] [i_5] [i_7] [i_0] [i_0])))) : (((/* implicit */int) arr_23 [i_2 - 1] [i_3] [i_5] [i_5] [i_0] [i_5]))));
                    }
                    var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) (((((_Bool)1) || (((/* implicit */_Bool) ((var_8) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)86))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_0] [8LL] [i_3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)58800))) : (18446744073709551615ULL)))) ? (arr_22 [i_3] [i_3 - 3] [i_0 - 1] [6LL] [6LL] [8ULL] [i_2 - 2]) : (((/* implicit */long long int) ((/* implicit */int) (!((_Bool)1))))))) : (((/* implicit */long long int) min((((/* implicit */int) ((((/* implicit */int) arr_6 [i_5] [i_2] [i_3])) >= (((/* implicit */int) (_Bool)1))))), (((((/* implicit */_Bool) 5197037423419848538LL)) ? (((/* implicit */int) (unsigned char)242)) : (((/* implicit */int) (short)0))))))))))));
                    arr_30 [i_3] [i_0] [i_3] [i_5] = ((/* implicit */unsigned int) (~(-4105379552546252679LL)));
                    var_25 = arr_16 [i_0];
                }
            }
            var_26 = ((/* implicit */int) ((((/* implicit */_Bool) (((((_Bool)1) ? (((/* implicit */int) (unsigned short)40268)) : (((/* implicit */int) (_Bool)1)))) % (((((((/* implicit */int) arr_1 [i_2 - 3] [i_0])) + (2147483647))) >> (((((/* implicit */int) (unsigned short)40268)) - (40248)))))))) ? ((~(10500467325210629488ULL))) : (((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)1088))))) ? (var_1) : ((~(var_1)))))));
            var_27 += ((/* implicit */signed char) ((unsigned short) ((((/* implicit */int) (_Bool)1)) << (((((((/* implicit */_Bool) 5831211473956376269ULL)) ? (((/* implicit */int) (unsigned short)6411)) : (((/* implicit */int) (unsigned char)131)))) - (6387))))));
        }
    }
    for (signed char i_8 = 0; i_8 < 24; i_8 += 2) 
    {
        var_28 = ((/* implicit */signed char) ((((min((4105379552546252678LL), (((/* implicit */long long int) arr_32 [i_8])))) > (((((/* implicit */_Bool) 3788708317U)) ? (((/* implicit */long long int) 2820956045U)) : (-6720660192476578424LL))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_32 [i_8])) || ((_Bool)1))))) : (min((((/* implicit */long long int) (_Bool)1)), (min((((/* implicit */long long int) 146117246U)), (var_13)))))));
        var_29 ^= ((/* implicit */unsigned int) ((min((((/* implicit */unsigned long long int) var_0)), (((((/* implicit */_Bool) 8974579094465288417LL)) ? (((/* implicit */unsigned long long int) 2820956045U)) : (17184811156207777508ULL))))) >> (((min((((/* implicit */int) ((unsigned short) 146117246U))), (1896035653))) - (37476)))));
    }
    for (unsigned long long int i_9 = 4; i_9 < 19; i_9 += 2) 
    {
        arr_36 [i_9] = ((/* implicit */int) arr_33 [i_9]);
        var_30 = ((_Bool) ((arr_31 [i_9 - 3]) ? (((/* implicit */int) arr_33 [i_9 - 1])) : (((/* implicit */int) (short)16368))));
    }
    var_31 = ((/* implicit */unsigned int) ((_Bool) (+(var_1))));
}
