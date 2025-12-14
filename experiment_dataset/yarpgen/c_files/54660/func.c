/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54660
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54660 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54660
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
    var_14 = ((/* implicit */short) (unsigned char)142);
    /* LoopSeq 4 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        var_15 = ((/* implicit */_Bool) -1973124172);
        /* LoopSeq 2 */
        for (long long int i_1 = 3; i_1 < 8; i_1 += 3) 
        {
            var_16 += ((((((/* implicit */_Bool) arr_4 [i_0] [(unsigned short)0])) && (((/* implicit */_Bool) arr_3 [(unsigned short)0])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)59341))) : (((14720210189269781669ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)233))))));
            /* LoopNest 2 */
            for (unsigned short i_2 = 0; i_2 < 10; i_2 += 1) 
            {
                for (long long int i_3 = 0; i_3 < 10; i_3 += 1) 
                {
                    {
                        var_17 = ((/* implicit */unsigned char) ((2891071031559360677LL) ^ (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0] [i_0] [i_0])))));
                        var_18 = ((((((/* implicit */_Bool) -1432850486)) ? (arr_5 [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)22592))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)97))));
                        arr_13 [i_0] [i_0] [i_2] [i_3] = ((/* implicit */unsigned char) ((arr_5 [i_1 - 2]) >= (((/* implicit */unsigned long long int) (+(-405375870))))));
                        arr_14 [i_0] [i_0] [i_0] = ((/* implicit */long long int) 2529648363U);
                    }
                } 
            } 
            arr_15 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)27464)) ? (((((/* implicit */_Bool) 2534980763U)) ? (((/* implicit */int) arr_7 [(signed char)4] [i_0] [i_0])) : (((/* implicit */int) (unsigned char)166)))) : (((((/* implicit */_Bool) (unsigned char)23)) ? (1973124142) : (((/* implicit */int) (_Bool)1))))));
            arr_16 [i_0] = ((/* implicit */unsigned char) (unsigned short)56181);
        }
        for (unsigned char i_4 = 2; i_4 < 8; i_4 += 4) 
        {
            /* LoopSeq 2 */
            for (unsigned char i_5 = 0; i_5 < 10; i_5 += 4) /* same iter space */
            {
                var_19 = ((/* implicit */unsigned short) -1973124165);
                var_20 = ((/* implicit */signed char) arr_8 [i_0]);
                arr_23 [i_5] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)233))))) - (((/* implicit */int) (unsigned char)153))));
            }
            for (unsigned char i_6 = 0; i_6 < 10; i_6 += 4) /* same iter space */
            {
                /* LoopSeq 2 */
                for (long long int i_7 = 0; i_7 < 10; i_7 += 1) 
                {
                    arr_29 [i_4] [i_4] [i_6] [i_0] = ((/* implicit */unsigned long long int) arr_9 [i_0] [i_6]);
                    var_21 = (unsigned char)237;
                    var_22 = ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)27))) > (arr_17 [i_0]));
                    arr_30 [i_0] [i_4] [i_0] [i_4] = ((/* implicit */long long int) arr_21 [i_0] [i_4 - 2] [i_7]);
                    var_23 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((0ULL) - (18446744073709551603ULL)))) ? (((/* implicit */int) ((7324273764814083951ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_26 [i_4 - 2] [i_6])))))) : (((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) arr_27 [i_0] [i_0] [i_4] [i_0] [i_0]))))));
                }
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    arr_33 [i_0] [i_0] [i_0] [(_Bool)1] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_0] [i_0] [i_4 - 2]))) != (((((/* implicit */_Bool) arr_5 [i_0])) ? (8637237951227043559ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_27 [i_0] [i_0] [i_0] [i_0] [i_0])))))));
                    var_24 = 6100733001114257004ULL;
                    var_25 = ((/* implicit */long long int) arr_6 [i_0] [i_0] [i_0] [i_0]);
                    var_26 = ((/* implicit */unsigned char) max((var_26), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_32 [i_0] [i_0] [i_6] [i_8]))) - (arr_20 [i_0] [(unsigned char)0] [i_6])))) ? (((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */int) arr_7 [i_0] [i_4] [i_4])) : (((/* implicit */int) (unsigned char)49)))) : (arr_6 [i_6] [i_4 + 2] [i_4] [i_6]))))));
                }
                var_27 = ((/* implicit */unsigned char) arr_19 [i_0] [i_0]);
                var_28 = ((/* implicit */_Bool) min((var_28), (((/* implicit */_Bool) (unsigned char)0))));
                var_29 = ((/* implicit */long long int) ((17376797943352867837ULL) - (arr_20 [i_0] [i_0] [i_6])));
            }
            arr_34 [i_0] = ((/* implicit */int) ((((((/* implicit */_Bool) 3987292517444198519ULL)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) (_Bool)1)))) >= (((/* implicit */int) arr_7 [i_4] [i_0] [i_0]))));
            /* LoopNest 2 */
            for (unsigned long long int i_9 = 0; i_9 < 10; i_9 += 3) 
            {
                for (unsigned char i_10 = 0; i_10 < 10; i_10 += 2) 
                {
                    {
                        var_30 = ((/* implicit */unsigned short) arr_3 [i_0]);
                        arr_40 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */unsigned long long int) arr_35 [i_0] [7LL] [i_0] [i_10])) == (arr_31 [i_0] [i_0])))) | (((((/* implicit */_Bool) (unsigned char)82)) ? (((/* implicit */int) arr_7 [i_10] [i_0] [(short)2])) : (((/* implicit */int) (unsigned char)237))))));
                    }
                } 
            } 
        }
        var_31 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)233)) || (((/* implicit */_Bool) (~(-1LL))))));
        arr_41 [i_0] = ((/* implicit */short) (unsigned char)255);
    }
    for (int i_11 = 1; i_11 < 12; i_11 += 1) 
    {
        var_32 = ((/* implicit */unsigned char) (short)-1);
        arr_44 [i_11] = ((/* implicit */short) min((min((((((/* implicit */long long int) ((/* implicit */int) (short)-31397))) + (arr_43 [i_11]))), (((/* implicit */long long int) arr_42 [i_11])))), (((((/* implicit */_Bool) ((arr_43 [i_11]) * (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) ? (arr_43 [i_11]) : (((arr_43 [i_11]) + (((/* implicit */long long int) ((/* implicit */int) (unsigned char)154)))))))));
    }
    /* vectorizable */
    for (short i_12 = 0; i_12 < 20; i_12 += 1) 
    {
        arr_47 [i_12] = ((/* implicit */long long int) ((((/* implicit */_Bool) 11317805938085438343ULL)) ? (arr_46 [i_12] [i_12]) : (arr_46 [11ULL] [i_12])));
        /* LoopNest 2 */
        for (long long int i_13 = 0; i_13 < 20; i_13 += 1) 
        {
            for (short i_14 = 1; i_14 < 18; i_14 += 4) 
            {
                {
                    arr_55 [i_12] = ((/* implicit */unsigned short) arr_52 [i_14 + 1] [i_12]);
                    arr_56 [i_12] [i_12] [i_12] [i_12] = ((/* implicit */int) 11610362154058154053ULL);
                    var_33 -= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 13562073458449622984ULL)) ? (((/* implicit */int) arr_50 [6ULL])) : (((/* implicit */int) (short)-24361))))) ? (((/* implicit */int) ((((/* implicit */int) arr_51 [i_12] [i_14 - 1])) == (((/* implicit */int) (unsigned char)111))))) : (((((/* implicit */int) (unsigned char)40)) | (((/* implicit */int) (unsigned char)206))))));
                }
            } 
        } 
        arr_57 [i_12] [i_12] = ((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) (unsigned char)255))));
        var_34 = (short)1614;
        arr_58 [i_12] [i_12] = ((((arr_54 [i_12] [(unsigned short)1] [i_12]) % (((/* implicit */long long int) ((/* implicit */int) (short)3224))))) < (((/* implicit */long long int) ((/* implicit */int) arr_50 [i_12]))));
    }
    for (short i_15 = 0; i_15 < 25; i_15 += 4) 
    {
        var_35 = ((/* implicit */unsigned int) max((var_35), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((((/* implicit */int) arr_59 [i_15])) ^ (((/* implicit */int) arr_60 [i_15])))) | (((((/* implicit */_Bool) arr_60 [(short)16])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-8495))))))))))));
        var_36 = ((/* implicit */signed char) arr_59 [i_15]);
        var_37 = ((min((((((/* implicit */_Bool) (unsigned char)49)) ? (((/* implicit */int) arr_60 [2LL])) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) ((((/* implicit */int) arr_60 [2ULL])) == (((/* implicit */int) arr_60 [i_15]))))))) < (((((/* implicit */int) (unsigned char)91)) - (((/* implicit */int) arr_59 [i_15])))));
        var_38 = ((/* implicit */signed char) arr_60 [i_15]);
    }
    var_39 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_1)) ? (18169723582595154895ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))) : (var_2))))))) ? (((((((/* implicit */long long int) -992494661)) + (var_13))) + (((/* implicit */long long int) (-(((/* implicit */int) (short)3224))))))) : ((+((+(0LL)))))));
}
