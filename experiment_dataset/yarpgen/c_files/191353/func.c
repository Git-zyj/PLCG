/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191353
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191353 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191353
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
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) ((818675973U) + (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))));
        var_11 = ((/* implicit */long long int) min((var_11), (((/* implicit */long long int) ((((/* implicit */int) (_Bool)0)) << (((/* implicit */int) ((((/* implicit */unsigned long long int) min((((/* implicit */long long int) (short)32634)), (var_2)))) <= (arr_0 [i_0])))))))));
    }
    for (unsigned long long int i_1 = 2; i_1 < 14; i_1 += 2) /* same iter space */
    {
        arr_5 [i_1] = ((/* implicit */_Bool) (~(arr_3 [i_1] [i_1 + 1])));
        arr_6 [i_1] [i_1] = ((/* implicit */unsigned long long int) var_4);
    }
    for (unsigned long long int i_2 = 2; i_2 < 14; i_2 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned char i_3 = 3; i_3 < 15; i_3 += 4) 
        {
            for (int i_4 = 0; i_4 < 16; i_4 += 2) 
            {
                {
                    var_12 = min((6952040557494841506LL), (min((((/* implicit */long long int) min((((/* implicit */unsigned char) var_7)), (arr_7 [i_3])))), ((-(arr_3 [i_4] [i_2]))))));
                    arr_13 [i_3] [i_3] = ((/* implicit */_Bool) ((min((var_3), (((/* implicit */unsigned long long int) var_4)))) / (((/* implicit */unsigned long long int) max((((-1456897153) / (((/* implicit */int) var_10)))), (var_6))))));
                }
            } 
        } 
        var_13 = ((/* implicit */signed char) max((var_13), (((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)46))) == (var_9))))));
        /* LoopNest 2 */
        for (long long int i_5 = 0; i_5 < 16; i_5 += 3) 
        {
            for (unsigned char i_6 = 0; i_6 < 16; i_6 += 2) 
            {
                {
                    arr_18 [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) ((arr_14 [i_2] [(_Bool)1] [(_Bool)1]) | (((/* implicit */int) arr_16 [i_2] [3] [i_6] [i_2]))));
                    /* LoopNest 2 */
                    for (long long int i_7 = 0; i_7 < 16; i_7 += 2) 
                    {
                        for (signed char i_8 = 0; i_8 < 16; i_8 += 2) 
                        {
                            {
                                var_14 = ((/* implicit */short) -1048898128);
                                var_15 = ((/* implicit */signed char) arr_16 [i_5] [i_7] [i_6] [i_5]);
                                arr_24 [i_2] [i_2] [3] [i_2] [i_8] [i_8] = ((/* implicit */unsigned short) (+(13068000059489311531ULL)));
                                var_16 = ((/* implicit */signed char) (unsigned char)209);
                            }
                        } 
                    } 
                    arr_25 [i_6] [i_5] [i_2] = ((/* implicit */int) var_2);
                }
            } 
        } 
        /* LoopNest 2 */
        for (signed char i_9 = 1; i_9 < 14; i_9 += 2) 
        {
            for (unsigned char i_10 = 1; i_10 < 13; i_10 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_11 = 1; i_11 < 14; i_11 += 2) 
                    {
                        for (unsigned char i_12 = 3; i_12 < 13; i_12 += 4) 
                        {
                            {
                                arr_39 [(_Bool)1] [i_2] &= ((/* implicit */int) var_2);
                                arr_40 [i_9] [i_9] [i_9] [i_9] [i_12] = ((/* implicit */int) (~(((var_9) + (max((-1868324480988730680LL), (((/* implicit */long long int) var_1))))))));
                            }
                        } 
                    } 
                    arr_41 [i_2 + 1] [i_9] [(signed char)4] [i_10] = ((/* implicit */unsigned short) ((((/* implicit */long long int) min(((~(((/* implicit */int) (unsigned char)218)))), (((/* implicit */int) var_1))))) * (max((min((var_2), (-6952040557494841507LL))), (((/* implicit */long long int) arr_4 [i_2]))))));
                }
            } 
        } 
        arr_42 [(unsigned char)7] [(unsigned char)7] &= ((/* implicit */unsigned short) ((var_9) - (((/* implicit */long long int) ((/* implicit */int) (signed char)-84)))));
    }
    for (unsigned long long int i_13 = 2; i_13 < 14; i_13 += 2) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_14 = 0; i_14 < 16; i_14 += 2) 
        {
            for (long long int i_15 = 1; i_15 < 13; i_15 += 2) 
            {
                for (signed char i_16 = 3; i_16 < 14; i_16 += 2) 
                {
                    {
                        var_17 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((-3609626524166363967LL) | (((/* implicit */long long int) ((/* implicit */int) arr_53 [i_13] [i_14] [(unsigned char)2])))))) | (((max((5249919949100932765ULL), (var_3))) | (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
                        arr_58 [i_13] [i_13] [i_13] [i_13] = ((/* implicit */unsigned int) -2682057321519522443LL);
                        arr_59 [13] [13] [i_15] [13] |= ((/* implicit */int) -8202031794648998762LL);
                        arr_60 [i_16] [i_14] [i_15] [i_16] = ((/* implicit */unsigned char) ((min((min((var_9), (((/* implicit */long long int) 3476291323U)))), (((/* implicit */long long int) max((((/* implicit */int) arr_57 [i_13] [i_13] [i_13] [i_13])), (584644768)))))) & (min((((/* implicit */long long int) min((1637844495U), (((/* implicit */unsigned int) var_4))))), (7549196668606499232LL)))));
                    }
                } 
            } 
        } 
        arr_61 [i_13] [1U] = ((/* implicit */unsigned short) (((-(((/* implicit */int) var_7)))) + (((/* implicit */int) (_Bool)0))));
        var_18 = ((/* implicit */unsigned long long int) min((var_10), (((/* implicit */unsigned char) (_Bool)1))));
        arr_62 [i_13] = ((/* implicit */signed char) (~((~(arr_37 [i_13] [i_13] [i_13] [i_13 + 2] [i_13] [i_13] [i_13])))));
        arr_63 [i_13] = ((/* implicit */int) var_8);
    }
    var_19 = ((/* implicit */int) ((((/* implicit */unsigned long long int) 818675973U)) % (max((((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)-35)) | (((/* implicit */int) (unsigned char)29))))), (max((var_3), (((/* implicit */unsigned long long int) var_2))))))));
}
