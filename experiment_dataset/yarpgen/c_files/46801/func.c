/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46801
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46801 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46801
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
    var_12 = ((/* implicit */unsigned short) (+(((unsigned long long int) (!(((/* implicit */_Bool) 141057479)))))));
    var_13 ^= ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) min((var_5), (((/* implicit */unsigned long long int) var_4))))) ? (((/* implicit */unsigned long long int) var_0)) : (((var_7) + (((/* implicit */unsigned long long int) var_2))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_0 = 3; i_0 < 8; i_0 += 2) 
    {
        var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) var_0))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 141057465)) && (((/* implicit */_Bool) 17796862465885411194ULL)))))) : (((((/* implicit */_Bool) 1338170265U)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [(unsigned short)7] [i_0]))) : (1338170265U)))));
        /* LoopNest 3 */
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 10; i_2 += 2) 
            {
                for (short i_3 = 0; i_3 < 10; i_3 += 2) 
                {
                    {
                        /* LoopSeq 2 */
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            var_15 = ((/* implicit */_Bool) ((unsigned short) (unsigned short)7583));
                            var_16 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_0 - 3] [(unsigned short)9] [i_0 - 1] [i_0] [i_0 - 3] [i_0 + 1] [i_0]))) < (var_11)));
                        }
                        for (signed char i_5 = 3; i_5 < 9; i_5 += 2) 
                        {
                            var_17 = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) arr_14 [i_0] [i_0 + 1] [i_0] [4U])))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) -534839284)))))) : (((((/* implicit */_Bool) -1387669640)) ? (arr_12 [i_5]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)0)))))));
                            var_18 = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_5])) && (((/* implicit */_Bool) var_7))))) < (((/* implicit */int) ((11732270625139553168ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-6))))))));
                        }
                        arr_18 [i_0] [i_0] [i_0] [i_0] [i_0 - 1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 1779169282)) ? (17257177349324127135ULL) : (((16322187497910215393ULL) + (((/* implicit */unsigned long long int) 2956797030U))))));
                        var_19 ^= ((/* implicit */_Bool) arr_17 [i_0]);
                    }
                } 
            } 
        } 
    }
    for (int i_6 = 3; i_6 < 16; i_6 += 2) 
    {
        var_20 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) 8481569956132958307ULL)) || (((/* implicit */_Bool) 1338170265U))));
        /* LoopNest 3 */
        for (int i_7 = 3; i_7 < 14; i_7 += 2) 
        {
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                for (unsigned long long int i_9 = 0; i_9 < 18; i_9 += 2) 
                {
                    {
                        arr_27 [i_6] [i_6 - 1] [i_6] [i_6] = ((((/* implicit */unsigned long long int) var_0)) - (((((/* implicit */_Bool) ((10983360165467872810ULL) - (((/* implicit */unsigned long long int) 653973266))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_6]))) : ((-(16492414678379984516ULL))))));
                        var_21 = ((/* implicit */signed char) ((_Bool) (!(((/* implicit */_Bool) var_10)))));
                        arr_28 [i_6] [i_6] [i_6 + 1] [i_6] [i_6] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */unsigned long long int) 1995881600)) : (arr_25 [i_6] [i_6] [i_6 + 2] [i_6] [i_6] [i_6])))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) var_2)) >= (8005694557950468628ULL)))) : (((/* implicit */int) arr_24 [i_6]))))) && (((/* implicit */_Bool) ((max((((/* implicit */unsigned long long int) var_2)), (var_5))) + (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_24 [i_6]), (((/* implicit */unsigned char) (_Bool)1))))))))));
                    }
                } 
            } 
        } 
    }
}
