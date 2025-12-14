/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205132
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205132 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205132
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
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)212)) % ((-(((/* implicit */int) arr_2 [i_0] [i_0])))))))));
        var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)64769)) ? (var_14) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)60870)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_0]))) : (((((/* implicit */_Bool) var_14)) ? (var_7) : (((/* implicit */unsigned long long int) 1372573915U))))))) ? (((/* implicit */int) (unsigned char)163)) : (((/* implicit */int) arr_1 [i_0] [i_0]))));
        var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) var_1)))))))));
    }
    for (short i_1 = 0; i_1 < 24; i_1 += 3) 
    {
        var_19 *= ((/* implicit */unsigned short) min((max((min((((/* implicit */unsigned long long int) 3056170399U)), (9151808073761712043ULL))), (((/* implicit */unsigned long long int) 4294967295U)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1238796897U)) ? (((/* implicit */int) arr_4 [i_1])) : (((/* implicit */int) arr_3 [i_1] [i_1])))))));
        arr_5 [i_1] [i_1] = ((/* implicit */unsigned char) (-(var_8)));
    }
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_2 = 0; i_2 < 14; i_2 += 2) /* same iter space */
    {
        var_20 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_2] [i_2]))) / (var_15)));
        var_21 ^= ((/* implicit */unsigned int) 23846679059241740ULL);
        var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) -469689454)) ? (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_2] [i_2]))) | (1238796897U)))) : (17730590850834961250ULL)));
        var_23 = ((/* implicit */unsigned short) 3056170388U);
    }
    for (unsigned int i_3 = 0; i_3 < 14; i_3 += 2) /* same iter space */
    {
        var_24 = ((/* implicit */unsigned short) min((4450775277493377561ULL), (var_14)));
        /* LoopSeq 1 */
        for (unsigned char i_4 = 0; i_4 < 14; i_4 += 3) 
        {
            var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 56123495U)))))) : (((((((/* implicit */_Bool) 23846679059241740ULL)) ? (var_2) : (var_7))) | (var_7)))));
            /* LoopSeq 2 */
            for (unsigned short i_5 = 3; i_5 < 13; i_5 += 1) /* same iter space */
            {
                var_26 ^= ((/* implicit */unsigned long long int) 3056170397U);
                /* LoopSeq 2 */
                /* vectorizable */
                for (int i_6 = 2; i_6 < 10; i_6 += 3) 
                {
                    /* LoopSeq 2 */
                    for (unsigned int i_7 = 1; i_7 < 13; i_7 += 1) 
                    {
                        var_27 = ((/* implicit */short) (unsigned char)96);
                        var_28 = ((/* implicit */int) min((var_28), (((/* implicit */int) (-((~(3989904887U))))))));
                        arr_22 [i_3] [i_4] [i_5 - 1] [i_6 + 2] [i_7 + 1] = ((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */_Bool) 640975639U)) || (((/* implicit */_Bool) (short)252)))))));
                    }
                    for (unsigned int i_8 = 0; i_8 < 14; i_8 += 1) 
                    {
                        var_29 = ((/* implicit */unsigned int) min((var_29), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_21 [i_3])) : (((/* implicit */int) var_1))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)62152)) ? (((/* implicit */int) (unsigned char)30)) : (((/* implicit */int) (unsigned short)45075))))) : (var_12)))));
                        var_30 = ((/* implicit */short) max((var_30), (((/* implicit */short) arr_2 [i_3] [i_4]))));
                        var_31 = ((/* implicit */int) ((((/* implicit */int) (unsigned char)228)) == (((/* implicit */int) arr_17 [i_6 + 3] [i_5 + 1] [i_5] [i_5 - 3]))));
                        arr_27 [i_3] [i_4] [i_5 - 2] [i_6] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65535)) ? (arr_8 [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_3] [i_3] [i_3])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_3] [i_4] [i_4] [i_4]))) : (7919526497667913659ULL)));
                    }
                    /* LoopSeq 3 */
                    for (unsigned long long int i_9 = 0; i_9 < 14; i_9 += 3) /* same iter space */
                    {
                        var_32 = ((/* implicit */unsigned int) min((var_32), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_16 [i_3] [i_3] [i_3])) << (((514630824) - (514630823)))))) & ((~(var_11))))))));
                        arr_31 [i_3] [i_3] [i_3] [i_4] [i_9] = (unsigned short)19741;
                    }
                    for (unsigned long long int i_10 = 0; i_10 < 14; i_10 += 3) /* same iter space */
                    {
                        arr_35 [i_4] = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) 2157900321U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_29 [i_3] [i_4] [i_3] [i_3] [i_4]))) : (var_7)))));
                        var_33 = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_26 [i_6 + 2] [i_6 + 2] [i_5 - 3]))));
                        arr_36 [i_4] [i_6] [i_3] [i_4] [i_3] [i_4] = (-(((/* implicit */int) (unsigned short)11954)));
                    }
                    for (unsigned long long int i_11 = 0; i_11 < 14; i_11 += 3) /* same iter space */
                    {
                        arr_39 [i_4] [i_3] [i_4] [i_4] [i_4] = ((/* implicit */unsigned long long int) arr_13 [i_4]);
                        arr_40 [i_6] [i_4] = ((/* implicit */int) arr_25 [i_5 + 1]);
                        var_34 += ((/* implicit */short) (-(((((/* implicit */_Bool) arr_33 [i_3] [i_4] [i_3] [i_5] [i_3] [i_3])) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)4064)))))));
                    }
                    arr_41 [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 10012697883820335139ULL)) ? (4278628001U) : (arr_28 [i_6] [(unsigned short)4] [i_5] [i_4] [i_4] [i_5 + 1] [i_4])));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_12 = 2; i_12 < 12; i_12 += 3) 
                    {
                        var_35 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)32333))))) ^ (var_0)));
                        arr_44 [i_12] [i_4] [i_4] [i_4] [i_3] = ((/* implicit */unsigned long long int) arr_13 [i_4]);
                    }
                }
                /* vectorizable */
                for (unsigned long long int i_13 = 0; i_13 < 14; i_13 += 3) 
                {
                    var_36 = ((/* implicit */unsigned long long int) max((var_36), (((/* implicit */unsigned long long int) (unsigned char)24))));
                    var_37 = ((/* implicit */short) (-(562949416550400ULL)));
                    var_38 = ((/* implicit */unsigned long long int) min((var_38), (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_14 [i_5 - 2])))))));
                }
            }
            for (unsigned short i_14 = 3; i_14 < 13; i_14 += 1) /* same iter space */
            {
                var_39 ^= ((/* implicit */unsigned char) ((((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_11 [i_3]))))) != (var_9))) ? (((/* implicit */int) (unsigned char)50)) : (((/* implicit */int) (unsigned char)38))));
                arr_52 [i_4] [i_4] [i_4] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 3743154289U))));
            }
        }
        /* LoopSeq 1 */
        /* vectorizable */
        for (int i_15 = 1; i_15 < 12; i_15 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned long long int i_16 = 0; i_16 < 14; i_16 += 2) 
            {
                var_40 = (unsigned short)26862;
                var_41 = ((/* implicit */short) min((var_41), (((/* implicit */short) ((((/* implicit */int) arr_29 [i_3] [i_3] [i_3] [i_3] [i_16])) / (((/* implicit */int) (short)3336)))))));
            }
            arr_59 [12ULL] = ((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)64063))) - (var_8))) + (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)31691))))));
        }
    }
}
