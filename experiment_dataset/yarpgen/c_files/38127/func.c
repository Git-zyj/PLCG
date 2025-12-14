/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38127
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38127 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38127
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
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 1; i_0 < 13; i_0 += 1) 
    {
        var_15 = ((/* implicit */int) (((!(((/* implicit */_Bool) arr_0 [i_0 - 1] [i_0 - 1])))) ? (((((/* implicit */_Bool) min((arr_0 [i_0] [i_0]), (var_0)))) ? (((unsigned long long int) var_4)) : (arr_1 [i_0 - 1]))) : ((-((-(var_5)))))));
        var_16 = ((/* implicit */int) ((unsigned long long int) (~(arr_1 [i_0 + 1]))));
        var_17 = ((/* implicit */int) 6700743164946544418ULL);
    }
    /* LoopSeq 1 */
    for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
    {
        arr_5 [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) (+(var_5)))) ? (12911101538072633161ULL) : (((/* implicit */unsigned long long int) (~((~(-2133296747))))))));
        /* LoopSeq 3 */
        for (unsigned long long int i_2 = 0; i_2 < 18; i_2 += 1) /* same iter space */
        {
            arr_9 [i_2] [i_1] [i_2] = ((((unsigned long long int) (~(-642972836)))) + (((/* implicit */unsigned long long int) (+(min((((/* implicit */int) var_12)), (var_4)))))));
            var_18 = -642972831;
        }
        for (unsigned long long int i_3 = 0; i_3 < 18; i_3 += 1) /* same iter space */
        {
            var_19 = ((((/* implicit */_Bool) arr_3 [i_1 + 1] [i_1])) ? (2147483647) : (2147483646));
            arr_12 [i_1] = ((/* implicit */int) var_10);
        }
        for (unsigned long long int i_4 = 0; i_4 < 18; i_4 += 1) /* same iter space */
        {
            /* LoopSeq 2 */
            /* vectorizable */
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                /* LoopSeq 3 */
                for (unsigned long long int i_6 = 2; i_6 < 17; i_6 += 3) 
                {
                    var_20 = ((/* implicit */int) (+(var_10)));
                    arr_20 [i_1] [i_4] [i_5] [i_1] [(_Bool)1] [(_Bool)1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_1])) ? ((+(14351671638674415283ULL))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) * (var_14)))));
                    arr_21 [i_5] [i_4] [i_5] [i_1] = ((/* implicit */_Bool) 10424382986625247222ULL);
                }
                for (int i_7 = 1; i_7 < 16; i_7 += 1) 
                {
                    var_21 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) 1194112237)) ? (var_6) : (((/* implicit */unsigned long long int) var_3)))) - (var_9)));
                    var_22 = ((/* implicit */int) (+(10424382986625247222ULL)));
                    var_23 = ((/* implicit */unsigned long long int) arr_3 [i_1] [i_1]);
                }
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    arr_26 [i_1 + 1] [i_1] [i_5] [i_8] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) 126ULL)) || (((/* implicit */_Bool) var_9)))) ? (var_0) : (((/* implicit */int) var_2))));
                    var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_0)))))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_9 = 2; i_9 < 15; i_9 += 3) 
                    {
                        var_25 = ((/* implicit */unsigned long long int) ((int) var_10));
                        arr_29 [i_9] [i_8] [12ULL] [i_1] [i_5] [i_4] [i_1] = ((/* implicit */int) (+(var_5)));
                        var_26 += ((/* implicit */_Bool) (~(2256107865803208308ULL)));
                    }
                }
                /* LoopSeq 4 */
                for (int i_10 = 0; i_10 < 18; i_10 += 1) /* same iter space */
                {
                    var_27 = ((/* implicit */_Bool) var_7);
                    var_28 = (~(var_0));
                }
                for (int i_11 = 0; i_11 < 18; i_11 += 1) /* same iter space */
                {
                    var_29 ^= ((/* implicit */int) ((_Bool) arr_6 [i_1 + 1] [i_1 + 1]));
                    var_30 = var_14;
                    var_31 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_24 [i_1]))))) ? (((((/* implicit */unsigned long long int) arr_23 [i_1] [i_4] [i_5])) ^ (var_5))) : (((/* implicit */unsigned long long int) -642972836))));
                }
                for (int i_12 = 0; i_12 < 18; i_12 += 1) /* same iter space */
                {
                    arr_37 [i_1] [i_4] [i_4] [i_4] [i_4] = (((_Bool)1) ? (((/* implicit */unsigned long long int) 2147483646)) : (var_9));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_13 = 0; i_13 < 18; i_13 += 1) 
                    {
                        var_32 = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned long long int) arr_31 [i_1] [i_5] [i_1]))) ? (var_5) : ((((_Bool)1) ? (1046528ULL) : (((/* implicit */unsigned long long int) 642972836))))));
                        var_33 = ((((/* implicit */_Bool) ((var_8) ? (var_0) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) (-(var_4)))) : (6438267072319452445ULL));
                        arr_42 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1 + 1] = ((/* implicit */_Bool) (~((+(((/* implicit */int) arr_28 [i_13] [i_12] [i_1] [i_1] [i_4] [i_1]))))));
                        arr_43 [(_Bool)1] [i_1] [i_5] [i_5] [i_4] [i_1] [i_1 + 1] = ((((((/* implicit */_Bool) var_7)) ? (var_1) : (var_0))) | ((~(-642972831))));
                    }
                    var_34 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (arr_25 [i_1 + 1] [0] [0]) : ((+(57344)))));
                    var_35 = ((/* implicit */_Bool) var_5);
                }
                for (int i_14 = 0; i_14 < 18; i_14 += 1) /* same iter space */
                {
                    var_36 = (-(var_0));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_15 = 0; i_15 < 18; i_15 += 3) 
                    {
                        var_37 = ((((/* implicit */_Bool) arr_25 [i_1] [i_1] [i_1])) ? (((/* implicit */int) arr_33 [i_1])) : (((/* implicit */int) var_2)));
                        var_38 = ((/* implicit */int) ((((/* implicit */_Bool) arr_32 [i_1] [i_4] [i_1] [i_4] [i_1 + 1])) ? (((unsigned long long int) var_14)) : (((unsigned long long int) var_9))));
                    }
                }
            }
            for (unsigned long long int i_16 = 1; i_16 < 16; i_16 += 1) 
            {
                var_39 = var_14;
                arr_53 [i_1] [i_4] [i_16] [i_16] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_14))))) : (var_0)));
            }
            var_40 ^= ((/* implicit */_Bool) -57345);
        }
        var_41 = ((/* implicit */_Bool) var_11);
        var_42 = ((/* implicit */unsigned long long int) (_Bool)1);
    }
}
