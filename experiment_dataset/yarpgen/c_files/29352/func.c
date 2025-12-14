/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29352
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29352 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29352
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
    /* LoopSeq 4 */
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        var_16 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_1 [i_0])), (arr_0 [i_0])))) ? ((~(771291278))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0])))))));
        var_17 ^= ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_1 [i_0])), ((+(arr_0 [i_0])))))) || (((/* implicit */_Bool) (-(((/* implicit */int) arr_1 [i_0]))))));
    }
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
    {
        var_18 = ((/* implicit */unsigned long long int) 0LL);
        var_19 = ((/* implicit */long long int) ((arr_2 [i_1]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_3 [i_1])))) : (max((2315453429419948031ULL), (((/* implicit */unsigned long long int) (unsigned short)16))))));
        arr_4 [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */int) ((2315453429419948014ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_1 - 1])))))) == (((/* implicit */int) (!(arr_2 [i_1 - 1]))))));
    }
    for (long long int i_2 = 0; i_2 < 10; i_2 += 2) /* same iter space */
    {
        var_20 ^= ((/* implicit */signed char) max((((/* implicit */unsigned long long int) (+(((/* implicit */int) max((((/* implicit */short) (_Bool)1)), (arr_1 [2LL]))))))), (min((((/* implicit */unsigned long long int) 330906870)), (10984363485778216297ULL)))));
        var_21 = ((/* implicit */long long int) ((((((/* implicit */_Bool) min((arr_5 [7ULL]), (((/* implicit */int) arr_7 [9LL]))))) || (((/* implicit */_Bool) ((arr_6 [i_2]) << (((arr_6 [i_2]) - (696248224U)))))))) ? (max((((/* implicit */unsigned long long int) ((unsigned short) 1101364677159804243ULL))), (16131290644289603599ULL))) : (((/* implicit */unsigned long long int) (~(arr_6 [i_2]))))));
        arr_9 [i_2] = ((/* implicit */_Bool) ((max((min((11476990602846457079ULL), (2315453429419948044ULL))), (min((10ULL), (((/* implicit */unsigned long long int) arr_1 [i_2])))))) << (((max(((+(330906870))), (((((/* implicit */int) arr_3 [i_2])) + (((/* implicit */int) arr_3 [i_2])))))) - (330906821)))));
    }
    /* vectorizable */
    for (long long int i_3 = 0; i_3 < 10; i_3 += 2) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_4 = 0; i_4 < 10; i_4 += 2) 
        {
            var_22 = ((/* implicit */short) (-(arr_12 [i_4] [i_4] [i_3])));
            /* LoopSeq 1 */
            for (long long int i_5 = 0; i_5 < 10; i_5 += 3) 
            {
                /* LoopSeq 1 */
                for (signed char i_6 = 0; i_6 < 10; i_6 += 3) 
                {
                    var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) (!(((/* implicit */_Bool) -330906855)))))));
                    arr_21 [i_3] [i_3] [i_3] [i_3] [i_6] = ((/* implicit */unsigned long long int) (~(-1466241227)));
                    /* LoopSeq 3 */
                    for (short i_7 = 0; i_7 < 10; i_7 += 2) /* same iter space */
                    {
                        var_24 = ((/* implicit */_Bool) ((11476990602846457083ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)56)))));
                        var_25 += ((/* implicit */signed char) (~(arr_12 [i_4] [i_6] [i_7])));
                        var_26 = ((/* implicit */unsigned long long int) max((var_26), (((/* implicit */unsigned long long int) ((arr_12 [i_4] [(signed char)0] [i_4]) >= (((/* implicit */unsigned long long int) -1466241234)))))));
                        var_27 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_5 [i_7]))));
                    }
                    for (short i_8 = 0; i_8 < 10; i_8 += 2) /* same iter space */
                    {
                        arr_28 [i_6] [i_6] = ((/* implicit */int) (!(((/* implicit */_Bool) ((signed char) arr_11 [i_4])))));
                        arr_29 [i_4] [i_6] [i_4] = ((/* implicit */long long int) ((signed char) arr_14 [i_3] [i_4] [i_5]));
                        arr_30 [i_8] [i_6] [i_5] [i_6] [i_3] = ((/* implicit */long long int) arr_14 [i_8] [i_5] [i_3]);
                    }
                    for (short i_9 = 0; i_9 < 10; i_9 += 2) /* same iter space */
                    {
                        arr_35 [i_6] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_6]))) % (arr_22 [i_3] [i_4] [i_5] [i_6] [i_3]))))));
                        var_28 = ((/* implicit */long long int) (!((!(((/* implicit */_Bool) (unsigned short)0))))));
                        var_29 ^= ((/* implicit */long long int) (~(((/* implicit */int) (short)-32748))));
                        var_30 = ((((/* implicit */int) (signed char)90)) < (arr_5 [i_4]));
                    }
                }
                var_31 = ((/* implicit */unsigned long long int) min((var_31), ((-(arr_17 [i_3])))));
                var_32 = ((/* implicit */long long int) min((var_32), (((/* implicit */long long int) (~(((/* implicit */int) arr_26 [i_3] [i_4] [i_5] [i_5] [i_3] [i_3] [i_3])))))));
            }
        }
        var_33 = ((/* implicit */signed char) (~(((/* implicit */int) (_Bool)1))));
    }
    var_34 = ((/* implicit */signed char) (+((~(((/* implicit */int) var_7))))));
    var_35 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) var_9)), (((((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)-90))))) ^ (min((var_0), (12609501838071525038ULL)))))));
    var_36 = ((/* implicit */unsigned char) var_2);
}
