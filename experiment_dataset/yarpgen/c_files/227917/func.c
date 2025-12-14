/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227917
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227917 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227917
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
    var_10 = ((/* implicit */unsigned short) var_4);
    var_11 = ((((/* implicit */_Bool) var_0)) ? (((((-718773471) + (2147483647))) >> (((var_4) - (154433062))))) : (min((((2147483647) >> (((/* implicit */int) var_9)))), ((+(2147483647))))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 2; i_0 < 20; i_0 += 2) /* same iter space */
    {
        /* LoopSeq 1 */
        for (long long int i_1 = 1; i_1 < 21; i_1 += 2) 
        {
            /* LoopSeq 1 */
            for (long long int i_2 = 4; i_2 < 20; i_2 += 1) 
            {
                var_12 = ((/* implicit */unsigned short) var_5);
                var_13 = ((/* implicit */unsigned long long int) ((long long int) ((((int) 393368761U)) * (((/* implicit */int) ((((/* implicit */int) (short)-32750)) > (((/* implicit */int) (unsigned short)23278))))))));
                arr_6 [i_1] = ((/* implicit */short) var_7);
            }
            arr_7 [i_0] [i_0 + 2] [i_1] = ((/* implicit */unsigned long long int) var_7);
            var_14 ^= ((((((((/* implicit */_Bool) 718773447)) ? (13638883177054359553ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))) * (((/* implicit */unsigned long long int) ((((((/* implicit */int) (signed char)-49)) + (2147483647))) >> (((((/* implicit */int) (unsigned char)96)) - (74)))))))) / (var_0));
        }
        arr_8 [i_0 + 1] = ((/* implicit */long long int) min((max((arr_2 [i_0]), (((/* implicit */unsigned int) var_2)))), (((/* implicit */unsigned int) var_8))));
        arr_9 [i_0] = ((/* implicit */_Bool) min((var_4), (((/* implicit */int) var_8))));
        arr_10 [i_0 + 1] [i_0 + 3] = ((/* implicit */unsigned long long int) ((long long int) min((((var_3) % (13638883177054359553ULL))), (min((var_3), (((/* implicit */unsigned long long int) arr_4 [i_0] [i_0] [i_0] [i_0])))))));
    }
    for (unsigned int i_3 = 2; i_3 < 20; i_3 += 2) /* same iter space */
    {
        /* LoopSeq 3 */
        for (unsigned long long int i_4 = 0; i_4 < 23; i_4 += 3) 
        {
            arr_16 [i_3 + 2] [i_3] &= ((/* implicit */short) ((((/* implicit */_Bool) min((var_3), (max((13638883177054359557ULL), (var_5)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_4] [i_4]))) : (((((/* implicit */_Bool) ((unsigned long long int) 5316638138741488739LL))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) * (4807860896655192063ULL)))))));
            var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((var_0) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))), (((3996905504840244290ULL) / (((/* implicit */unsigned long long int) arr_0 [i_3 + 3] [i_3 + 3]))))))) ? (((arr_14 [i_3 + 1] [i_4]) ? (4329327034368ULL) : (var_3))) : (4329327034368ULL)));
        }
        for (signed char i_5 = 0; i_5 < 23; i_5 += 3) /* same iter space */
        {
            var_16 = ((/* implicit */unsigned char) var_0);
            arr_21 [i_3] = ((/* implicit */int) var_0);
            arr_22 [i_5] [i_3] [19ULL] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((min((var_0), (((/* implicit */unsigned long long int) 4182947170U)))), ((+(1423681300698597689ULL)))))) ? (min((((/* implicit */unsigned long long int) (~(718773442)))), ((~(var_3))))) : (((/* implicit */unsigned long long int) min((((var_7) ^ (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_5] [i_3 - 1]))))), (((/* implicit */long long int) ((var_5) > (((/* implicit */unsigned long long int) var_4))))))))));
            arr_23 [i_3] = ((/* implicit */long long int) var_4);
            var_17 = ((/* implicit */unsigned char) min(((~(min((((/* implicit */unsigned long long int) 393368773U)), (var_3))))), (arr_20 [i_3 + 3])));
        }
        /* vectorizable */
        for (signed char i_6 = 0; i_6 < 23; i_6 += 3) /* same iter space */
        {
            arr_27 [i_3] [i_6] [i_6] = ((/* implicit */short) 2133771693);
            var_18 = (!(((/* implicit */_Bool) 2641957039U)));
        }
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned short i_7 = 1; i_7 < 22; i_7 += 4) 
        {
            arr_31 [i_7] = ((/* implicit */unsigned int) ((((var_2) ? (3996905504840244290ULL) : (((/* implicit */unsigned long long int) 431722005U)))) > (((((/* implicit */unsigned long long int) 4141298944215706510LL)) / (14449838568869307337ULL)))));
            arr_32 [i_7] [i_7] = ((/* implicit */int) 14986151554053136930ULL);
            var_19 = ((/* implicit */unsigned short) var_5);
        }
    }
}
