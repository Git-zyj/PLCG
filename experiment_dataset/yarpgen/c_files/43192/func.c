/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43192
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43192 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43192
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 20; i_0 += 2) /* same iter space */
    {
        var_19 *= ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 14846441647089455313ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)58853))) : (-9LL))))));
        /* LoopSeq 4 */
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned short i_2 = 0; i_2 < 20; i_2 += 1) 
            {
                for (unsigned int i_3 = 0; i_3 < 20; i_3 += 4) 
                {
                    {
                        var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) arr_7 [i_0]))));
                        var_21 *= (~((~(arr_10 [i_0] [18LL] [i_0] [i_0]))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (int i_4 = 2; i_4 < 19; i_4 += 4) 
            {
                for (unsigned char i_5 = 0; i_5 < 20; i_5 += 1) 
                {
                    {
                        arr_18 [i_1] [i_5] [i_4] [i_4 - 1] [i_1] [i_1] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (unsigned short)25165)) ? (4045314468327162716LL) : (-1476365544354054092LL))) | (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_14 [i_0] [i_1] [i_1]))))))));
                        var_22 = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) arr_11 [(unsigned short)5] [19ULL] [i_4])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0]))) : (arr_17 [i_0] [5LL] [i_0] [4LL] [i_4] [i_5])))));
                        arr_19 [i_1] [i_4] [i_1] [i_1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned short)65535))));
                        var_23 &= arr_4 [i_0];
                        arr_20 [i_1] [(unsigned char)3] [14LL] = ((/* implicit */long long int) (~((-(((/* implicit */int) arr_2 [i_0] [i_5]))))));
                    }
                } 
            } 
        }
        for (long long int i_6 = 3; i_6 < 19; i_6 += 2) 
        {
            var_24 = ((/* implicit */unsigned short) (((-(arr_16 [i_0] [i_0] [i_0] [i_0] [i_0]))) * (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -4045314468327162725LL))))))));
            arr_24 [(signed char)15] &= ((/* implicit */unsigned short) arr_5 [6LL] [6LL]);
        }
        for (unsigned long long int i_7 = 0; i_7 < 20; i_7 += 2) 
        {
            arr_29 [i_0] [17ULL] [i_7] = ((/* implicit */short) ((((/* implicit */_Bool) -13LL)) ? (-4045314468327162716LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)14)))));
            var_25 &= ((/* implicit */unsigned long long int) ((arr_11 [i_0] [i_0] [i_0]) ^ (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_16 [i_0] [i_0] [i_7] [i_0] [i_7]))))))));
        }
        for (int i_8 = 2; i_8 < 18; i_8 += 3) 
        {
            var_26 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) arr_10 [i_0] [i_0] [4LL] [i_0])) ? (((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0] [i_8] [i_8])) : (arr_5 [i_0] [(unsigned short)11])))));
            var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_5 [i_8 + 1] [i_8])) ? (((/* implicit */int) ((unsigned short) (unsigned short)0))) : ((-(((/* implicit */int) arr_1 [i_0]))))));
            var_28 = ((/* implicit */unsigned int) (~((-(arr_5 [i_0] [i_8])))));
            var_29 = ((/* implicit */signed char) ((long long int) (!(((/* implicit */_Bool) arr_30 [i_0])))));
            arr_33 [i_0] [i_8] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)40397))))) == ((~(((/* implicit */int) (signed char)75))))));
        }
    }
    for (int i_9 = 0; i_9 < 20; i_9 += 2) /* same iter space */
    {
        var_30 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_21 [i_9])) ? (((/* implicit */int) arr_25 [(unsigned char)14])) : (((/* implicit */int) arr_25 [i_9]))))))) ? (((/* implicit */int) (!((!(((/* implicit */_Bool) arr_5 [i_9] [i_9]))))))) : (((/* implicit */int) max((max((arr_32 [i_9] [i_9] [i_9]), (((/* implicit */unsigned short) arr_9 [(short)9] [(short)9] [(short)9] [i_9] [i_9] [i_9])))), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_23 [(unsigned short)18] [i_9]))))))))));
        var_31 = ((/* implicit */int) min((((/* implicit */unsigned int) (unsigned short)65532)), (1337881793U)));
        /* LoopSeq 1 */
        for (unsigned short i_10 = 0; i_10 < 20; i_10 += 2) 
        {
            arr_38 [(unsigned short)16] [i_9] [i_10] = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) -9007199254740992LL)), (8880551117275037953ULL)))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [(unsigned char)0] [i_10] [i_10])) ? (((/* implicit */int) arr_36 [i_9] [i_10] [i_10])) : (((/* implicit */int) arr_9 [i_9] [i_9] [i_10] [i_10] [i_10] [i_10]))))) && (((/* implicit */_Bool) (-(arr_6 [i_9] [i_10] [i_10] [i_10])))))))) : (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_27 [i_9] [i_9] [i_10])), (arr_37 [i_9] [i_10])))) ? (((((/* implicit */long long int) ((/* implicit */int) arr_34 [i_9] [i_9]))) % (arr_11 [i_9] [i_9] [i_9]))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_37 [i_9] [i_10]))))))))));
            var_32 = ((/* implicit */signed char) ((unsigned char) min((((((/* implicit */_Bool) arr_1 [i_10])) ? (arr_10 [i_9] [(unsigned short)14] [i_9] [(unsigned short)14]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_10]))))), (((/* implicit */unsigned long long int) ((short) arr_25 [i_10]))))));
            /* LoopNest 2 */
            for (int i_11 = 0; i_11 < 20; i_11 += 1) 
            {
                for (unsigned long long int i_12 = 0; i_12 < 20; i_12 += 2) 
                {
                    {
                        var_33 = arr_4 [i_9];
                        var_34 ^= ((/* implicit */long long int) min((((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_11] [9LL] [i_10] [i_12] [9LL] [12LL]))) | (arr_41 [12LL] [i_10] [i_11] [i_12] [i_11])))) ? (max((((/* implicit */unsigned long long int) 4LL)), (16601253712014561354ULL))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_25 [(unsigned short)7]))))))), (min(((+(arr_35 [i_9] [i_9]))), (((/* implicit */unsigned long long int) max((arr_27 [i_9] [i_10] [i_11]), (((/* implicit */unsigned int) arr_9 [i_9] [i_9] [i_10] [i_11] [i_9] [i_12])))))))));
                        arr_45 [i_10] [(short)19] = min((((/* implicit */long long int) (!((!(((/* implicit */_Bool) 140737488355327LL))))))), (((arr_11 [i_9] [i_10] [i_10]) | (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_5 [i_9] [i_9])))))));
                        arr_46 [12LL] [i_10] [i_10] [0] [i_12] = ((/* implicit */long long int) (+((+(((/* implicit */int) arr_2 [i_10] [i_10]))))));
                    }
                } 
            } 
        }
    }
    var_35 = ((/* implicit */unsigned int) (-(max((9566192956434513662ULL), (((/* implicit */unsigned long long int) (signed char)-58))))));
}
