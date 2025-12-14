/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206668
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206668 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206668
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
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 15; i_3 += 4) 
                    {
                        for (short i_4 = 0; i_4 < 15; i_4 += 4) 
                        {
                            {
                                arr_14 [i_0] [i_1] &= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_2])) ? (arr_1 [i_0] [i_0]) : ((+(max((((/* implicit */unsigned long long int) -1085329928228258036LL)), (var_10)))))));
                                var_14 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((long long int) var_13))) ? ((~(arr_2 [i_4]))) : (((unsigned long long int) -1968786717973996713LL)))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_11 [i_0] [i_2] [i_3] [i_4]))))));
                            }
                        } 
                    } 
                } 
                var_15 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) ((var_10) >= (((/* implicit */unsigned long long int) var_7))))) & ((~(((/* implicit */int) arr_9 [i_0] [i_0] [i_1] [i_1] [i_1]))))))) ? (2305843009205305344ULL) : (((/* implicit */unsigned long long int) -370010212))));
                var_16 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 370010196))));
                /* LoopNest 3 */
                for (unsigned short i_5 = 0; i_5 < 15; i_5 += 4) 
                {
                    for (int i_6 = 0; i_6 < 15; i_6 += 4) 
                    {
                        for (unsigned long long int i_7 = 3; i_7 < 13; i_7 += 4) 
                        {
                            {
                                var_17 -= ((/* implicit */_Bool) var_13);
                                var_18 = (unsigned short)21;
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned short i_8 = 0; i_8 < 16; i_8 += 4) 
    {
        for (int i_9 = 0; i_9 < 16; i_9 += 4) 
        {
            for (signed char i_10 = 0; i_10 < 16; i_10 += 4) 
            {
                {
                    arr_30 [i_8] [i_8] [i_8] [i_10] = ((/* implicit */int) max((((((var_6) * (((/* implicit */unsigned long long int) ((/* implicit */int) (short)8870))))) == (((((/* implicit */_Bool) var_4)) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))))))), (((((/* implicit */int) arr_22 [i_8])) <= (370010206)))));
                    var_19 = ((/* implicit */int) ((2305843009205305359ULL) & (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_22 [i_8])) ? (((/* implicit */int) (unsigned short)35272)) : (((/* implicit */int) var_9))))), (((((/* implicit */_Bool) 16140901064504246272ULL)) ? (var_3) : (((/* implicit */unsigned long long int) var_5))))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_11 = 0; i_11 < 16; i_11 += 1) 
                    {
                        for (short i_12 = 1; i_12 < 14; i_12 += 4) 
                        {
                            {
                                var_20 = ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_35 [i_12] [i_9] [i_12 + 1] [i_8] [i_12 - 1] [i_8]))) > (var_5)))) >> (((var_7) + (424351427)))));
                                var_21 = ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)38140))))) ? (var_1) : (((/* implicit */long long int) min((var_5), (((/* implicit */unsigned int) var_4))))))) / (((/* implicit */long long int) arr_36 [i_12 + 2] [i_12 + 1] [i_12 + 1] [i_12 + 1] [i_12 + 1]))));
                                var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_1)) ? (arr_33 [i_8] [i_8] [i_8] [i_12 + 1]) : (((/* implicit */long long int) ((/* implicit */int) arr_24 [i_10])))))))) ? (((/* implicit */unsigned long long int) -370010202)) : (min((((/* implicit */unsigned long long int) arr_25 [i_12])), (((var_3) + (((/* implicit */unsigned long long int) var_5))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_13 = 0; i_13 < 16; i_13 += 1) 
                    {
                        for (unsigned int i_14 = 0; i_14 < 16; i_14 += 4) 
                        {
                            {
                                var_23 = ((/* implicit */unsigned long long int) ((((min((arr_42 [i_8] [i_9] [i_8]), (((/* implicit */unsigned long long int) var_5)))) * (((((/* implicit */_Bool) arr_27 [i_9] [i_9])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_39 [i_9] [i_9] [i_9] [i_9] [i_9]))))) == (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_4))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_40 [10ULL] [i_9] [10ULL] [i_14])) || ((_Bool)0)))) : (((/* implicit */int) ((arr_36 [i_14] [(unsigned short)9] [i_10] [i_8] [i_8]) >= (arr_29 [i_8])))))))));
                                var_24 = ((/* implicit */short) min((var_24), (((/* implicit */short) ((((/* implicit */_Bool) 2305843009205305343ULL)) ? (((/* implicit */int) (short)6179)) : (((/* implicit */int) (unsigned short)49782)))))));
                            }
                        } 
                    } 
                    arr_44 [i_10] [i_9] [i_9] [i_8] = ((/* implicit */short) arr_43 [i_8] [i_8] [1LL] [i_9] [1LL] [i_10] [i_8]);
                }
            } 
        } 
    } 
    var_25 = ((/* implicit */unsigned int) max((((((((/* implicit */_Bool) (short)-18899)) ? (2ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) & (((/* implicit */unsigned long long int) var_7)))), (((/* implicit */unsigned long long int) var_0))));
}
