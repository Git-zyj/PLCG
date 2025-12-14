/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210522
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210522 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210522
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
    var_20 = ((/* implicit */unsigned long long int) 2147483647);
    var_21 &= max((((max((((/* implicit */unsigned long long int) var_13)), (11473425953397821059ULL))) / (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-36))))), (var_8));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 3; i_0 < 11; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            var_22 = ((/* implicit */_Bool) var_6);
            var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_0 - 1] [i_0] [i_1])) ? (((/* implicit */int) ((signed char) 7485327456814509148ULL))) : (((/* implicit */int) arr_2 [i_0] [i_1]))));
            /* LoopNest 3 */
            for (int i_2 = 2; i_2 < 12; i_2 += 2) 
            {
                for (unsigned int i_3 = 0; i_3 < 13; i_3 += 3) 
                {
                    for (int i_4 = 0; i_4 < 13; i_4 += 1) 
                    {
                        {
                            var_24 = ((/* implicit */signed char) ((((_Bool) ((((/* implicit */_Bool) 7485327456814509147ULL)) ? (1832907686) : (((/* implicit */int) (unsigned short)26739))))) ? (((/* implicit */int) (unsigned char)125)) : (((/* implicit */int) ((unsigned char) (signed char)101)))));
                            arr_14 [i_1] [i_1] [i_1] [i_3] [i_0] |= 3387992084U;
                        }
                    } 
                } 
            } 
        }
        var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) ((var_14) % (((/* implicit */int) var_15)))))));
        /* LoopNest 3 */
        for (short i_5 = 3; i_5 < 12; i_5 += 3) 
        {
            for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
            {
                for (long long int i_7 = 2; i_7 < 12; i_7 += 3) 
                {
                    {
                        arr_24 [(signed char)4] &= ((/* implicit */short) (+(((unsigned long long int) arr_16 [i_0] [i_5 - 2] [i_0]))));
                        /* LoopSeq 1 */
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            arr_28 [i_0] [i_5] [i_6 + 1] [i_8] = ((/* implicit */unsigned int) min(((+((-(-7963750481635841367LL))))), (((/* implicit */long long int) arr_21 [i_0 - 3] [i_0] [(_Bool)1] [i_0 - 3] [i_7 - 1] [2ULL]))));
                            var_26 = ((/* implicit */unsigned char) min(((~(((/* implicit */int) arr_6 [i_7 - 1] [(short)6] [i_5 - 3] [i_0 - 3])))), (((((((/* implicit */_Bool) arr_10 [i_0 + 2] [i_6 + 1] [i_7 - 2])) || (((/* implicit */_Bool) var_11)))) ? (((/* implicit */int) arr_25 [i_5] [i_8])) : (((/* implicit */int) min((var_18), (((/* implicit */unsigned short) arr_0 [i_8])))))))));
                        }
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned short i_9 = 4; i_9 < 9; i_9 += 3) 
        {
            arr_33 [i_9 - 2] [i_0 - 3] = ((/* implicit */unsigned char) (((!(((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) var_13)))))) || (((((/* implicit */_Bool) arr_26 [i_0] [i_9] [(unsigned char)0] [i_9])) || (((_Bool) 5077489285682738914ULL))))));
            /* LoopNest 3 */
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
            {
                for (int i_11 = 0; i_11 < 13; i_11 += 2) 
                {
                    for (long long int i_12 = 0; i_12 < 13; i_12 += 3) 
                    {
                        {
                            arr_42 [i_0] [i_10] [i_0] [i_11] [i_12] [i_12] [i_9 - 2] = ((/* implicit */unsigned short) arr_32 [i_9] [i_9]);
                            arr_43 [i_0 + 2] [i_0 + 2] [i_10] [i_11] [i_11] |= (!(((/* implicit */_Bool) 2569523440U)));
                            var_27 = (~(((7963750481635841367LL) & (((/* implicit */long long int) ((((/* implicit */_Bool) arr_30 [i_12])) ? (32767) : (((/* implicit */int) var_15))))))));
                        }
                    } 
                } 
            } 
            var_28 = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) ((7489453791830538332LL) - (((/* implicit */long long int) 2147483647))))) ? (((/* implicit */int) arr_30 [i_0 - 3])) : ((+(((/* implicit */int) var_6))))))));
            /* LoopNest 2 */
            for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
            {
                for (unsigned char i_14 = 0; i_14 < 13; i_14 += 3) 
                {
                    {
                        var_29 = ((((arr_39 [i_0 - 2] [i_0 - 2] [(signed char)4] [(signed char)4] [i_14]) << (((/* implicit */int) (_Bool)1)))) == (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_0 - 2] [i_0 - 2] [i_9 - 4])) ? (arr_10 [i_0 - 2] [i_0 - 2] [i_9 - 4]) : (((/* implicit */unsigned int) var_1))))));
                        var_30 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) (+(arr_26 [i_0 + 2] [i_0 + 1] [0ULL] [0ULL])))) + (((((/* implicit */_Bool) -1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (18446744073709551615ULL)))));
                    }
                } 
            } 
        }
    }
}
