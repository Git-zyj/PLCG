/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237964
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237964 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237964
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
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        var_17 = ((/* implicit */int) (-(((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_1 [(unsigned short)2])))) + (((((/* implicit */_Bool) -1899368326)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)114))) : (arr_1 [i_0])))))));
        var_18 = ((/* implicit */int) ((unsigned short) arr_0 [i_0] [i_0]));
        /* LoopSeq 1 */
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            var_19 += ((/* implicit */signed char) (~(((/* implicit */int) (unsigned char)12))));
            var_20 = ((/* implicit */long long int) min(((unsigned char)141), ((unsigned char)141)));
            var_21 -= ((/* implicit */signed char) ((((/* implicit */_Bool) 1152921504606846720LL)) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_2 [i_1] [(signed char)7])) < (((/* implicit */int) var_2)))))) : (max((arr_0 [i_0] [i_1]), (((/* implicit */long long int) (unsigned char)33))))));
            var_22 = ((/* implicit */unsigned short) (-(((/* implicit */int) (((+(var_4))) < (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)32767))))))));
            var_23 = ((/* implicit */int) (-(max((arr_0 [i_0] [i_1]), (((-651750903890765024LL) / (arr_0 [i_1] [i_0])))))));
        }
    }
    for (long long int i_2 = 0; i_2 < 20; i_2 += 3) 
    {
        arr_6 [i_2] |= ((/* implicit */unsigned char) ((int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) ((var_16) != (var_16)))) : ((-(((/* implicit */int) (unsigned short)51449)))))));
        var_24 = min((((/* implicit */unsigned int) arr_5 [i_2] [i_2])), (max((((var_14) << (((1529406549) - (1529406536))))), (((/* implicit */unsigned int) ((signed char) arr_4 [i_2] [i_2]))))));
        arr_7 [i_2] = ((/* implicit */unsigned short) ((((/* implicit */int) (signed char)114)) << (min((((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) arr_4 [i_2] [i_2])) : (2147483647))), (((/* implicit */int) ((((/* implicit */int) arr_4 [13] [(unsigned short)7])) == (((/* implicit */int) (unsigned short)51449)))))))));
        var_25 = ((/* implicit */unsigned int) ((((max((((/* implicit */int) (unsigned short)3361)), (1429657331))) ^ (((((/* implicit */_Bool) (unsigned short)63)) ? (((/* implicit */int) arr_5 [i_2] [i_2])) : (((/* implicit */int) (unsigned short)52540)))))) | (((((((/* implicit */_Bool) arr_5 [7] [i_2])) ? (((/* implicit */int) (unsigned short)65512)) : (((/* implicit */int) (unsigned short)32779)))) * (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_3))))))));
    }
    for (signed char i_3 = 0; i_3 < 24; i_3 += 3) /* same iter space */
    {
        arr_11 [i_3] = ((/* implicit */unsigned short) (~(arr_9 [i_3])));
        /* LoopSeq 2 */
        for (unsigned short i_4 = 0; i_4 < 24; i_4 += 3) 
        {
            var_26 &= ((/* implicit */unsigned short) var_12);
            arr_16 [i_3] [i_3] = ((/* implicit */int) (unsigned char)188);
        }
        for (unsigned short i_5 = 0; i_5 < 24; i_5 += 3) 
        {
            var_27 &= ((((((long long int) (signed char)-28)) + (9223372036854775807LL))) << (((/* implicit */int) ((((/* implicit */long long int) -2147483646)) > (min((((/* implicit */long long int) var_16)), (127LL)))))));
            arr_20 [i_3] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((((/* implicit */int) var_9)) | (((/* implicit */int) arr_10 [(unsigned short)22] [i_3]))))))) ? (((/* implicit */long long int) (~(((/* implicit */int) var_5))))) : (max((((/* implicit */long long int) (~(-2147483646)))), (arr_9 [i_3])))));
            var_28 = ((/* implicit */unsigned char) min((var_28), (((/* implicit */unsigned char) ((-663305646) < (1249350282))))));
        }
        var_29 = ((/* implicit */long long int) min((var_29), (((/* implicit */long long int) (unsigned char)141))));
        var_30 *= ((/* implicit */unsigned short) var_6);
        arr_21 [i_3] [(unsigned short)23] = (unsigned short)51449;
    }
    for (signed char i_6 = 0; i_6 < 24; i_6 += 3) /* same iter space */
    {
        arr_24 [i_6] [i_6] = ((/* implicit */unsigned short) ((int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) -651750903890765024LL)))));
        var_31 = ((/* implicit */unsigned short) (~(((/* implicit */int) (signed char)127))));
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 24; i_7 += 4) 
        {
            for (unsigned short i_8 = 3; i_8 < 21; i_8 += 3) 
            {
                {
                    var_32 = ((/* implicit */unsigned short) max((var_32), (((/* implicit */unsigned short) ((((((/* implicit */int) (signed char)-64)) - (((/* implicit */int) (unsigned short)24657)))) == (((((/* implicit */_Bool) ((signed char) var_5))) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)188))) > (7711688907114302870LL)))) : ((+(((/* implicit */int) (unsigned char)97)))))))))));
                    arr_32 [i_8] = ((/* implicit */unsigned char) ((((((((var_4) == (((/* implicit */unsigned int) 1457358216)))) ? (((((/* implicit */_Bool) (unsigned short)13374)) ? (7286868101614793811LL) : (((/* implicit */long long int) var_14)))) : (((/* implicit */long long int) ((((/* implicit */int) arr_8 [i_6] [17])) ^ (arr_22 [i_6] [i_7])))))) + (9223372036854775807LL))) >> (((((/* implicit */int) (unsigned short)0)) / (((int) arr_31 [i_6] [i_7] [i_8]))))));
                    var_33 = ((/* implicit */long long int) (~(((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))) - (max((var_14), (((/* implicit */unsigned int) arr_8 [(unsigned short)14] [i_7]))))))));
                    var_34 *= ((/* implicit */signed char) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) (unsigned short)34918)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (arr_27 [(signed char)9]))), (((/* implicit */long long int) ((unsigned char) (unsigned short)65535)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_7])) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) arr_30 [i_6] [i_7] [i_8]))))) && (((/* implicit */_Bool) 651750903890765015LL)))))) : (((((/* implicit */_Bool) arr_28 [i_8 + 3] [i_8 - 3] [i_8 - 3])) ? (var_14) : (((/* implicit */unsigned int) ((/* implicit */int) arr_28 [i_8 + 3] [i_8 - 3] [i_8 - 3])))))));
                }
            } 
        } 
    }
    var_35 = ((/* implicit */signed char) min(((unsigned char)158), (((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */long long int) -497209738)), (var_6)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (6071120590176050532LL)))))))));
}
