/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222034
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222034 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222034
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
    for (unsigned short i_0 = 2; i_0 < 17; i_0 += 1) 
    {
        var_15 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned short) 511U))) ? (((/* implicit */int) arr_0 [i_0] [i_0 - 2])) : ((~(((var_3) ? (arr_1 [i_0 + 2]) : (arr_1 [i_0])))))));
        var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 4294966784U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (1342976793U)));
    }
    for (unsigned short i_1 = 2; i_1 < 8; i_1 += 1) 
    {
        var_17 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (arr_1 [5U]) : (((/* implicit */int) var_8))))) ? (((unsigned long long int) arr_1 [i_1 - 1])) : (((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) : (arr_4 [0])))))) || (((_Bool) ((4294966800U) > (((/* implicit */unsigned int) ((/* implicit */int) var_1))))))));
        /* LoopSeq 3 */
        for (int i_2 = 1; i_2 < 10; i_2 += 2) /* same iter space */
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned int i_3 = 0; i_3 < 11; i_3 += 4) 
            {
                var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) ((((((/* implicit */unsigned int) ((/* implicit */int) var_1))) / (arr_7 [i_3]))) >> (((/* implicit */int) ((_Bool) arr_7 [i_3]))))))));
                /* LoopNest 2 */
                for (short i_4 = 0; i_4 < 11; i_4 += 1) 
                {
                    for (unsigned long long int i_5 = 0; i_5 < 11; i_5 += 1) 
                    {
                        {
                            arr_15 [i_5] [i_5] [i_5] [i_1] = ((/* implicit */_Bool) ((((/* implicit */int) arr_8 [i_1 + 2] [4] [i_1])) / (((/* implicit */int) ((((/* implicit */_Bool) arr_14 [i_1 + 1] [i_1 - 1] [i_1 - 1] [i_1 + 1] [i_1])) && (((/* implicit */_Bool) arr_9 [i_1])))))));
                            var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) 524U))));
                            arr_16 [i_1] = ((/* implicit */unsigned short) ((((((/* implicit */int) var_12)) >= (((/* implicit */int) var_6)))) ? (((int) (_Bool)1)) : (((/* implicit */int) var_8))));
                            arr_17 [i_1] [i_2] [i_3] [i_3] [i_1] [i_3] [i_5] = ((/* implicit */short) (((!(((/* implicit */_Bool) arr_2 [i_1 - 1])))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_5))))) : (4294966771U)));
                        }
                    } 
                } 
            }
            var_20 = ((/* implicit */unsigned short) arr_4 [0]);
        }
        for (int i_6 = 1; i_6 < 10; i_6 += 2) /* same iter space */
        {
            arr_21 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_20 [(unsigned char)3] [i_1])) && (((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_13))))))));
            var_21 = ((/* implicit */int) arr_0 [i_1] [i_6]);
        }
        for (unsigned long long int i_7 = 1; i_7 < 9; i_7 += 1) 
        {
            arr_24 [i_1] [i_7 - 1] = ((/* implicit */unsigned int) arr_1 [3ULL]);
            var_22 = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (var_2)))) ? (((((/* implicit */_Bool) var_0)) ? (arr_4 [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))));
        }
        var_23 += ((/* implicit */unsigned int) arr_13 [i_1 + 3] [4U] [i_1 + 3] [4U]);
    }
    for (unsigned short i_8 = 1; i_8 < 9; i_8 += 1) 
    {
        var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_12 [i_8] [i_8] [i_8] [i_8] [10U] [i_8])) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 510U)) ? (var_11) : (((/* implicit */int) var_8))))) ? (3633478795U) : (((/* implicit */unsigned int) ((/* implicit */int) min((var_0), (((/* implicit */unsigned short) var_5)))))))) : (((((((/* implicit */_Bool) var_0)) ? (arr_9 [(unsigned short)6]) : (511U))) ^ (((/* implicit */unsigned int) (-(((/* implicit */int) var_14)))))))));
        var_25 += ((/* implicit */unsigned char) var_3);
        arr_27 [i_8] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_8] [(_Bool)1] [i_8 + 2]))) * (arr_25 [0ULL])))) ? (min((4294966800U), (((/* implicit */unsigned int) (_Bool)1)))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)25242))) >= (2965731122U))))))), (((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) >= (arr_20 [i_8] [8U])))))));
        /* LoopSeq 1 */
        for (short i_9 = 1; i_9 < 10; i_9 += 1) 
        {
            var_26 ^= ((/* implicit */unsigned short) min((arr_29 [2LL] [2LL] [2LL]), (((((/* implicit */_Bool) max((arr_4 [2]), (((/* implicit */unsigned long long int) -6253169470387707681LL))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_4 [6ULL])) || (((/* implicit */_Bool) var_9))))) : (((int) var_2))))));
            var_27 = ((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_26 [i_8] [i_9]))) : (var_2)))) ? (((long long int) arr_2 [1ULL])) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_12)))))));
            var_28 -= ((/* implicit */unsigned short) 7);
        }
    }
    for (unsigned char i_10 = 0; i_10 < 17; i_10 += 2) 
    {
        var_29 = ((/* implicit */unsigned short) min((var_2), (((((/* implicit */_Bool) ((unsigned long long int) arr_30 [i_10]))) ? (min((517U), (var_7))) : (((/* implicit */unsigned int) max((arr_1 [i_10]), (((/* implicit */int) var_0)))))))));
        /* LoopNest 2 */
        for (unsigned short i_11 = 0; i_11 < 17; i_11 += 4) 
        {
            for (unsigned int i_12 = 1; i_12 < 16; i_12 += 1) 
            {
                {
                    arr_37 [i_10] [i_12] [i_12] = ((/* implicit */unsigned char) var_10);
                    /* LoopSeq 1 */
                    for (unsigned long long int i_13 = 0; i_13 < 17; i_13 += 3) 
                    {
                        arr_41 [i_12 - 1] [i_12] [i_12] [i_12] [i_12 - 1] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((unsigned short) var_4))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4LL)) ? (((/* implicit */long long int) 3535747597U)) : (4LL)))) : (((unsigned long long int) arr_36 [i_12] [i_11] [i_12] [i_13])))) * (((/* implicit */unsigned long long int) var_7))));
                        var_30 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1553454434U)) ? (((/* implicit */int) (unsigned char)219)) : (((/* implicit */int) (unsigned char)194))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_4)) : (arr_30 [i_13])))) : (arr_32 [(_Bool)1] [i_10])))) ? (((/* implicit */int) min(((unsigned char)0), ((unsigned char)63)))) : ((+(((/* implicit */int) ((unsigned char) 206098127)))))));
                        arr_42 [i_10] [i_12] [i_12] [i_12] = ((/* implicit */int) min((((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) arr_39 [i_10] [i_11])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (arr_32 [i_10] [i_10]))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (var_2)))) ? (max((((/* implicit */unsigned long long int) var_7)), (arr_39 [i_11] [i_10]))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_4)) * (((/* implicit */int) var_5)))))))));
                        var_31 = ((/* implicit */int) (!(((((/* implicit */_Bool) ((unsigned int) var_9))) && (((/* implicit */_Bool) min((((/* implicit */unsigned short) var_13)), ((unsigned short)13010))))))));
                    }
                }
            } 
        } 
    }
    var_32 = (-(((/* implicit */int) (unsigned short)65535)));
}
